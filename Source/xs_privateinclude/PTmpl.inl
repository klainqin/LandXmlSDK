#include "stdafx.h"
#include "LXTypes.h"
#include "P.h"
#include "LXTypesTmpl.h"
#include "PImpl.h"
#include "LXTypesTmpl.inl"
#include "PointTypeTmpl.inl"

namespace LX
{


template<class T>
PTmpl<T>::PTmpl (DocumentImpl* pDoc)
    : PointTypeTmpl<T>(pDoc)
{
    m_Id = 0;
    m_bId_valueSet = false;
}


template<class T>
PTmpl<T>::~PTmpl ()
{
}


template <class T>
bool PTmpl<T>::getObjectId(const unsigned int*& pId) const
{
    if (this->m_bId_valueSet)
    {
        pId = &(this->m_Id);
        return true;
    }
    else
    {
        pId = NULL;
        return false;
    }
}

template <class T>
ValueObject* PTmpl<T>::id() const
{
    if (this->m_bName_valueSet)
    {
        ValueObject* pValue = new StringObjectTmpl<StringObject>(this->m_Name);
        if (!pValue)
	         throw Exception(Exception::kUnableToAllocateMemory, L"Out of Memory.");
        return pValue;
    }
    else
        return NULL;
}



template <class T>
unsigned int PTmpl<T>::getId() const
{
    return this->m_Id;
}

template <class T>
void PTmpl<T>::setId(unsigned int value)
{
    this->m_Id = value;
    this->m_bId_valueSet = true;
}

template <class T>
bool PTmpl<T>::hasValue_Id() const
{
    return this->m_bId_valueSet;
}

template <class T>
void PTmpl<T>::resetValue_Id()
{
    this->m_bId_valueSet = false;
}



template <class T>
void PTmpl<T>::toXml (IStream& stream)
{
    static const wchar_t* kstrElementName = L"P";
    stream.write(L"<");
    stream.write(kstrElementName);
    if (this->m_bId_valueSet)
    {
        stream.write(L" id=\"");
        UIntegerObjectImpl::streamOut(this->m_Id, stream);
        stream.write(L"\"");
    }
    if (this->m_bName_valueSet)
    {
        stream.write(L" name=\"");
        StringObjectImpl::streamOut(this->m_Name, stream);
        stream.write(L"\"");
    }
    if (this->m_bDesc_valueSet)
    {
        stream.write(L" desc=\"");
        StringObjectImpl::streamOut(this->m_Desc, stream);
        stream.write(L"\"");
    }
    if (this->m_bCode_valueSet)
    {
        stream.write(L" code=\"");
        StringObjectImpl::streamOut(this->m_Code, stream);
        stream.write(L"\"");
    }
    if (this->m_bState_valueSet)
    {
        stream.write(L" state=\"");
        EnumStateTypeImpl::streamOut(this->m_State, stream);
        stream.write(L"\"");
    }
    if (this->m_bPntRef_valueSet)
    {
        stream.write(L" pntRef=\"");
        StringObjectImpl::streamOut(this->m_PntRef, stream);
        stream.write(L"\"");
    }
    if (this->m_bFeatureRef_valueSet)
    {
        stream.write(L" featureRef=\"");
        StringObjectImpl::streamOut(this->m_FeatureRef, stream);
        stream.write(L"\"");
    }
    if (this->m_bPointGeometry_valueSet)
    {
        stream.write(L" pointGeometry=\"");
        EnumPointGeometryTypeImpl::streamOut(this->m_PointGeometry, stream);
        stream.write(L"\"");
    }
    if (this->m_bDTMAttribute_valueSet)
    {
        stream.write(L" DTMAttribute=\"");
        EnumDTMAttributeTypeImpl::streamOut(this->m_DTMAttribute, stream);
        stream.write(L"\"");
    }
    if (this->m_bTimeStamp_valueSet)
    {
        stream.write(L" timeStamp=\"");
        StringObjectImpl::streamOut(this->m_TimeStamp, stream);
        stream.write(L"\"");
    }
    if (this->m_bRole_valueSet)
    {
        stream.write(L" role=\"");
        EnumSurveyRoleTypeImpl::streamOut(this->m_Role, stream);
        stream.write(L"\"");
    }
    if (this->m_bDeterminedTimeStamp_valueSet)
    {
        stream.write(L" determinedTimeStamp=\"");
        StringObjectImpl::streamOut(this->m_DeterminedTimeStamp, stream);
        stream.write(L"\"");
    }
    if (this->m_bEllipsoidHeight_valueSet)
    {
        stream.write(L" ellipsoidHeight=\"");
        DoubleObjectImpl::streamOut(this->m_EllipsoidHeight, stream);
        stream.write(L"\"");
    }
    if (this->m_bLatitude_valueSet)
    {
        stream.write(L" latitude=\"");
        DoubleObjectImpl::streamOut(this->m_Latitude, stream);
        stream.write(L"\"");
    }
    if (this->m_bLongitude_valueSet)
    {
        stream.write(L" longitude=\"");
        DoubleObjectImpl::streamOut(this->m_Longitude, stream);
        stream.write(L"\"");
    }
    if (this->m_bZone_valueSet)
    {
        stream.write(L" zone=\"");
        StringObjectImpl::streamOut(this->m_Zone, stream);
        stream.write(L"\"");
    }
    if (this->m_bNorthingStdError_valueSet)
    {
        stream.write(L" northingStdError=\"");
        DoubleObjectImpl::streamOut(this->m_NorthingStdError, stream);
        stream.write(L"\"");
    }
    if (this->m_bEastingStdError_valueSet)
    {
        stream.write(L" eastingStdError=\"");
        DoubleObjectImpl::streamOut(this->m_EastingStdError, stream);
        stream.write(L"\"");
    }
    if (this->m_bElevationStdError_valueSet)
    {
        stream.write(L" elevationStdError=\"");
        DoubleObjectImpl::streamOut(this->m_ElevationStdError, stream);
        stream.write(L"\"");
    }
    stream.write(L">");
    this->toStream(stream);
    stream.write(L"</");
    stream.write(kstrElementName);
    stream.write(L">");
}

template <class T>
CgPoint* PTmpl<T>::resolvePntRef ()
{
    if (this->m_bPntRef_valueSet)
    {
        CgPointCollectionIterator* pIter = this->m_pDoc->getGlobalObjects().getCgPointCollection().find(this->m_PntRef);
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
const DoubleCollection& PTmpl<T>::resolveCoor () const
{
    if (this->value().size() > 0)
    {
        return this->value();
    }
    else
    {
         if (this->m_bPntRef_valueSet)
         {
             CgPoint* pObj = this->m_pDoc->getGlobalObjects().getCgPointCollection().findFirstMatch(this->m_PntRef);
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
Object::ValidityEnum PTmpl<T>::validate (IValidationEventSink* pEventSink) const
{
    Object::ValidityEnum returnCode = Object::kValid;
    returnCode = this->PointTypeTmpl<T>::validate(pEventSink);
    if (!this->m_bId_valueSet)
    {
        pEventSink->onEvent(IValidationEventSink::EventCode::kRequiredValueNotSet, this, L"Id", L"Required value not set");
        returnCode = Object::kInvalid;
    }
    if (this->m_bPntRef_valueSet)
    {
        CgPointCollectionIterator* pIter = this->m_pDoc->getGlobalObjects().getCgPointCollection().find(this->m_PntRef);
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
