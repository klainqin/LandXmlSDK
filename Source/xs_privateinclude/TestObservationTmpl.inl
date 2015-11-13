#include "stdafx.h"
#include "LXTypes.h"
#include "TestObservation.h"
#include "LXTypesTmpl.h"
#include "TestObservationImpl.h"
#include "LXTypesTmpl.inl"
#include "RawObservationTypeTmpl.inl"

namespace LX
{


template<class T>
TestObservationTmpl<T>::TestObservationTmpl<T> (DocumentImpl* pDoc)
    : RawObservationTypeTmpl<T>(pDoc)
{
    m_Setup1RodA = 0.0;
    m_bSetup1RodA_valueSet = false;
    m_Setup1RodB = 0.0;
    m_bSetup1RodB_valueSet = false;
    m_Setup2RodA = 0.0;
    m_bSetup2RodA_valueSet = false;
    m_Setup2RodB = 0.0;
    m_bSetup2RodB_valueSet = false;
}


template<class T>
TestObservationTmpl<T>::~TestObservationTmpl<T> ()
{
}



template <class T>
double TestObservationTmpl<T>::getSetup1RodA() const
{
    return m_Setup1RodA;
}

template <class T>
void TestObservationTmpl<T>::setSetup1RodA(double value)
{
    m_Setup1RodA = value;
    m_bSetup1RodA_valueSet = true;
}

template <class T>
bool TestObservationTmpl<T>::hasValue_Setup1RodA() const
{
    return m_bSetup1RodA_valueSet;
}

template <class T>
void TestObservationTmpl<T>::resetValue_Setup1RodA()
{
    m_bSetup1RodA_valueSet = false;
}


template <class T>
double TestObservationTmpl<T>::getSetup1RodB() const
{
    return m_Setup1RodB;
}

template <class T>
void TestObservationTmpl<T>::setSetup1RodB(double value)
{
    m_Setup1RodB = value;
    m_bSetup1RodB_valueSet = true;
}

template <class T>
bool TestObservationTmpl<T>::hasValue_Setup1RodB() const
{
    return m_bSetup1RodB_valueSet;
}

template <class T>
void TestObservationTmpl<T>::resetValue_Setup1RodB()
{
    m_bSetup1RodB_valueSet = false;
}


template <class T>
double TestObservationTmpl<T>::getSetup2RodA() const
{
    return m_Setup2RodA;
}

template <class T>
void TestObservationTmpl<T>::setSetup2RodA(double value)
{
    m_Setup2RodA = value;
    m_bSetup2RodA_valueSet = true;
}

template <class T>
bool TestObservationTmpl<T>::hasValue_Setup2RodA() const
{
    return m_bSetup2RodA_valueSet;
}

template <class T>
void TestObservationTmpl<T>::resetValue_Setup2RodA()
{
    m_bSetup2RodA_valueSet = false;
}


template <class T>
double TestObservationTmpl<T>::getSetup2RodB() const
{
    return m_Setup2RodB;
}

template <class T>
void TestObservationTmpl<T>::setSetup2RodB(double value)
{
    m_Setup2RodB = value;
    m_bSetup2RodB_valueSet = true;
}

template <class T>
bool TestObservationTmpl<T>::hasValue_Setup2RodB() const
{
    return m_bSetup2RodB_valueSet;
}

template <class T>
void TestObservationTmpl<T>::resetValue_Setup2RodB()
{
    m_bSetup2RodB_valueSet = false;
}



template <class T>
void TestObservationTmpl<T>::toXml (IStream& stream)
{
    static const wchar_t* kstrElementName = L"TestObservation";
    stream.write(L"<");
    stream.write(kstrElementName);
    if (m_bSetup1RodA_valueSet)
    {
        stream.write(L" setup1RodA=\"");
        DoubleObjectImpl::streamOut(m_Setup1RodA, stream);
        stream.write(L"\"");
    }
    if (m_bSetup1RodB_valueSet)
    {
        stream.write(L" setup1RodB=\"");
        DoubleObjectImpl::streamOut(m_Setup1RodB, stream);
        stream.write(L"\"");
    }
    if (m_bSetup2RodA_valueSet)
    {
        stream.write(L" setup2RodA=\"");
        DoubleObjectImpl::streamOut(m_Setup2RodA, stream);
        stream.write(L"\"");
    }
    if (m_bSetup2RodB_valueSet)
    {
        stream.write(L" setup2RodB=\"");
        DoubleObjectImpl::streamOut(m_Setup2RodB, stream);
        stream.write(L"\"");
    }
    if (m_bSetupID_valueSet)
    {
        stream.write(L" setupID=\"");
        StringObjectImpl::streamOut(m_SetupID, stream);
        stream.write(L"\"");
    }
    if (m_bTargetSetupID_valueSet)
    {
        stream.write(L" targetSetupID=\"");
        StringObjectImpl::streamOut(m_TargetSetupID, stream);
        stream.write(L"\"");
    }
    if (m_bSetID_valueSet)
    {
        stream.write(L" setID=\"");
        StringObjectImpl::streamOut(m_SetID, stream);
        stream.write(L"\"");
    }
    if (m_bPurpose_valueSet)
    {
        stream.write(L" purpose=\"");
        EnumPurposeTypeImpl::streamOut(m_Purpose, stream);
        stream.write(L"\"");
    }
    if (m_bTargetHeight_valueSet)
    {
        stream.write(L" targetHeight=\"");
        DoubleObjectImpl::streamOut(m_TargetHeight, stream);
        stream.write(L"\"");
    }
    if (m_bHorizAngle_valueSet)
    {
        stream.write(L" horizAngle=\"");
        DoubleObjectImpl::streamOut(m_HorizAngle, stream);
        stream.write(L"\"");
    }
    if (m_bSlopeDistance_valueSet)
    {
        stream.write(L" slopeDistance=\"");
        DoubleObjectImpl::streamOut(m_SlopeDistance, stream);
        stream.write(L"\"");
    }
    if (m_bZenithAngle_valueSet)
    {
        stream.write(L" zenithAngle=\"");
        DoubleObjectImpl::streamOut(m_ZenithAngle, stream);
        stream.write(L"\"");
    }
    if (m_bHorizDistance_valueSet)
    {
        stream.write(L" horizDistance=\"");
        DoubleObjectImpl::streamOut(m_HorizDistance, stream);
        stream.write(L"\"");
    }
    if (m_bVertDistance_valueSet)
    {
        stream.write(L" vertDistance=\"");
        DoubleObjectImpl::streamOut(m_VertDistance, stream);
        stream.write(L"\"");
    }
    if (m_bAzimuth_valueSet)
    {
        stream.write(L" azimuth=\"");
        DoubleObjectImpl::streamOut(m_Azimuth, stream);
        stream.write(L"\"");
    }
    if (m_bUnused_valueSet)
    {
        stream.write(L" unused=\"");
        BooleanObjectImpl::streamOut(m_Unused, stream);
        stream.write(L"\"");
    }
    if (m_bDirectFace_valueSet)
    {
        stream.write(L" directFace=\"");
        BooleanObjectImpl::streamOut(m_DirectFace, stream);
        stream.write(L"\"");
    }
    if (m_CoordGeomRefs)
    {
        stream.write(L" coordGeomRefs=\"");
        StringCollectionImpl::streamOut(m_CoordGeomRefs, stream);
        stream.write(L"\"");
    }
    if (m_bTimeStamp_valueSet)
    {
        stream.write(L" timeStamp=\"");
        StringObjectImpl::streamOut(m_TimeStamp, stream);
        stream.write(L"\"");
    }
    if (m_bAlignRef_valueSet)
    {
        stream.write(L" alignRef=\"");
        StringObjectImpl::streamOut(m_AlignRef, stream);
        stream.write(L"\"");
    }
    if (m_bAlignStationName_valueSet)
    {
        stream.write(L" alignStationName=\"");
        StringObjectImpl::streamOut(m_AlignStationName, stream);
        stream.write(L"\"");
    }
    if (m_bAlignOffset_valueSet)
    {
        stream.write(L" alignOffset=\"");
        DoubleObjectImpl::streamOut(m_AlignOffset, stream);
        stream.write(L"\"");
    }
    if (m_bUpperStadia_valueSet)
    {
        stream.write(L" upperStadia=\"");
        DoubleObjectImpl::streamOut(m_UpperStadia, stream);
        stream.write(L"\"");
    }
    if (m_bRod_valueSet)
    {
        stream.write(L" rod=\"");
        DoubleObjectImpl::streamOut(m_Rod, stream);
        stream.write(L"\"");
    }
    if (m_bLowerStadia_valueSet)
    {
        stream.write(L" lowerStadia=\"");
        DoubleObjectImpl::streamOut(m_LowerStadia, stream);
        stream.write(L"\"");
    }
    if (m_bCirclePositionSet_valueSet)
    {
        stream.write(L" circlePositionSet=\"");
        DoubleObjectImpl::streamOut(m_CirclePositionSet, stream);
        stream.write(L"\"");
    }
    if (m_bStatus_valueSet)
    {
        stream.write(L" status=\"");
        EnumObservationStatusTypeImpl::streamOut(m_Status, stream);
        stream.write(L"\"");
    }
    stream.write(L">");
    if (m_TargetPoint)
    {
    	m_TargetPoint->toXml(stream);
    }
    if (m_OffsetVals)
    {
    	m_OffsetVals->toXml(stream);
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
Object::ValidityEnum TestObservationTmpl<T>::validate (IValidationEventSink* pEventSink) const
{
    Object::ValidityEnum returnCode = Object::kValid;
    returnCode = this->RawObservationTypeTmpl<T>::validate(pEventSink);
    return returnCode;
}

}; // namespace : LX
