#include "stdafx.h"
#include "LXTypes.h"
#include "SpeedStation.h"
#include "LXTypesTmpl.h"
#include "SpeedStationImpl.h"
#include "LXTypesTmpl.inl"

namespace LX
{


template<class T>
SpeedStationTmpl<T>::SpeedStationTmpl (DocumentImpl* pDoc)
    : ObjectTmpl<T>(pDoc)
{
    m_Station = 0.0;
    m_bStation_valueSet = false;
    m_Speed = 0.0;
    m_bSpeed_valueSet = false;
}


template<class T>
SpeedStationTmpl<T>::~SpeedStationTmpl ()
{
}



template <class T>
double SpeedStationTmpl<T>::getStation() const
{
    return m_Station;
}

template <class T>
void SpeedStationTmpl<T>::setStation(double value)
{
    m_Station = value;
    m_bStation_valueSet = true;
}

template <class T>
bool SpeedStationTmpl<T>::hasValue_Station() const
{
    return m_bStation_valueSet;
}

template <class T>
void SpeedStationTmpl<T>::resetValue_Station()
{
    m_bStation_valueSet = false;
}


template <class T>
double SpeedStationTmpl<T>::getSpeed() const
{
    return m_Speed;
}

template <class T>
void SpeedStationTmpl<T>::setSpeed(double value)
{
    m_Speed = value;
    m_bSpeed_valueSet = true;
}

template <class T>
bool SpeedStationTmpl<T>::hasValue_Speed() const
{
    return m_bSpeed_valueSet;
}

template <class T>
void SpeedStationTmpl<T>::resetValue_Speed()
{
    m_bSpeed_valueSet = false;
}



template <class T>
void SpeedStationTmpl<T>::toXml (IStream& stream)
{
    static const wchar_t* kstrElementName = L"SpeedStation";
    stream.write(L"<");
    stream.write(kstrElementName);
    if (m_bStation_valueSet)
    {
        stream.write(L" station=\"");
        DoubleObjectImpl::streamOut(m_Station, stream);
        stream.write(L"\"");
    }
    if (m_bSpeed_valueSet)
    {
        stream.write(L" speed=\"");
        DoubleObjectImpl::streamOut(m_Speed, stream);
        stream.write(L"\"");
    }
    stream.write(L">");
    stream.write(L"</");
    stream.write(kstrElementName);
    stream.write(L">");
}

template <class T>
Object::ValidityEnum SpeedStationTmpl<T>::validate (IValidationEventSink* pEventSink) const
{
    Object::ValidityEnum returnCode = Object::kValid;
    returnCode = this->ObjectTmpl<T>::validate(pEventSink);
    if (!m_bStation_valueSet)
    {
        pEventSink->onEvent(IValidationEventSink::EventCode::kRequiredValueNotSet, this, L"Station", L"Required value not set");
        returnCode = Object::kInvalid;
    }
    if (!m_bSpeed_valueSet)
    {
        pEventSink->onEvent(IValidationEventSink::EventCode::kRequiredValueNotSet, this, L"Speed", L"Required value not set");
        returnCode = Object::kInvalid;
    }
    return returnCode;
}

}; // namespace : LX
