#include "stdafx.h"
#include "LXTypes.h"
#include "Survey.h"
#include "SurveyHeader.h"
#include "Equipment.h"
#include "SurveyMonumentCollection.h"
#include "CgPointsCollection.h"
#include "InstrumentSetupCollection.h"
#include "LaserSetupCollection.h"
#include "GPSSetupCollection.h"
#include "TargetSetupCollection.h"
#include "GPSVectorCollection.h"
#include "GPSPositionCollection.h"
#include "ObservationGroupCollection.h"
#include "ControlChecksCollection.h"
#include "FieldNoteCollection.h"
#include "FeatureCollection.h"
#include "LXTypesTmpl.h"
#include "SurveyImpl.h"
#include "SurveyHeaderImpl.h"
#include "EquipmentImpl.h"
#include "SurveyMonumentCollectionImpl.h"
#include "CgPointsCollectionImpl.h"
#include "InstrumentSetupCollectionImpl.h"
#include "LaserSetupCollectionImpl.h"
#include "GPSSetupCollectionImpl.h"
#include "TargetSetupCollectionImpl.h"
#include "GPSVectorCollectionImpl.h"
#include "GPSPositionCollectionImpl.h"
#include "ObservationGroupCollectionImpl.h"
#include "ControlChecksCollectionImpl.h"
#include "FieldNoteCollectionImpl.h"
#include "FeatureCollectionImpl.h"
#include "LXTypesTmpl.inl"

