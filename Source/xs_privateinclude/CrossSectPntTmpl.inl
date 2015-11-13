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
CrossSectPntTmpl<T>::CrossSectPntTmpl<T> (DocumentImpl* pDoc)
    : PointTypeTmpl<T>(pDoc)
{
    m_DataFormat = EnumDataFormatType::Values::k_null;
    m_bDataFormat_valueSet = false;
    m_AlignRef = L"";
    m_bAlignRef_valueSet = false;
    m_AlignRefStation = 0.0;
    m_bAlignRefStation_valueSet = false;
    m_PlanFeatureRef = L"";
    m_bPlanFeatureRef_valueSet = false;
    m_PlanFeatureRefStation = 0.0;
    m_bPlanFeatureRefStation_valueSet = false;
    m_ParcelRef = L"";
    m_bParcelRef_valueSet = false;
    m_ParcelRefStation = 0.0;
    m_bParcelRefStation_valueSet = false;
}


template<class T>
CrossSectPntTmpl<T>::~CrossSectPntTmpl<T> ()
{
}


template <class T>
bool CrossSectPntTmpl<T>::getObjectId(const String*& pId) const
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
ValueObject* CrossSectPntTmpl<T>::id() const
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
EnumDataFormatType::Values CrossSectPntTmpl<T>::getDataFormat() const
{
    return m_DataFormat;
}

template <class T>
void CrossSectPntTmpl<T>::setDataFormat(EnumDataFormatType::Values value)
{
    m_DataFormat = value;
    m_bDataFormat_valueSet = true;
}

template <class T>
bool CrossSectPntTmpl<T>::hasValue_DataFormat() const
{
    return m_bDataFormat_valueSet;
}

template <class T>
void CrossSectPntTmpl<T>::resetValue_DataFormat()
{
    m_bDataFormat_valueSet = false;
}


template <class T>
String CrossSectPntTmpl<T>::getAlignRef() const
{
    return m_AlignRef;
}

template <class T>
void CrossSectPntTmpl<T>::setAlignRef(String value)
{
    m_AlignRef = value;
    m_bAlignRef_valueSet = true;
}

template <class T>
bool CrossSectPntTmpl<T>::hasValue_AlignRef() const
{
    return m_bAlignRef_valueSet;
}

template <class T>
void CrossSectPntTmpl<T>::resetValue_AlignRef()
{
    m_bAlignRef_valueSet = false;
}


template <class T>
double CrossSectPntTmpl<T>::getAlignRefStation() const
{
    return m_AlignRefStation;
}

template <class T>
void CrossSectPntTmpl<T>::setAlignRefStation(double value)
{
    m_AlignRefStation = value;
    m_bAlignRefStation_valueSet = true;
}

template <class T>
bool CrossSectPntTmpl<T>::hasValue_AlignRefStation() const
{
    return m_bAlignRefStation_valueSet;
}

template <class T>
void CrossSectPntTmpl<T>::resetValue_AlignRefStation()
{
    m_bAlignRefStation_valueSet = false;
}


template <class T>
String CrossSectPntTmpl<T>::getPlanFeatureRef() const
{
    return m_PlanFeatureRef;
}

template <class T>
void CrossSectPntTmpl<T>::setPlanFeatureRef(String value)
{
    m_PlanFeatureRef = value;
    m_bPlanFeatureRef_valueSet = true;
}

template <class T>
bool CrossSectPntTmpl<T>::hasValue_PlanFeatureRef() const
{
    return m_bPlanFeatureRef_valueSet;
}

template <class T>
void CrossSectPntTmpl<T>::resetValue_PlanFeatureRef()
{
    m_bPlanFeatureRef_valueSet = false;
}


template <class T>
double CrossSectPntTmpl<T>::getPlanFeatureRefStation() const
{
    return m_PlanFeatureRefStation;
}

template <class T>
void CrossSectPntTmpl<T>::setPlanFeatureRefStation(double value)
{
    m_PlanFeatureRefStation = value;
    m_bPlanFeatureRefStation_valueSet = true;
}

template <class T>
bool CrossSectPntTmpl<T>::hasValue_PlanFeatureRefStation() const
{
    return m_bPlanFeatureRefStation_valueSet;
}

template <class T>
void CrossSectPntTmpl<T>::resetValue_PlanFeatureRefStation()
{
    m_bPlanFeatureRefStation_valueSet = false;
}


template <class T>
String CrossSectPntTmpl<T>::getParcelRef() const
{
    return m_ParcelRef;
}

template <class T>
void CrossSectPntTmpl<T>::setParcelRef(String value)
{
    m_ParcelRef = value;
    m_bParcelRef_valueSet = true;
}

template <class T>
bool CrossSectPntTmpl<T>::hasValue_ParcelRef() const
{
    return m_bParcelRef_valueSet;
}

template <class T>
void CrossSectPntTmpl<T>::resetValue_ParcelRef()
{
    m_bParcelRef_valueSet = false;
}


template <class T>
double CrossSectPntTmpl<T>::getParcelRefStation() const
{
    return m_ParcelRefStation;
}

template <class T>
void CrossSectPntTmpl<T>::setParcelRefStation(double value)
{
    m_ParcelRefStation = value;
    m_bParcelRefStation_valueSet = true;
}

template <class T>
bool CrossSectPntTmpl<T>::hasValue_ParcelRefStation() const
{
    return m_bParcelRefStation_valueSet;
}

template <class T>
void CrossSectPntTmpl<T>::resetValue_ParcelRefStation()
{
    m_bParcelRefStation_valueSet = false;
}



template <class T>
void CrossSectPntTmpl<T>::toXml (IStream& stream)
{
    static const wchar_t* kstrElementName = L"CrossSectPnt";
    stream.write(L"<");
    stream.write(kstrElementName);
    if (m_bDataFormat_valueSet)
    {
        stream.write(L" dataFormat=\"");
        EnumDataFormatTypeImpl::streamOut(m_DataFormat, stream);
        stream.write(L"\"");
    }
    if (m_bAlignRef_valueSet)
    {
        stream.write(L" alignRef=\"");
        StringObjectImpl::streamOut(m_AlignRef, stream);
        stream.write(L"\"");
    }
    if (m_bAlignRefStation_valueSet)
    {
        stream.write(L" alignRefStation=\"");
        DoubleObjectImpl::streamOut(m_AlignRefStation, stream);
        stream.write(L"\"");
    }
    if (m_bPlanFeatureRef_valueSet)
    {
        stream.write(L" planFeatureRef=\"");
        StringObjectImpl::streamOut(m_PlanFeatureRef, stream);
        stream.write(L"\"");
    }
    if (m_bPlanFeatureRefStation_valueSet)
    {
        stream.write(L" planFeatureRefStation=\"");
        DoubleObjectImpl::streamOut(m_PlanFeatureRefStation, stream);
        stream.write(L"\"");
    }
    if (m_bParcelRef_valueSet)
    {
        stream.write(L" parcelRef=\"");
        StringObjectImpl::streamOut(m_ParcelRef, stream);
        stream.write(L"\"");
    }
    if (m_bParcelRefStation_valueSet)
    {
        stream.write(L" parcelRefStation=\"");
        DoubleObjectImpl::streamOut(m_ParcelRefStation, stream);
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
Object::ValidityEnum CrossSectPntTmpl<T>::validate (IValidationEventSink* pEventSink) const
{
    Object::ValidityEnum returnCode = Object::kValid;
    returnCode = this->PointTypeTmpl<T>::validate(pEventSink);
    return returnCode;
}

}; // namespace : LX
