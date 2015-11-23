#include "stdafx.h"
#include "LXTypes.h"
#include "TurnRestriction.h"
#include "LXTypesTmpl.h"
#include "TurnRestrictionImpl.h"
#include "LXTypesTmpl.inl"

namespace LX
{


template<class T>
TurnRestrictionTmpl<T>::TurnRestrictionTmpl (DocumentImpl* pDoc)
    : ObjectTmpl<T>(pDoc)
{
    m_Station = 0.0;
    m_bStation_valueSet = false;
    m_LegNumber = 0;
    m_bLegNumber_valueSet = false;
    m_Type = EnumTrafficTurnRestriction::Values::k_null;
    m_bType_valueSet = false;
}


template<class T>
TurnRestrictionTmpl<T>::~TurnRestrictionTmpl ()
{
}



template <class T>
double TurnRestrictionTmpl<T>::getStation() const
{
    return m_Station;
}

template <class T>
void TurnRestrictionTmpl<T>::setStation(double value)
{
    m_Station = value;
    m_bStation_valueSet = true;
}

template <class T>
bool TurnRestrictionTmpl<T>::hasValue_Station() const
{
    return m_bStation_valueSet;
}

template <class T>
void TurnRestrictionTmpl<T>::resetValue_Station()
{
    m_bStation_valueSet = false;
}


template <class T>
int TurnRestrictionTmpl<T>::getLegNumber() const
{
    return m_LegNumber;
}

template <class T>
void TurnRestrictionTmpl<T>::setLegNumber(int value)
{
    m_LegNumber = value;
    m_bLegNumber_valueSet = true;
}

template <class T>
bool TurnRestrictionTmpl<T>::hasValue_LegNumber() const
{
    return m_bLegNumber_valueSet;
}

template <class T>
void TurnRestrictionTmpl<T>::resetValue_LegNumber()
{
    m_bLegNumber_valueSet = false;
}


template <class T>
EnumTrafficTurnRestriction::Values TurnRestrictionTmpl<T>::getType() const
{
    return m_Type;
}

template <class T>
void TurnRestrictionTmpl<T>::setType(EnumTrafficTurnRestriction::Values value)
{
    m_Type = value;
    m_bType_valueSet = true;
}

template <class T>
bool TurnRestrictionTmpl<T>::hasValue_Type() const
{
    return m_bType_valueSet;
}

template <class T>
void TurnRestrictionTmpl<T>::resetValue_Type()
{
    m_bType_valueSet = false;
}



template <class T>
void TurnRestrictionTmpl<T>::toXml (IStream& stream)
{
    static const wchar_t* kstrElementName = L"TurnRestriction";
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
    if (m_bType_valueSet)
    {
        stream.write(L" type=\"");
        EnumTrafficTurnRestrictionImpl::streamOut(m_Type, stream);
        stream.write(L"\"");
    }
    stream.write(L">");
    stream.write(L"</");
    stream.write(kstrElementName);
    stream.write(L">");
}

template <class T>
Object::ValidityEnum TurnRestrictionTmpl<T>::validate (IValidationEventSink* pEventSink) const
{
    Object::ValidityEnum returnCode = Object::kValid;
    returnCode = this->ObjectTmpl<T>::validate(pEventSink);
    return returnCode;
}

}; // namespace : LX
