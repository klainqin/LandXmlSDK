#include "stdafx.h"
#include "LXTypes.h"
#include "RoadSign.h"
#include "LXTypesTmpl.h"
#include "RoadSignImpl.h"
#include "LXTypesTmpl.inl"

namespace LX
{


template<class T>
RoadSignTmpl<T>::RoadSignTmpl<T> (DocumentImpl* pDoc)
    : ObjectTmpl<T>(pDoc)
{
    m_MUTCDCode = L"";
    m_bMUTCDCode_valueSet = false;
    m_Station = 0.0;
    m_bStation_valueSet = false;
    m_Offset = 0.0;
    m_bOffset_valueSet = false;
    m_SideofRoad = EnumSideofRoadType::Values::k_null;
    m_bSideofRoad_valueSet = false;
    m_Type = EnumRoadSignType::Values::k_null;
    m_bType_valueSet = false;
    m_MountHeight = 0.0;
    m_bMountHeight_valueSet = false;
    m_Width = 0.0;
    m_bWidth_valueSet = false;
    m_Height = 0.0;
    m_bHeight_valueSet = false;
}


template<class T>
RoadSignTmpl<T>::~RoadSignTmpl<T> ()
{
}



template <class T>
String RoadSignTmpl<T>::getMUTCDCode() const
{
    return m_MUTCDCode;
}

template <class T>
void RoadSignTmpl<T>::setMUTCDCode(String value)
{
    m_MUTCDCode = value;
    m_bMUTCDCode_valueSet = true;
}

template <class T>
bool RoadSignTmpl<T>::hasValue_MUTCDCode() const
{
    return m_bMUTCDCode_valueSet;
}

template <class T>
void RoadSignTmpl<T>::resetValue_MUTCDCode()
{
    m_bMUTCDCode_valueSet = false;
}


template <class T>
double RoadSignTmpl<T>::getStation() const
{
    return m_Station;
}

template <class T>
void RoadSignTmpl<T>::setStation(double value)
{
    m_Station = value;
    m_bStation_valueSet = true;
}

template <class T>
bool RoadSignTmpl<T>::hasValue_Station() const
{
    return m_bStation_valueSet;
}

template <class T>
void RoadSignTmpl<T>::resetValue_Station()
{
    m_bStation_valueSet = false;
}


template <class T>
double RoadSignTmpl<T>::getOffset() const
{
    return m_Offset;
}

template <class T>
void RoadSignTmpl<T>::setOffset(double value)
{
    m_Offset = value;
    m_bOffset_valueSet = true;
}

template <class T>
bool RoadSignTmpl<T>::hasValue_Offset() const
{
    return m_bOffset_valueSet;
}

template <class T>
void RoadSignTmpl<T>::resetValue_Offset()
{
    m_bOffset_valueSet = false;
}


template <class T>
EnumSideofRoadType::Values RoadSignTmpl<T>::getSideofRoad() const
{
    return m_SideofRoad;
}

template <class T>
void RoadSignTmpl<T>::setSideofRoad(EnumSideofRoadType::Values value)
{
    m_SideofRoad = value;
    m_bSideofRoad_valueSet = true;
}

template <class T>
bool RoadSignTmpl<T>::hasValue_SideofRoad() const
{
    return m_bSideofRoad_valueSet;
}

template <class T>
void RoadSignTmpl<T>::resetValue_SideofRoad()
{
    m_bSideofRoad_valueSet = false;
}


template <class T>
EnumRoadSignType::Values RoadSignTmpl<T>::getType() const
{
    return m_Type;
}

template <class T>
void RoadSignTmpl<T>::setType(EnumRoadSignType::Values value)
{
    m_Type = value;
    m_bType_valueSet = true;
}

template <class T>
bool RoadSignTmpl<T>::hasValue_Type() const
{
    return m_bType_valueSet;
}

template <class T>
void RoadSignTmpl<T>::resetValue_Type()
{
    m_bType_valueSet = false;
}


template <class T>
double RoadSignTmpl<T>::getMountHeight() const
{
    return m_MountHeight;
}

template <class T>
void RoadSignTmpl<T>::setMountHeight(double value)
{
    m_MountHeight = value;
    m_bMountHeight_valueSet = true;
}

template <class T>
bool RoadSignTmpl<T>::hasValue_MountHeight() const
{
    return m_bMountHeight_valueSet;
}

template <class T>
void RoadSignTmpl<T>::resetValue_MountHeight()
{
    m_bMountHeight_valueSet = false;
}


template <class T>
double RoadSignTmpl<T>::getWidth() const
{
    return m_Width;
}

template <class T>
void RoadSignTmpl<T>::setWidth(double value)
{
    m_Width = value;
    m_bWidth_valueSet = true;
}

template <class T>
bool RoadSignTmpl<T>::hasValue_Width() const
{
    return m_bWidth_valueSet;
}

template <class T>
void RoadSignTmpl<T>::resetValue_Width()
{
    m_bWidth_valueSet = false;
}


template <class T>
double RoadSignTmpl<T>::getHeight() const
{
    return m_Height;
}

template <class T>
void RoadSignTmpl<T>::setHeight(double value)
{
    m_Height = value;
    m_bHeight_valueSet = true;
}

template <class T>
bool RoadSignTmpl<T>::hasValue_Height() const
{
    return m_bHeight_valueSet;
}

template <class T>
void RoadSignTmpl<T>::resetValue_Height()
{
    m_bHeight_valueSet = false;
}



template <class T>
void RoadSignTmpl<T>::toXml (IStream& stream)
{
    static const wchar_t* kstrElementName = L"RoadSign";
    stream.write(L"<");
    stream.write(kstrElementName);
    if (m_bMUTCDCode_valueSet)
    {
        stream.write(L" MUTCDCode=\"");
        StringObjectImpl::streamOut(m_MUTCDCode, stream);
        stream.write(L"\"");
    }
    if (m_bStation_valueSet)
    {
        stream.write(L" station=\"");
        DoubleObjectImpl::streamOut(m_Station, stream);
        stream.write(L"\"");
    }
    if (m_bOffset_valueSet)
    {
        stream.write(L" offset=\"");
        DoubleObjectImpl::streamOut(m_Offset, stream);
        stream.write(L"\"");
    }
    if (m_bSideofRoad_valueSet)
    {
        stream.write(L" sideofRoad=\"");
        EnumSideofRoadTypeImpl::streamOut(m_SideofRoad, stream);
        stream.write(L"\"");
    }
    if (m_bType_valueSet)
    {
        stream.write(L" type=\"");
        EnumRoadSignTypeImpl::streamOut(m_Type, stream);
        stream.write(L"\"");
    }
    if (m_bMountHeight_valueSet)
    {
        stream.write(L" mountHeight=\"");
        DoubleObjectImpl::streamOut(m_MountHeight, stream);
        stream.write(L"\"");
    }
    if (m_bWidth_valueSet)
    {
        stream.write(L" width=\"");
        DoubleObjectImpl::streamOut(m_Width, stream);
        stream.write(L"\"");
    }
    if (m_bHeight_valueSet)
    {
        stream.write(L" height=\"");
        DoubleObjectImpl::streamOut(m_Height, stream);
        stream.write(L"\"");
    }
    stream.write(L">");
    stream.write(L"</");
    stream.write(kstrElementName);
    stream.write(L">");
}

template <class T>
Object::ValidityEnum RoadSignTmpl<T>::validate (IValidationEventSink* pEventSink) const
{
    Object::ValidityEnum returnCode = Object::kValid;
    returnCode = this->ObjectTmpl<T>::validate(pEventSink);
    return returnCode;
}

}; // namespace : LX
