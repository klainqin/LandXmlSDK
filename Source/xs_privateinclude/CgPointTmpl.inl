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
CgPointTmpl<T>::CgPointTmpl (DocumentImpl* pDoc)
    : PointTypeTmpl<T>(pDoc)
{
    this->m_OID = L"";
    this->m_bOID_valueSet = false;
    this->m_SurveyOrder = L"";
    this->m_bSurveyOrder_valueSet = false;
    this->m_PntSurv = EnumSurvPntType::Values::k_null;
    this->m_bPntSurv_valueSet = false;
    this->m_ZoneNumber = 0;
    this->m_bZoneNumber_valueSet = false;
    this->m_SurveyHorizontalOrder = L"";
    this->m_bSurveyHorizontalOrder_valueSet = false;
    this->m_SurveyVerticalOrder = L"";
    this->m_bSurveyVerticalOrder_valueSet = false;
    this->m_LocalUncertainity = 0.0;
    this->m_bLocalUncertainity_valueSet = false;
    this->m_PositionalUncertainity = 0.0;
    this->m_bPositionalUncertainity_valueSet = false;
}


template<class T>
CgPointTmpl<T>::~CgPointTmpl ()
{
}


template <class T>
bool CgPointTmpl<T>::getObjectId(const String*& pId) const
{
    if (this->m_bName_valueSet)
    {
        pId = &(this->m_Name);
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
String CgPointTmpl<T>::getOID() const
{
    return this->m_OID;
}

template <class T>
void CgPointTmpl<T>::setOID(String value)
{
    this->m_OID = value;
    this->m_bOID_valueSet = true;
}

template <class T>
bool CgPointTmpl<T>::hasValue_OID() const
{
    return this->m_bOID_valueSet;
}

template <class T>
void CgPointTmpl<T>::resetValue_OID()
{
    this->m_bOID_valueSet = false;
}


template <class T>
String CgPointTmpl<T>::getSurveyOrder() const
{
    return this->m_SurveyOrder;
}

template <class T>
void CgPointTmpl<T>::setSurveyOrder(String value)
{
    this->m_SurveyOrder = value;
    this->m_bSurveyOrder_valueSet = true;
}

template <class T>
bool CgPointTmpl<T>::hasValue_SurveyOrder() const
{
    return this->m_bSurveyOrder_valueSet;
}

template <class T>
void CgPointTmpl<T>::resetValue_SurveyOrder()
{
    this->m_bSurveyOrder_valueSet = false;
}


template <class T>
EnumSurvPntType::Values CgPointTmpl<T>::getPntSurv() const
{
    return this->m_PntSurv;
}

template <class T>
void CgPointTmpl<T>::setPntSurv(EnumSurvPntType::Values value)
{
    this->m_PntSurv = value;
    this->m_bPntSurv_valueSet = true;
}

template <class T>
bool CgPointTmpl<T>::hasValue_PntSurv() const
{
    return this->m_bPntSurv_valueSet;
}

template <class T>
void CgPointTmpl<T>::resetValue_PntSurv()
{
    this->m_bPntSurv_valueSet = false;
}


template <class T>
unsigned int CgPointTmpl<T>::getZoneNumber() const
{
    return this->m_ZoneNumber;
}

template <class T>
void CgPointTmpl<T>::setZoneNumber(unsigned int value)
{
    this->m_ZoneNumber = value;
    this->m_bZoneNumber_valueSet = true;
}

template <class T>
bool CgPointTmpl<T>::hasValue_ZoneNumber() const
{
    return this->m_bZoneNumber_valueSet;
}

template <class T>
void CgPointTmpl<T>::resetValue_ZoneNumber()
{
    this->m_bZoneNumber_valueSet = false;
}


template <class T>
String CgPointTmpl<T>::getSurveyHorizontalOrder() const
{
    return this->m_SurveyHorizontalOrder;
}

template <class T>
void CgPointTmpl<T>::setSurveyHorizontalOrder(String value)
{
    this->m_SurveyHorizontalOrder = value;
    this->m_bSurveyHorizontalOrder_valueSet = true;
}

template <class T>
bool CgPointTmpl<T>::hasValue_SurveyHorizontalOrder() const
{
    return this->m_bSurveyHorizontalOrder_valueSet;
}

template <class T>
void CgPointTmpl<T>::resetValue_SurveyHorizontalOrder()
{
    this->m_bSurveyHorizontalOrder_valueSet = false;
}


template <class T>
String CgPointTmpl<T>::getSurveyVerticalOrder() const
{
    return this->m_SurveyVerticalOrder;
}

template <class T>
void CgPointTmpl<T>::setSurveyVerticalOrder(String value)
{
    this->m_SurveyVerticalOrder = value;
    this->m_bSurveyVerticalOrder_valueSet = true;
}

template <class T>
bool CgPointTmpl<T>::hasValue_SurveyVerticalOrder() const
{
    return this->m_bSurveyVerticalOrder_valueSet;
}

template <class T>
void CgPointTmpl<T>::resetValue_SurveyVerticalOrder()
{
    this->m_bSurveyVerticalOrder_valueSet = false;
}


template <class T>
double CgPointTmpl<T>::getLocalUncertainity() const
{
    return this->m_LocalUncertainity;
}

template <class T>
void CgPointTmpl<T>::setLocalUncertainity(double value)
{
    this->m_LocalUncertainity = value;
    this->m_bLocalUncertainity_valueSet = true;
}

template <class T>
bool CgPointTmpl<T>::hasValue_LocalUncertainity() const
{
    return this->m_bLocalUncertainity_valueSet;
}

template <class T>
void CgPointTmpl<T>::resetValue_LocalUncertainity()
{
    this->m_bLocalUncertainity_valueSet = false;
}


template <class T>
double CgPointTmpl<T>::getPositionalUncertainity() const
{
    return this->m_PositionalUncertainity;
}

template <class T>
void CgPointTmpl<T>::setPositionalUncertainity(double value)
{
    this->m_PositionalUncertainity = value;
    this->m_bPositionalUncertainity_valueSet = true;
}

template <class T>
bool CgPointTmpl<T>::hasValue_PositionalUncertainity() const
{
    return this->m_bPositionalUncertainity_valueSet;
}

template <class T>
void CgPointTmpl<T>::resetValue_PositionalUncertainity()
{
    this->m_bPositionalUncertainity_valueSet = false;
}



template <class T>
void CgPointTmpl<T>::toXml (IStream& stream)
{
    static const wchar_t* kstrElementName = L"CgPoint";
    stream.write(L"<");
    stream.write(kstrElementName);
    if (this->m_bOID_valueSet)
    {
        stream.write(L" oID=\"");
        StringObjectImpl::streamOut(this->m_OID, stream);
        stream.write(L"\"");
    }
    if (this->m_bSurveyOrder_valueSet)
    {
        stream.write(L" surveyOrder=\"");
        StringObjectImpl::streamOut(this->m_SurveyOrder, stream);
        stream.write(L"\"");
    }
    if (this->m_bPntSurv_valueSet)
    {
        stream.write(L" pntSurv=\"");
        EnumSurvPntTypeImpl::streamOut(this->m_PntSurv, stream);
        stream.write(L"\"");
    }
    if (this->m_bZoneNumber_valueSet)
    {
        stream.write(L" zoneNumber=\"");
        UIntegerObjectImpl::streamOut(this->m_ZoneNumber, stream);
        stream.write(L"\"");
    }
    if (this->m_bSurveyHorizontalOrder_valueSet)
    {
        stream.write(L" surveyHorizontalOrder=\"");
        StringObjectImpl::streamOut(this->m_SurveyHorizontalOrder, stream);
        stream.write(L"\"");
    }
    if (this->m_bSurveyVerticalOrder_valueSet)
    {
        stream.write(L" surveyVerticalOrder=\"");
        StringObjectImpl::streamOut(this->m_SurveyVerticalOrder, stream);
        stream.write(L"\"");
    }
    if (this->m_bLocalUncertainity_valueSet)
    {
        stream.write(L" localUncertainity=\"");
        DoubleObjectImpl::streamOut(this->m_LocalUncertainity, stream);
        stream.write(L"\"");
    }
    if (this->m_bPositionalUncertainity_valueSet)
    {
        stream.write(L" positionalUncertainity=\"");
        DoubleObjectImpl::streamOut(this->m_PositionalUncertainity, stream);
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
CgPoint* CgPointTmpl<T>::resolvePntRef ()
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
const DoubleCollection& CgPointTmpl<T>::resolveCoor () const
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
Object::ValidityEnum CgPointTmpl<T>::validate (IValidationEventSink* pEventSink) const
{
    Object::ValidityEnum returnCode = Object::kValid;
    returnCode = this->PointTypeTmpl<T>::validate(pEventSink);
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
