#include "stdafx.h"
#include "LXTypes.h"
#include "CrossSectPnt.h"
#include "LXTypesTmpl.h"
#include "CrossSectPntImpl.h"
#include "LXTypesTmpl.inl"
#include "PointTypeTmpl.inl"

namespace LX
{


template<class T>
CrossSectPntTmpl<T>::CrossSectPntTmpl (DocumentImpl* pDoc)
    : PointTypeTmpl<T>(pDoc)
{
    this->m_DataFormat = EnumDataFormatType::Values::k_null;
    this->m_bDataFormat_valueSet = false;
    this->m_AlignRef = L"";
    this->m_bAlignRef_valueSet = false;
    this->m_AlignRefStation = 0.0;
    this->m_bAlignRefStation_valueSet = false;
    this->m_PlanFeatureRef = L"";
    this->m_bPlanFeatureRef_valueSet = false;
    this->m_PlanFeatureRefStation = 0.0;
    this->m_bPlanFeatureRefStation_valueSet = false;
    this->m_ParcelRef = L"";
    this->m_bParcelRef_valueSet = false;
    this->m_ParcelRefStation = 0.0;
    this->m_bParcelRefStation_valueSet = false;
}


template<class T>
CrossSectPntTmpl<T>::~CrossSectPntTmpl ()
{
}


template <class T>
bool CrossSectPntTmpl<T>::getObjectId(const String*& pId) const
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
ValueObject* CrossSectPntTmpl<T>::id() const
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
EnumDataFormatType::Values CrossSectPntTmpl<T>::getDataFormat() const
{
    return this->m_DataFormat;
}

template <class T>
void CrossSectPntTmpl<T>::setDataFormat(EnumDataFormatType::Values value)
{
    this->m_DataFormat = value;
    this->m_bDataFormat_valueSet = true;
}

template <class T>
bool CrossSectPntTmpl<T>::hasValue_DataFormat() const
{
    return this->m_bDataFormat_valueSet;
}

template <class T>
void CrossSectPntTmpl<T>::resetValue_DataFormat()
{
    this->m_bDataFormat_valueSet = false;
}


template <class T>
String CrossSectPntTmpl<T>::getAlignRef() const
{
    return this->m_AlignRef;
}

template <class T>
void CrossSectPntTmpl<T>::setAlignRef(String value)
{
    this->m_AlignRef = value;
    this->m_bAlignRef_valueSet = true;
}

template <class T>
bool CrossSectPntTmpl<T>::hasValue_AlignRef() const
{
    return this->m_bAlignRef_valueSet;
}

template <class T>
void CrossSectPntTmpl<T>::resetValue_AlignRef()
{
    this->m_bAlignRef_valueSet = false;
}


template <class T>
double CrossSectPntTmpl<T>::getAlignRefStation() const
{
    return this->m_AlignRefStation;
}

template <class T>
void CrossSectPntTmpl<T>::setAlignRefStation(double value)
{
    this->m_AlignRefStation = value;
    this->m_bAlignRefStation_valueSet = true;
}

template <class T>
bool CrossSectPntTmpl<T>::hasValue_AlignRefStation() const
{
    return this->m_bAlignRefStation_valueSet;
}

template <class T>
void CrossSectPntTmpl<T>::resetValue_AlignRefStation()
{
    this->m_bAlignRefStation_valueSet = false;
}


template <class T>
String CrossSectPntTmpl<T>::getPlanFeatureRef() const
{
    return this->m_PlanFeatureRef;
}

template <class T>
void CrossSectPntTmpl<T>::setPlanFeatureRef(String value)
{
    this->m_PlanFeatureRef = value;
    this->m_bPlanFeatureRef_valueSet = true;
}

template <class T>
bool CrossSectPntTmpl<T>::hasValue_PlanFeatureRef() const
{
    return this->m_bPlanFeatureRef_valueSet;
}

template <class T>
void CrossSectPntTmpl<T>::resetValue_PlanFeatureRef()
{
    this->m_bPlanFeatureRef_valueSet = false;
}


template <class T>
double CrossSectPntTmpl<T>::getPlanFeatureRefStation() const
{
    return this->m_PlanFeatureRefStation;
}

template <class T>
void CrossSectPntTmpl<T>::setPlanFeatureRefStation(double value)
{
    this->m_PlanFeatureRefStation = value;
    this->m_bPlanFeatureRefStation_valueSet = true;
}

template <class T>
bool CrossSectPntTmpl<T>::hasValue_PlanFeatureRefStation() const
{
    return this->m_bPlanFeatureRefStation_valueSet;
}

template <class T>
void CrossSectPntTmpl<T>::resetValue_PlanFeatureRefStation()
{
    this->m_bPlanFeatureRefStation_valueSet = false;
}


template <class T>
String CrossSectPntTmpl<T>::getParcelRef() const
{
    return this->m_ParcelRef;
}

template <class T>
void CrossSectPntTmpl<T>::setParcelRef(String value)
{
    this->m_ParcelRef = value;
    this->m_bParcelRef_valueSet = true;
}

template <class T>
bool CrossSectPntTmpl<T>::hasValue_ParcelRef() const
{
    return this->m_bParcelRef_valueSet;
}

template <class T>
void CrossSectPntTmpl<T>::resetValue_ParcelRef()
{
    this->m_bParcelRef_valueSet = false;
}


template <class T>
double CrossSectPntTmpl<T>::getParcelRefStation() const
{
    return this->m_ParcelRefStation;
}

template <class T>
void CrossSectPntTmpl<T>::setParcelRefStation(double value)
{
    this->m_ParcelRefStation = value;
    this->m_bParcelRefStation_valueSet = true;
}

template <class T>
bool CrossSectPntTmpl<T>::hasValue_ParcelRefStation() const
{
    return this->m_bParcelRefStation_valueSet;
}

template <class T>
void CrossSectPntTmpl<T>::resetValue_ParcelRefStation()
{
    this->m_bParcelRefStation_valueSet = false;
}



template <class T>
void CrossSectPntTmpl<T>::toXml (IStream& stream)
{
    static const wchar_t* kstrElementName = L"CrossSectPnt";
    stream.write(L"<");
    stream.write(kstrElementName);
    if (this->m_bDataFormat_valueSet)
    {
        stream.write(L" dataFormat=\"");
        EnumDataFormatTypeImpl::streamOut(this->m_DataFormat, stream);
        stream.write(L"\"");
    }
    if (this->m_bAlignRef_valueSet)
    {
        stream.write(L" alignRef=\"");
        StringObjectImpl::streamOut(this->m_AlignRef, stream);
        stream.write(L"\"");
    }
    if (this->m_bAlignRefStation_valueSet)
    {
        stream.write(L" alignRefStation=\"");
        DoubleObjectImpl::streamOut(this->m_AlignRefStation, stream);
        stream.write(L"\"");
    }
    if (this->m_bPlanFeatureRef_valueSet)
    {
        stream.write(L" planFeatureRef=\"");
        StringObjectImpl::streamOut(this->m_PlanFeatureRef, stream);
        stream.write(L"\"");
    }
    if (this->m_bPlanFeatureRefStation_valueSet)
    {
        stream.write(L" planFeatureRefStation=\"");
        DoubleObjectImpl::streamOut(this->m_PlanFeatureRefStation, stream);
        stream.write(L"\"");
    }
    if (this->m_bParcelRef_valueSet)
    {
        stream.write(L" parcelRef=\"");
        StringObjectImpl::streamOut(this->m_ParcelRef, stream);
        stream.write(L"\"");
    }
    if (this->m_bParcelRefStation_valueSet)
    {
        stream.write(L" parcelRefStation=\"");
        DoubleObjectImpl::streamOut(this->m_ParcelRefStation, stream);
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
Object::ValidityEnum CrossSectPntTmpl<T>::validate (IValidationEventSink* pEventSink) const
{
    Object::ValidityEnum returnCode = Object::kValid;
    returnCode = this->PointTypeTmpl<T>::validate(pEventSink);
    return returnCode;
}

}; // namespace : LX
