#include "stdafx.h"
#include "LXTypes.h"
#include "AddressPoint.h"
#include "LXTypesTmpl.h"
#include "AddressPointImpl.h"
#include "LXTypesTmpl.inl"
#include "PointTypeTmpl.inl"

namespace LX
{


template<class T>
AddressPointTmpl<T>::AddressPointTmpl (DocumentImpl* pDoc)
    : PointTypeTmpl<T>(pDoc)
{
    this->m_AddressPointType = L"";
    this->m_bAddressPointType_valueSet = false;
}


template<class T>
AddressPointTmpl<T>::~AddressPointTmpl ()
{
}


template <class T>
bool AddressPointTmpl<T>::getObjectId(const String*& pId) const
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
ValueObject* AddressPointTmpl<T>::id() const
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
String AddressPointTmpl<T>::getAddressPointType() const
{
    return this->m_AddressPointType;
}

template <class T>
void AddressPointTmpl<T>::setAddressPointType(String value)
{
    this->m_AddressPointType = value;
    this->m_bAddressPointType_valueSet = true;
}

template <class T>
bool AddressPointTmpl<T>::hasValue_AddressPointType() const
{
    return this->m_bAddressPointType_valueSet;
}

template <class T>
void AddressPointTmpl<T>::resetValue_AddressPointType()
{
    this->m_bAddressPointType_valueSet = false;
}



template <class T>
void AddressPointTmpl<T>::toXml (IStream& stream)
{
    static const wchar_t* kstrElementName = L"AddressPoint";
    stream.write(L"<");
    stream.write(kstrElementName);
    if (this->m_bAddressPointType_valueSet)
    {
        stream.write(L" addressPointType=\"");
        StringObjectImpl::streamOut(this->m_AddressPointType, stream);
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
Object::ValidityEnum AddressPointTmpl<T>::validate (IValidationEventSink* pEventSink) const
{
    Object::ValidityEnum returnCode = Object::kValid;
    returnCode = this->PointTypeTmpl<T>::validate(pEventSink);
    return returnCode;
}

}; // namespace : LX
