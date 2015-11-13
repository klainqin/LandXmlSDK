#include "stdafx.h"
#include "LXTypes.h"
#include "End.h"
#include "LXTypesTmpl.h"
#include "EndImpl.h"
#include "LXTypesTmpl.inl"
#include "PointTypeTmpl.inl"

namespace LX
{


template<class T>
EndTmpl<T>::EndTmpl<T> (DocumentImpl* pDoc)
    : PointTypeTmpl<T>(pDoc)
{
}


template<class T>
EndTmpl<T>::~EndTmpl<T> ()
{
}


template <class T>
bool EndTmpl<T>::getObjectId(const String*& pId) const
{
    if (m_bName_valueSet)
    {
        pId = &m_Name;
        return true;
    }
    else
    {
        pId = NULL;
        return false;
    }
}

template <class T>
ValueObject* EndTmpl<T>::id() const
{
    if (m_bName_valueSet)
    {
        ValueObject* pValue = new StringObjectTmpl<StringObject>(m_Name);
        if (!pValue)
	         throw Exception(Exception::kUnableToAllocateMemory, L"Out of Memory.");
        return pValue;
    }
    else
        return NULL;
}




template <class T>
void EndTmpl<T>::toXml (IStream& stream)
{
    static const wchar_t* kstrElementName = L"End";
    stream.write(L"<");
    stream.write(kstrElementName);
    if (m_bName_valueSet)
    {
        stream.write(L" name=\"");
        StringObjectImpl::streamOut(m_Name, stream);
        stream.write(L"\"");
    }
    if (m_bDesc_valueSet)
    {
        stream.write(L" desc=\"");
        StringObjectImpl::streamOut(m_Desc, stream);
        stream.write(L"\"");
    }
    if (m_bCode_valueSet)
    {
        stream.write(L" code=\"");
        StringObjectImpl::streamOut(m_Code, stream);
        stream.write(L"\"");
    }
    if (m_bState_valueSet)
    {
        stream.write(L" state=\"");
        EnumStateTypeImpl::streamOut(m_State, stream);
        stream.write(L"\"");
    }
    if (m_bPntRef_valueSet)
    {
        stream.write(L" pntRef=\"");
        StringObjectImpl::streamOut(m_PntRef, stream);
        stream.write(L"\"");
    }
    if (m_bFeatureRef_valueSet)
    {
        stream.write(L" featureRef=\"");
        StringObjectImpl::streamOut(m_FeatureRef, stream);
        stream.write(L"\"");
    }
    if (m_bPointGeometry_valueSet)
    {
        stream.write(L" pointGeometry=\"");
        EnumPointGeometryTypeImpl::streamOut(m_PointGeometry, stream);
        stream.write(L"\"");
    }
    if (m_bDTMAttribute_valueSet)
    {
        stream.write(L" DTMAttribute=\"");
        EnumDTMAttributeTypeImpl::streamOut(m_DTMAttribute, stream);
        stream.write(L"\"");
    }
    if (m_bTimeStamp_valueSet)
    {
        stream.write(L" timeStamp=\"");
        StringObjectImpl::streamOut(m_TimeStamp, stream);
        stream.write(L"\"");
    }
    if (m_bRole_valueSet)
    {
        stream.write(L" role=\"");
        EnumSurveyRoleTypeImpl::streamOut(m_Role, stream);
        stream.write(L"\"");
    }
    if (m_bDeterminedTimeStamp_valueSet)
    {
        stream.write(L" determinedTimeStamp=\"");
        StringObjectImpl::streamOut(m_DeterminedTimeStamp, stream);
        stream.write(L"\"");
    }
    if (m_bEllipsoidHeight_valueSet)
    {
        stream.write(L" ellipsoidHeight=\"");
        DoubleObjectImpl::streamOut(m_EllipsoidHeight, stream);
        stream.write(L"\"");
    }
    if (m_bLatitude_valueSet)
    {
        stream.write(L" latitude=\"");
        DoubleObjectImpl::streamOut(m_Latitude, stream);
        stream.write(L"\"");
    }
    if (m_bLongitude_valueSet)
    {
        stream.write(L" longitude=\"");
        DoubleObjectImpl::streamOut(m_Longitude, stream);
        stream.write(L"\"");
    }
    if (m_bZone_valueSet)
    {
        stream.write(L" zone=\"");
        StringObjectImpl::streamOut(m_Zone, stream);
        stream.write(L"\"");
    }
    if (m_bNorthingStdError_valueSet)
    {
        stream.write(L" northingStdError=\"");
        DoubleObjectImpl::streamOut(m_NorthingStdError, stream);
        stream.write(L"\"");
    }
    if (m_bEastingStdError_valueSet)
    {
        stream.write(L" eastingStdError=\"");
        DoubleObjectImpl::streamOut(m_EastingStdError, stream);
        stream.write(L"\"");
    }
    if (m_bElevationStdError_valueSet)
    {
        stream.write(L" elevationStdError=\"");
        DoubleObjectImpl::streamOut(m_ElevationStdError, stream);
        stream.write(L"\"");
    }
    stream.write(L">");
    toStream(stream);
    stream.write(L"</");
    stream.write(kstrElementName);
    stream.write(L">");
}

template <class T>
CgPoint* EndTmpl<T>::resolvePntRef ()
{
    if (m_bPntRef_valueSet)
    {
        CgPointCollectionIterator* pIter = m_pDoc->getGlobalObjects().getCgPointCollection().find(m_PntRef);
        if (pIter)
        {
	         CgPoint* pObject = pIter->current();
            pIter->release();
            return pObject;
        }
        else
        {
            return NULL;
        }
    }
    return NULL;
}
template <class T>
const DoubleCollection& EndTmpl<T>::resolveCoor () const
{
    if (value().size() > 0)
    {
        return value();
    }
    else
    {
         if (m_bPntRef_valueSet)
         {
             CgPoint* pObj = m_pDoc->getGlobalObjects().getCgPointCollection().findFirstMatch(m_PntRef);
             if (pObj)
             {
                 return pObj->resolveCoor();
             }
             else
             {
                 throw Exception (Exception::kUnresolvableCoorDueToBadPntRef, L"Unable to resolve coordinate due to bad point reference;");
             }
         }
         else
         {
              throw Exception (Exception::kUnresolvableCoorNoValueOrReference, L"Unable to resolve coordinate due to bad point reference;");
         }
     }
}

template <class T>
Object::ValidityEnum EndTmpl<T>::validate (IValidationEventSink* pEventSink) const
{
    Object::ValidityEnum returnCode = Object::kValid;
    returnCode = this->PointTypeTmpl<T>::validate(pEventSink);
    if (m_bPntRef_valueSet)
    {
        CgPointCollectionIterator* pIter = m_pDoc->getGlobalObjects().getCgPointCollection().find(m_PntRef);
        if (!pIter)
        {
            pEventSink->onEvent(IValidationEventSink::EventCode::kUnresolvableReference, this, L"PntRef", L"Reference not set");
            returnCode = Object::kInvalid;
        }
        else
        {
            pIter->release();
        }
    }
    return returnCode;
}

}; // namespace : LX
