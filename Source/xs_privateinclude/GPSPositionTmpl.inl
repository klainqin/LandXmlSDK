#include "stdafx.h"
#include "LXTypes.h"
#include "GPSPosition.h"
#include "TargetPoint.h"
#include "GPSQCInfoLevel1.h"
#include "GPSQCInfoLevel2.h"
#include "FieldNoteCollection.h"
#include "FeatureCollection.h"
#include "LXTypesTmpl.h"
#include "GPSPositionImpl.h"
#include "TargetPointImpl.h"
#include "GPSQCInfoLevel1Impl.h"
#include "GPSQCInfoLevel2Impl.h"
#include "FieldNoteCollectionImpl.h"
#include "FeatureCollectionImpl.h"
#include "LXTypesTmpl.inl"

namespace LX
{


template<class T>
GPSPositionTmpl<T>::GPSPositionTmpl<T> (DocumentImpl* pDoc)
    : ObjectTmpl<T>(pDoc)
{
    m_TargetPoint = NULL;
    m_GPSQCInfoLevel1 = NULL;
    m_GPSQCInfoLevel2 = NULL;
    m_FieldNote = createFieldNoteCollectionObject(pDoc);
    m_Feature = createFeatureCollectionObject(pDoc);
    m_SetupID = L"";
    m_bSetupID_valueSet = false;
    m_SetID = L"";
    m_bSetID_valueSet = false;
    m_WgsHeight = 0.0;
    m_bWgsHeight_valueSet = false;
    m_WgsLatitude = 0.0;
    m_bWgsLatitude_valueSet = false;
    m_WgsLongitude = 0.0;
    m_bWgsLongitude_valueSet = false;
    m_Purpose = L"";
    m_bPurpose_valueSet = false;
    m_CoordGeomRefs = NULL;
    m_PntRef = L"";
    m_bPntRef_valueSet = false;
}


template<class T>
GPSPositionTmpl<T>::~GPSPositionTmpl<T> ()
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
FieldNoteCollection& GPSPositionTmpl<T>::FieldNote()
{
    return *m_FieldNote;
}

template <class T>
const FieldNoteCollection& GPSPositionTmpl<T>::FieldNote() const
{
    return *m_FieldNote;
}

template <class T>
FeatureCollection& GPSPositionTmpl<T>::Feature()
{
    return *m_Feature;
}

template <class T>
const FeatureCollection& GPSPositionTmpl<T>::Feature() const
{
    return *m_Feature;
}


template <class T>
TargetPoint* GPSPositionTmpl<T>::getTargetPoint() const
{
    return m_TargetPoint;
}

template <class T>
void GPSPositionTmpl<T>::setTargetPoint(TargetPoint* pValue)
{
    m_TargetPoint = pValue;
}

template <class T>
GPSQCInfoLevel1* GPSPositionTmpl<T>::getGPSQCInfoLevel1() const
{
    return m_GPSQCInfoLevel1;
}

template <class T>
void GPSPositionTmpl<T>::setGPSQCInfoLevel1(GPSQCInfoLevel1* pValue)
{
    m_GPSQCInfoLevel1 = pValue;
}

template <class T>
GPSQCInfoLevel2* GPSPositionTmpl<T>::getGPSQCInfoLevel2() const
{
    return m_GPSQCInfoLevel2;
}

template <class T>
void GPSPositionTmpl<T>::setGPSQCInfoLevel2(GPSQCInfoLevel2* pValue)
{
    m_GPSQCInfoLevel2 = pValue;
}

template <class T>
StringCollection* GPSPositionTmpl<T>::getCoordGeomRefs() const
{
    return m_CoordGeomRefs;
}

template <class T>
void GPSPositionTmpl<T>::setCoordGeomRefs(StringCollection* pValue)
{
    m_CoordGeomRefs = pValue;
}


template <class T>
String GPSPositionTmpl<T>::getSetupID() const
{
    return m_SetupID;
}

template <class T>
void GPSPositionTmpl<T>::setSetupID(String value)
{
    m_SetupID = value;
    m_bSetupID_valueSet = true;
}

template <class T>
bool GPSPositionTmpl<T>::hasValue_SetupID() const
{
    return m_bSetupID_valueSet;
}

template <class T>
void GPSPositionTmpl<T>::resetValue_SetupID()
{
    m_bSetupID_valueSet = false;
}


template <class T>
String GPSPositionTmpl<T>::getSetID() const
{
    return m_SetID;
}

template <class T>
void GPSPositionTmpl<T>::setSetID(String value)
{
    m_SetID = value;
    m_bSetID_valueSet = true;
}

template <class T>
bool GPSPositionTmpl<T>::hasValue_SetID() const
{
    return m_bSetID_valueSet;
}

template <class T>
void GPSPositionTmpl<T>::resetValue_SetID()
{
    m_bSetID_valueSet = false;
}


template <class T>
double GPSPositionTmpl<T>::getWgsHeight() const
{
    return m_WgsHeight;
}

template <class T>
void GPSPositionTmpl<T>::setWgsHeight(double value)
{
    m_WgsHeight = value;
    m_bWgsHeight_valueSet = true;
}

template <class T>
bool GPSPositionTmpl<T>::hasValue_WgsHeight() const
{
    return m_bWgsHeight_valueSet;
}

template <class T>
void GPSPositionTmpl<T>::resetValue_WgsHeight()
{
    m_bWgsHeight_valueSet = false;
}


template <class T>
double GPSPositionTmpl<T>::getWgsLatitude() const
{
    return m_WgsLatitude;
}

template <class T>
void GPSPositionTmpl<T>::setWgsLatitude(double value)
{
    m_WgsLatitude = value;
    m_bWgsLatitude_valueSet = true;
}

template <class T>
bool GPSPositionTmpl<T>::hasValue_WgsLatitude() const
{
    return m_bWgsLatitude_valueSet;
}

template <class T>
void GPSPositionTmpl<T>::resetValue_WgsLatitude()
{
    m_bWgsLatitude_valueSet = false;
}


template <class T>
double GPSPositionTmpl<T>::getWgsLongitude() const
{
    return m_WgsLongitude;
}

template <class T>
void GPSPositionTmpl<T>::setWgsLongitude(double value)
{
    m_WgsLongitude = value;
    m_bWgsLongitude_valueSet = true;
}

template <class T>
bool GPSPositionTmpl<T>::hasValue_WgsLongitude() const
{
    return m_bWgsLongitude_valueSet;
}

template <class T>
void GPSPositionTmpl<T>::resetValue_WgsLongitude()
{
    m_bWgsLongitude_valueSet = false;
}


template <class T>
String GPSPositionTmpl<T>::getPurpose() const
{
    return m_Purpose;
}

template <class T>
void GPSPositionTmpl<T>::setPurpose(String value)
{
    m_Purpose = value;
    m_bPurpose_valueSet = true;
}

template <class T>
bool GPSPositionTmpl<T>::hasValue_Purpose() const
{
    return m_bPurpose_valueSet;
}

template <class T>
void GPSPositionTmpl<T>::resetValue_Purpose()
{
    m_bPurpose_valueSet = false;
}


template <class T>
String GPSPositionTmpl<T>::getPntRef() const
{
    return m_PntRef;
}

template <class T>
void GPSPositionTmpl<T>::setPntRef(String value)
{
    m_PntRef = value;
    m_bPntRef_valueSet = true;
}

template <class T>
bool GPSPositionTmpl<T>::hasValue_PntRef() const
{
    return m_bPntRef_valueSet;
}

template <class T>
void GPSPositionTmpl<T>::resetValue_PntRef()
{
    m_bPntRef_valueSet = false;
}



template <class T>
void GPSPositionTmpl<T>::toXml (IStream& stream)
{
    static const wchar_t* kstrElementName = L"GPSPosition";
    stream.write(L"<");
    stream.write(kstrElementName);
    if (m_bSetupID_valueSet)
    {
        stream.write(L" setupID=\"");
        StringObjectImpl::streamOut(m_SetupID, stream);
        stream.write(L"\"");
    }
    if (m_bSetID_valueSet)
    {
        stream.write(L" setID=\"");
        StringObjectImpl::streamOut(m_SetID, stream);
        stream.write(L"\"");
    }
    if (m_bWgsHeight_valueSet)
    {
        stream.write(L" wgsHeight=\"");
        DoubleObjectImpl::streamOut(m_WgsHeight, stream);
        stream.write(L"\"");
    }
    if (m_bWgsLatitude_valueSet)
    {
        stream.write(L" wgsLatitude=\"");
        DoubleObjectImpl::streamOut(m_WgsLatitude, stream);
        stream.write(L"\"");
    }
    if (m_bWgsLongitude_valueSet)
    {
        stream.write(L" wgsLongitude=\"");
        DoubleObjectImpl::streamOut(m_WgsLongitude, stream);
        stream.write(L"\"");
    }
    if (m_bPurpose_valueSet)
    {
        stream.write(L" purpose=\"");
        StringObjectImpl::streamOut(m_Purpose, stream);
        stream.write(L"\"");
    }
    if (m_CoordGeomRefs)
    {
        stream.write(L" coordGeomRefs=\"");
        StringCollectionImpl::streamOut(m_CoordGeomRefs, stream);
        stream.write(L"\"");
    }
    if (m_bPntRef_valueSet)
    {
        stream.write(L" pntRef=\"");
        StringObjectImpl::streamOut(m_PntRef, stream);
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
Object::ValidityEnum GPSPositionTmpl<T>::validate (IValidationEventSink* pEventSink) const
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
    if (!m_bWgsHeight_valueSet)
    {
        pEventSink->onEvent(IValidationEventSink::EventCode::kRequiredValueNotSet, this, L"WgsHeight", L"Required value not set");
        returnCode = Object::kInvalid;
    }
    if (!m_bWgsLatitude_valueSet)
    {
        pEventSink->onEvent(IValidationEventSink::EventCode::kRequiredValueNotSet, this, L"WgsLatitude", L"Required value not set");
        returnCode = Object::kInvalid;
    }
    if (!m_bWgsLongitude_valueSet)
    {
        pEventSink->onEvent(IValidationEventSink::EventCode::kRequiredValueNotSet, this, L"WgsLongitude", L"Required value not set");
        returnCode = Object::kInvalid;
    }
    return returnCode;
}

}; // namespace : LX
