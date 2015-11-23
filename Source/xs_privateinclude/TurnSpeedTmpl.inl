#include "stdafx.h"
#include "LXTypes.h"
#include "TurnSpeed.h"
#include "LXTypesTmpl.h"
#include "TurnSpeedImpl.h"
#include "LXTypesTmpl.inl"

namespace LX
{


template<class T>
TurnSpeedTmpl<T>::TurnSpeedTmpl (DocumentImpl* pDoc)
    : ObjectTmpl<T>(pDoc)
{
    m_Station = 0.0;
    m_bStation_valueSet = false;
    m_LegNumber = 0;
    m_bLegNumber_valueSet = false;
    m_Speed = 0.0;
    m_bSpeed_valueSet = false;
}


template<class T>
TurnSpeedTmpl<T>::~TurnSpeedTmpl ()
{
}



template <class T>
double TurnSpeedTmpl<T>::getStation() const
{
    return m_Station;
}

template <class T>
void TurnSpeedTmpl<T>::setStation(double value)
{
    m_Station = value;
    m_bStation_valueSet = true;
}

template <class T>
bool TurnSpeedTmpl<T>::hasValue_Station() const
{
    return m_bStation_valueSet;
}

template <class T>
void TurnSpeedTmpl<T>::resetValue_Station()
{
    m_bStation_valueSet = false;
}


template <class T>
int TurnSpeedTmpl<T>::getLegNumber() const
{
    return m_LegNumber;
}

template <class T>
void TurnSpeedTmpl<T>::setLegNumber(int value)
{
    m_LegNumber = value;
    m_bLegNumber_valueSet = true;
}

template <class T>
bool TurnSpeedTmpl<T>::hasValue_LegNumber() const
{
    return m_bLegNumber_valueSet;
}

template <class T>
void TurnSpeedTmpl<T>::resetValue_LegNumber()
{
    m_bLegNumber_valueSet = false;
}


template <class T>
double TurnSpeedTmpl<T>::getSpeed() const
{
    return m_Speed;
}

template <class T>
void TurnSpeedTmpl<T>::setSpeed(double value)
{
    m_Speed = value;
    m_bSpeed_valueSet = true;
}

template <class T>
bool TurnSpeedTmpl<T>::hasValue_Speed() const
{
    return m_bSpeed_valueSet;
}

template <class T>
void TurnSpeedTmpl<T>::resetValue_Speed()
{
    m_bSpeed_valueSet = false;
}



template <class T>
void TurnSpeedTmpl<T>::toXml (IStream& stream)
{
    static const wchar_t* kstrElementName = L"TurnSpeed";
    stream.write(L"<");
    stream.write(kstrElementName);
    if (m_bStation_valueSet)
    {
        stream.write(L" station=\"");
        DoubleObjectImpl::streamOut(m_Station, stream);
        stream.write(L"\"");
    }
    if (m_bLegNumber_valueSet)
    {
        stream.write(L" legNumber=\"");
        IntegerObjectImpl::streamOut(m_LegNumber, stream);
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
Object::ValidityEnum TurnSpeedTmpl<T>::validate (IValidationEventSink* pEventSink) const
{
    Object::ValidityEnum returnCode = Object::kValid;
    returnCode = this->ObjectTmpl<T>::validate(pEventSink);
    return returnCode;
}

}; // namespace : LX
