#include "stdafx.h"
#include "LXTypes.h"
#include "InstrumentSetup.h"
#include "InstrumentPoint.h"
#include "BacksightCollection.h"
#include "TargetSetupCollection.h"
#include "RawObservationCollection.h"
#include "ObservationGroupCollection.h"
#include "ControlChecksCollection.h"
#include "FieldNoteCollection.h"
#include "FeatureCollection.h"
#include "LXTypesTmpl.h"
#include "InstrumentSetupImpl.h"
#include "InstrumentPointImpl.h"
#include "BacksightCollectionImpl.h"
#include "TargetSetupCollectionImpl.h"
#include "RawObservationCollectionImpl.h"
#include "ObservationGroupCollectionImpl.h"
#include "ControlChecksCollectionImpl.h"
#include "FieldNoteCollectionImpl.h"
#include "FeatureCollectionImpl.h"
#include "LXTypesTmpl.inl"

namespace LX
{


template<class T>
InstrumentSetupTmpl<T>::InstrumentSetupTmpl (DocumentImpl* pDoc)
    : ObjectTmpl<T>(pDoc)
{
    m_InstrumentPoint = NULL;
    m_Backsight = createBacksightCollectionObject(pDoc);
    m_TargetSetup = createTargetSetupCollectionObject(pDoc);
    m_RawObservation = createRawObservationCollectionObject(pDoc);
    m_ObservationGroup = createObservationGroupCollectionObject(pDoc);
    m_ControlChecks = createControlChecksCollectionObject(pDoc);
    m_FieldNote = createFieldNoteCollectionObject(pDoc);
    m_Feature = createFeatureCollectionObject(pDoc);
    m_Id = L"";
    m_bId_valueSet = false;
    m_InstrumentDetailsID = L"";
    m_bInstrumentDetailsID_valueSet = false;
    m_StationName = L"";
    m_bStationName_valueSet = false;
    m_InstrumentHeight = 0.0;
    m_bInstrumentHeight_valueSet = false;
    m_OrientationAzimuth = 0.0;
    m_bOrientationAzimuth_valueSet = false;
    m_CircleAzimuth = 0.0;
    m_bCircleAzimuth_valueSet = false;
    m_Status = EnumObservationStatusType::Values::k_null;
    m_bStatus_valueSet = false;
}


template<class T>
InstrumentSetupTmpl<T>::~InstrumentSetupTmpl ()
{
    if (m_InstrumentPoint != NULL)
    {
        m_InstrumentPoint->release();
        m_InstrumentPoint = NULL;
    }
    if (m_Backsight != NULL)
    {
        m_Backsight->release();
        m_Backsight = NULL;
    }
    if (m_TargetSetup != NULL)
    {
        m_TargetSetup->release();
        m_TargetSetup = NULL;
    }
    if (m_RawObservation != NULL)
    {
        m_RawObservation->release();
        m_RawObservation = NULL;
    }
    if (m_ObservationGroup != NULL)
    {
        m_ObservationGroup->release();
        m_ObservationGroup = NULL;
    }
    if (m_ControlChecks != NULL)
    {
        m_ControlChecks->release();
        m_ControlChecks = NULL;
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
}

template <class T>
BacksightCollection& InstrumentSetupTmpl<T>::Backsight()
{
    return *m_Backsight;
}

template <class T>
const BacksightCollection& InstrumentSetupTmpl<T>::Backsight() const
{
    return *m_Backsight;
}

template <class T>
TargetSetupCollection& InstrumentSetupTmpl<T>::TargetSetup()
{
    return *m_TargetSetup;
}

template <class T>
const TargetSetupCollection& InstrumentSetupTmpl<T>::TargetSetup() const
{
    return *m_TargetSetup;
}

template <class T>
RawObservationCollection& InstrumentSetupTmpl<T>::RawObservation()
{
    return *m_RawObservation;
}

template <class T>
const RawObservationCollection& InstrumentSetupTmpl<T>::RawObservation() const
{
    return *m_RawObservation;
}

template <class T>
ObservationGroupCollection& InstrumentSetupTmpl<T>::ObservationGroup()
{
    return *m_ObservationGroup;
}

template <class T>
const ObservationGroupCollection& InstrumentSetupTmpl<T>::ObservationGroup() const
{
    return *m_ObservationGroup;
}

template <class T>
ControlChecksCollection& InstrumentSetupTmpl<T>::ControlChecks()
{
    return *m_ControlChecks;
}

template <class T>
const ControlChecksCollection& InstrumentSetupTmpl<T>::ControlChecks() const
{
    return *m_ControlChecks;
}

template <class T>
FieldNoteCollection& InstrumentSetupTmpl<T>::FieldNote()
{
    return *m_FieldNote;
}

template <class T>
const FieldNoteCollection& InstrumentSetupTmpl<T>::FieldNote() const
{
    return *m_FieldNote;
}

template <class T>
FeatureCollection& InstrumentSetupTmpl<T>::Feature()
{
    return *m_Feature;
}

template <class T>
const FeatureCollection& InstrumentSetupTmpl<T>::Feature() const
{
    return *m_Feature;
}


template <class T>
InstrumentPoint* InstrumentSetupTmpl<T>::getInstrumentPoint() const
{
    return m_InstrumentPoint;
}

template <class T>
void InstrumentSetupTmpl<T>::setInstrumentPoint(InstrumentPoint* pValue)
{
    m_InstrumentPoint = pValue;
}


template <class T>
String InstrumentSetupTmpl<T>::getId() const
{
    return m_Id;
}

template <class T>
void InstrumentSetupTmpl<T>::setId(String value)
{
    m_Id = value;
    m_bId_valueSet = true;
}

template <class T>
bool InstrumentSetupTmpl<T>::hasValue_Id() const
{
    return m_bId_valueSet;
}

template <class T>
void InstrumentSetupTmpl<T>::resetValue_Id()
{
    m_bId_valueSet = false;
}


template <class T>
String InstrumentSetupTmpl<T>::getInstrumentDetailsID() const
{
    return m_InstrumentDetailsID;
}

template <class T>
void InstrumentSetupTmpl<T>::setInstrumentDetailsID(String value)
{
    m_InstrumentDetailsID = value;
    m_bInstrumentDetailsID_valueSet = true;
}

template <class T>
bool InstrumentSetupTmpl<T>::hasValue_InstrumentDetailsID() const
{
    return m_bInstrumentDetailsID_valueSet;
}

template <class T>
void InstrumentSetupTmpl<T>::resetValue_InstrumentDetailsID()
{
    m_bInstrumentDetailsID_valueSet = false;
}


template <class T>
String InstrumentSetupTmpl<T>::getStationName() const
{
    return m_StationName;
}

template <class T>
void InstrumentSetupTmpl<T>::setStationName(String value)
{
    m_StationName = value;
    m_bStationName_valueSet = true;
}

template <class T>
bool InstrumentSetupTmpl<T>::hasValue_StationName() const
{
    return m_bStationName_valueSet;
}

template <class T>
void InstrumentSetupTmpl<T>::resetValue_StationName()
{
    m_bStationName_valueSet = false;
}


template <class T>
double InstrumentSetupTmpl<T>::getInstrumentHeight() const
{
    return m_InstrumentHeight;
}

template <class T>
void InstrumentSetupTmpl<T>::setInstrumentHeight(double value)
{
    m_InstrumentHeight = value;
    m_bInstrumentHeight_valueSet = true;
}

template <class T>
bool InstrumentSetupTmpl<T>::hasValue_InstrumentHeight() const
{
    return m_bInstrumentHeight_valueSet;
}

template <class T>
void InstrumentSetupTmpl<T>::resetValue_InstrumentHeight()
{
    m_bInstrumentHeight_valueSet = false;
}


template <class T>
double InstrumentSetupTmpl<T>::getOrientationAzimuth() const
{
    return m_OrientationAzimuth;
}

template <class T>
void InstrumentSetupTmpl<T>::setOrientationAzimuth(double value)
{
    m_OrientationAzimuth = value;
    m_bOrientationAzimuth_valueSet = true;
}

template <class T>
bool InstrumentSetupTmpl<T>::hasValue_OrientationAzimuth() const
{
    return m_bOrientationAzimuth_valueSet;
}

template <class T>
void InstrumentSetupTmpl<T>::resetValue_OrientationAzimuth()
{
    m_bOrientationAzimuth_valueSet = false;
}


template <class T>
double InstrumentSetupTmpl<T>::getCircleAzimuth() const
{
    return m_CircleAzimuth;
}

template <class T>
void InstrumentSetupTmpl<T>::setCircleAzimuth(double value)
{
    m_CircleAzimuth = value;
    m_bCircleAzimuth_valueSet = true;
}

template <class T>
bool InstrumentSetupTmpl<T>::hasValue_CircleAzimuth() const
{
    return m_bCircleAzimuth_valueSet;
}

template <class T>
void InstrumentSetupTmpl<T>::resetValue_CircleAzimuth()
{
    m_bCircleAzimuth_valueSet = false;
}


template <class T>
EnumObservationStatusType::Values InstrumentSetupTmpl<T>::getStatus() const
{
    return m_Status;
}

template <class T>
void InstrumentSetupTmpl<T>::setStatus(EnumObservationStatusType::Values value)
{
    m_Status = value;
    m_bStatus_valueSet = true;
}

template <class T>
bool InstrumentSetupTmpl<T>::hasValue_Status() const
{
    return m_bStatus_valueSet;
}

template <class T>
void InstrumentSetupTmpl<T>::resetValue_Status()
{
    m_bStatus_valueSet = false;
}



template <class T>
void InstrumentSetupTmpl<T>::toXml (IStream& stream)
{
    static const wchar_t* kstrElementName = L"InstrumentSetup";
    stream.write(L"<");
    stream.write(kstrElementName);
    if (m_bId_valueSet)
    {
        stream.write(L" id=\"");
        StringObjectImpl::streamOut(m_Id, stream);
        stream.write(L"\"");
    }
    if (m_bInstrumentDetailsID_valueSet)
    {
        stream.write(L" instrumentDetailsID=\"");
        StringObjectImpl::streamOut(m_InstrumentDetailsID, stream);
        stream.write(L"\"");
    }
    if (m_bStationName_valueSet)
    {
        stream.write(L" stationName=\"");
        StringObjectImpl::streamOut(m_StationName, stream);
        stream.write(L"\"");
    }
    if (m_bInstrumentHeight_valueSet)
    {
        stream.write(L" instrumentHeight=\"");
        DoubleObjectImpl::streamOut(m_InstrumentHeight, stream);
        stream.write(L"\"");
    }
    if (m_bOrientationAzimuth_valueSet)
    {
        stream.write(L" orientationAzimuth=\"");
        DoubleObjectImpl::streamOut(m_OrientationAzimuth, stream);
        stream.write(L"\"");
    }
    if (m_bCircleAzimuth_valueSet)
    {
        stream.write(L" circleAzimuth=\"");
        DoubleObjectImpl::streamOut(m_CircleAzimuth, stream);
        stream.write(L"\"");
    }
    if (m_bStatus_valueSet)
    {
        stream.write(L" status=\"");
        EnumObservationStatusTypeImpl::streamOut(m_Status, stream);
        stream.write(L"\"");
    }
    stream.write(L">");
    if (m_InstrumentPoint)
    {
    	m_InstrumentPoint->toXml(stream);
    }
    if (m_Backsight)
    {
    	m_Backsight->toXml(stream);
    }
    if (m_TargetSetup)
    {
    	m_TargetSetup->toXml(stream);
    }
    if (m_RawObservation)
    {
    	m_RawObservation->toXml(stream);
    }
    if (m_ObservationGroup)
    {
    	m_ObservationGroup->toXml(stream);
    }
    if (m_ControlChecks)
    {
    	m_ControlChecks->toXml(stream);
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
Object::ValidityEnum InstrumentSetupTmpl<T>::validate (IValidationEventSink* pEventSink) const
{
    Object::ValidityEnum returnCode = Object::kValid;
    returnCode = this->ObjectTmpl<T>::validate(pEventSink);
    if (m_InstrumentPoint)
    {
        if (m_InstrumentPoint->validate(pEventSink) != Object::kValid)
            returnCode = Object::kValidWithInvalidChildren;
    }
    if (m_Backsight)
    {
        if (m_Backsight->validate(pEventSink) != Object::kValid)
            returnCode = Object::kValidWithInvalidChildren;
    }
    if (m_TargetSetup)
    {
        if (m_TargetSetup->validate(pEventSink) != Object::kValid)
            returnCode = Object::kValidWithInvalidChildren;
    }
    if (m_RawObservation)
    {
        if (m_RawObservation->validate(pEventSink) != Object::kValid)
            returnCode = Object::kValidWithInvalidChildren;
    }
    if (m_ObservationGroup)
    {
        if (m_ObservationGroup->validate(pEventSink) != Object::kValid)
            returnCode = Object::kValidWithInvalidChildren;
    }
    if (m_ControlChecks)
    {
        if (m_ControlChecks->validate(pEventSink) != Object::kValid)
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
    if (!m_bId_valueSet)
    {
        pEventSink->onEvent(IValidationEventSink::EventCode::kRequiredValueNotSet, this, L"Id", L"Required value not set");
        returnCode = Object::kInvalid;
    }
    if (!m_bStationName_valueSet)
    {
        pEventSink->onEvent(IValidationEventSink::EventCode::kRequiredValueNotSet, this, L"StationName", L"Required value not set");
        returnCode = Object::kInvalid;
    }
    if (!m_bInstrumentHeight_valueSet)
    {
        pEventSink->onEvent(IValidationEventSink::EventCode::kRequiredValueNotSet, this, L"InstrumentHeight", L"Required value not set");
        returnCode = Object::kInvalid;
    }
    return returnCode;
}

}; // namespace : LX
