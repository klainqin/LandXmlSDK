#include "stdafx.h"
#include "LXTypes.h"
#include "NoPassingZone.h"
#include "LXTypesTmpl.h"
#include "NoPassingZoneImpl.h"
#include "LXTypesTmpl.inl"

namespace LX
{


template<class T>
NoPassingZoneTmpl<T>::NoPassingZoneTmpl<T> (DocumentImpl* pDoc)
    : ObjectTmpl<T>(pDoc)
{
    m_StaStart = 0.0;
    m_bStaStart_valueSet = false;
    m_StaEnd = 0.0;
    m_bStaEnd_valueSet = false;
    m_SideofRoad = EnumSideofRoadType::Values::k_null;
    m_bSideofRoad_valueSet = false;
}


template<class T>
NoPassingZoneTmpl<T>::~NoPassingZoneTmpl<T> ()
{
}



template <class T>
double NoPassingZoneTmpl<T>::getStaStart() const
{
    return m_StaStart;
}

template <class T>
void NoPassingZoneTmpl<T>::setStaStart(double value)
{
    m_StaStart = value;
    m_bStaStart_valueSet = true;
}

template <class T>
bool NoPassingZoneTmpl<T>::hasValue_StaStart() const
{
    return m_bStaStart_valueSet;
}

template <class T>
void NoPassingZoneTmpl<T>::resetValue_StaStart()
{
    m_bStaStart_valueSet = false;
}


template <class T>
double NoPassingZoneTmpl<T>::getStaEnd() const
{
    return m_StaEnd;
}

template <class T>
void NoPassingZoneTmpl<T>::setStaEnd(double value)
{
    m_StaEnd = value;
    m_bStaEnd_valueSet = true;
}

template <class T>
bool NoPassingZoneTmpl<T>::hasValue_StaEnd() const
{
    return m_bStaEnd_valueSet;
}

template <class T>
void NoPassingZoneTmpl<T>::resetValue_StaEnd()
{
    m_bStaEnd_valueSet = false;
}


template <class T>
EnumSideofRoadType::Values NoPassingZoneTmpl<T>::getSideofRoad() const
{
    return m_SideofRoad;
}

template <class T>
void NoPassingZoneTmpl<T>::setSideofRoad(EnumSideofRoadType::Values value)
{
    m_SideofRoad = value;
    m_bSideofRoad_valueSet = true;
}

template <class T>
bool NoPassingZoneTmpl<T>::hasValue_SideofRoad() const
{
    return m_bSideofRoad_valueSet;
}

template <class T>
void NoPassingZoneTmpl<T>::resetValue_SideofRoad()
{
    m_bSideofRoad_valueSet = false;
}



template <class T>
void NoPassingZoneTmpl<T>::toXml (IStream& stream)
{
    static const wchar_t* kstrElementName = L"NoPassingZone";
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
    if (m_bSideofRoad_valueSet)
    {
        stream.write(L" sideofRoad=\"");
        EnumSideofRoadTypeImpl::streamOut(m_SideofRoad, stream);
        stream.write(L"\"");
    }
    stream.write(L">");
    stream.write(L"</");
    stream.write(kstrElementName);
    stream.write(L">");
}

template <class T>
Object::ValidityEnum NoPassingZoneTmpl<T>::validate (IValidationEventSink* pEventSink) const
{
    Object::ValidityEnum returnCode = Object::kValid;
    returnCode = this->ObjectTmpl<T>::validate(pEventSink);
    return returnCode;
}

}; // namespace : LX
