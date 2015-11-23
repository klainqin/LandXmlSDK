#include "stdafx.h"
#include "LXTypes.h"
#include "GPSSetup.h"
#include "GPSPosition.h"
#include "TargetSetupCollection.h"
#include "FieldNoteCollection.h"
#include "FeatureCollection.h"
#include "LXTypesTmpl.h"
#include "GPSSetupImpl.h"
#include "GPSPositionImpl.h"
#include "TargetSetupCollectionImpl.h"
#include "FieldNoteCollectionImpl.h"
#include "FeatureCollectionImpl.h"
#include "LXTypesTmpl.inl"

namespace LX
{


template<class T>
GPSSetupTmpl<T>::GPSSetupTmpl (DocumentImpl* pDoc)
    : ObjectTmpl<T>(pDoc)
{
    m_GPSPosition = NULL;
    m_TargetSetup = createTargetSetupCollectionObject(pDoc);
    m_FieldNote = createFieldNoteCollectionObject(pDoc);
    m_Feature = createFeatureCollectionObject(pDoc);
    m_Id = L"";
    m_bId_valueSet = false;
    m_AntennaHeight = 0.0;
    m_bAntennaHeight_valueSet = false;
    m_StationName = L"";
    m_bStationName_valueSet = false;
    m_GPSAntennaDetailsID = L"";
    m_bGPSAntennaDetailsID_valueSet = false;
    m_GPSReceiverDetailsID = L"";
    m_bGPSReceiverDetailsID_valueSet = false;
    m_ObservationDataLink = L"";
    m_bObservationDataLink_valueSet = false;
    m_StationDescription = L"";
    m_bStationDescription_valueSet = false;
    m_StartTime = 0.0;
    m_bStartTime_valueSet = false;
    m_StopTime = 0.0;
    m_bStopTime_valueSet = false;
}


template<class T>
GPSSetupTmpl<T>::~GPSSetupTmpl ()
{
    if (m_GPSPosition != NULL)
    {
        m_GPSPosition->release();
        m_GPSPosition = NULL;
    }
    if (m_TargetSetup != NULL)
    {
        m_TargetSetup->release();
        m_TargetSetup = NULL;
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
TargetSetupCollection& GPSSetupTmpl<T>::TargetSetup()
{
    return *m_TargetSetup;
}

template <class T>
const TargetSetupCollection& GPSSetupTmpl<T>::TargetSetup() const
{
    return *m_TargetSetup;
}

template <class T>
FieldNoteCollection& GPSSetupTmpl<T>::FieldNote()
{
    return *m_FieldNote;
}

template <class T>
const FieldNoteCollection& GPSSetupTmpl<T>::FieldNote() const
{
    return *m_FieldNote;
}

template <class T>
FeatureCollection& GPSSetupTmpl<T>::Feature()
{
    return *m_Feature;
}

template <class T>
const FeatureCollection& GPSSetupTmpl<T>::Feature() const
{
    return *m_Feature;
}


template <class T>
GPSPosition* GPSSetupTmpl<T>::getGPSPosition() const
{
    return m_GPSPosition;
}

template <class T>
void GPSSetupTmpl<T>::setGPSPosition(GPSPosition* pValue)
{
    m_GPSPosition = pValue;
}


template <class T>
String GPSSetupTmpl<T>::getId() const
{
    return m_Id;
}

template <class T>
void GPSSetupTmpl<T>::setId(String value)
{
    m_Id = value;
    m_bId_valueSet = true;
}

template <class T>
bool GPSSetupTmpl<T>::hasValue_Id() const
{
    return m_bId_valueSet;
}

template <class T>
void GPSSetupTmpl<T>::resetValue_Id()
{
    m_bId_valueSet = false;
}


template <class T>
double GPSSetupTmpl<T>::getAntennaHeight() const
{
    return m_AntennaHeight;
}

template <class T>
void GPSSetupTmpl<T>::setAntennaHeight(double value)
{
    m_AntennaHeight = value;
    m_bAntennaHeight_valueSet = true;
}

template <class T>
bool GPSSetupTmpl<T>::hasValue_AntennaHeight() const
{
    return m_bAntennaHeight_valueSet;
}

template <class T>
void GPSSetupTmpl<T>::resetValue_AntennaHeight()
{
    m_bAntennaHeight_valueSet = false;
}


template <class T>
String GPSSetupTmpl<T>::getStationName() const
{
    return m_StationName;
}

template <class T>
void GPSSetupTmpl<T>::setStationName(String value)
{
    m_StationName = value;
    m_bStationName_valueSet = true;
}

template <class T>
bool GPSSetupTmpl<T>::hasValue_StationName() const
{
    return m_bStationName_valueSet;
}

template <class T>
void GPSSetupTmpl<T>::resetValue_StationName()
{
    m_bStationName_valueSet = false;
}


template <class T>
String GPSSetupTmpl<T>::getGPSAntennaDetailsID() const
{
    return m_GPSAntennaDetailsID;
}

template <class T>
void GPSSetupTmpl<T>::setGPSAntennaDetailsID(String value)
{
    m_GPSAntennaDetailsID = value;
    m_bGPSAntennaDetailsID_valueSet = true;
}

template <class T>
bool GPSSetupTmpl<T>::hasValue_GPSAntennaDetailsID() const
{
    return m_bGPSAntennaDetailsID_valueSet;
}

template <class T>
void GPSSetupTmpl<T>::resetValue_GPSAntennaDetailsID()
{
    m_bGPSAntennaDetailsID_valueSet = false;
}


template <class T>
String GPSSetupTmpl<T>::getGPSReceiverDetailsID() const
{
    return m_GPSReceiverDetailsID;
}

template <class T>
void GPSSetupTmpl<T>::setGPSReceiverDetailsID(String value)
{
    m_GPSReceiverDetailsID = value;
    m_bGPSReceiverDetailsID_valueSet = true;
}

template <class T>
bool GPSSetupTmpl<T>::hasValue_GPSReceiverDetailsID() const
{
    return m_bGPSReceiverDetailsID_valueSet;
}

template <class T>
void GPSSetupTmpl<T>::resetValue_GPSReceiverDetailsID()
{
    m_bGPSReceiverDetailsID_valueSet = false;
}


template <class T>
String GPSSetupTmpl<T>::getObservationDataLink() const
{
    return m_ObservationDataLink;
}

template <class T>
void GPSSetupTmpl<T>::setObservationDataLink(String value)
{
    m_ObservationDataLink = value;
    m_bObservationDataLink_valueSet = true;
}

template <class T>
bool GPSSetupTmpl<T>::hasValue_ObservationDataLink() const
{
    return m_bObservationDataLink_valueSet;
}

template <class T>
void GPSSetupTmpl<T>::resetValue_ObservationDataLink()
{
    m_bObservationDataLink_valueSet = false;
}


template <class T>
String GPSSetupTmpl<T>::getStationDescription() const
{
    return m_StationDescription;
}

template <class T>
void GPSSetupTmpl<T>::setStationDescription(String value)
{
    m_StationDescription = value;
    m_bStationDescription_valueSet = true;
}

template <class T>
bool GPSSetupTmpl<T>::hasValue_StationDescription() const
{
    return m_bStationDescription_valueSet;
}

template <class T>
void GPSSetupTmpl<T>::resetValue_StationDescription()
{
    m_bStationDescription_valueSet = false;
}


template <class T>
double GPSSetupTmpl<T>::getStartTime() const
{
    return m_StartTime;
}

template <class T>
void GPSSetupTmpl<T>::setStartTime(double value)
{
    m_StartTime = value;
    m_bStartTime_valueSet = true;
}

template <class T>
bool GPSSetupTmpl<T>::hasValue_StartTime() const
{
    return m_bStartTime_valueSet;
}

template <class T>
void GPSSetupTmpl<T>::resetValue_StartTime()
{
    m_bStartTime_valueSet = false;
}


template <class T>
double GPSSetupTmpl<T>::getStopTime() const
{
    return m_StopTime;
}

template <class T>
void GPSSetupTmpl<T>::setStopTime(double value)
{
    m_StopTime = value;
    m_bStopTime_valueSet = true;
}

template <class T>
bool GPSSetupTmpl<T>::hasValue_StopTime() const
{
    return m_bStopTime_valueSet;
}

template <class T>
void GPSSetupTmpl<T>::resetValue_StopTime()
{
    m_bStopTime_valueSet = false;
}



template <class T>
void GPSSetupTmpl<T>::toXml (IStream& stream)
{
    static const wchar_t* kstrElementName = L"GPSSetup";
    stream.write(L"<");
    stream.write(kstrElementName);
    if (m_bId_valueSet)
    {
        stream.write(L" id=\"");
        StringObjectImpl::streamOut(m_Id, stream);
        stream.write(L"\"");
    }
    if (m_bAntennaHeight_valueSet)
    {
        stream.write(L" antennaHeight=\"");
        DoubleObjectImpl::streamOut(m_AntennaHeight, stream);
        stream.write(L"\"");
    }
    if (m_bStationName_valueSet)
    {
        stream.write(L" stationName=\"");
        StringObjectImpl::streamOut(m_StationName, stream);
        stream.write(L"\"");
    }
    if (m_bGPSAntennaDetailsID_valueSet)
    {
        stream.write(L" GPSAntennaDetailsID=\"");
        StringObjectImpl::streamOut(m_GPSAntennaDetailsID, stream);
        stream.write(L"\"");
    }
    if (m_bGPSReceiverDetailsID_valueSet)
    {
        stream.write(L" GPSReceiverDetailsID=\"");
        StringObjectImpl::streamOut(m_GPSReceiverDetailsID, stream);
        stream.write(L"\"");
    }
    if (m_bObservationDataLink_valueSet)
    {
        stream.write(L" observationDataLink=\"");
        StringObjectImpl::streamOut(m_ObservationDataLink, stream);
        stream.write(L"\"");
    }
    if (m_bStationDescription_valueSet)
    {
        stream.write(L" stationDescription=\"");
        StringObjectImpl::streamOut(m_StationDescription, stream);
        stream.write(L"\"");
    }
    if (m_bStartTime_valueSet)
    {
        stream.write(L" startTime=\"");
        DoubleObjectImpl::streamOut(m_StartTime, stream);
        stream.write(L"\"");
    }
    if (m_bStopTime_valueSet)
    {
        stream.write(L" stopTime=\"");
        DoubleObjectImpl::streamOut(m_StopTime, stream);
        stream.write(L"\"");
    }
    stream.write(L">");
    if (m_GPSPosition)
    {
    	m_GPSPosition->toXml(stream);
    }
    if (m_TargetSetup)
    {
    	m_TargetSetup->toXml(stream);
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
Object::ValidityEnum GPSSetupTmpl<T>::validate (IValidationEventSink* pEventSink) const
{
    Object::ValidityEnum returnCode = Object::kValid;
    returnCode = this->ObjectTmpl<T>::validate(pEventSink);
    if (m_GPSPosition)
    {
        if (m_GPSPosition->validate(pEventSink) != Object::kValid)
            returnCode = Object::kValidWithInvalidChildren;
    }
    if (m_TargetSetup)
    {
        if (m_TargetSetup->validate(pEventSink) != Object::kValid)
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
    if (!m_bAntennaHeight_valueSet)
    {
        pEventSink->onEvent(IValidationEventSink::EventCode::kRequiredValueNotSet, this, L"AntennaHeight", L"Required value not set");
        returnCode = Object::kInvalid;
    }
    if (!m_bStationName_valueSet)
    {
        pEventSink->onEvent(IValidationEventSink::EventCode::kRequiredValueNotSet, this, L"StationName", L"Required value not set");
        returnCode = Object::kInvalid;
    }
    return returnCode;
}

}; // namespace : LX
