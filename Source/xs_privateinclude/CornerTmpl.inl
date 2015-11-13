#include "stdafx.h"
#include "LXTypes.h"
#include "Corner.h"
#include "LXTypesTmpl.h"
#include "CornerImpl.h"
#include "LXTypesTmpl.inl"

namespace LX
{


template<class T>
CornerTmpl<T>::CornerTmpl<T> (DocumentImpl* pDoc)
    : ObjectTmpl<T>(pDoc)
{
    m_StaStart = 0.0;
    m_bStaStart_valueSet = false;
    m_StaEnd = 0.0;
    m_bStaEnd_valueSet = false;
    m_Type = EnumCornerType::Values::k_null;
    m_bType_valueSet = false;
}


template<class T>
CornerTmpl<T>::~CornerTmpl<T> ()
{
}



template <class T>
double CornerTmpl<T>::getStaStart() const
{
    return m_StaStart;
}

template <class T>
void CornerTmpl<T>::setStaStart(double value)
{
    m_StaStart = value;
    m_bStaStart_valueSet = true;
}

template <class T>
bool CornerTmpl<T>::hasValue_StaStart() const
{
    return m_bStaStart_valueSet;
}

template <class T>
void CornerTmpl<T>::resetValue_StaStart()
{
    m_bStaStart_valueSet = false;
}


template <class T>
double CornerTmpl<T>::getStaEnd() const
{
    return m_StaEnd;
}

template <class T>
void CornerTmpl<T>::setStaEnd(double value)
{
    m_StaEnd = value;
    m_bStaEnd_valueSet = true;
}

template <class T>
bool CornerTmpl<T>::hasValue_StaEnd() const
{
    return m_bStaEnd_valueSet;
}

template <class T>
void CornerTmpl<T>::resetValue_StaEnd()
{
    m_bStaEnd_valueSet = false;
}


template <class T>
EnumCornerType::Values CornerTmpl<T>::getType() const
{
    return m_Type;
}

template <class T>
void CornerTmpl<T>::setType(EnumCornerType::Values value)
{
    m_Type = value;
    m_bType_valueSet = true;
}

template <class T>
bool CornerTmpl<T>::hasValue_Type() const
{
    return m_bType_valueSet;
}

template <class T>
void CornerTmpl<T>::resetValue_Type()
{
    m_bType_valueSet = false;
}



template <class T>
void CornerTmpl<T>::toXml (IStream& stream)
{
    static const wchar_t* kstrElementName = L"Corner";
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
    if (m_bType_valueSet)
    {
        stream.write(L" type=\"");
        EnumCornerTypeImpl::streamOut(m_Type, stream);
        stream.write(L"\"");
    }
    stream.write(L">");
    stream.write(L"</");
    stream.write(kstrElementName);
    stream.write(L">");
}

template <class T>
Object::ValidityEnum CornerTmpl<T>::validate (IValidationEventSink* pEventSink) const
{
    Object::ValidityEnum returnCode = Object::kValid;
    returnCode = this->ObjectTmpl<T>::validate(pEventSink);
    return returnCode;
}

}; // namespace : LX
