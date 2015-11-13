#include "stdafx.h"
#include "LXTypes.h"
#include "TrafficControl.h"
#include "LXTypesTmpl.h"
#include "TrafficControlImpl.h"
#include "LXTypesTmpl.inl"

namespace LX
{


template<class T>
TrafficControlTmpl<T>::TrafficControlTmpl<T> (DocumentImpl* pDoc)
    : ObjectTmpl<T>(pDoc)
{
    m_Station = 0.0;
    m_bStation_valueSet = false;
    m_SignalPeriod = 0.0;
    m_bSignalPeriod_valueSet = false;
    m_ControlPosition = EnumTrafficControlPosition::Values::k_null;
    m_bControlPosition_valueSet = false;
    m_ControlType = EnumTrafficControlType::Values::k_null;
    m_bControlType_valueSet = false;
}


template<class T>
TrafficControlTmpl<T>::~TrafficControlTmpl<T> ()
{
}



template <class T>
double TrafficControlTmpl<T>::getStation() const
{
    return m_Station;
}

template <class T>
void TrafficControlTmpl<T>::setStation(double value)
{
    m_Station = value;
    m_bStation_valueSet = true;
}

template <class T>
bool TrafficControlTmpl<T>::hasValue_Station() const
{
    return m_bStation_valueSet;
}

template <class T>
void TrafficControlTmpl<T>::resetValue_Station()
{
    m_bStation_valueSet = false;
}


template <class T>
double TrafficControlTmpl<T>::getSignalPeriod() const
{
    return m_SignalPeriod;
}

template <class T>
void TrafficControlTmpl<T>::setSignalPeriod(double value)
{
    m_SignalPeriod = value;
    m_bSignalPeriod_valueSet = true;
}

template <class T>
bool TrafficControlTmpl<T>::hasValue_SignalPeriod() const
{
    return m_bSignalPeriod_valueSet;
}

template <class T>
void TrafficControlTmpl<T>::resetValue_SignalPeriod()
{
    m_bSignalPeriod_valueSet = false;
}


template <class T>
EnumTrafficControlPosition::Values TrafficControlTmpl<T>::getControlPosition() const
{
    return m_ControlPosition;
}

template <class T>
void TrafficControlTmpl<T>::setControlPosition(EnumTrafficControlPosition::Values value)
{
    m_ControlPosition = value;
    m_bControlPosition_valueSet = true;
}

template <class T>
bool TrafficControlTmpl<T>::hasValue_ControlPosition() const
{
    return m_bControlPosition_valueSet;
}

template <class T>
void TrafficControlTmpl<T>::resetValue_ControlPosition()
{
    m_bControlPosition_valueSet = false;
}


template <class T>
EnumTrafficControlType::Values TrafficControlTmpl<T>::getControlType() const
{
    return m_ControlType;
}

template <class T>
void TrafficControlTmpl<T>::setControlType(EnumTrafficControlType::Values value)
{
    m_ControlType = value;
    m_bControlType_valueSet = true;
}

template <class T>
bool TrafficControlTmpl<T>::hasValue_ControlType() const
{
    return m_bControlType_valueSet;
}

template <class T>
void TrafficControlTmpl<T>::resetValue_ControlType()
{
    m_bControlType_valueSet = false;
}



template <class T>
void TrafficControlTmpl<T>::toXml (IStream& stream)
{
    static const wchar_t* kstrElementName = L"TrafficControl";
    stream.write(L"<");
    stream.write(kstrElementName);
    if (m_bStation_valueSet)
    {
        stream.write(L" station=\"");
        DoubleObjectImpl::streamOut(m_Station, stream);
        stream.write(L"\"");
    }
    if (m_bSignalPeriod_valueSet)
    {
        stream.write(L" signalPeriod=\"");
        DoubleObjectImpl::streamOut(m_SignalPeriod, stream);
        stream.write(L"\"");
    }
    if (m_bControlPosition_valueSet)
    {
        stream.write(L" controlPosition=\"");
        EnumTrafficControlPositionImpl::streamOut(m_ControlPosition, stream);
        stream.write(L"\"");
    }
    if (m_bControlType_valueSet)
    {
        stream.write(L" controlType=\"");
        EnumTrafficControlTypeImpl::streamOut(m_ControlType, stream);
        stream.write(L"\"");
    }
    stream.write(L">");
    stream.write(L"</");
    stream.write(kstrElementName);
    stream.write(L">");
}

template <class T>
Object::ValidityEnum TrafficControlTmpl<T>::validate (IValidationEventSink* pEventSink) const
{
    Object::ValidityEnum returnCode = Object::kValid;
    returnCode = this->ObjectTmpl<T>::validate(pEventSink);
    return returnCode;
}

}; // namespace : LX
