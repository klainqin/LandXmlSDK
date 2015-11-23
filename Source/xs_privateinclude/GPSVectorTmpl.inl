#include "stdafx.h"
#include "LXTypes.h"
#include "GPSVector.h"
#include "TargetPoint.h"
#include "GPSQCInfoLevel1.h"
#include "GPSQCInfoLevel2.h"
#include "FieldNoteCollection.h"
#include "FeatureCollection.h"
#include "LXTypesTmpl.h"
#include "GPSVectorImpl.h"
#include "TargetPointImpl.h"
#include "GPSQCInfoLevel1Impl.h"
#include "GPSQCInfoLevel2Impl.h"
#include "FieldNoteCollectionImpl.h"
#include "FeatureCollectionImpl.h"
#include "LXTypesTmpl.inl"

namespace LX
{


template<class T>
GPSVectorTmpl<T>::GPSVectorTmpl (DocumentImpl* pDoc)
    : ObjectTmpl<T>(pDoc)
{
    m_TargetPoint = NULL;
    m_GPSQCInfoLevel1 = NULL;
    m_GPSQCInfoLevel2 = NULL;
    m_FieldNote = createFieldNoteCollectionObject(pDoc);
    m_Feature = createFeatureCollectionObject(pDoc);
    m_DX = 0.0;
    m_bDX_valueSet = false;
    m_DY = 0.0;
    m_bDY_valueSet = false;
    m_DZ = 0.0;
    m_bDZ_valueSet = false;
    m_SetupID_A = L"";
    m_bSetupID_A_valueSet = false;
    m_SetupID_B = L"";
    m_bSetupID_B_valueSet = false;
    m_StartTime = L"";
    m_bStartTime_valueSet = false;
    m_EndTime = L"";
    m_bEndTime_valueSet = false;
    m_HorizontalPrecision = 0.0;
    m_bHorizontalPrecision_valueSet = false;
    m_VerticalPrecision = 0.0;
    m_bVerticalPrecision_valueSet = false;
    m_Purpose = EnumPurposeType::Values::k_null;
    m_bPurpose_valueSet = false;
    m_SetID = L"";
    m_bSetID_valueSet = false;
    m_SolutionDataLink = L"";
    m_bSolutionDataLink_valueSet = false;
    m_CoordGeomRefs = NULL;
}


template<class T>
GPSVectorTmpl<T>::~GPSVectorTmpl ()
{
    if (m_TargetPoint != NULL)
    {
        m_TargetPoint->release();
        m_TargetPoint = NULL;
    }
    if (m_GPSQCInfoLevel1 != NULL)
    {
        m_GPSQCInfoLevel1->release();
        m_GPSQCInfoLevel1 = NULL;
    }
    if (m_GPSQCInfoLevel2 != NULL)
    {
        m_GPSQCInfoLevel2->release();
        m_GPSQCInfoLevel2 = NULL;
    }
    if (m_FieldNote != NULL)
    {
        m_FieldNote->release();
        m_FieldNote = NULL;
    }
    if (m_Feature != NULL)
    {
        m_Feature->release();
        m_Feature = NULL;
    }
    if (m_CoordGeomRefs != NULL)
    {
        m_CoordGeomRefs->release();
        m_CoordGeomRefs = NULL;
    }
}

template <class T>
FieldNoteCollection& GPSVectorTmpl<T>::FieldNote()
{
    return *m_FieldNote;
}

template <class T>
const FieldNoteCollection& GPSVectorTmpl<T>::FieldNote() const
{
    return *m_FieldNote;
}

template <class T>
FeatureCollection& GPSVectorTmpl<T>::Feature()
{
    return *m_Feature;
}

template <class T>
const FeatureCollection& GPSVectorTmpl<T>::Feature() const
{
    return *m_Feature;
}


template <class T>
TargetPoint* GPSVectorTmpl<T>::getTargetPoint() const
{
    return m_TargetPoint;
}

template <class T>
void GPSVectorTmpl<T>::setTargetPoint(TargetPoint* pValue)
{
    m_TargetPoint = pValue;
}

template <class T>
GPSQCInfoLevel1* GPSVectorTmpl<T>::getGPSQCInfoLevel1() const
{
    return m_GPSQCInfoLevel1;
}

template <class T>
void GPSVectorTmpl<T>::setGPSQCInfoLevel1(GPSQCInfoLevel1* pValue)
{
    m_GPSQCInfoLevel1 = pValue;
}

template <class T>
GPSQCInfoLevel2* GPSVectorTmpl<T>::getGPSQCInfoLevel2() const
{
    return m_GPSQCInfoLevel2;
}

template <class T>
void GPSVectorTmpl<T>::setGPSQCInfoLevel2(GPSQCInfoLevel2* pValue)
{
    m_GPSQCInfoLevel2 = pValue;
}

template <class T>
StringCollection* GPSVectorTmpl<T>::getCoordGeomRefs() const
{
    return m_CoordGeomRefs;
}

template <class T>
void GPSVectorTmpl<T>::setCoordGeomRefs(StringCollection* pValue)
{
    m_CoordGeomRefs = pValue;
}


template <class T>
double GPSVectorTmpl<T>::getDX() const
{
    return m_DX;
}

template <class T>
void GPSVectorTmpl<T>::setDX(double value)
{
    m_DX = value;
    m_bDX_valueSet = true;
}

template <class T>
bool GPSVectorTmpl<T>::hasValue_DX() const
{
    return m_bDX_valueSet;
}

template <class T>
void GPSVectorTmpl<T>::resetValue_DX()
{
    m_bDX_valueSet = false;
}


template <class T>
double GPSVectorTmpl<T>::getDY() const
{
    return m_DY;
}

template <class T>
void GPSVectorTmpl<T>::setDY(double value)
{
    m_DY = value;
    m_bDY_valueSet = true;
}

template <class T>
bool GPSVectorTmpl<T>::hasValue_DY() const
{
    return m_bDY_valueSet;
}

template <class T>
void GPSVectorTmpl<T>::resetValue_DY()
{
    m_bDY_valueSet = false;
}


template <class T>
double GPSVectorTmpl<T>::getDZ() const
{
    return m_DZ;
}

template <class T>
void GPSVectorTmpl<T>::setDZ(double value)
{
    m_DZ = value;
    m_bDZ_valueSet = true;
}

template <class T>
bool GPSVectorTmpl<T>::hasValue_DZ() const
{
    return m_bDZ_valueSet;
}

template <class T>
void GPSVectorTmpl<T>::resetValue_DZ()
{
    m_bDZ_valueSet = false;
}


template <class T>
String GPSVectorTmpl<T>::getSetupID_A() const
{
    return m_SetupID_A;
}

template <class T>
void GPSVectorTmpl<T>::setSetupID_A(String value)
{
    m_SetupID_A = value;
    m_bSetupID_A_valueSet = true;
}

template <class T>
bool GPSVectorTmpl<T>::hasValue_SetupID_A() const
{
    return m_bSetupID_A_valueSet;
}

template <class T>
void GPSVectorTmpl<T>::resetValue_SetupID_A()
{
    m_bSetupID_A_valueSet = false;
}


template <class T>
String GPSVectorTmpl<T>::getSetupID_B() const
{
    return m_SetupID_B;
}

template <class T>
void GPSVectorTmpl<T>::setSetupID_B(String value)
{
    m_SetupID_B = value;
    m_bSetupID_B_valueSet = true;
}

template <class T>
bool GPSVectorTmpl<T>::hasValue_SetupID_B() const
{
    return m_bSetupID_B_valueSet;
}

template <class T>
void GPSVectorTmpl<T>::resetValue_SetupID_B()
{
    m_bSetupID_B_valueSet = false;
}


template <class T>
String GPSVectorTmpl<T>::getStartTime() const
{
    return m_StartTime;
}

template <class T>
void GPSVectorTmpl<T>::setStartTime(String value)
{
    m_StartTime = value;
    m_bStartTime_valueSet = true;
}

template <class T>
bool GPSVectorTmpl<T>::hasValue_StartTime() const
{
    return m_bStartTime_valueSet;
}

template <class T>
void GPSVectorTmpl<T>::resetValue_StartTime()
{
    m_bStartTime_valueSet = false;
}


template <class T>
String GPSVectorTmpl<T>::getEndTime() const
{
    return m_EndTime;
}

template <class T>
void GPSVectorTmpl<T>::setEndTime(String value)
{
    m_EndTime = value;
    m_bEndTime_valueSet = true;
}

template <class T>
bool GPSVectorTmpl<T>::hasValue_EndTime() const
{
    return m_bEndTime_valueSet;
}

template <class T>
void GPSVectorTmpl<T>::resetValue_EndTime()
{
    m_bEndTime_valueSet = false;
}


template <class T>
double GPSVectorTmpl<T>::getHorizontalPrecision() const
{
    return m_HorizontalPrecision;
}

template <class T>
void GPSVectorTmpl<T>::setHorizontalPrecision(double value)
{
    m_HorizontalPrecision = value;
    m_bHorizontalPrecision_valueSet = true;
}

template <class T>
bool GPSVectorTmpl<T>::hasValue_HorizontalPrecision() const
{
    return m_bHorizontalPrecision_valueSet;
}

template <class T>
void GPSVectorTmpl<T>::resetValue_HorizontalPrecision()
{
    m_bHorizontalPrecision_valueSet = false;
}


template <class T>
double GPSVectorTmpl<T>::getVerticalPrecision() const
{
    return m_VerticalPrecision;
}

template <class T>
void GPSVectorTmpl<T>::setVerticalPrecision(double value)
{
    m_VerticalPrecision = value;
    m_bVerticalPrecision_valueSet = true;
}

template <class T>
bool GPSVectorTmpl<T>::hasValue_VerticalPrecision() const
{
    return m_bVerticalPrecision_valueSet;
}

template <class T>
void GPSVectorTmpl<T>::resetValue_VerticalPrecision()
{
    m_bVerticalPrecision_valueSet = false;
}


template <class T>
EnumPurposeType::Values GPSVectorTmpl<T>::getPurpose() const
{
    return m_Purpose;
}

template <class T>
void GPSVectorTmpl<T>::setPurpose(EnumPurposeType::Values value)
{
    m_Purpose = value;
    m_bPurpose_valueSet = true;
}

template <class T>
bool GPSVectorTmpl<T>::hasValue_Purpose() const
{
    return m_bPurpose_valueSet;
}

template <class T>
void GPSVectorTmpl<T>::resetValue_Purpose()
{
    m_bPurpose_valueSet = false;
}


template <class T>
String GPSVectorTmpl<T>::getSetID() const
{
    return m_SetID;
}

template <class T>
void GPSVectorTmpl<T>::setSetID(String value)
{
    m_SetID = value;
    m_bSetID_valueSet = true;
}

template <class T>
bool GPSVectorTmpl<T>::hasValue_SetID() const
{
    return m_bSetID_valueSet;
}

template <class T>
void GPSVectorTmpl<T>::resetValue_SetID()
{
    m_bSetID_valueSet = false;
}


template <class T>
String GPSVectorTmpl<T>::getSolutionDataLink() const
{
    return m_SolutionDataLink;
}

template <class T>
void GPSVectorTmpl<T>::setSolutionDataLink(String value)
{
    m_SolutionDataLink = value;
    m_bSolutionDataLink_valueSet = true;
}

template <class T>
bool GPSVectorTmpl<T>::hasValue_SolutionDataLink() const
{
    return m_bSolutionDataLink_valueSet;
}

template <class T>
void GPSVectorTmpl<T>::resetValue_SolutionDataLink()
{
    m_bSolutionDataLink_valueSet = false;
}



template <class T>
void GPSVectorTmpl<T>::toXml (IStream& stream)
{
    static const wchar_t* kstrElementName = L"GPSVector";
    stream.write(L"<");
    stream.write(kstrElementName);
    if (m_bDX_valueSet)
    {
        stream.write(L" dX=\"");
        DoubleObjectImpl::streamOut(m_DX, stream);
        stream.write(L"\"");
    }
    if (m_bDY_valueSet)
    {
        stream.write(L" dY=\"");
        DoubleObjectImpl::streamOut(m_DY, stream);
        stream.write(L"\"");
    }
    if (m_bDZ_valueSet)
    {
        stream.write(L" dZ=\"");
        DoubleObjectImpl::streamOut(m_DZ, stream);
        stream.write(L"\"");
    }
    if (m_bSetupID_A_valueSet)
    {
        stream.write(L" setupID_A=\"");
        StringObjectImpl::streamOut(m_SetupID_A, stream);
        stream.write(L"\"");
    }
    if (m_bSetupID_B_valueSet)
    {
        stream.write(L" setupID_B=\"");
        StringObjectImpl::streamOut(m_SetupID_B, stream);
        stream.write(L"\"");
    }
    if (m_bStartTime_valueSet)
    {
        stream.write(L" startTime=\"");
        StringObjectImpl::streamOut(m_StartTime, stream);
        stream.write(L"\"");
    }
    if (m_bEndTime_valueSet)
    {
        stream.write(L" endTime=\"");
        StringObjectImpl::streamOut(m_EndTime, stream);
        stream.write(L"\"");
    }
    if (m_bHorizontalPrecision_valueSet)
    {
        stream.write(L" horizontalPrecision=\"");
        DoubleObjectImpl::streamOut(m_HorizontalPrecision, stream);
        stream.write(L"\"");
    }
    if (m_bVerticalPrecision_valueSet)
    {
        stream.write(L" verticalPrecision=\"");
        DoubleObjectImpl::streamOut(m_VerticalPrecision, stream);
        stream.write(L"\"");
    }
    if (m_bPurpose_valueSet)
    {
        stream.write(L" purpose=\"");
        EnumPurposeTypeImpl::streamOut(m_Purpose, stream);
        stream.write(L"\"");
    }
    if (m_bSetID_valueSet)
    {
        stream.write(L" setID=\"");
        StringObjectImpl::streamOut(m_SetID, stream);
        stream.write(L"\"");
    }
    if (m_bSolutionDataLink_valueSet)
    {
        stream.write(L" solutionDataLink=\"");
        StringObjectImpl::streamOut(m_SolutionDataLink, stream);
        stream.write(L"\"");
    }
    if (m_CoordGeomRefs)
    {
        stream.write(L" coordGeomRefs=\"");
        StringCollectionImpl::streamOut(m_CoordGeomRefs, stream);
        stream.write(L"\"");
    }
    stream.write(L">");
    if (m_TargetPoint)
    {
    	m_TargetPoint->toXml(stream);
    }
    if (m_GPSQCInfoLevel1)
    {
    	m_GPSQCInfoLevel1->toXml(stream);
    }
    if (m_GPSQCInfoLevel2)
    {
    	m_GPSQCInfoLevel2->toXml(stream);
    }
    if (m_FieldNote)
    {
    	m_FieldNote->toXml(stream);
    }
    if (m_Feature)
    {
    	m_Feature->toXml(stream);
    }
    stream.write(L"</");
    stream.write(kstrElementName);
    stream.write(L">");
}

template <class T>
Object::ValidityEnum GPSVectorTmpl<T>::validate (IValidationEventSink* pEventSink) const
{
    Object::ValidityEnum returnCode = Object::kValid;
    returnCode = this->ObjectTmpl<T>::validate(pEventSink);
    if (m_TargetPoint)
    {
        if (m_TargetPoint->validate(pEventSink) != Object::kValid)
            returnCode = Object::kValidWithInvalidChildren;
    }
    if (m_GPSQCInfoLevel1)
    {
        if (m_GPSQCInfoLevel1->validate(pEventSink) != Object::kValid)
            returnCode = Object::kValidWithInvalidChildren;
    }
    if (m_GPSQCInfoLevel2)
    {
        if (m_GPSQCInfoLevel2->validate(pEventSink) != Object::kValid)
            returnCode = Object::kValidWithInvalidChildren;
    }
    if (m_FieldNote)
    {
        if (m_FieldNote->validate(pEventSink) != Object::kValid)
            returnCode = Object::kValidWithInvalidChildren;
    }
    if (m_Feature)
    {
        if (m_Feature->validate(pEventSink) != Object::kValid)
            returnCode = Object::kValidWithInvalidChildren;
    }
    if (!m_bDX_valueSet)
    {
        pEventSink->onEvent(IValidationEventSink::EventCode::kRequiredValueNotSet, this, L"DX", L"Required value not set");
        returnCode = Object::kInvalid;
    }
    if (!m_bDY_valueSet)
    {
        pEventSink->onEvent(IValidationEventSink::EventCode::kRequiredValueNotSet, this, L"DY", L"Required value not set");
        returnCode = Object::kInvalid;
    }
    if (!m_bDZ_valueSet)
    {
        pEventSink->onEvent(IValidationEventSink::EventCode::kRequiredValueNotSet, this, L"DZ", L"Required value not set");
        returnCode = Object::kInvalid;
    }
    if (!m_bSetupID_A_valueSet)
    {
        pEventSink->onEvent(IValidationEventSink::EventCode::kRequiredValueNotSet, this, L"SetupID_A", L"Required value not set");
        returnCode = Object::kInvalid;
    }
    if (!m_bSetupID_B_valueSet)
    {
        pEventSink->onEvent(IValidationEventSink::EventCode::kRequiredValueNotSet, this, L"SetupID_B", L"Required value not set");
        returnCode = Object::kInvalid;
    }
    return returnCode;
}

}; // namespace : LX
