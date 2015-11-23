#include "stdafx.h"
#include "LXTypes.h"
#include "ObservationGroup.h"
#include "Backsight.h"
#include "ReducedObservation.h"
#include "RawObservationCollection.h"
#include "TargetPoint.h"
#include "RedHorizontalPosition.h"
#include "ReducedArcObservation.h"
#include "RedVerticalObservation.h"
#include "FieldNoteCollection.h"
#include "FeatureCollection.h"
#include "LXTypesTmpl.h"
#include "ObservationGroupImpl.h"
#include "BacksightImpl.h"
#include "ReducedObservationImpl.h"
#include "RawObservationCollectionImpl.h"
#include "TargetPointImpl.h"
#include "RedHorizontalPositionImpl.h"
#include "ReducedArcObservationImpl.h"
#include "RedVerticalObservationImpl.h"
#include "FieldNoteCollectionImpl.h"
#include "FeatureCollectionImpl.h"
#include "LXTypesTmpl.inl"

namespace LX
{


template<class T>
ObservationGroupTmpl<T>::ObservationGroupTmpl (DocumentImpl* pDoc)
    : ObjectTmpl<T>(pDoc)
{
    m_Backsight = NULL;
    m_ReducedObservation = NULL;
    m_RawObservation = createRawObservationCollectionObject(pDoc);
    m_TargetPoint = NULL;
    m_RedHorizontalPosition = NULL;
    m_ReducedArcObservation = NULL;
    m_RedVerticalObservation = NULL;
    m_FieldNote = createFieldNoteCollectionObject(pDoc);
    m_Feature = createFeatureCollectionObject(pDoc);
    m_Id = L"";
    m_bId_valueSet = false;
    m_Purpose = EnumPurposeType::Values::k_null;
    m_bPurpose_valueSet = false;
    m_SetupID = L"";
    m_bSetupID_valueSet = false;
    m_TargetSetupID = L"";
    m_bTargetSetupID_valueSet = false;
    m_SetID = L"";
    m_bSetID_valueSet = false;
    m_CoordGeomRefs = NULL;
    m_AlignRef = L"";
    m_bAlignRef_valueSet = false;
    m_AlignStationName = L"";
    m_bAlignStationName_valueSet = false;
    m_AlignOffset = 0.0;
    m_bAlignOffset_valueSet = false;
}


template<class T>
ObservationGroupTmpl<T>::~ObservationGroupTmpl ()
{
    if (m_Backsight != NULL)
    {
        m_Backsight->release();
        m_Backsight = NULL;
    }
    if (m_ReducedObservation != NULL)
    {
        m_ReducedObservation->release();
        m_ReducedObservation = NULL;
    }
    if (m_RawObservation != NULL)
    {
        m_RawObservation->release();
        m_RawObservation = NULL;
    }
    if (m_TargetPoint != NULL)
    {
        m_TargetPoint->release();
        m_TargetPoint = NULL;
    }
    if (m_RedHorizontalPosition != NULL)
    {
        m_RedHorizontalPosition->release();
        m_RedHorizontalPosition = NULL;
    }
    if (m_ReducedArcObservation != NULL)
    {
        m_ReducedArcObservation->release();
        m_ReducedArcObservation = NULL;
    }
    if (m_RedVerticalObservation != NULL)
    {
        m_RedVerticalObservation->release();
        m_RedVerticalObservation = NULL;
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
RawObservationCollection& ObservationGroupTmpl<T>::RawObservation()
{
    return *m_RawObservation;
}

template <class T>
const RawObservationCollection& ObservationGroupTmpl<T>::RawObservation() const
{
    return *m_RawObservation;
}

template <class T>
FieldNoteCollection& ObservationGroupTmpl<T>::FieldNote()
{
    return *m_FieldNote;
}

template <class T>
const FieldNoteCollection& ObservationGroupTmpl<T>::FieldNote() const
{
    return *m_FieldNote;
}

template <class T>
FeatureCollection& ObservationGroupTmpl<T>::Feature()
{
    return *m_Feature;
}

template <class T>
const FeatureCollection& ObservationGroupTmpl<T>::Feature() const
{
    return *m_Feature;
}


template <class T>
Backsight* ObservationGroupTmpl<T>::getBacksight() const
{
    return m_Backsight;
}

template <class T>
void ObservationGroupTmpl<T>::setBacksight(Backsight* pValue)
{
    m_Backsight = pValue;
}

template <class T>
ReducedObservation* ObservationGroupTmpl<T>::getReducedObservation() const
{
    return m_ReducedObservation;
}

template <class T>
void ObservationGroupTmpl<T>::setReducedObservation(ReducedObservation* pValue)
{
    m_ReducedObservation = pValue;
}

template <class T>
TargetPoint* ObservationGroupTmpl<T>::getTargetPoint() const
{
    return m_TargetPoint;
}

template <class T>
void ObservationGroupTmpl<T>::setTargetPoint(TargetPoint* pValue)
{
    m_TargetPoint = pValue;
}

template <class T>
RedHorizontalPosition* ObservationGroupTmpl<T>::getRedHorizontalPosition() const
{
    return m_RedHorizontalPosition;
}

template <class T>
void ObservationGroupTmpl<T>::setRedHorizontalPosition(RedHorizontalPosition* pValue)
{
    m_RedHorizontalPosition = pValue;
}

template <class T>
ReducedArcObservation* ObservationGroupTmpl<T>::getReducedArcObservation() const
{
    return m_ReducedArcObservation;
}

template <class T>
void ObservationGroupTmpl<T>::setReducedArcObservation(ReducedArcObservation* pValue)
{
    m_ReducedArcObservation = pValue;
}

template <class T>
RedVerticalObservation* ObservationGroupTmpl<T>::getRedVerticalObservation() const
{
    return m_RedVerticalObservation;
}

template <class T>
void ObservationGroupTmpl<T>::setRedVerticalObservation(RedVerticalObservation* pValue)
{
    m_RedVerticalObservation = pValue;
}

template <class T>
StringCollection* ObservationGroupTmpl<T>::getCoordGeomRefs() const
{
    return m_CoordGeomRefs;
}

template <class T>
void ObservationGroupTmpl<T>::setCoordGeomRefs(StringCollection* pValue)
{
    m_CoordGeomRefs = pValue;
}


template <class T>
String ObservationGroupTmpl<T>::getId() const
{
    return m_Id;
}

template <class T>
void ObservationGroupTmpl<T>::setId(String value)
{
    m_Id = value;
    m_bId_valueSet = true;
}

template <class T>
bool ObservationGroupTmpl<T>::hasValue_Id() const
{
    return m_bId_valueSet;
}

template <class T>
void ObservationGroupTmpl<T>::resetValue_Id()
{
    m_bId_valueSet = false;
}


template <class T>
EnumPurposeType::Values ObservationGroupTmpl<T>::getPurpose() const
{
    return m_Purpose;
}

template <class T>
void ObservationGroupTmpl<T>::setPurpose(EnumPurposeType::Values value)
{
    m_Purpose = value;
    m_bPurpose_valueSet = true;
}

template <class T>
bool ObservationGroupTmpl<T>::hasValue_Purpose() const
{
    return m_bPurpose_valueSet;
}

template <class T>
void ObservationGroupTmpl<T>::resetValue_Purpose()
{
    m_bPurpose_valueSet = false;
}


template <class T>
String ObservationGroupTmpl<T>::getSetupID() const
{
    return m_SetupID;
}

template <class T>
void ObservationGroupTmpl<T>::setSetupID(String value)
{
    m_SetupID = value;
    m_bSetupID_valueSet = true;
}

template <class T>
bool ObservationGroupTmpl<T>::hasValue_SetupID() const
{
    return m_bSetupID_valueSet;
}

template <class T>
void ObservationGroupTmpl<T>::resetValue_SetupID()
{
    m_bSetupID_valueSet = false;
}


template <class T>
String ObservationGroupTmpl<T>::getTargetSetupID() const
{
    return m_TargetSetupID;
}

template <class T>
void ObservationGroupTmpl<T>::setTargetSetupID(String value)
{
    m_TargetSetupID = value;
    m_bTargetSetupID_valueSet = true;
}

template <class T>
bool ObservationGroupTmpl<T>::hasValue_TargetSetupID() const
{
    return m_bTargetSetupID_valueSet;
}

template <class T>
void ObservationGroupTmpl<T>::resetValue_TargetSetupID()
{
    m_bTargetSetupID_valueSet = false;
}


template <class T>
String ObservationGroupTmpl<T>::getSetID() const
{
    return m_SetID;
}

template <class T>
void ObservationGroupTmpl<T>::setSetID(String value)
{
    m_SetID = value;
    m_bSetID_valueSet = true;
}

template <class T>
bool ObservationGroupTmpl<T>::hasValue_SetID() const
{
    return m_bSetID_valueSet;
}

template <class T>
void ObservationGroupTmpl<T>::resetValue_SetID()
{
    m_bSetID_valueSet = false;
}


template <class T>
String ObservationGroupTmpl<T>::getAlignRef() const
{
    return m_AlignRef;
}

template <class T>
void ObservationGroupTmpl<T>::setAlignRef(String value)
{
    m_AlignRef = value;
    m_bAlignRef_valueSet = true;
}

template <class T>
bool ObservationGroupTmpl<T>::hasValue_AlignRef() const
{
    return m_bAlignRef_valueSet;
}

template <class T>
void ObservationGroupTmpl<T>::resetValue_AlignRef()
{
    m_bAlignRef_valueSet = false;
}


template <class T>
String ObservationGroupTmpl<T>::getAlignStationName() const
{
    return m_AlignStationName;
}

template <class T>
void ObservationGroupTmpl<T>::setAlignStationName(String value)
{
    m_AlignStationName = value;
    m_bAlignStationName_valueSet = true;
}

template <class T>
bool ObservationGroupTmpl<T>::hasValue_AlignStationName() const
{
    return m_bAlignStationName_valueSet;
}

template <class T>
void ObservationGroupTmpl<T>::resetValue_AlignStationName()
{
    m_bAlignStationName_valueSet = false;
}


template <class T>
double ObservationGroupTmpl<T>::getAlignOffset() const
{
    return m_AlignOffset;
}

template <class T>
void ObservationGroupTmpl<T>::setAlignOffset(double value)
{
    m_AlignOffset = value;
    m_bAlignOffset_valueSet = true;
}

template <class T>
bool ObservationGroupTmpl<T>::hasValue_AlignOffset() const
{
    return m_bAlignOffset_valueSet;
}

template <class T>
void ObservationGroupTmpl<T>::resetValue_AlignOffset()
{
    m_bAlignOffset_valueSet = false;
}



template <class T>
void ObservationGroupTmpl<T>::toXml (IStream& stream)
{
    static const wchar_t* kstrElementName = L"ObservationGroup";
    stream.write(L"<");
    stream.write(kstrElementName);
    if (m_bId_valueSet)
    {
        stream.write(L" id=\"");
        StringObjectImpl::streamOut(m_Id, stream);
        stream.write(L"\"");
    }
    if (m_bPurpose_valueSet)
    {
        stream.write(L" purpose=\"");
        EnumPurposeTypeImpl::streamOut(m_Purpose, stream);
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
    if (m_CoordGeomRefs)
    {
        stream.write(L" coordGeomRefs=\"");
        StringCollectionImpl::streamOut(m_CoordGeomRefs, stream);
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
    stream.write(L">");
    if (m_Backsight)
    {
    	m_Backsight->toXml(stream);
    }
    if (m_ReducedObservation)
    {
    	m_ReducedObservation->toXml(stream);
    }
    if (m_RawObservation)
    {
    	m_RawObservation->toXml(stream);
    }
    if (m_TargetPoint)
    {
    	m_TargetPoint->toXml(stream);
    }
    if (m_RedHorizontalPosition)
    {
    	m_RedHorizontalPosition->toXml(stream);
    }
    if (m_ReducedArcObservation)
    {
    	m_ReducedArcObservation->toXml(stream);
    }
    if (m_RedVerticalObservation)
    {
    	m_RedVerticalObservation->toXml(stream);
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
Object::ValidityEnum ObservationGroupTmpl<T>::validate (IValidationEventSink* pEventSink) const
{
    Object::ValidityEnum returnCode = Object::kValid;
    returnCode = this->ObjectTmpl<T>::validate(pEventSink);
    if (m_Backsight)
    {
        if (m_Backsight->validate(pEventSink) != Object::kValid)
            returnCode = Object::kValidWithInvalidChildren;
    }
    if (m_ReducedObservation)
    {
        if (m_ReducedObservation->validate(pEventSink) != Object::kValid)
            returnCode = Object::kValidWithInvalidChildren;
    }
    if (m_RawObservation)
    {
        if (m_RawObservation->validate(pEventSink) != Object::kValid)
            returnCode = Object::kValidWithInvalidChildren;
    }
    if (m_TargetPoint)
    {
        if (m_TargetPoint->validate(pEventSink) != Object::kValid)
            returnCode = Object::kValidWithInvalidChildren;
    }
    if (m_RedHorizontalPosition)
    {
        if (m_RedHorizontalPosition->validate(pEventSink) != Object::kValid)
            returnCode = Object::kValidWithInvalidChildren;
    }
    if (m_ReducedArcObservation)
    {
        if (m_ReducedArcObservation->validate(pEventSink) != Object::kValid)
            returnCode = Object::kValidWithInvalidChildren;
    }
    if (m_RedVerticalObservation)
    {
        if (m_RedVerticalObservation->validate(pEventSink) != Object::kValid)
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
    return returnCode;
}

}; // namespace : LX
