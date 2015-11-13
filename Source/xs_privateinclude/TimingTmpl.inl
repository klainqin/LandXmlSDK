#include "stdafx.h"
#include "LXTypes.h"
#include "Timing.h"
#include "LXTypesTmpl.h"
#include "TimingImpl.h"
#include "LXTypesTmpl.inl"

namespace LX
{


template<class T>
TimingTmpl<T>::TimingTmpl<T> (DocumentImpl* pDoc)
    : ObjectTmpl<T>(pDoc)
{
    m_Station = 0.0;
    m_bStation_valueSet = false;
    m_LegNumber = 0;
    m_bLegNumber_valueSet = false;
    m_ProtectedTurnPercent = 0.0;
    m_bProtectedTurnPercent_valueSet = false;
    m_UnprotectedTurnPercent = 0.0;
    m_bUnprotectedTurnPercent_valueSet = false;
}


template<class T>
TimingTmpl<T>::~TimingTmpl<T> ()
{
}



template <class T>
double TimingTmpl<T>::getStation() const
{
    return m_Station;
}

template <class T>
void TimingTmpl<T>::setStation(double value)
{
    m_Station = value;
    m_bStation_valueSet = true;
}

template <class T>
bool TimingTmpl<T>::hasValue_Station() const
{
    return m_bStation_valueSet;
}

template <class T>
void TimingTmpl<T>::resetValue_Station()
{
    m_bStation_valueSet = false;
}


template <class T>
int TimingTmpl<T>::getLegNumber() const
{
    return m_LegNumber;
}

template <class T>
void TimingTmpl<T>::setLegNumber(int value)
{
    m_LegNumber = value;
    m_bLegNumber_valueSet = true;
}

template <class T>
bool TimingTmpl<T>::hasValue_LegNumber() const
{
    return m_bLegNumber_valueSet;
}

template <class T>
void TimingTmpl<T>::resetValue_LegNumber()
{
    m_bLegNumber_valueSet = false;
}


template <class T>
double TimingTmpl<T>::getProtectedTurnPercent() const
{
    return m_ProtectedTurnPercent;
}

template <class T>
void TimingTmpl<T>::setProtectedTurnPercent(double value)
{
    m_ProtectedTurnPercent = value;
    m_bProtectedTurnPercent_valueSet = true;
}

template <class T>
bool TimingTmpl<T>::hasValue_ProtectedTurnPercent() const
{
    return m_bProtectedTurnPercent_valueSet;
}

template <class T>
void TimingTmpl<T>::resetValue_ProtectedTurnPercent()
{
    m_bProtectedTurnPercent_valueSet = false;
}


template <class T>
double TimingTmpl<T>::getUnprotectedTurnPercent() const
{
    return m_UnprotectedTurnPercent;
}

template <class T>
void TimingTmpl<T>::setUnprotectedTurnPercent(double value)
{
    m_UnprotectedTurnPercent = value;
    m_bUnprotectedTurnPercent_valueSet = true;
}

template <class T>
bool TimingTmpl<T>::hasValue_UnprotectedTurnPercent() const
{
    return m_bUnprotectedTurnPercent_valueSet;
}

template <class T>
void TimingTmpl<T>::resetValue_UnprotectedTurnPercent()
{
    m_bUnprotectedTurnPercent_valueSet = false;
}



template <class T>
void TimingTmpl<T>::toXml (IStream& stream)
{
    static const wchar_t* kstrElementName = L"Timing";
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
    if (m_bProtectedTurnPercent_valueSet)
    {
        stream.write(L" protectedTurnPercent=\"");
        DoubleObjectImpl::streamOut(m_ProtectedTurnPercent, stream);
        stream.write(L"\"");
    }
    if (m_bUnprotectedTurnPercent_valueSet)
    {
        stream.write(L" unprotectedTurnPercent=\"");
        DoubleObjectImpl::streamOut(m_UnprotectedTurnPercent, stream);
        stream.write(L"\"");
    }
    stream.write(L">");
    stream.write(L"</");
    stream.write(kstrElementName);
    stream.write(L">");
}

template <class T>
Object::ValidityEnum TimingTmpl<T>::validate (IValidationEventSink* pEventSink) const
{
    Object::ValidityEnum returnCode = Object::kValid;
    returnCode = this->ObjectTmpl<T>::validate(pEventSink);
    return returnCode;
}

}; // namespace : LX
