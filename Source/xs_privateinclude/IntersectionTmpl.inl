#include "stdafx.h"
#include "LXTypes.h"
#include "Intersection.h"
#include "LXTypesTmpl.h"
#include "IntersectionImpl.h"
#include "LXTypesTmpl.inl"

namespace LX
{


template<class T>
IntersectionTmpl<T>::IntersectionTmpl<T> (DocumentImpl* pDoc)
    : ObjectTmpl<T>(pDoc)
{
    m_RoadwayRef = L"";
    m_bRoadwayRef_valueSet = false;
    m_RoadwayPI = 0.0;
    m_bRoadwayPI_valueSet = false;
    m_IntersectingRoadwayRef = L"";
    m_bIntersectingRoadwayRef_valueSet = false;
    m_IntersectRoadwayPI = 0.0;
    m_bIntersectRoadwayPI_valueSet = false;
    m_ContructionType = EnumIntersectionConstructionType::Values::k_null;
    m_bContructionType_valueSet = false;
}


template<class T>
IntersectionTmpl<T>::~IntersectionTmpl<T> ()
{
}



template <class T>
String IntersectionTmpl<T>::getRoadwayRef() const
{
    return m_RoadwayRef;
}

template <class T>
void IntersectionTmpl<T>::setRoadwayRef(String value)
{
    m_RoadwayRef = value;
    m_bRoadwayRef_valueSet = true;
}

template <class T>
bool IntersectionTmpl<T>::hasValue_RoadwayRef() const
{
    return m_bRoadwayRef_valueSet;
}

template <class T>
void IntersectionTmpl<T>::resetValue_RoadwayRef()
{
    m_bRoadwayRef_valueSet = false;
}


template <class T>
double IntersectionTmpl<T>::getRoadwayPI() const
{
    return m_RoadwayPI;
}

template <class T>
void IntersectionTmpl<T>::setRoadwayPI(double value)
{
    m_RoadwayPI = value;
    m_bRoadwayPI_valueSet = true;
}

template <class T>
bool IntersectionTmpl<T>::hasValue_RoadwayPI() const
{
    return m_bRoadwayPI_valueSet;
}

template <class T>
void IntersectionTmpl<T>::resetValue_RoadwayPI()
{
    m_bRoadwayPI_valueSet = false;
}


template <class T>
String IntersectionTmpl<T>::getIntersectingRoadwayRef() const
{
    return m_IntersectingRoadwayRef;
}

template <class T>
void IntersectionTmpl<T>::setIntersectingRoadwayRef(String value)
{
    m_IntersectingRoadwayRef = value;
    m_bIntersectingRoadwayRef_valueSet = true;
}

template <class T>
bool IntersectionTmpl<T>::hasValue_IntersectingRoadwayRef() const
{
    return m_bIntersectingRoadwayRef_valueSet;
}

template <class T>
void IntersectionTmpl<T>::resetValue_IntersectingRoadwayRef()
{
    m_bIntersectingRoadwayRef_valueSet = false;
}


template <class T>
double IntersectionTmpl<T>::getIntersectRoadwayPI() const
{
    return m_IntersectRoadwayPI;
}

template <class T>
void IntersectionTmpl<T>::setIntersectRoadwayPI(double value)
{
    m_IntersectRoadwayPI = value;
    m_bIntersectRoadwayPI_valueSet = true;
}

template <class T>
bool IntersectionTmpl<T>::hasValue_IntersectRoadwayPI() const
{
    return m_bIntersectRoadwayPI_valueSet;
}

template <class T>
void IntersectionTmpl<T>::resetValue_IntersectRoadwayPI()
{
    m_bIntersectRoadwayPI_valueSet = false;
}


template <class T>
EnumIntersectionConstructionType::Values IntersectionTmpl<T>::getContructionType() const
{
    return m_ContructionType;
}

template <class T>
void IntersectionTmpl<T>::setContructionType(EnumIntersectionConstructionType::Values value)
{
    m_ContructionType = value;
    m_bContructionType_valueSet = true;
}

template <class T>
bool IntersectionTmpl<T>::hasValue_ContructionType() const
{
    return m_bContructionType_valueSet;
}

template <class T>
void IntersectionTmpl<T>::resetValue_ContructionType()
{
    m_bContructionType_valueSet = false;
}



template <class T>
void IntersectionTmpl<T>::toXml (IStream& stream)
{
    static const wchar_t* kstrElementName = L"Intersection";
    stream.write(L"<");
    stream.write(kstrElementName);
    if (m_bRoadwayRef_valueSet)
    {
        stream.write(L" roadwayRef=\"");
        StringObjectImpl::streamOut(m_RoadwayRef, stream);
        stream.write(L"\"");
    }
    if (m_bRoadwayPI_valueSet)
    {
        stream.write(L" roadwayPI=\"");
        DoubleObjectImpl::streamOut(m_RoadwayPI, stream);
        stream.write(L"\"");
    }
    if (m_bIntersectingRoadwayRef_valueSet)
    {
        stream.write(L" intersectingRoadwayRef=\"");
        StringObjectImpl::streamOut(m_IntersectingRoadwayRef, stream);
        stream.write(L"\"");
    }
    if (m_bIntersectRoadwayPI_valueSet)
    {
        stream.write(L" intersectRoadwayPI=\"");
        DoubleObjectImpl::streamOut(m_IntersectRoadwayPI, stream);
        stream.write(L"\"");
    }
    if (m_bContructionType_valueSet)
    {
        stream.write(L" contructionType=\"");
        EnumIntersectionConstructionTypeImpl::streamOut(m_ContructionType, stream);
        stream.write(L"\"");
    }
    stream.write(L">");
    stream.write(L"</");
    stream.write(kstrElementName);
    stream.write(L">");
}

template <class T>
Object::ValidityEnum IntersectionTmpl<T>::validate (IValidationEventSink* pEventSink) const
{
    Object::ValidityEnum returnCode = Object::kValid;
    returnCode = this->ObjectTmpl<T>::validate(pEventSink);
    return returnCode;
}

}; // namespace : LX
