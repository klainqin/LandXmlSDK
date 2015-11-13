#include "stdafx.h"
#include "LXTypes.h"
#include "Volume.h"
#include "LXTypesTmpl.h"
#include "VolumeImpl.h"
#include "LXTypesTmpl.inl"

namespace LX
{


template<class T>
VolumeTmpl<T>::VolumeTmpl<T> (DocumentImpl* pDoc)
    : ObjectTmpl<T>(pDoc)
{
    m_Station = 0.0;
    m_bStation_valueSet = false;
    m_LegNumber = 0;
    m_bLegNumber_valueSet = false;
    m_TurnPercent = 0.0;
    m_bTurnPercent_valueSet = false;
    m_PercentTrucks = 0.0;
    m_bPercentTrucks_valueSet = false;
}


template<class T>
VolumeTmpl<T>::~VolumeTmpl<T> ()
{
}



template <class T>
double VolumeTmpl<T>::getStation() const
{
    return m_Station;
}

template <class T>
void VolumeTmpl<T>::setStation(double value)
{
    m_Station = value;
    m_bStation_valueSet = true;
}

template <class T>
bool VolumeTmpl<T>::hasValue_Station() const
{
    return m_bStation_valueSet;
}

template <class T>
void VolumeTmpl<T>::resetValue_Station()
{
    m_bStation_valueSet = false;
}


template <class T>
int VolumeTmpl<T>::getLegNumber() const
{
    return m_LegNumber;
}

template <class T>
void VolumeTmpl<T>::setLegNumber(int value)
{
    m_LegNumber = value;
    m_bLegNumber_valueSet = true;
}

template <class T>
bool VolumeTmpl<T>::hasValue_LegNumber() const
{
    return m_bLegNumber_valueSet;
}

template <class T>
void VolumeTmpl<T>::resetValue_LegNumber()
{
    m_bLegNumber_valueSet = false;
}


template <class T>
double VolumeTmpl<T>::getTurnPercent() const
{
    return m_TurnPercent;
}

template <class T>
void VolumeTmpl<T>::setTurnPercent(double value)
{
    m_TurnPercent = value;
    m_bTurnPercent_valueSet = true;
}

template <class T>
bool VolumeTmpl<T>::hasValue_TurnPercent() const
{
    return m_bTurnPercent_valueSet;
}

template <class T>
void VolumeTmpl<T>::resetValue_TurnPercent()
{
    m_bTurnPercent_valueSet = false;
}


template <class T>
double VolumeTmpl<T>::getPercentTrucks() const
{
    return m_PercentTrucks;
}

template <class T>
void VolumeTmpl<T>::setPercentTrucks(double value)
{
    m_PercentTrucks = value;
    m_bPercentTrucks_valueSet = true;
}

template <class T>
bool VolumeTmpl<T>::hasValue_PercentTrucks() const
{
    return m_bPercentTrucks_valueSet;
}

template <class T>
void VolumeTmpl<T>::resetValue_PercentTrucks()
{
    m_bPercentTrucks_valueSet = false;
}



template <class T>
void VolumeTmpl<T>::toXml (IStream& stream)
{
    static const wchar_t* kstrElementName = L"Volume";
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
    if (m_bTurnPercent_valueSet)
    {
        stream.write(L" turnPercent=\"");
        DoubleObjectImpl::streamOut(m_TurnPercent, stream);
        stream.write(L"\"");
    }
    if (m_bPercentTrucks_valueSet)
    {
        stream.write(L" percentTrucks=\"");
        DoubleObjectImpl::streamOut(m_PercentTrucks, stream);
        stream.write(L"\"");
    }
    stream.write(L">");
    stream.write(L"</");
    stream.write(kstrElementName);
    stream.write(L">");
}

template <class T>
Object::ValidityEnum VolumeTmpl<T>::validate (IValidationEventSink* pEventSink) const
{
    Object::ValidityEnum returnCode = Object::kValid;
    returnCode = this->ObjectTmpl<T>::validate(pEventSink);
    return returnCode;
}

}; // namespace : LX
