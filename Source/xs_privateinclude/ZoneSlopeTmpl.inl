#include "stdafx.h"
#include "LXTypes.h"
#include "ZoneSlope.h"
#include "LXTypesTmpl.h"
#include "ZoneSlopeImpl.h"
#include "LXTypesTmpl.inl"

namespace LX
{


template<class T>
ZoneSlopeTmpl<T>::ZoneSlopeTmpl (DocumentImpl* pDoc)
    : ObjectTmpl<T>(pDoc)
{
    m_StaStart = 0.0;
    m_bStaStart_valueSet = false;
    m_StaEnd = 0.0;
    m_bStaEnd_valueSet = false;
    m_StartVertValue = 0.0;
    m_bStartVertValue_valueSet = false;
    m_StartVertType = EnumZoneVertType::Values::k_null;
    m_bStartVertType_valueSet = false;
    m_EndVertValue = 0.0;
    m_bEndVertValue_valueSet = false;
    m_EndVertType = EnumZoneVertType::Values::k_null;
    m_bEndVertType_valueSet = false;
    m_ParabolicStartStation = 0.0;
    m_bParabolicStartStation_valueSet = false;
    m_ParabolicEndStation = 0.0;
    m_bParabolicEndStation_valueSet = false;
}


template<class T>
ZoneSlopeTmpl<T>::~ZoneSlopeTmpl ()
{
}



template <class T>
double ZoneSlopeTmpl<T>::getStaStart() const
{
    return m_StaStart;
}

template <class T>
void ZoneSlopeTmpl<T>::setStaStart(double value)
{
    m_StaStart = value;
    m_bStaStart_valueSet = true;
}

template <class T>
bool ZoneSlopeTmpl<T>::hasValue_StaStart() const
{
    return m_bStaStart_valueSet;
}

template <class T>
void ZoneSlopeTmpl<T>::resetValue_StaStart()
{
    m_bStaStart_valueSet = false;
}


template <class T>
double ZoneSlopeTmpl<T>::getStaEnd() const
{
    return m_StaEnd;
}

template <class T>
void ZoneSlopeTmpl<T>::setStaEnd(double value)
{
    m_StaEnd = value;
    m_bStaEnd_valueSet = true;
}

template <class T>
bool ZoneSlopeTmpl<T>::hasValue_StaEnd() const
{
    return m_bStaEnd_valueSet;
}

template <class T>
void ZoneSlopeTmpl<T>::resetValue_StaEnd()
{
    m_bStaEnd_valueSet = false;
}


template <class T>
double ZoneSlopeTmpl<T>::getStartVertValue() const
{
    return m_StartVertValue;
}

template <class T>
void ZoneSlopeTmpl<T>::setStartVertValue(double value)
{
    m_StartVertValue = value;
    m_bStartVertValue_valueSet = true;
}

template <class T>
bool ZoneSlopeTmpl<T>::hasValue_StartVertValue() const
{
    return m_bStartVertValue_valueSet;
}

template <class T>
void ZoneSlopeTmpl<T>::resetValue_StartVertValue()
{
    m_bStartVertValue_valueSet = false;
}


template <class T>
EnumZoneVertType::Values ZoneSlopeTmpl<T>::getStartVertType() const
{
    return m_StartVertType;
}

template <class T>
void ZoneSlopeTmpl<T>::setStartVertType(EnumZoneVertType::Values value)
{
    m_StartVertType = value;
    m_bStartVertType_valueSet = true;
}

template <class T>
bool ZoneSlopeTmpl<T>::hasValue_StartVertType() const
{
    return m_bStartVertType_valueSet;
}

template <class T>
void ZoneSlopeTmpl<T>::resetValue_StartVertType()
{
    m_bStartVertType_valueSet = false;
}


template <class T>
double ZoneSlopeTmpl<T>::getEndVertValue() const
{
    return m_EndVertValue;
}

template <class T>
void ZoneSlopeTmpl<T>::setEndVertValue(double value)
{
    m_EndVertValue = value;
    m_bEndVertValue_valueSet = true;
}

template <class T>
bool ZoneSlopeTmpl<T>::hasValue_EndVertValue() const
{
    return m_bEndVertValue_valueSet;
}

template <class T>
void ZoneSlopeTmpl<T>::resetValue_EndVertValue()
{
    m_bEndVertValue_valueSet = false;
}


template <class T>
EnumZoneVertType::Values ZoneSlopeTmpl<T>::getEndVertType() const
{
    return m_EndVertType;
}

template <class T>
void ZoneSlopeTmpl<T>::setEndVertType(EnumZoneVertType::Values value)
{
    m_EndVertType = value;
    m_bEndVertType_valueSet = true;
}

template <class T>
bool ZoneSlopeTmpl<T>::hasValue_EndVertType() const
{
    return m_bEndVertType_valueSet;
}

template <class T>
void ZoneSlopeTmpl<T>::resetValue_EndVertType()
{
    m_bEndVertType_valueSet = false;
}


template <class T>
double ZoneSlopeTmpl<T>::getParabolicStartStation() const
{
    return m_ParabolicStartStation;
}

template <class T>
void ZoneSlopeTmpl<T>::setParabolicStartStation(double value)
{
    m_ParabolicStartStation = value;
    m_bParabolicStartStation_valueSet = true;
}

template <class T>
bool ZoneSlopeTmpl<T>::hasValue_ParabolicStartStation() const
{
    return m_bParabolicStartStation_valueSet;
}

template <class T>
void ZoneSlopeTmpl<T>::resetValue_ParabolicStartStation()
{
    m_bParabolicStartStation_valueSet = false;
}


template <class T>
double ZoneSlopeTmpl<T>::getParabolicEndStation() const
{
    return m_ParabolicEndStation;
}

template <class T>
void ZoneSlopeTmpl<T>::setParabolicEndStation(double value)
{
    m_ParabolicEndStation = value;
    m_bParabolicEndStation_valueSet = true;
}

template <class T>
bool ZoneSlopeTmpl<T>::hasValue_ParabolicEndStation() const
{
    return m_bParabolicEndStation_valueSet;
}

template <class T>
void ZoneSlopeTmpl<T>::resetValue_ParabolicEndStation()
{
    m_bParabolicEndStation_valueSet = false;
}



template <class T>
void ZoneSlopeTmpl<T>::toXml (IStream& stream)
{
    static const wchar_t* kstrElementName = L"ZoneSlope";
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
    if (m_bStartVertValue_valueSet)
    {
        stream.write(L" startVertValue=\"");
        DoubleObjectImpl::streamOut(m_StartVertValue, stream);
        stream.write(L"\"");
    }
    if (m_bStartVertType_valueSet)
    {
        stream.write(L" startVertType=\"");
        EnumZoneVertTypeImpl::streamOut(m_StartVertType, stream);
        stream.write(L"\"");
    }
    if (m_bEndVertValue_valueSet)
    {
        stream.write(L" endVertValue=\"");
        DoubleObjectImpl::streamOut(m_EndVertValue, stream);
        stream.write(L"\"");
    }
    if (m_bEndVertType_valueSet)
    {
        stream.write(L" endVertType=\"");
        EnumZoneVertTypeImpl::streamOut(m_EndVertType, stream);
        stream.write(L"\"");
    }
    if (m_bParabolicStartStation_valueSet)
    {
        stream.write(L" parabolicStartStation=\"");
        DoubleObjectImpl::streamOut(m_ParabolicStartStation, stream);
        stream.write(L"\"");
    }
    if (m_bParabolicEndStation_valueSet)
    {
        stream.write(L" parabolicEndStation=\"");
        DoubleObjectImpl::streamOut(m_ParabolicEndStation, stream);
        stream.write(L"\"");
    }
    stream.write(L">");
    stream.write(L"</");
    stream.write(kstrElementName);
    stream.write(L">");
}

template <class T>
Object::ValidityEnum ZoneSlopeTmpl<T>::validate (IValidationEventSink* pEventSink) const
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
    if (!m_bEndVertValue_valueSet)
    {
        pEventSink->onEvent(IValidationEventSink::EventCode::kRequiredValueNotSet, this, L"EndVertValue", L"Required value not set");
        returnCode = Object::kInvalid;
    }
    if (!m_bEndVertType_valueSet)
    {
        pEventSink->onEvent(IValidationEventSink::EventCode::kRequiredValueNotSet, this, L"EndVertType", L"Required value not set");
        returnCode = Object::kInvalid;
    }
    return returnCode;
}

}; // namespace : LX
