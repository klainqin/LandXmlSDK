#include "stdafx.h"
#include "LXTypes.h"
#include "DecisionSightDistance.h"
#include "LXTypesTmpl.h"
#include "DecisionSightDistanceImpl.h"
#include "LXTypesTmpl.inl"

namespace LX
{


template<class T>
DecisionSightDistanceTmpl<T>::DecisionSightDistanceTmpl<T> (DocumentImpl* pDoc)
    : ObjectTmpl<T>(pDoc)
{
    m_Station = 0.0;
    m_bStation_valueSet = false;
    m_Maneuver = EnumManeuverType::Values::k_null;
    m_bManeuver_valueSet = false;
}


template<class T>
DecisionSightDistanceTmpl<T>::~DecisionSightDistanceTmpl<T> ()
{
}



template <class T>
double DecisionSightDistanceTmpl<T>::getStation() const
{
    return m_Station;
}

template <class T>
void DecisionSightDistanceTmpl<T>::setStation(double value)
{
    m_Station = value;
    m_bStation_valueSet = true;
}

template <class T>
bool DecisionSightDistanceTmpl<T>::hasValue_Station() const
{
    return m_bStation_valueSet;
}

template <class T>
void DecisionSightDistanceTmpl<T>::resetValue_Station()
{
    m_bStation_valueSet = false;
}


template <class T>
EnumManeuverType::Values DecisionSightDistanceTmpl<T>::getManeuver() const
{
    return m_Maneuver;
}

template <class T>
void DecisionSightDistanceTmpl<T>::setManeuver(EnumManeuverType::Values value)
{
    m_Maneuver = value;
    m_bManeuver_valueSet = true;
}

template <class T>
bool DecisionSightDistanceTmpl<T>::hasValue_Maneuver() const
{
    return m_bManeuver_valueSet;
}

template <class T>
void DecisionSightDistanceTmpl<T>::resetValue_Maneuver()
{
    m_bManeuver_valueSet = false;
}



template <class T>
void DecisionSightDistanceTmpl<T>::toXml (IStream& stream)
{
    static const wchar_t* kstrElementName = L"DecisionSightDistance";
    stream.write(L"<");
    stream.write(kstrElementName);
    if (m_bStation_valueSet)
    {
        stream.write(L" station=\"");
        DoubleObjectImpl::streamOut(m_Station, stream);
        stream.write(L"\"");
    }
    if (m_bManeuver_valueSet)
    {
        stream.write(L" maneuver=\"");
        EnumManeuverTypeImpl::streamOut(m_Maneuver, stream);
        stream.write(L"\"");
    }
    stream.write(L">");
    stream.write(L"</");
    stream.write(kstrElementName);
    stream.write(L">");
}

template <class T>
Object::ValidityEnum DecisionSightDistanceTmpl<T>::validate (IValidationEventSink* pEventSink) const
{
    Object::ValidityEnum returnCode = Object::kValid;
    returnCode = this->ObjectTmpl<T>::validate(pEventSink);
    return returnCode;
}

}; // namespace : LX
