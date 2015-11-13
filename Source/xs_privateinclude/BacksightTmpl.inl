#include "stdafx.h"
#include "LXTypes.h"
#include "Backsight.h"
#include "BacksightPoint.h"
#include "FieldNoteCollection.h"
#include "FeatureCollection.h"
#include "LXTypesTmpl.h"
#include "BacksightImpl.h"
#include "BacksightPointImpl.h"
#include "FieldNoteCollectionImpl.h"
#include "FeatureCollectionImpl.h"
#include "LXTypesTmpl.inl"

namespace LX
{


template<class T>
BacksightTmpl<T>::BacksightTmpl<T> (DocumentImpl* pDoc)
    : ObjectTmpl<T>(pDoc)
{
    m_BacksightPoint = NULL;
    m_FieldNote = createFieldNoteCollectionObject(pDoc);
    m_Feature = createFeatureCollectionObject(pDoc);
    m_Id = L"";
    m_bId_valueSet = false;
    m_Azimuth = 0.0;
    m_bAzimuth_valueSet = false;
    m_TargetHeight = 0.0;
    m_bTargetHeight_valueSet = false;
    m_Circle = 0.0;
    m_bCircle_valueSet = false;
    m_SetupID = L"";
    m_bSetupID_valueSet = false;
}


template<class T>
BacksightTmpl<T>::~BacksightTmpl<T> ()
{
    if (m_BacksightPoint != NULL)
    {
        m_BacksightPoint->release();
        m_BacksightPoint = NULL;
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
FieldNoteCollection& BacksightTmpl<T>::FieldNote()
{
    return *m_FieldNote;
}

template <class T>
const FieldNoteCollection& BacksightTmpl<T>::FieldNote() const
{
    return *m_FieldNote;
}

template <class T>
FeatureCollection& BacksightTmpl<T>::Feature()
{
    return *m_Feature;
}

template <class T>
const FeatureCollection& BacksightTmpl<T>::Feature() const
{
    return *m_Feature;
}


template <class T>
BacksightPoint* BacksightTmpl<T>::getBacksightPoint() const
{
    return m_BacksightPoint;
}

template <class T>
void BacksightTmpl<T>::setBacksightPoint(BacksightPoint* pValue)
{
    m_BacksightPoint = pValue;
}


template <class T>
String BacksightTmpl<T>::getId() const
{
    return m_Id;
}

template <class T>
void BacksightTmpl<T>::setId(String value)
{
    m_Id = value;
    m_bId_valueSet = true;
}

template <class T>
bool BacksightTmpl<T>::hasValue_Id() const
{
    return m_bId_valueSet;
}

template <class T>
void BacksightTmpl<T>::resetValue_Id()
{
    m_bId_valueSet = false;
}


template <class T>
double BacksightTmpl<T>::getAzimuth() const
{
    return m_Azimuth;
}

template <class T>
void BacksightTmpl<T>::setAzimuth(double value)
{
    m_Azimuth = value;
    m_bAzimuth_valueSet = true;
}

template <class T>
bool BacksightTmpl<T>::hasValue_Azimuth() const
{
    return m_bAzimuth_valueSet;
}

template <class T>
void BacksightTmpl<T>::resetValue_Azimuth()
{
    m_bAzimuth_valueSet = false;
}


template <class T>
double BacksightTmpl<T>::getTargetHeight() const
{
    return m_TargetHeight;
}

template <class T>
void BacksightTmpl<T>::setTargetHeight(double value)
{
    m_TargetHeight = value;
    m_bTargetHeight_valueSet = true;
}

template <class T>
bool BacksightTmpl<T>::hasValue_TargetHeight() const
{
    return m_bTargetHeight_valueSet;
}

template <class T>
void BacksightTmpl<T>::resetValue_TargetHeight()
{
    m_bTargetHeight_valueSet = false;
}


template <class T>
double BacksightTmpl<T>::getCircle() const
{
    return m_Circle;
}

template <class T>
void BacksightTmpl<T>::setCircle(double value)
{
    m_Circle = value;
    m_bCircle_valueSet = true;
}

template <class T>
bool BacksightTmpl<T>::hasValue_Circle() const
{
    return m_bCircle_valueSet;
}

template <class T>
void BacksightTmpl<T>::resetValue_Circle()
{
    m_bCircle_valueSet = false;
}


template <class T>
String BacksightTmpl<T>::getSetupID() const
{
    return m_SetupID;
}

template <class T>
void BacksightTmpl<T>::setSetupID(String value)
{
    m_SetupID = value;
    m_bSetupID_valueSet = true;
}

template <class T>
bool BacksightTmpl<T>::hasValue_SetupID() const
{
    return m_bSetupID_valueSet;
}

template <class T>
void BacksightTmpl<T>::resetValue_SetupID()
{
    m_bSetupID_valueSet = false;
}



template <class T>
void BacksightTmpl<T>::toXml (IStream& stream)
{
    static const wchar_t* kstrElementName = L"Backsight";
    stream.write(L"<");
    stream.write(kstrElementName);
    if (m_bId_valueSet)
    {
        stream.write(L" id=\"");
        StringObjectImpl::streamOut(m_Id, stream);
        stream.write(L"\"");
    }
    if (m_bAzimuth_valueSet)
    {
        stream.write(L" azimuth=\"");
        DoubleObjectImpl::streamOut(m_Azimuth, stream);
        stream.write(L"\"");
    }
    if (m_bTargetHeight_valueSet)
    {
        stream.write(L" targetHeight=\"");
        DoubleObjectImpl::streamOut(m_TargetHeight, stream);
        stream.write(L"\"");
    }
    if (m_bCircle_valueSet)
    {
        stream.write(L" circle=\"");
        DoubleObjectImpl::streamOut(m_Circle, stream);
        stream.write(L"\"");
    }
    if (m_bSetupID_valueSet)
    {
        stream.write(L" setupID=\"");
        StringObjectImpl::streamOut(m_SetupID, stream);
        stream.write(L"\"");
    }
    stream.write(L">");
    if (m_BacksightPoint)
    {
    	m_BacksightPoint->toXml(stream);
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
Object::ValidityEnum BacksightTmpl<T>::validate (IValidationEventSink* pEventSink) const
{
    Object::ValidityEnum returnCode = Object::kValid;
    returnCode = this->ObjectTmpl<T>::validate(pEventSink);
    if (m_BacksightPoint)
    {
        if (m_BacksightPoint->validate(pEventSink) != Object::kValid)
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
    if (!m_bCircle_valueSet)
    {
        pEventSink->onEvent(IValidationEventSink::EventCode::kRequiredValueNotSet, this, L"Circle", L"Required value not set");
        returnCode = Object::kInvalid;
    }
    return returnCode;
}

}; // namespace : LX
