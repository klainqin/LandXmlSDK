#include "stdafx.h"
#include "LXTypes.h"
#include "LaserSetup.h"
#include "InstrumentPoint.h"
#include "Backsight.h"
#include "TargetSetupCollection.h"
#include "RawObservation.h"
#include "FieldNoteCollection.h"
#include "FeatureCollection.h"
#include "LXTypesTmpl.h"
#include "LaserSetupImpl.h"
#include "InstrumentPointImpl.h"
#include "BacksightImpl.h"
#include "TargetSetupCollectionImpl.h"
#include "RawObservationImpl.h"
#include "FieldNoteCollectionImpl.h"
#include "FeatureCollectionImpl.h"
#include "LXTypesTmpl.inl"

namespace LX
{


template<class T>
LaserSetupTmpl<T>::LaserSetupTmpl (DocumentImpl* pDoc)
    : ObjectTmpl<T>(pDoc)
{
    m_InstrumentPoint = NULL;
    m_Backsight = NULL;
    m_TargetSetup = createTargetSetupCollectionObject(pDoc);
    m_RawObservation = NULL;
    m_FieldNote = createFieldNoteCollectionObject(pDoc);
    m_Feature = createFeatureCollectionObject(pDoc);
    m_Id = L"";
    m_bId_valueSet = false;
    m_StationName = L"";
    m_bStationName_valueSet = false;
    m_InstrumentHeight = 0.0;
    m_bInstrumentHeight_valueSet = false;
    m_LaserDetailsID = L"";
    m_bLaserDetailsID_valueSet = false;
    m_MagDeclination = 0.0;
    m_bMagDeclination_valueSet = false;
}


template<class T>
LaserSetupTmpl<T>::~LaserSetupTmpl ()
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
TargetSetupCollection& LaserSetupTmpl<T>::TargetSetup()
{
    return *m_TargetSetup;
}

template <class T>
const TargetSetupCollection& LaserSetupTmpl<T>::TargetSetup() const
{
    return *m_TargetSetup;
}

template <class T>
FieldNoteCollection& LaserSetupTmpl<T>::FieldNote()
{
    return *m_FieldNote;
}

template <class T>
const FieldNoteCollection& LaserSetupTmpl<T>::FieldNote() const
{
    return *m_FieldNote;
}

template <class T>
FeatureCollection& LaserSetupTmpl<T>::Feature()
{
    return *m_Feature;
}

template <class T>
const FeatureCollection& LaserSetupTmpl<T>::Feature() const
{
    return *m_Feature;
}


template <class T>
InstrumentPoint* LaserSetupTmpl<T>::getInstrumentPoint() const
{
    return m_InstrumentPoint;
}

template <class T>
void LaserSetupTmpl<T>::setInstrumentPoint(InstrumentPoint* pValue)
{
    m_InstrumentPoint = pValue;
}

template <class T>
Backsight* LaserSetupTmpl<T>::getBacksight() const
{
    return m_Backsight;
}

template <class T>
void LaserSetupTmpl<T>::setBacksight(Backsight* pValue)
{
    m_Backsight = pValue;
}

template <class T>
RawObservation* LaserSetupTmpl<T>::getRawObservation() const
{
    return m_RawObservation;
}

template <class T>
void LaserSetupTmpl<T>::setRawObservation(RawObservation* pValue)
{
    m_RawObservation = pValue;
}


template <class T>
String LaserSetupTmpl<T>::getId() const
{
    return m_Id;
}

template <class T>
void LaserSetupTmpl<T>::setId(String value)
{
    m_Id = value;
    m_bId_valueSet = true;
}

template <class T>
bool LaserSetupTmpl<T>::hasValue_Id() const
{
    return m_bId_valueSet;
}

template <class T>
void LaserSetupTmpl<T>::resetValue_Id()
{
    m_bId_valueSet = false;
}


template <class T>
String LaserSetupTmpl<T>::getStationName() const
{
    return m_StationName;
}

template <class T>
void LaserSetupTmpl<T>::setStationName(String value)
{
    m_StationName = value;
    m_bStationName_valueSet = true;
}

template <class T>
bool LaserSetupTmpl<T>::hasValue_StationName() const
{
    return m_bStationName_valueSet;
}

template <class T>
void LaserSetupTmpl<T>::resetValue_StationName()
{
    m_bStationName_valueSet = false;
}


template <class T>
double LaserSetupTmpl<T>::getInstrumentHeight() const
{
    return m_InstrumentHeight;
}

template <class T>
void LaserSetupTmpl<T>::setInstrumentHeight(double value)
{
    m_InstrumentHeight = value;
    m_bInstrumentHeight_valueSet = true;
}

template <class T>
bool LaserSetupTmpl<T>::hasValue_InstrumentHeight() const
{
    return m_bInstrumentHeight_valueSet;
}

template <class T>
void LaserSetupTmpl<T>::resetValue_InstrumentHeight()
{
    m_bInstrumentHeight_valueSet = false;
}


template <class T>
String LaserSetupTmpl<T>::getLaserDetailsID() const
{
    return m_LaserDetailsID;
}

template <class T>
void LaserSetupTmpl<T>::setLaserDetailsID(String value)
{
    m_LaserDetailsID = value;
    m_bLaserDetailsID_valueSet = true;
}

template <class T>
bool LaserSetupTmpl<T>::hasValue_LaserDetailsID() const
{
    return m_bLaserDetailsID_valueSet;
}

template <class T>
void LaserSetupTmpl<T>::resetValue_LaserDetailsID()
{
    m_bLaserDetailsID_valueSet = false;
}


template <class T>
double LaserSetupTmpl<T>::getMagDeclination() const
{
    return m_MagDeclination;
}

template <class T>
void LaserSetupTmpl<T>::setMagDeclination(double value)
{
    m_MagDeclination = value;
    m_bMagDeclination_valueSet = true;
}

template <class T>
bool LaserSetupTmpl<T>::hasValue_MagDeclination() const
{
    return m_bMagDeclination_valueSet;
}

template <class T>
void LaserSetupTmpl<T>::resetValue_MagDeclination()
{
    m_bMagDeclination_valueSet = false;
}



template <class T>
void LaserSetupTmpl<T>::toXml (IStream& stream)
{
    static const wchar_t* kstrElementName = L"LaserSetup";
    stream.write(L"<");
    stream.write(kstrElementName);
    if (m_bId_valueSet)
    {
        stream.write(L" id=\"");
        StringObjectImpl::streamOut(m_Id, stream);
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
    if (m_bLaserDetailsID_valueSet)
    {
        stream.write(L" laserDetailsID=\"");
        StringObjectImpl::streamOut(m_LaserDetailsID, stream);
        stream.write(L"\"");
    }
    if (m_bMagDeclination_valueSet)
    {
        stream.write(L" magDeclination=\"");
        DoubleObjectImpl::streamOut(m_MagDeclination, stream);
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
Object::ValidityEnum LaserSetupTmpl<T>::validate (IValidationEventSink* pEventSink) const
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
    return returnCode;
}

}; // namespace : LX
