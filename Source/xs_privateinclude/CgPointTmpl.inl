#include "stdafx.h"
#include "LXTypes.h"
#include "CgPoint.h"
#include "LXTypesTmpl.h"
#include "CgPointImpl.h"
#include "LXTypesTmpl.inl"
#include "PointTypeTmpl.inl"

namespace LX
{


template<class T>
CgPointTmpl<T>::CgPointTmpl<T> (DocumentImpl* pDoc)
    : PointTypeTmpl<T>(pDoc)
{
    m_OID = L"";
    m_bOID_valueSet = false;
    m_SurveyOrder = L"";
    m_bSurveyOrder_valueSet = false;
    m_PntSurv = EnumSurvPntType::Values::k_null;
    m_bPntSurv_valueSet = false;
    m_ZoneNumber = 0;
    m_bZoneNumber_valueSet = false;
    m_SurveyHorizontalOrder = L"";
    m_bSurveyHorizontalOrder_valueSet = false;
    m_SurveyVerticalOrder = L"";
    m_bSurveyVerticalOrder_valueSet = false;
    m_LocalUncertainity = 0.0;
    m_bLocalUncertainity_valueSet = false;
    m_PositionalUncertainity = 0.0;
    m_bPositionalUncertainity_valueSet = false;
}


template<class T>
CgPointTmpl<T>::~CgPointTmpl<T> ()
{
}


template <class T>
bool CgPointTmpl<T>::getObjectId(const String*& pId) const
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
ValueObject* CgPointTmpl<T>::id() const
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
String CgPointTmpl<T>::getOID() const
{
    return m_OID;
}

template <class T>
void CgPointTmpl<T>::setOID(String value)
{
    m_OID = value;
    m_bOID_valueSet = true;
}

template <class T>
bool CgPointTmpl<T>::hasValue_OID() const
{
    return m_bOID_valueSet;
}

template <class T>
void CgPointTmpl<T>::resetValue_OID()
{
    m_bOID_valueSet = false;
}


template <class T>
String CgPointTmpl<T>::getSurveyOrder() const
{
    return m_SurveyOrder;
}

template <class T>
void CgPointTmpl<T>::setSurveyOrder(String value)
{
    m_SurveyOrder = value;
    m_bSurveyOrder_valueSet = true;
}

template <class T>
bool CgPointTmpl<T>::hasValue_SurveyOrder() const
{
    return m_bSurveyOrder_valueSet;
}

template <class T>
void CgPointTmpl<T>::resetValue_SurveyOrder()
{
    m_bSurveyOrder_valueSet = false;
}


template <class T>
EnumSurvPntType::Values CgPointTmpl<T>::getPntSurv() const
{
    return m_PntSurv;
}

template <class T>
void CgPointTmpl<T>::setPntSurv(EnumSurvPntType::Values value)
{
    m_PntSurv = value;
    m_bPntSurv_valueSet = true;
}

template <class T>
bool CgPointTmpl<T>::hasValue_PntSurv() const
{
    return m_bPntSurv_valueSet;
}

template <class T>
void CgPointTmpl<T>::resetValue_PntSurv()
{
    m_bPntSurv_valueSet = false;
}


template <class T>
unsigned int CgPointTmpl<T>::getZoneNumber() const
{
    return m_ZoneNumber;
}

template <class T>
void CgPointTmpl<T>::setZoneNumber(unsigned int value)
{
    m_ZoneNumber = value;
    m_bZoneNumber_valueSet = true;
}

template <class T>
bool CgPointTmpl<T>::hasValue_ZoneNumber() const
{
    return m_bZoneNumber_valueSet;
}

template <class T>
void CgPointTmpl<T>::resetValue_ZoneNumber()
{
    m_bZoneNumber_valueSet = false;
}


template <class T>
String CgPointTmpl<T>::getSurveyHorizontalOrder() const
{
    return m_SurveyHorizontalOrder;
}

template <class T>
void CgPointTmpl<T>::setSurveyHorizontalOrder(String value)
{
    m_SurveyHorizontalOrder = value;
    m_bSurveyHorizontalOrder_valueSet = true;
}

template <class T>
bool CgPointTmpl<T>::hasValue_SurveyHorizontalOrder() const
{
    return m_bSurveyHorizontalOrder_valueSet;
}

template <class T>
void CgPointTmpl<T>::resetValue_SurveyHorizontalOrder()
{
    m_bSurveyHorizontalOrder_valueSet = false;
}


template <class T>
String CgPointTmpl<T>::getSurveyVerticalOrder() const
{
    return m_SurveyVerticalOrder;
}

template <class T>
void CgPointTmpl<T>::setSurveyVerticalOrder(String value)
{
    m_SurveyVerticalOrder = value;
    m_bSurveyVerticalOrder_valueSet = true;
}

template <class T>
bool CgPointTmpl<T>::hasValue_SurveyVerticalOrder() const
{
    return m_bSurveyVerticalOrder_valueSet;
}

template <class T>
void CgPointTmpl<T>::resetValue_SurveyVerticalOrder()
{
    m_bSurveyVerticalOrder_valueSet = false;
}


template <class T>
double CgPointTmpl<T>::getLocalUncertainity() const
{
    return m_LocalUncertainity;
}

template <class T>
void CgPointTmpl<T>::setLocalUncertainity(double value)
{
    m_LocalUncertainity = value;
    m_bLocalUncertainity_valueSet = true;
}

template <class T>
bool CgPointTmpl<T>::hasValue_LocalUncertainity() const
{
    return m_bLocalUncertainity_valueSet;
}

template <class T>
void CgPointTmpl<T>::resetValue_LocalUncertainity()
{
    m_bLocalUncertainity_valueSet = false;
}


template <class T>
double CgPointTmpl<T>::getPositionalUncertainity() const
{
    return m_PositionalUncertainity;
}

template <class T>
void CgPointTmpl<T>::setPositionalUncertainity(double value)
{
    m_PositionalUncertainity = value;
    m_bPositionalUncertainity_valueSet = true;
}

template <class T>
bool CgPointTmpl<T>::hasValue_PositionalUncertainity() const
{
    return m_bPositionalUncertainity_valueSet;
}

template <class T>
void CgPointTmpl<T>::resetValue_PositionalUncertainity()
{
    m_bPositionalUncertainity_valueSet = false;
}



template <class T>
void CgPointTmpl<T>::toXml (IStream& stream)
{
    static const wchar_t* kstrElementName = L"CgPoint";
    stream.write(L"<");
    stream.write(kstrElementName);
    if (m_bOID_valueSet)
    {
        stream.write(L" oID=\"");
        StringObjectImpl::streamOut(m_OID, stream);
        stream.write(L"\"");
    }
    if (m_bSurveyOrder_valueSet)
    {
        stream.write(L" surveyOrder=\"");
        StringObjectImpl::streamOut(m_SurveyOrder, stream);
        stream.write(L"\"");
    }
    if (m_bPntSurv_valueSet)
    {
        stream.write(L" pntSurv=\"");
        EnumSurvPntTypeImpl::streamOut(m_PntSurv, stream);
        stream.write(L"\"");
    }
    if (m_bZoneNumber_valueSet)
    {
        stream.write(L" zoneNumber=\"");
        UIntegerObjectImpl::streamOut(m_ZoneNumber, stream);
        stream.write(L"\"");
    }
    if (m_bSurveyHorizontalOrder_valueSet)
    {
        stream.write(L" surveyHorizontalOrder=\"");
        StringObjectImpl::streamOut(m_SurveyHorizontalOrder, stream);
        stream.write(L"\"");
    }
    if (m_bSurveyVerticalOrder_valueSet)
    {
        stream.write(L" surveyVerticalOrder=\"");
        StringObjectImpl::streamOut(m_SurveyVerticalOrder, stream);
        stream.write(L"\"");
    }
    if (m_bLocalUncertainity_valueSet)
    {
        stream.write(L" localUncertainity=\"");
        DoubleObjectImpl::streamOut(m_LocalUncertainity, stream);
        stream.write(L"\"");
    }
    if (m_bPositionalUncertainity_valueSet)
    {
        stream.write(L" positionalUncertainity=\"");
        DoubleObjectImpl::streamOut(m_PositionalUncertainity, stream);
        stream.write(L"\"");
    }
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
CgPoint* CgPointTmpl<T>::resolvePntRef ()
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
const DoubleCollection& CgPointTmpl<T>::resolveCoor () const
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
Object::ValidityEnum CgPointTmpl<T>::validate (IValidationEventSink* pEventSink) const
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
