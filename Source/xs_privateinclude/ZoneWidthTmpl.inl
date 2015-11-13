#include "stdafx.h"
#include "LXTypes.h"
#include "ZoneWidth.h"
#include "FeatureCollection.h"
#include "LXTypesTmpl.h"
#include "ZoneWidthImpl.h"
#include "FeatureCollectionImpl.h"
#include "LXTypesTmpl.inl"

namespace LX
{


template<class T>
ZoneWidthTmpl<T>::ZoneWidthTmpl<T> (DocumentImpl* pDoc)
    : ObjectTmpl<T>(pDoc)
{
    m_Feature = createFeatureCollectionObject(pDoc);
    m_StaStart = 0.0;
    m_bStaStart_valueSet = false;
    m_StaEnd = 0.0;
    m_bStaEnd_valueSet = false;
    m_StartWidth = 0.0;
    m_bStartWidth_valueSet = false;
    m_EndWidth = 0.0;
    m_bEndWidth_valueSet = false;
}


template<class T>
ZoneWidthTmpl<T>::~ZoneWidthTmpl<T> ()
{
    if (m_Feature != NULL)
    {
        m_Feature->release();
        m_Feature = NULL;
    }
}

template <class T>
FeatureCollection& ZoneWidthTmpl<T>::Feature()
{
    return *m_Feature;
}

template <class T>
const FeatureCollection& ZoneWidthTmpl<T>::Feature() const
{
    return *m_Feature;
}



template <class T>
double ZoneWidthTmpl<T>::getStaStart() const
{
    return m_StaStart;
}

template <class T>
void ZoneWidthTmpl<T>::setStaStart(double value)
{
    m_StaStart = value;
    m_bStaStart_valueSet = true;
}

template <class T>
bool ZoneWidthTmpl<T>::hasValue_StaStart() const
{
    return m_bStaStart_valueSet;
}

template <class T>
void ZoneWidthTmpl<T>::resetValue_StaStart()
{
    m_bStaStart_valueSet = false;
}


template <class T>
double ZoneWidthTmpl<T>::getStaEnd() const
{
    return m_StaEnd;
}

template <class T>
void ZoneWidthTmpl<T>::setStaEnd(double value)
{
    m_StaEnd = value;
    m_bStaEnd_valueSet = true;
}

template <class T>
bool ZoneWidthTmpl<T>::hasValue_StaEnd() const
{
    return m_bStaEnd_valueSet;
}

template <class T>
void ZoneWidthTmpl<T>::resetValue_StaEnd()
{
    m_bStaEnd_valueSet = false;
}


template <class T>
double ZoneWidthTmpl<T>::getStartWidth() const
{
    return m_StartWidth;
}

template <class T>
void ZoneWidthTmpl<T>::setStartWidth(double value)
{
    m_StartWidth = value;
    m_bStartWidth_valueSet = true;
}

template <class T>
bool ZoneWidthTmpl<T>::hasValue_StartWidth() const
{
    return m_bStartWidth_valueSet;
}

template <class T>
void ZoneWidthTmpl<T>::resetValue_StartWidth()
{
    m_bStartWidth_valueSet = false;
}


template <class T>
double ZoneWidthTmpl<T>::getEndWidth() const
{
    return m_EndWidth;
}

template <class T>
void ZoneWidthTmpl<T>::setEndWidth(double value)
{
    m_EndWidth = value;
    m_bEndWidth_valueSet = true;
}

template <class T>
bool ZoneWidthTmpl<T>::hasValue_EndWidth() const
{
    return m_bEndWidth_valueSet;
}

template <class T>
void ZoneWidthTmpl<T>::resetValue_EndWidth()
{
    m_bEndWidth_valueSet = false;
}



template <class T>
void ZoneWidthTmpl<T>::toXml (IStream& stream)
{
    static const wchar_t* kstrElementName = L"ZoneWidth";
    stream.write(L"<");
    stream.write(kstrElementName);
    if (m_bStaStart_valueSet)
    {
        stream.write(L" staStart=\"");
        DoubleObjectImpl::streamOut(m_StaStart, stream);
        stream.write(L"\"");
    }
    if (m_bStaEnd_valueSet)
    {
        stream.write(L" staEnd=\"");
        DoubleObjectImpl::streamOut(m_StaEnd, stream);
        stream.write(L"\"");
    }
    if (m_bStartWidth_valueSet)
    {
        stream.write(L" startWidth=\"");
        DoubleObjectImpl::streamOut(m_StartWidth, stream);
        stream.write(L"\"");
    }
    if (m_bEndWidth_valueSet)
    {
        stream.write(L" endWidth=\"");
        DoubleObjectImpl::streamOut(m_EndWidth, stream);
        stream.write(L"\"");
    }
    stream.write(L">");
    if (m_Feature)
    {
    	m_Feature->toXml(stream);
    }
    stream.write(L"</");
    stream.write(kstrElementName);
    stream.write(L">");
}

template <class T>
Object::ValidityEnum ZoneWidthTmpl<T>::validate (IValidationEventSink* pEventSink) const
{
    Object::ValidityEnum returnCode = Object::kValid;
    returnCode = this->ObjectTmpl<T>::validate(pEventSink);
    if (m_Feature)
    {
        if (m_Feature->validate(pEventSink) != Object::kValid)
            returnCode = Object::kValidWithInvalidChildren;
    }
    if (!m_bStaStart_valueSet)
    {
        pEventSink->onEvent(IValidationEventSink::EventCode::kRequiredValueNotSet, this, L"StaStart", L"Required value not set");
        returnCode = Object::kInvalid;
    }
    if (!m_bStaEnd_valueSet)
    {
        pEventSink->onEvent(IValidationEventSink::EventCode::kRequiredValueNotSet, this, L"StaEnd", L"Required value not set");
        returnCode = Object::kInvalid;
    }
    if (!m_bStartWidth_valueSet)
    {
        pEventSink->onEvent(IValidationEventSink::EventCode::kRequiredValueNotSet, this, L"StartWidth", L"Required value not set");
        returnCode = Object::kInvalid;
    }
    return returnCode;
}

}; // namespace : LX
