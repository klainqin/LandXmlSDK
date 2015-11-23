#include "stdafx.h"
#include "LXTypes.h"
#include "PostedSpeed.h"
#include "LXTypesTmpl.h"
#include "PostedSpeedImpl.h"
#include "LXTypesTmpl.inl"

namespace LX
{


template<class T>
PostedSpeedTmpl<T>::PostedSpeedTmpl (DocumentImpl* pDoc)
    : ObjectTmpl<T>(pDoc)
{
    m_StaStart = 0.0;
    m_bStaStart_valueSet = false;
    m_StaEnd = 0.0;
    m_bStaEnd_valueSet = false;
    m_SideofRoad = EnumSideofRoadType::Values::k_null;
    m_bSideofRoad_valueSet = false;
    m_SpeedLimit = 0.0;
    m_bSpeedLimit_valueSet = false;
}


template<class T>
PostedSpeedTmpl<T>::~PostedSpeedTmpl ()
{
}



template <class T>
double PostedSpeedTmpl<T>::getStaStart() const
{
    return m_StaStart;
}

template <class T>
void PostedSpeedTmpl<T>::setStaStart(double value)
{
    m_StaStart = value;
    m_bStaStart_valueSet = true;
}

template <class T>
bool PostedSpeedTmpl<T>::hasValue_StaStart() const
{
    return m_bStaStart_valueSet;
}

template <class T>
void PostedSpeedTmpl<T>::resetValue_StaStart()
{
    m_bStaStart_valueSet = false;
}


template <class T>
double PostedSpeedTmpl<T>::getStaEnd() const
{
    return m_StaEnd;
}

template <class T>
void PostedSpeedTmpl<T>::setStaEnd(double value)
{
    m_StaEnd = value;
    m_bStaEnd_valueSet = true;
}

template <class T>
bool PostedSpeedTmpl<T>::hasValue_StaEnd() const
{
    return m_bStaEnd_valueSet;
}

template <class T>
void PostedSpeedTmpl<T>::resetValue_StaEnd()
{
    m_bStaEnd_valueSet = false;
}


template <class T>
EnumSideofRoadType::Values PostedSpeedTmpl<T>::getSideofRoad() const
{
    return m_SideofRoad;
}

template <class T>
void PostedSpeedTmpl<T>::setSideofRoad(EnumSideofRoadType::Values value)
{
    m_SideofRoad = value;
    m_bSideofRoad_valueSet = true;
}

template <class T>
bool PostedSpeedTmpl<T>::hasValue_SideofRoad() const
{
    return m_bSideofRoad_valueSet;
}

template <class T>
void PostedSpeedTmpl<T>::resetValue_SideofRoad()
{
    m_bSideofRoad_valueSet = false;
}


template <class T>
double PostedSpeedTmpl<T>::getSpeedLimit() const
{
    return m_SpeedLimit;
}

template <class T>
void PostedSpeedTmpl<T>::setSpeedLimit(double value)
{
    m_SpeedLimit = value;
    m_bSpeedLimit_valueSet = true;
}

template <class T>
bool PostedSpeedTmpl<T>::hasValue_SpeedLimit() const
{
    return m_bSpeedLimit_valueSet;
}

template <class T>
void PostedSpeedTmpl<T>::resetValue_SpeedLimit()
{
    m_bSpeedLimit_valueSet = false;
}



template <class T>
void PostedSpeedTmpl<T>::toXml (IStream& stream)
{
    static const wchar_t* kstrElementName = L"PostedSpeed";
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
    if (m_bSpeedLimit_valueSet)
    {
        stream.write(L" speedLimit=\"");
        DoubleObjectImpl::streamOut(m_SpeedLimit, stream);
        stream.write(L"\"");
    }
    stream.write(L">");
    stream.write(L"</");
    stream.write(kstrElementName);
    stream.write(L">");
}

template <class T>
Object::ValidityEnum PostedSpeedTmpl<T>::validate (IValidationEventSink* pEventSink) const
{
    Object::ValidityEnum returnCode = Object::kValid;
    returnCode = this->ObjectTmpl<T>::validate(pEventSink);
    return returnCode;
}

}; // namespace : LX
