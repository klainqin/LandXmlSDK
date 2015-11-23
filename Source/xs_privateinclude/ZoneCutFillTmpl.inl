#include "stdafx.h"
#include "LXTypes.h"
#include "ZoneCutFill.h"
#include "LXTypesTmpl.h"
#include "ZoneCutFillImpl.h"
#include "LXTypesTmpl.inl"

namespace LX
{


template<class T>
ZoneCutFillTmpl<T>::ZoneCutFillTmpl (DocumentImpl* pDoc)
    : ObjectTmpl<T>(pDoc)
{
    m_StaStart = 0.0;
    m_bStaStart_valueSet = false;
    m_StaEnd = 0.0;
    m_bStaEnd_valueSet = false;
    m_CutSlope = 0.0;
    m_bCutSlope_valueSet = false;
    m_FillSlope = 0.0;
    m_bFillSlope_valueSet = false;
}


template<class T>
ZoneCutFillTmpl<T>::~ZoneCutFillTmpl ()
{
}



template <class T>
double ZoneCutFillTmpl<T>::getStaStart() const
{
    return m_StaStart;
}

template <class T>
void ZoneCutFillTmpl<T>::setStaStart(double value)
{
    m_StaStart = value;
    m_bStaStart_valueSet = true;
}

template <class T>
bool ZoneCutFillTmpl<T>::hasValue_StaStart() const
{
    return m_bStaStart_valueSet;
}

template <class T>
void ZoneCutFillTmpl<T>::resetValue_StaStart()
{
    m_bStaStart_valueSet = false;
}


template <class T>
double ZoneCutFillTmpl<T>::getStaEnd() const
{
    return m_StaEnd;
}

template <class T>
void ZoneCutFillTmpl<T>::setStaEnd(double value)
{
    m_StaEnd = value;
    m_bStaEnd_valueSet = true;
}

template <class T>
bool ZoneCutFillTmpl<T>::hasValue_StaEnd() const
{
    return m_bStaEnd_valueSet;
}

template <class T>
void ZoneCutFillTmpl<T>::resetValue_StaEnd()
{
    m_bStaEnd_valueSet = false;
}


template <class T>
double ZoneCutFillTmpl<T>::getCutSlope() const
{
    return m_CutSlope;
}

template <class T>
void ZoneCutFillTmpl<T>::setCutSlope(double value)
{
    m_CutSlope = value;
    m_bCutSlope_valueSet = true;
}

template <class T>
bool ZoneCutFillTmpl<T>::hasValue_CutSlope() const
{
    return m_bCutSlope_valueSet;
}

template <class T>
void ZoneCutFillTmpl<T>::resetValue_CutSlope()
{
    m_bCutSlope_valueSet = false;
}


template <class T>
double ZoneCutFillTmpl<T>::getFillSlope() const
{
    return m_FillSlope;
}

template <class T>
void ZoneCutFillTmpl<T>::setFillSlope(double value)
{
    m_FillSlope = value;
    m_bFillSlope_valueSet = true;
}

template <class T>
bool ZoneCutFillTmpl<T>::hasValue_FillSlope() const
{
    return m_bFillSlope_valueSet;
}

template <class T>
void ZoneCutFillTmpl<T>::resetValue_FillSlope()
{
    m_bFillSlope_valueSet = false;
}



template <class T>
void ZoneCutFillTmpl<T>::toXml (IStream& stream)
{
    static const wchar_t* kstrElementName = L"ZoneCutFill";
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
    if (m_bCutSlope_valueSet)
    {
        stream.write(L" cutSlope=\"");
        DoubleObjectImpl::streamOut(m_CutSlope, stream);
        stream.write(L"\"");
    }
    if (m_bFillSlope_valueSet)
    {
        stream.write(L" fillSlope=\"");
        DoubleObjectImpl::streamOut(m_FillSlope, stream);
        stream.write(L"\"");
    }
    stream.write(L">");
    stream.write(L"</");
    stream.write(kstrElementName);
    stream.write(L">");
}

template <class T>
Object::ValidityEnum ZoneCutFillTmpl<T>::validate (IValidationEventSink* pEventSink) const
{
    Object::ValidityEnum returnCode = Object::kValid;
    returnCode = this->ObjectTmpl<T>::validate(pEventSink);
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
    return returnCode;
}

}; // namespace : LX
