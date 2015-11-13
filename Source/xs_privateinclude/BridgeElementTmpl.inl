#include "stdafx.h"
#include "LXTypes.h"
#include "BridgeElement.h"
#include "LXTypesTmpl.h"
#include "BridgeElementImpl.h"
#include "LXTypesTmpl.inl"

namespace LX
{


template<class T>
BridgeElementTmpl<T>::BridgeElementTmpl<T> (DocumentImpl* pDoc)
    : ObjectTmpl<T>(pDoc)
{
    m_StaStart = 0.0;
    m_bStaStart_valueSet = false;
    m_StaEnd = 0.0;
    m_bStaEnd_valueSet = false;
    m_Width = 0.0;
    m_bWidth_valueSet = false;
    m_ProjectType = EnumBridgeProjectType::Values::k_null;
    m_bProjectType_valueSet = false;
}


template<class T>
BridgeElementTmpl<T>::~BridgeElementTmpl<T> ()
{
}



template <class T>
double BridgeElementTmpl<T>::getStaStart() const
{
    return m_StaStart;
}

template <class T>
void BridgeElementTmpl<T>::setStaStart(double value)
{
    m_StaStart = value;
    m_bStaStart_valueSet = true;
}

template <class T>
bool BridgeElementTmpl<T>::hasValue_StaStart() const
{
    return m_bStaStart_valueSet;
}

template <class T>
void BridgeElementTmpl<T>::resetValue_StaStart()
{
    m_bStaStart_valueSet = false;
}


template <class T>
double BridgeElementTmpl<T>::getStaEnd() const
{
    return m_StaEnd;
}

template <class T>
void BridgeElementTmpl<T>::setStaEnd(double value)
{
    m_StaEnd = value;
    m_bStaEnd_valueSet = true;
}

template <class T>
bool BridgeElementTmpl<T>::hasValue_StaEnd() const
{
    return m_bStaEnd_valueSet;
}

template <class T>
void BridgeElementTmpl<T>::resetValue_StaEnd()
{
    m_bStaEnd_valueSet = false;
}


template <class T>
double BridgeElementTmpl<T>::getWidth() const
{
    return m_Width;
}

template <class T>
void BridgeElementTmpl<T>::setWidth(double value)
{
    m_Width = value;
    m_bWidth_valueSet = true;
}

template <class T>
bool BridgeElementTmpl<T>::hasValue_Width() const
{
    return m_bWidth_valueSet;
}

template <class T>
void BridgeElementTmpl<T>::resetValue_Width()
{
    m_bWidth_valueSet = false;
}


template <class T>
EnumBridgeProjectType::Values BridgeElementTmpl<T>::getProjectType() const
{
    return m_ProjectType;
}

template <class T>
void BridgeElementTmpl<T>::setProjectType(EnumBridgeProjectType::Values value)
{
    m_ProjectType = value;
    m_bProjectType_valueSet = true;
}

template <class T>
bool BridgeElementTmpl<T>::hasValue_ProjectType() const
{
    return m_bProjectType_valueSet;
}

template <class T>
void BridgeElementTmpl<T>::resetValue_ProjectType()
{
    m_bProjectType_valueSet = false;
}



template <class T>
void BridgeElementTmpl<T>::toXml (IStream& stream)
{
    static const wchar_t* kstrElementName = L"BridgeElement";
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
    if (m_bWidth_valueSet)
    {
        stream.write(L" width=\"");
        DoubleObjectImpl::streamOut(m_Width, stream);
        stream.write(L"\"");
    }
    if (m_bProjectType_valueSet)
    {
        stream.write(L" projectType=\"");
        EnumBridgeProjectTypeImpl::streamOut(m_ProjectType, stream);
        stream.write(L"\"");
    }
    stream.write(L">");
    stream.write(L"</");
    stream.write(kstrElementName);
    stream.write(L">");
}

template <class T>
Object::ValidityEnum BridgeElementTmpl<T>::validate (IValidationEventSink* pEventSink) const
{
    Object::ValidityEnum returnCode = Object::kValid;
    returnCode = this->ObjectTmpl<T>::validate(pEventSink);
    return returnCode;
}

}; // namespace : LX
