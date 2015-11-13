#include "stdafx.h"
#include "LXTypes.h"
#include "OffsetLane.h"
#include "LXTypesTmpl.h"
#include "OffsetLaneImpl.h"
#include "LXTypesTmpl.inl"

namespace LX
{


template<class T>
OffsetLaneTmpl<T>::OffsetLaneTmpl<T> (DocumentImpl* pDoc)
    : ObjectTmpl<T>(pDoc)
{
    m_StaStart = 0.0;
    m_bStaStart_valueSet = false;
    m_StaEnd = 0.0;
    m_bStaEnd_valueSet = false;
    m_BeginFullWidthSta = 0.0;
    m_bBeginFullWidthSta_valueSet = false;
    m_EndFullWidthSta = 0.0;
    m_bEndFullWidthSta_valueSet = false;
    m_FullOffset = 0.0;
    m_bFullOffset_valueSet = false;
    m_Width = 0.0;
    m_bWidth_valueSet = false;
    m_SideofRoad = EnumSideofRoadType::Values::k_null;
    m_bSideofRoad_valueSet = false;
}


template<class T>
OffsetLaneTmpl<T>::~OffsetLaneTmpl<T> ()
{
}



template <class T>
double OffsetLaneTmpl<T>::getStaStart() const
{
    return m_StaStart;
}

template <class T>
void OffsetLaneTmpl<T>::setStaStart(double value)
{
    m_StaStart = value;
    m_bStaStart_valueSet = true;
}

template <class T>
bool OffsetLaneTmpl<T>::hasValue_StaStart() const
{
    return m_bStaStart_valueSet;
}

template <class T>
void OffsetLaneTmpl<T>::resetValue_StaStart()
{
    m_bStaStart_valueSet = false;
}


template <class T>
double OffsetLaneTmpl<T>::getStaEnd() const
{
    return m_StaEnd;
}

template <class T>
void OffsetLaneTmpl<T>::setStaEnd(double value)
{
    m_StaEnd = value;
    m_bStaEnd_valueSet = true;
}

template <class T>
bool OffsetLaneTmpl<T>::hasValue_StaEnd() const
{
    return m_bStaEnd_valueSet;
}

template <class T>
void OffsetLaneTmpl<T>::resetValue_StaEnd()
{
    m_bStaEnd_valueSet = false;
}


template <class T>
double OffsetLaneTmpl<T>::getBeginFullWidthSta() const
{
    return m_BeginFullWidthSta;
}

template <class T>
void OffsetLaneTmpl<T>::setBeginFullWidthSta(double value)
{
    m_BeginFullWidthSta = value;
    m_bBeginFullWidthSta_valueSet = true;
}

template <class T>
bool OffsetLaneTmpl<T>::hasValue_BeginFullWidthSta() const
{
    return m_bBeginFullWidthSta_valueSet;
}

template <class T>
void OffsetLaneTmpl<T>::resetValue_BeginFullWidthSta()
{
    m_bBeginFullWidthSta_valueSet = false;
}


template <class T>
double OffsetLaneTmpl<T>::getEndFullWidthSta() const
{
    return m_EndFullWidthSta;
}

template <class T>
void OffsetLaneTmpl<T>::setEndFullWidthSta(double value)
{
    m_EndFullWidthSta = value;
    m_bEndFullWidthSta_valueSet = true;
}

template <class T>
bool OffsetLaneTmpl<T>::hasValue_EndFullWidthSta() const
{
    return m_bEndFullWidthSta_valueSet;
}

template <class T>
void OffsetLaneTmpl<T>::resetValue_EndFullWidthSta()
{
    m_bEndFullWidthSta_valueSet = false;
}


template <class T>
double OffsetLaneTmpl<T>::getFullOffset() const
{
    return m_FullOffset;
}

template <class T>
void OffsetLaneTmpl<T>::setFullOffset(double value)
{
    m_FullOffset = value;
    m_bFullOffset_valueSet = true;
}

template <class T>
bool OffsetLaneTmpl<T>::hasValue_FullOffset() const
{
    return m_bFullOffset_valueSet;
}

template <class T>
void OffsetLaneTmpl<T>::resetValue_FullOffset()
{
    m_bFullOffset_valueSet = false;
}


template <class T>
double OffsetLaneTmpl<T>::getWidth() const
{
    return m_Width;
}

template <class T>
void OffsetLaneTmpl<T>::setWidth(double value)
{
    m_Width = value;
    m_bWidth_valueSet = true;
}

template <class T>
bool OffsetLaneTmpl<T>::hasValue_Width() const
{
    return m_bWidth_valueSet;
}

template <class T>
void OffsetLaneTmpl<T>::resetValue_Width()
{
    m_bWidth_valueSet = false;
}


template <class T>
EnumSideofRoadType::Values OffsetLaneTmpl<T>::getSideofRoad() const
{
    return m_SideofRoad;
}

template <class T>
void OffsetLaneTmpl<T>::setSideofRoad(EnumSideofRoadType::Values value)
{
    m_SideofRoad = value;
    m_bSideofRoad_valueSet = true;
}

template <class T>
bool OffsetLaneTmpl<T>::hasValue_SideofRoad() const
{
    return m_bSideofRoad_valueSet;
}

template <class T>
void OffsetLaneTmpl<T>::resetValue_SideofRoad()
{
    m_bSideofRoad_valueSet = false;
}



template <class T>
void OffsetLaneTmpl<T>::toXml (IStream& stream)
{
    static const wchar_t* kstrElementName = L"OffsetLane";
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
    if (m_bBeginFullWidthSta_valueSet)
    {
        stream.write(L" beginFullWidthSta=\"");
        DoubleObjectImpl::streamOut(m_BeginFullWidthSta, stream);
        stream.write(L"\"");
    }
    if (m_bEndFullWidthSta_valueSet)
    {
        stream.write(L" endFullWidthSta=\"");
        DoubleObjectImpl::streamOut(m_EndFullWidthSta, stream);
        stream.write(L"\"");
    }
    if (m_bFullOffset_valueSet)
    {
        stream.write(L" fullOffset=\"");
        DoubleObjectImpl::streamOut(m_FullOffset, stream);
        stream.write(L"\"");
    }
    if (m_bWidth_valueSet)
    {
        stream.write(L" width=\"");
        DoubleObjectImpl::streamOut(m_Width, stream);
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
Object::ValidityEnum OffsetLaneTmpl<T>::validate (IValidationEventSink* pEventSink) const
{
    Object::ValidityEnum returnCode = Object::kValid;
    returnCode = this->ObjectTmpl<T>::validate(pEventSink);
    return returnCode;
}

}; // namespace : LX
