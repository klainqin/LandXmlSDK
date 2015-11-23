#include "stdafx.h"
#include "LXTypes.h"
#include "TurnLane.h"
#include "LXTypesTmpl.h"
#include "TurnLaneImpl.h"
#include "LXTypesTmpl.inl"

namespace LX
{


template<class T>
TurnLaneTmpl<T>::TurnLaneTmpl (DocumentImpl* pDoc)
    : ObjectTmpl<T>(pDoc)
{
    m_StaStart = 0.0;
    m_bStaStart_valueSet = false;
    m_StaEnd = 0.0;
    m_bStaEnd_valueSet = false;
    m_BeginFullWidthSta = 0.0;
    m_bBeginFullWidthSta_valueSet = false;
    m_Width = 0.0;
    m_bWidth_valueSet = false;
    m_SideofRoad = EnumSideofRoadType::Values::k_null;
    m_bSideofRoad_valueSet = false;
    m_Type = EnumTurnLaneType::Values::k_null;
    m_bType_valueSet = false;
    m_TaperType = EnumLaneTaperType::Values::k_null;
    m_bTaperType_valueSet = false;
    m_TaperTangentLength = 0.0;
    m_bTaperTangentLength_valueSet = false;
}


template<class T>
TurnLaneTmpl<T>::~TurnLaneTmpl ()
{
}



template <class T>
double TurnLaneTmpl<T>::getStaStart() const
{
    return m_StaStart;
}

template <class T>
void TurnLaneTmpl<T>::setStaStart(double value)
{
    m_StaStart = value;
    m_bStaStart_valueSet = true;
}

template <class T>
bool TurnLaneTmpl<T>::hasValue_StaStart() const
{
    return m_bStaStart_valueSet;
}

template <class T>
void TurnLaneTmpl<T>::resetValue_StaStart()
{
    m_bStaStart_valueSet = false;
}


template <class T>
double TurnLaneTmpl<T>::getStaEnd() const
{
    return m_StaEnd;
}

template <class T>
void TurnLaneTmpl<T>::setStaEnd(double value)
{
    m_StaEnd = value;
    m_bStaEnd_valueSet = true;
}

template <class T>
bool TurnLaneTmpl<T>::hasValue_StaEnd() const
{
    return m_bStaEnd_valueSet;
}

template <class T>
void TurnLaneTmpl<T>::resetValue_StaEnd()
{
    m_bStaEnd_valueSet = false;
}


template <class T>
double TurnLaneTmpl<T>::getBeginFullWidthSta() const
{
    return m_BeginFullWidthSta;
}

template <class T>
void TurnLaneTmpl<T>::setBeginFullWidthSta(double value)
{
    m_BeginFullWidthSta = value;
    m_bBeginFullWidthSta_valueSet = true;
}

template <class T>
bool TurnLaneTmpl<T>::hasValue_BeginFullWidthSta() const
{
    return m_bBeginFullWidthSta_valueSet;
}

template <class T>
void TurnLaneTmpl<T>::resetValue_BeginFullWidthSta()
{
    m_bBeginFullWidthSta_valueSet = false;
}


template <class T>
double TurnLaneTmpl<T>::getWidth() const
{
    return m_Width;
}

template <class T>
void TurnLaneTmpl<T>::setWidth(double value)
{
    m_Width = value;
    m_bWidth_valueSet = true;
}

template <class T>
bool TurnLaneTmpl<T>::hasValue_Width() const
{
    return m_bWidth_valueSet;
}

template <class T>
void TurnLaneTmpl<T>::resetValue_Width()
{
    m_bWidth_valueSet = false;
}


template <class T>
EnumSideofRoadType::Values TurnLaneTmpl<T>::getSideofRoad() const
{
    return m_SideofRoad;
}

template <class T>
void TurnLaneTmpl<T>::setSideofRoad(EnumSideofRoadType::Values value)
{
    m_SideofRoad = value;
    m_bSideofRoad_valueSet = true;
}

template <class T>
bool TurnLaneTmpl<T>::hasValue_SideofRoad() const
{
    return m_bSideofRoad_valueSet;
}

template <class T>
void TurnLaneTmpl<T>::resetValue_SideofRoad()
{
    m_bSideofRoad_valueSet = false;
}


template <class T>
EnumTurnLaneType::Values TurnLaneTmpl<T>::getType() const
{
    return m_Type;
}

template <class T>
void TurnLaneTmpl<T>::setType(EnumTurnLaneType::Values value)
{
    m_Type = value;
    m_bType_valueSet = true;
}

template <class T>
bool TurnLaneTmpl<T>::hasValue_Type() const
{
    return m_bType_valueSet;
}

template <class T>
void TurnLaneTmpl<T>::resetValue_Type()
{
    m_bType_valueSet = false;
}


template <class T>
EnumLaneTaperType::Values TurnLaneTmpl<T>::getTaperType() const
{
    return m_TaperType;
}

template <class T>
void TurnLaneTmpl<T>::setTaperType(EnumLaneTaperType::Values value)
{
    m_TaperType = value;
    m_bTaperType_valueSet = true;
}

template <class T>
bool TurnLaneTmpl<T>::hasValue_TaperType() const
{
    return m_bTaperType_valueSet;
}

template <class T>
void TurnLaneTmpl<T>::resetValue_TaperType()
{
    m_bTaperType_valueSet = false;
}


template <class T>
double TurnLaneTmpl<T>::getTaperTangentLength() const
{
    return m_TaperTangentLength;
}

template <class T>
void TurnLaneTmpl<T>::setTaperTangentLength(double value)
{
    m_TaperTangentLength = value;
    m_bTaperTangentLength_valueSet = true;
}

template <class T>
bool TurnLaneTmpl<T>::hasValue_TaperTangentLength() const
{
    return m_bTaperTangentLength_valueSet;
}

template <class T>
void TurnLaneTmpl<T>::resetValue_TaperTangentLength()
{
    m_bTaperTangentLength_valueSet = false;
}



template <class T>
void TurnLaneTmpl<T>::toXml (IStream& stream)
{
    static const wchar_t* kstrElementName = L"TurnLane";
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
    if (m_bType_valueSet)
    {
        stream.write(L" type=\"");
        EnumTurnLaneTypeImpl::streamOut(m_Type, stream);
        stream.write(L"\"");
    }
    if (m_bTaperType_valueSet)
    {
        stream.write(L" taperType=\"");
        EnumLaneTaperTypeImpl::streamOut(m_TaperType, stream);
        stream.write(L"\"");
    }
    if (m_bTaperTangentLength_valueSet)
    {
        stream.write(L" taperTangentLength=\"");
        DoubleObjectImpl::streamOut(m_TaperTangentLength, stream);
        stream.write(L"\"");
    }
    stream.write(L">");
    stream.write(L"</");
    stream.write(kstrElementName);
    stream.write(L">");
}

template <class T>
Object::ValidityEnum TurnLaneTmpl<T>::validate (IValidationEventSink* pEventSink) const
{
    Object::ValidityEnum returnCode = Object::kValid;
    returnCode = this->ObjectTmpl<T>::validate(pEventSink);
    return returnCode;
}

}; // namespace : LX
