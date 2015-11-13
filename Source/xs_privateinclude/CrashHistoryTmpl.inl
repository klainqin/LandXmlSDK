#include "stdafx.h"
#include "LXTypes.h"
#include "CrashHistory.h"
#include "LXTypesTmpl.h"
#include "CrashHistoryImpl.h"
#include "LXTypesTmpl.inl"

namespace LX
{


template<class T>
CrashHistoryTmpl<T>::CrashHistoryTmpl<T> (DocumentImpl* pDoc)
    : ObjectTmpl<T>(pDoc)
{
    m_Year = L"";
    m_bYear_valueSet = false;
    m_Location_1 = 0.0;
    m_bLocation_1_valueSet = false;
    m_Location_2 = 0.0;
    m_bLocation_2_valueSet = false;
    m_Severity = EnumCrashSeverityType::Values::k_null;
    m_bSeverity_valueSet = false;
    m_IntersectionRelation = EnumCrashIntersectionRelation::Values::k_null;
    m_bIntersectionRelation_valueSet = false;
    m_IntersectionLocation = 0.0;
    m_bIntersectionLocation_valueSet = false;
}


template<class T>
CrashHistoryTmpl<T>::~CrashHistoryTmpl<T> ()
{
}



template <class T>
String CrashHistoryTmpl<T>::getYear() const
{
    return m_Year;
}

template <class T>
void CrashHistoryTmpl<T>::setYear(String value)
{
    m_Year = value;
    m_bYear_valueSet = true;
}

template <class T>
bool CrashHistoryTmpl<T>::hasValue_Year() const
{
    return m_bYear_valueSet;
}

template <class T>
void CrashHistoryTmpl<T>::resetValue_Year()
{
    m_bYear_valueSet = false;
}


template <class T>
double CrashHistoryTmpl<T>::getLocation_1() const
{
    return m_Location_1;
}

template <class T>
void CrashHistoryTmpl<T>::setLocation_1(double value)
{
    m_Location_1 = value;
    m_bLocation_1_valueSet = true;
}

template <class T>
bool CrashHistoryTmpl<T>::hasValue_Location_1() const
{
    return m_bLocation_1_valueSet;
}

template <class T>
void CrashHistoryTmpl<T>::resetValue_Location_1()
{
    m_bLocation_1_valueSet = false;
}


template <class T>
double CrashHistoryTmpl<T>::getLocation_2() const
{
    return m_Location_2;
}

template <class T>
void CrashHistoryTmpl<T>::setLocation_2(double value)
{
    m_Location_2 = value;
    m_bLocation_2_valueSet = true;
}

template <class T>
bool CrashHistoryTmpl<T>::hasValue_Location_2() const
{
    return m_bLocation_2_valueSet;
}

template <class T>
void CrashHistoryTmpl<T>::resetValue_Location_2()
{
    m_bLocation_2_valueSet = false;
}


template <class T>
EnumCrashSeverityType::Values CrashHistoryTmpl<T>::getSeverity() const
{
    return m_Severity;
}

template <class T>
void CrashHistoryTmpl<T>::setSeverity(EnumCrashSeverityType::Values value)
{
    m_Severity = value;
    m_bSeverity_valueSet = true;
}

template <class T>
bool CrashHistoryTmpl<T>::hasValue_Severity() const
{
    return m_bSeverity_valueSet;
}

template <class T>
void CrashHistoryTmpl<T>::resetValue_Severity()
{
    m_bSeverity_valueSet = false;
}


template <class T>
EnumCrashIntersectionRelation::Values CrashHistoryTmpl<T>::getIntersectionRelation() const
{
    return m_IntersectionRelation;
}

template <class T>
void CrashHistoryTmpl<T>::setIntersectionRelation(EnumCrashIntersectionRelation::Values value)
{
    m_IntersectionRelation = value;
    m_bIntersectionRelation_valueSet = true;
}

template <class T>
bool CrashHistoryTmpl<T>::hasValue_IntersectionRelation() const
{
    return m_bIntersectionRelation_valueSet;
}

template <class T>
void CrashHistoryTmpl<T>::resetValue_IntersectionRelation()
{
    m_bIntersectionRelation_valueSet = false;
}


template <class T>
double CrashHistoryTmpl<T>::getIntersectionLocation() const
{
    return m_IntersectionLocation;
}

template <class T>
void CrashHistoryTmpl<T>::setIntersectionLocation(double value)
{
    m_IntersectionLocation = value;
    m_bIntersectionLocation_valueSet = true;
}

template <class T>
bool CrashHistoryTmpl<T>::hasValue_IntersectionLocation() const
{
    return m_bIntersectionLocation_valueSet;
}

template <class T>
void CrashHistoryTmpl<T>::resetValue_IntersectionLocation()
{
    m_bIntersectionLocation_valueSet = false;
}



template <class T>
void CrashHistoryTmpl<T>::toXml (IStream& stream)
{
    static const wchar_t* kstrElementName = L"CrashHistory";
    stream.write(L"<");
    stream.write(kstrElementName);
    if (m_bYear_valueSet)
    {
        stream.write(L" year=\"");
        StringObjectImpl::streamOut(m_Year, stream);
        stream.write(L"\"");
    }
    if (m_bLocation_1_valueSet)
    {
        stream.write(L" location-1=\"");
        DoubleObjectImpl::streamOut(m_Location_1, stream);
        stream.write(L"\"");
    }
    if (m_bLocation_2_valueSet)
    {
        stream.write(L" location-2=\"");
        DoubleObjectImpl::streamOut(m_Location_2, stream);
        stream.write(L"\"");
    }
    if (m_bSeverity_valueSet)
    {
        stream.write(L" severity=\"");
        EnumCrashSeverityTypeImpl::streamOut(m_Severity, stream);
        stream.write(L"\"");
    }
    if (m_bIntersectionRelation_valueSet)
    {
        stream.write(L" intersectionRelation=\"");
        EnumCrashIntersectionRelationImpl::streamOut(m_IntersectionRelation, stream);
        stream.write(L"\"");
    }
    if (m_bIntersectionLocation_valueSet)
    {
        stream.write(L" intersectionLocation=\"");
        DoubleObjectImpl::streamOut(m_IntersectionLocation, stream);
        stream.write(L"\"");
    }
    stream.write(L">");
    stream.write(L"</");
    stream.write(kstrElementName);
    stream.write(L">");
}

template <class T>
Object::ValidityEnum CrashHistoryTmpl<T>::validate (IValidationEventSink* pEventSink) const
{
    Object::ValidityEnum returnCode = Object::kValid;
    returnCode = this->ObjectTmpl<T>::validate(pEventSink);
    return returnCode;
}

}; // namespace : LX