namespace LX
{


template<class T>
SurveyTmpl<T>::SurveyTmpl<T> (DocumentImpl* pDoc)
    : ObjectTmpl<T>(pDoc)
{
    m_SurveyHeader = NULL;
    m_Equipment = NULL;
    m_SurveyMonument = createSurveyMonumentCollectionObject(pDoc);
    m_CgPoints = createCgPointsCollectionObject(pDoc);
    m_InstrumentSetup = createInstrumentSetupCollectionObject(pDoc);
    m_LaserSetup = createLaserSetupCollectionObject(pDoc);
    m_GPSSetup = createGPSSetupCollectionObject(pDoc);
    m_TargetSetup = createTargetSetupCollectionObject(pDoc);
    m_GPSVector = createGPSVectorCollectionObject(pDoc);
    m_GPSPosition = createGPSPositionCollectionObject(pDoc);
    m_ObservationGroup = createObservationGroupCollectionObject(pDoc);
    m_ControlChecks = createControlChecksCollectionObject(pDoc);
    m_FieldNote = createFieldNoteCollectionObject(pDoc);
    m_Feature = createFeatureCollectionObject(pDoc);
    m_Desc = L"";
    m_bDesc_valueSet = false;
    m_Date = L"";
    m_bDate_valueSet = false;
    m_StartTime = L"";
    m_bStartTime_valueSet = false;
    m_EndTime = L"";
    m_bEndTime_valueSet = false;
    m_State = EnumStateType::Values::k_null;
    m_bState_valueSet = false;
    m_HorizontalAccuracy = L"";
    m_bHorizontalAccuracy_valueSet = false;
    m_VerticalAccuracy = L"";
    m_bVerticalAccuracy_valueSet = false;
}


template<class T>
SurveyTmpl<T>::~SurveyTmpl<T> ()
{
    if (m_SurveyHeader != NULL)
    {
        m_SurveyHeader->release();
        m_SurveyHeader = NULL;
    }
    if (m_Equipment != NULL)
    {
        m_Equipment->release();
        m_Equipment = NULL;
    }
    if (m_SurveyMonument != NULL)
    {
        m_SurveyMonument->release();
        m_SurveyMonument = NULL;
    }
    if (m_CgPoints != NULL)
    {
        m_CgPoints->release();
        m_CgPoints = NULL;
    }
    if (m_InstrumentSetup != NULL)
    {
        m_InstrumentSetup->release();
        m_InstrumentSetup = NULL;
    }
    if (m_LaserSetup != NULL)
    {
        m_LaserSetup->release();
        m_LaserSetup = NULL;
    }
    if (m_GPSSetup != NULL)
    {
        m_GPSSetup->release();
        m_GPSSetup = NULL;
    }
    if (m_TargetSetup != NULL)
    {
        m_TargetSetup->release();
        m_TargetSetup = NULL;
    }
    if (m_GPSVector != NULL)
    {
        m_GPSVector->release();
        m_GPSVector = NULL;
    }
    if (m_GPSPosition != NULL)
    {
        m_GPSPosition->release();
        m_GPSPosition = NULL;
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
SurveyMonumentCollection& SurveyTmpl<T>::SurveyMonument()
{
    return *m_SurveyMonument;
}

template <class T>
const SurveyMonumentCollection& SurveyTmpl<T>::SurveyMonument() const
{
    return *m_SurveyMonument;
}

template <class T>
CgPointsCollection& SurveyTmpl<T>::CgPoints()
{
    return *m_CgPoints;
}

template <class T>
const CgPointsCollection& SurveyTmpl<T>::CgPoints() const
{
    return *m_CgPoints;
}

template <class T>
InstrumentSetupCollection& SurveyTmpl<T>::InstrumentSetup()
{
    return *m_InstrumentSetup;
}

template <class T>
const InstrumentSetupCollection& SurveyTmpl<T>::InstrumentSetup() const
{
    return *m_InstrumentSetup;
}

template <class T>
LaserSetupCollection& SurveyTmpl<T>::LaserSetup()
{
    return *m_LaserSetup;
}

template <class T>
const LaserSetupCollection& SurveyTmpl<T>::LaserSetup() const
{
    return *m_LaserSetup;
}

template <class T>
GPSSetupCollection& SurveyTmpl<T>::GPSSetup()
{
    return *m_GPSSetup;
}

template <class T>
const GPSSetupCollection& SurveyTmpl<T>::GPSSetup() const
{
    return *m_GPSSetup;
}

template <class T>
TargetSetupCollection& SurveyTmpl<T>::TargetSetup()
{
    return *m_TargetSetup;
}

template <class T>
const TargetSetupCollection& SurveyTmpl<T>::TargetSetup() const
{
    return *m_TargetSetup;
}

template <class T>
GPSVectorCollection& SurveyTmpl<T>::GPSVector()
{
    return *m_GPSVector;
}

template <class T>
const GPSVectorCollection& SurveyTmpl<T>::GPSVector() const
{
    return *m_GPSVector;
}

template <class T>
GPSPositionCollection& SurveyTmpl<T>::GPSPosition()
{
    return *m_GPSPosition;
}

template <class T>
const GPSPositionCollection& SurveyTmpl<T>::GPSPosition() const
{
    return *m_GPSPosition;
}

template <class T>
ObservationGroupCollection& SurveyTmpl<T>::ObservationGroup()
{
    return *m_ObservationGroup;
}

template <class T>
const ObservationGroupCollection& SurveyTmpl<T>::ObservationGroup() const
{
    return *m_ObservationGroup;
}

template <class T>
ControlChecksCollection& SurveyTmpl<T>::ControlChecks()
{
    return *m_ControlChecks;
}

template <class T>
const ControlChecksCollection& SurveyTmpl<T>::ControlChecks() const
{
    return *m_ControlChecks;
}

template <class T>
FieldNoteCollection& SurveyTmpl<T>::FieldNote()
{
    return *m_FieldNote;
}

template <class T>
const FieldNoteCollection& SurveyTmpl<T>::FieldNote() const
{
    return *m_FieldNote;
}

template <class T>
FeatureCollection& SurveyTmpl<T>::Feature()
{
    return *m_Feature;
}

template <class T>
const FeatureCollection& SurveyTmpl<T>::Feature() const
{
    return *m_Feature;
}


template <class T>
SurveyHeader* SurveyTmpl<T>::getSurveyHeader() const
{
    return m_SurveyHeader;
}

template <class T>
void SurveyTmpl<T>::setSurveyHeader(SurveyHeader* pValue)
{
    m_SurveyHeader = pValue;
}

template <class T>
Equipment* SurveyTmpl<T>::getEquipment() const
{
    return m_Equipment;
}

template <class T>
void SurveyTmpl<T>::setEquipment(Equipment* pValue)
{
    m_Equipment = pValue;
}


template <class T>
String SurveyTmpl<T>::getDesc() const
{
    return m_Desc;
}

template <class T>
void SurveyTmpl<T>::setDesc(String value)
{
    m_Desc = value;
    m_bDesc_valueSet = true;
}

template <class T>
bool SurveyTmpl<T>::hasValue_Desc() const
{
    return m_bDesc_valueSet;
}

template <class T>
void SurveyTmpl<T>::resetValue_Desc()
{
    m_bDesc_valueSet = false;
}


template <class T>
String SurveyTmpl<T>::getDate() const
{
    return m_Date;
}

template <class T>
void SurveyTmpl<T>::setDate(String value)
{
    m_Date = value;
    m_bDate_valueSet = true;
}

template <class T>
bool SurveyTmpl<T>::hasValue_Date() const
{
    return m_bDate_valueSet;
}

template <class T>
void SurveyTmpl<T>::resetValue_Date()
{
    m_bDate_valueSet = false;
}


template <class T>
String SurveyTmpl<T>::getStartTime() const
{
    return m_StartTime;
}

template <class T>
void SurveyTmpl<T>::setStartTime(String value)
{
    m_StartTime = value;
    m_bStartTime_valueSet = true;
}

template <class T>
bool SurveyTmpl<T>::hasValue_StartTime() const
{
    return m_bStartTime_valueSet;
}

template <class T>
void SurveyTmpl<T>::resetValue_StartTime()
{
    m_bStartTime_valueSet = false;
}


template <class T>
String SurveyTmpl<T>::getEndTime() const
{
    return m_EndTime;
}

template <class T>
void SurveyTmpl<T>::setEndTime(String value)
{
    m_EndTime = value;
    m_bEndTime_valueSet = true;
}

template <class T>
bool SurveyTmpl<T>::hasValue_EndTime() const
{
    return m_bEndTime_valueSet;
}

template <class T>
void SurveyTmpl<T>::resetValue_EndTime()
{
    m_bEndTime_valueSet = false;
}


template <class T>
EnumStateType::Values SurveyTmpl<T>::getState() const
{
    return m_State;
}

template <class T>
void SurveyTmpl<T>::setState(EnumStateType::Values value)
{
    m_State = value;
    m_bState_valueSet = true;
}

template <class T>
bool SurveyTmpl<T>::hasValue_State() const
{
    return m_bState_valueSet;
}

template <class T>
void SurveyTmpl<T>::resetValue_State()
{
    m_bState_valueSet = false;
}


template <class T>
String SurveyTmpl<T>::getHorizontalAccuracy() const
{
    return m_HorizontalAccuracy;
}

template <class T>
void SurveyTmpl<T>::setHorizontalAccuracy(String value)
{
    m_HorizontalAccuracy = value;
    m_bHorizontalAccuracy_valueSet = true;
}

template <class T>
bool SurveyTmpl<T>::hasValue_HorizontalAccuracy() const
{
    return m_bHorizontalAccuracy_valueSet;
}

template <class T>
void SurveyTmpl<T>::resetValue_HorizontalAccuracy()
{
    m_bHorizontalAccuracy_valueSet = false;
}


template <class T>
String SurveyTmpl<T>::getVerticalAccuracy() const
{
    return m_VerticalAccuracy;
}

template <class T>
void SurveyTmpl<T>::setVerticalAccuracy(String value)
{
    m_VerticalAccuracy = value;
    m_bVerticalAccuracy_valueSet = true;
}

template <class T>
bool SurveyTmpl<T>::hasValue_VerticalAccuracy() const
{
    return m_bVerticalAccuracy_valueSet;
}

template <class T>
void SurveyTmpl<T>::resetValue_VerticalAccuracy()
{
    m_bVerticalAccuracy_valueSet = false;
}



template <class T>
void SurveyTmpl<T>::toXml (IStream& stream)
{
    static const wchar_t* kstrElementName = L"Survey";
    stream.write(L"<");
    stream.write(kstrElementName);
    if (m_bDesc_valueSet)
    {
        stream.write(L" desc=\"");
        StringObjectImpl::streamOut(m_Desc, stream);
        stream.write(L"\"");
    }
    if (m_bDate_valueSet)
    {
        stream.write(L" date=\"");
        StringObjectImpl::streamOut(m_Date, stream);
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
    if (m_bState_valueSet)
    {
        stream.write(L" state=\"");
        EnumStateTypeImpl::streamOut(m_State, stream);
        stream.write(L"\"");
    }
    if (m_bHorizontalAccuracy_valueSet)
    {
        stream.write(L" horizontalAccuracy=\"");
        StringObjectImpl::streamOut(m_HorizontalAccuracy, stream);
        stream.write(L"\"");
    }
    if (m_bVerticalAccuracy_valueSet)
    {
        stream.write(L" verticalAccuracy=\"");
        StringObjectImpl::streamOut(m_VerticalAccuracy, stream);
        stream.write(L"\"");
    }
    stream.write(L">");
    if (m_SurveyHeader)
    {
    	m_SurveyHeader->toXml(stream);
    }
    if (m_Equipment)
    {
    	m_Equipment->toXml(stream);
    }
    if (m_SurveyMonument)
    {
    	m_SurveyMonument->toXml(stream);
    }
    if (m_CgPoints)
    {
    	m_CgPoints->toXml(stream);
    }
    if (m_InstrumentSetup)
    {
    	m_InstrumentSetup->toXml(stream);
    }
    if (m_LaserSetup)
    {
    	m_LaserSetup->toXml(stream);
    }
    if (m_GPSSetup)
    {
    	m_GPSSetup->toXml(stream);
    }
    if (m_TargetSetup)
    {
    	m_TargetSetup->toXml(stream);
    }
    if (m_GPSVector)
    {
    	m_GPSVector->toXml(stream);
    }
    if (m_GPSPosition)
    {
    	m_GPSPosition->toXml(stream);
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
Object::ValidityEnum SurveyTmpl<T>::validate (IValidationEventSink* pEventSink) const
{
    Object::ValidityEnum returnCode = Object::kValid;
    returnCode = this->ObjectTmpl<T>::validate(pEventSink);
    if (m_SurveyHeader)
    {
        if (m_SurveyHeader->validate(pEventSink) != Object::kValid)
            returnCode = Object::kValidWithInvalidChildren;
    }
    if (m_Equipment)
    {
        if (m_Equipment->validate(pEventSink) != Object::kValid)
            returnCode = Object::kValidWithInvalidChildren;
    }
    if (m_SurveyMonument)
    {
        if (m_SurveyMonument->validate(pEventSink) != Object::kValid)
            returnCode = Object::kValidWithInvalidChildren;
    }
    if (m_CgPoints)
    {
        if (m_CgPoints->validate(pEventSink) != Object::kValid)
            returnCode = Object::kValidWithInvalidChildren;
    }
    if (m_InstrumentSetup)
    {
        if (m_InstrumentSetup->validate(pEventSink) != Object::kValid)
            returnCode = Object::kValidWithInvalidChildren;
    }
    if (m_LaserSetup)
    {
        if (m_LaserSetup->validate(pEventSink) != Object::kValid)
            returnCode = Object::kValidWithInvalidChildren;
    }
    if (m_GPSSetup)
    {
        if (m_GPSSetup->validate(pEventSink) != Object::kValid)
            returnCode = Object::kValidWithInvalidChildren;
    }
    if (m_TargetSetup)
    {
        if (m_TargetSetup->validate(pEventSink) != Object::kValid)
            returnCode = Object::kValidWithInvalidChildren;
    }
    if (m_GPSVector)
    {
        if (m_GPSVector->validate(pEventSink) != Object::kValid)
            returnCode = Object::kValidWithInvalidChildren;
    }
    if (m_GPSPosition)
    {
        if (m_GPSPosition->validate(pEventSink) != Object::kValid)
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
    return returnCode;
}

}; // namespace : LX
