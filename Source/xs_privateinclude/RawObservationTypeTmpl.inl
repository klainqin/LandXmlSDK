#include "stdafx.h"
#include "LXTypes.h"
#include "RawObservationType.h"
#include "TargetPoint.h"
#include "OffsetVals.h"
#include "FieldNoteCollection.h"
#include "FeatureCollection.h"
#include "LXTypesTmpl.h"
#include "RawObservationTypeImpl.h"
#include "TargetPointImpl.h"
#include "OffsetValsImpl.h"
#include "FieldNoteCollectionImpl.h"
#include "FeatureCollectionImpl.h"
#include "LXTypesTmpl.inl"

namespace LX
{


template<class T>
RawObservationTypeTmpl<T>::RawObservationTypeTmpl (DocumentImpl* pDoc)
    : ObjectTmpl<T>(pDoc)
{
    m_TargetPoint = NULL;
    m_OffsetVals = NULL;
    m_FieldNote = createFieldNoteCollectionObject(pDoc);
    m_Feature = createFeatureCollectionObject(pDoc);
    m_SetupID = L"";
    m_bSetupID_valueSet = false;
    m_TargetSetupID = L"";
    m_bTargetSetupID_valueSet = false;
    m_SetID = L"";
    m_bSetID_valueSet = false;
    m_Purpose = EnumPurposeType::Values::k_null;
    m_bPurpose_valueSet = false;
    m_TargetHeight = 0.0;
    m_bTargetHeight_valueSet = false;
    m_HorizAngle = 0.0;
    m_bHorizAngle_valueSet = false;
    m_SlopeDistance = 0.0;
    m_bSlopeDistance_valueSet = false;
    m_ZenithAngle = 0.0;
    m_bZenithAngle_valueSet = false;
    m_HorizDistance = 0.0;
    m_bHorizDistance_valueSet = false;
    m_VertDistance = 0.0;
    m_bVertDistance_valueSet = false;
    m_Azimuth = 0.0;
    m_bAzimuth_valueSet = false;
    m_Unused = false;
    m_bUnused_valueSet = false;
    m_DirectFace = false;
    m_bDirectFace_valueSet = false;
    m_CoordGeomRefs = NULL;
    m_TimeStamp = L"";
    m_bTimeStamp_valueSet = false;
    m_AlignRef = L"";
    m_bAlignRef_valueSet = false;
    m_AlignStationName = L"";
    m_bAlignStationName_valueSet = false;
    m_AlignOffset = 0.0;
    m_bAlignOffset_valueSet = false;
    m_UpperStadia = 0.0;
    m_bUpperStadia_valueSet = false;
    m_Rod = 0.0;
    m_bRod_valueSet = false;
    m_LowerStadia = 0.0;
    m_bLowerStadia_valueSet = false;
    m_CirclePositionSet = 0.0;
    m_bCirclePositionSet_valueSet = false;
    m_Status = EnumObservationStatusType::Values::k_null;
    m_bStatus_valueSet = false;
}


template<class T>
RawObservationTypeTmpl<T>::~RawObservationTypeTmpl ()
{
    if (m_TargetPoint != NULL)
    {
        m_TargetPoint->release();
        m_TargetPoint = NULL;
    }
    if (m_OffsetVals != NULL)
    {
        m_OffsetVals->release();
        m_OffsetVals = NULL;
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
FieldNoteCollection& RawObservationTypeTmpl<T>::FieldNote()
{
    return *m_FieldNote;
}

template <class T>
const FieldNoteCollection& RawObservationTypeTmpl<T>::FieldNote() const
{
    return *m_FieldNote;
}

template <class T>
FeatureCollection& RawObservationTypeTmpl<T>::Feature()
{
    return *m_Feature;
}

template <class T>
const FeatureCollection& RawObservationTypeTmpl<T>::Feature() const
{
    return *m_Feature;
}


template <class T>
TargetPoint* RawObservationTypeTmpl<T>::getTargetPoint() const
{
    return m_TargetPoint;
}

template <class T>
void RawObservationTypeTmpl<T>::setTargetPoint(TargetPoint* pValue)
{
    m_TargetPoint = pValue;
}

template <class T>
OffsetVals* RawObservationTypeTmpl<T>::getOffsetVals() const
{
    return m_OffsetVals;
}

template <class T>
void RawObservationTypeTmpl<T>::setOffsetVals(OffsetVals* pValue)
{
    m_OffsetVals = pValue;
}

template <class T>
StringCollection* RawObservationTypeTmpl<T>::getCoordGeomRefs() const
{
    return m_CoordGeomRefs;
}

template <class T>
void RawObservationTypeTmpl<T>::setCoordGeomRefs(StringCollection* pValue)
{
    m_CoordGeomRefs = pValue;
}


template <class T>
String RawObservationTypeTmpl<T>::getSetupID() const
{
    return m_SetupID;
}

template <class T>
void RawObservationTypeTmpl<T>::setSetupID(String value)
{
    m_SetupID = value;
    m_bSetupID_valueSet = true;
}

template <class T>
bool RawObservationTypeTmpl<T>::hasValue_SetupID() const
{
    return m_bSetupID_valueSet;
}

template <class T>
void RawObservationTypeTmpl<T>::resetValue_SetupID()
{
    m_bSetupID_valueSet = false;
}


template <class T>
String RawObservationTypeTmpl<T>::getTargetSetupID() const
{
    return m_TargetSetupID;
}

template <class T>
void RawObservationTypeTmpl<T>::setTargetSetupID(String value)
{
    m_TargetSetupID = value;
    m_bTargetSetupID_valueSet = true;
}

template <class T>
bool RawObservationTypeTmpl<T>::hasValue_TargetSetupID() const
{
    return m_bTargetSetupID_valueSet;
}

template <class T>
void RawObservationTypeTmpl<T>::resetValue_TargetSetupID()
{
    m_bTargetSetupID_valueSet = false;
}


template <class T>
String RawObservationTypeTmpl<T>::getSetID() const
{
    return m_SetID;
}

template <class T>
void RawObservationTypeTmpl<T>::setSetID(String value)
{
    m_SetID = value;
    m_bSetID_valueSet = true;
}

template <class T>
bool RawObservationTypeTmpl<T>::hasValue_SetID() const
{
    return m_bSetID_valueSet;
}

template <class T>
void RawObservationTypeTmpl<T>::resetValue_SetID()
{
    m_bSetID_valueSet = false;
}


template <class T>
EnumPurposeType::Values RawObservationTypeTmpl<T>::getPurpose() const
{
    return m_Purpose;
}

template <class T>
void RawObservationTypeTmpl<T>::setPurpose(EnumPurposeType::Values value)
{
    m_Purpose = value;
    m_bPurpose_valueSet = true;
}

template <class T>
bool RawObservationTypeTmpl<T>::hasValue_Purpose() const
{
    return m_bPurpose_valueSet;
}

template <class T>
void RawObservationTypeTmpl<T>::resetValue_Purpose()
{
    m_bPurpose_valueSet = false;
}


template <class T>
double RawObservationTypeTmpl<T>::getTargetHeight() const
{
    return m_TargetHeight;
}

template <class T>
void RawObservationTypeTmpl<T>::setTargetHeight(double value)
{
    m_TargetHeight = value;
    m_bTargetHeight_valueSet = true;
}

template <class T>
bool RawObservationTypeTmpl<T>::hasValue_TargetHeight() const
{
    return m_bTargetHeight_valueSet;
}

template <class T>
void RawObservationTypeTmpl<T>::resetValue_TargetHeight()
{
    m_bTargetHeight_valueSet = false;
}


template <class T>
double RawObservationTypeTmpl<T>::getHorizAngle() const
{
    return m_HorizAngle;
}

template <class T>
void RawObservationTypeTmpl<T>::setHorizAngle(double value)
{
    m_HorizAngle = value;
    m_bHorizAngle_valueSet = true;
}

template <class T>
bool RawObservationTypeTmpl<T>::hasValue_HorizAngle() const
{
    return m_bHorizAngle_valueSet;
}

template <class T>
void RawObservationTypeTmpl<T>::resetValue_HorizAngle()
{
    m_bHorizAngle_valueSet = false;
}


template <class T>
double RawObservationTypeTmpl<T>::getSlopeDistance() const
{
    return m_SlopeDistance;
}

template <class T>
void RawObservationTypeTmpl<T>::setSlopeDistance(double value)
{
    m_SlopeDistance = value;
    m_bSlopeDistance_valueSet = true;
}

template <class T>
bool RawObservationTypeTmpl<T>::hasValue_SlopeDistance() const
{
    return m_bSlopeDistance_valueSet;
}

template <class T>
void RawObservationTypeTmpl<T>::resetValue_SlopeDistance()
{
    m_bSlopeDistance_valueSet = false;
}


template <class T>
double RawObservationTypeTmpl<T>::getZenithAngle() const
{
    return m_ZenithAngle;
}

template <class T>
void RawObservationTypeTmpl<T>::setZenithAngle(double value)
{
    m_ZenithAngle = value;
    m_bZenithAngle_valueSet = true;
}

template <class T>
bool RawObservationTypeTmpl<T>::hasValue_ZenithAngle() const
{
    return m_bZenithAngle_valueSet;
}

template <class T>
void RawObservationTypeTmpl<T>::resetValue_ZenithAngle()
{
    m_bZenithAngle_valueSet = false;
}


template <class T>
double RawObservationTypeTmpl<T>::getHorizDistance() const
{
    return m_HorizDistance;
}

template <class T>
void RawObservationTypeTmpl<T>::setHorizDistance(double value)
{
    m_HorizDistance = value;
    m_bHorizDistance_valueSet = true;
}

template <class T>
bool RawObservationTypeTmpl<T>::hasValue_HorizDistance() const
{
    return m_bHorizDistance_valueSet;
}

template <class T>
void RawObservationTypeTmpl<T>::resetValue_HorizDistance()
{
    m_bHorizDistance_valueSet = false;
}


template <class T>
double RawObservationTypeTmpl<T>::getVertDistance() const
{
    return m_VertDistance;
}

template <class T>
void RawObservationTypeTmpl<T>::setVertDistance(double value)
{
    m_VertDistance = value;
    m_bVertDistance_valueSet = true;
}

template <class T>
bool RawObservationTypeTmpl<T>::hasValue_VertDistance() const
{
    return m_bVertDistance_valueSet;
}

template <class T>
void RawObservationTypeTmpl<T>::resetValue_VertDistance()
{
    m_bVertDistance_valueSet = false;
}


template <class T>
double RawObservationTypeTmpl<T>::getAzimuth() const
{
    return m_Azimuth;
}

template <class T>
void RawObservationTypeTmpl<T>::setAzimuth(double value)
{
    m_Azimuth = value;
    m_bAzimuth_valueSet = true;
}

template <class T>
bool RawObservationTypeTmpl<T>::hasValue_Azimuth() const
{
    return m_bAzimuth_valueSet;
}

template <class T>
void RawObservationTypeTmpl<T>::resetValue_Azimuth()
{
    m_bAzimuth_valueSet = false;
}


template <class T>
bool RawObservationTypeTmpl<T>::getUnused() const
{
    return m_Unused;
}

template <class T>
void RawObservationTypeTmpl<T>::setUnused(bool value)
{
    m_Unused = value;
    m_bUnused_valueSet = true;
}

template <class T>
bool RawObservationTypeTmpl<T>::hasValue_Unused() const
{
    return m_bUnused_valueSet;
}

template <class T>
void RawObservationTypeTmpl<T>::resetValue_Unused()
{
    m_bUnused_valueSet = false;
}


template <class T>
bool RawObservationTypeTmpl<T>::getDirectFace() const
{
    return m_DirectFace;
}

template <class T>
void RawObservationTypeTmpl<T>::setDirectFace(bool value)
{
    m_DirectFace = value;
    m_bDirectFace_valueSet = true;
}

template <class T>
bool RawObservationTypeTmpl<T>::hasValue_DirectFace() const
{
    return m_bDirectFace_valueSet;
}

template <class T>
void RawObservationTypeTmpl<T>::resetValue_DirectFace()
{
    m_bDirectFace_valueSet = false;
}


template <class T>
String RawObservationTypeTmpl<T>::getTimeStamp() const
{
    return m_TimeStamp;
}

template <class T>
void RawObservationTypeTmpl<T>::setTimeStamp(String value)
{
    m_TimeStamp = value;
    m_bTimeStamp_valueSet = true;
}

template <class T>
bool RawObservationTypeTmpl<T>::hasValue_TimeStamp() const
{
    return m_bTimeStamp_valueSet;
}

template <class T>
void RawObservationTypeTmpl<T>::resetValue_TimeStamp()
{
    m_bTimeStamp_valueSet = false;
}


template <class T>
String RawObservationTypeTmpl<T>::getAlignRef() const
{
    return m_AlignRef;
}

template <class T>
void RawObservationTypeTmpl<T>::setAlignRef(String value)
{
    m_AlignRef = value;
    m_bAlignRef_valueSet = true;
}

template <class T>
bool RawObservationTypeTmpl<T>::hasValue_AlignRef() const
{
    return m_bAlignRef_valueSet;
}

template <class T>
void RawObservationTypeTmpl<T>::resetValue_AlignRef()
{
    m_bAlignRef_valueSet = false;
}


template <class T>
String RawObservationTypeTmpl<T>::getAlignStationName() const
{
    return m_AlignStationName;
}

template <class T>
void RawObservationTypeTmpl<T>::setAlignStationName(String value)
{
    m_AlignStationName = value;
    m_bAlignStationName_valueSet = true;
}

template <class T>
bool RawObservationTypeTmpl<T>::hasValue_AlignStationName() const
{
    return m_bAlignStationName_valueSet;
}

template <class T>
void RawObservationTypeTmpl<T>::resetValue_AlignStationName()
{
    m_bAlignStationName_valueSet = false;
}


template <class T>
double RawObservationTypeTmpl<T>::getAlignOffset() const
{
    return m_AlignOffset;
}

template <class T>
void RawObservationTypeTmpl<T>::setAlignOffset(double value)
{
    m_AlignOffset = value;
    m_bAlignOffset_valueSet = true;
}

template <class T>
bool RawObservationTypeTmpl<T>::hasValue_AlignOffset() const
{
    return m_bAlignOffset_valueSet;
}

template <class T>
void RawObservationTypeTmpl<T>::resetValue_AlignOffset()
{
    m_bAlignOffset_valueSet = false;
}


template <class T>
double RawObservationTypeTmpl<T>::getUpperStadia() const
{
    return m_UpperStadia;
}

template <class T>
void RawObservationTypeTmpl<T>::setUpperStadia(double value)
{
    m_UpperStadia = value;
    m_bUpperStadia_valueSet = true;
}

template <class T>
bool RawObservationTypeTmpl<T>::hasValue_UpperStadia() const
{
    return m_bUpperStadia_valueSet;
}

template <class T>
void RawObservationTypeTmpl<T>::resetValue_UpperStadia()
{
    m_bUpperStadia_valueSet = false;
}


template <class T>
double RawObservationTypeTmpl<T>::getRod() const
{
    return m_Rod;
}

template <class T>
void RawObservationTypeTmpl<T>::setRod(double value)
{
    m_Rod = value;
    m_bRod_valueSet = true;
}

template <class T>
bool RawObservationTypeTmpl<T>::hasValue_Rod() const
{
    return m_bRod_valueSet;
}

template <class T>
void RawObservationTypeTmpl<T>::resetValue_Rod()
{
    m_bRod_valueSet = false;
}


template <class T>
double RawObservationTypeTmpl<T>::getLowerStadia() const
{
    return m_LowerStadia;
}

template <class T>
void RawObservationTypeTmpl<T>::setLowerStadia(double value)
{
    m_LowerStadia = value;
    m_bLowerStadia_valueSet = true;
}

template <class T>
bool RawObservationTypeTmpl<T>::hasValue_LowerStadia() const
{
    return m_bLowerStadia_valueSet;
}

template <class T>
void RawObservationTypeTmpl<T>::resetValue_LowerStadia()
{
    m_bLowerStadia_valueSet = false;
}


template <class T>
double RawObservationTypeTmpl<T>::getCirclePositionSet() const
{
    return m_CirclePositionSet;
}

template <class T>
void RawObservationTypeTmpl<T>::setCirclePositionSet(double value)
{
    m_CirclePositionSet = value;
    m_bCirclePositionSet_valueSet = true;
}

template <class T>
bool RawObservationTypeTmpl<T>::hasValue_CirclePositionSet() const
{
    return m_bCirclePositionSet_valueSet;
}

template <class T>
void RawObservationTypeTmpl<T>::resetValue_CirclePositionSet()
{
    m_bCirclePositionSet_valueSet = false;
}


template <class T>
EnumObservationStatusType::Values RawObservationTypeTmpl<T>::getStatus() const
{
    return m_Status;
}

template <class T>
void RawObservationTypeTmpl<T>::setStatus(EnumObservationStatusType::Values value)
{
    m_Status = value;
    m_bStatus_valueSet = true;
}

template <class T>
bool RawObservationTypeTmpl<T>::hasValue_Status() const
{
    return m_bStatus_valueSet;
}

template <class T>
void RawObservationTypeTmpl<T>::resetValue_Status()
{
    m_bStatus_valueSet = false;
}



template <class T>
void RawObservationTypeTmpl<T>::toXml (IStream& stream)
{
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
}

template <class T>
Object::ValidityEnum RawObservationTypeTmpl<T>::validate (IValidationEventSink* pEventSink) const
{
    Object::ValidityEnum returnCode = Object::kValid;
    returnCode = this->ObjectTmpl<T>::validate(pEventSink);
    if (m_TargetPoint)
    {
        if (m_TargetPoint->validate(pEventSink) != Object::kValid)
            returnCode = Object::kValidWithInvalidChildren;
    }
    if (m_OffsetVals)
    {
        if (m_OffsetVals->validate(pEventSink) != Object::kValid)
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
    return returnCode;
}

}; // namespace : LX
