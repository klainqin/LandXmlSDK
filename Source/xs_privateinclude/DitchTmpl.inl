#include "stdafx.h"
#include "LXTypes.h"
#include "Ditch.h"
#include "LXTypesTmpl.h"
#include "DitchImpl.h"
#include "LXTypesTmpl.inl"

namespace LX
{


template<class T>
DitchTmpl<T>::DitchTmpl (DocumentImpl* pDoc)
    : ObjectTmpl<T>(pDoc)
{
    m_StaStart = 0.0;
    m_bStaStart_valueSet = false;
    m_StaEnd = 0.0;
    m_bStaEnd_valueSet = false;
    m_BottomWidth = 0.0;
    m_bBottomWidth_valueSet = false;
    m_BottomShape = EnumDitchBottomShape::Values::k_null;
    m_bBottomShape_valueSet = false;
}


template<class T>
DitchTmpl<T>::~DitchTmpl ()
{
}



template <class T>
double DitchTmpl<T>::getStaStart() const
{
    return m_StaStart;
}

template <class T>
void DitchTmpl<T>::setStaStart(double value)
{
    m_StaStart = value;
    m_bStaStart_valueSet = true;
}

template <class T>
bool DitchTmpl<T>::hasValue_StaStart() const
{
    return m_bStaStart_valueSet;
}

template <class T>
void DitchTmpl<T>::resetValue_StaStart()
{
    m_bStaStart_valueSet = false;
}


template <class T>
double DitchTmpl<T>::getStaEnd() const
{
    return m_StaEnd;
}

template <class T>
void DitchTmpl<T>::setStaEnd(double value)
{
    m_StaEnd = value;
    m_bStaEnd_valueSet = true;
}

template <class T>
bool DitchTmpl<T>::hasValue_StaEnd() const
{
    return m_bStaEnd_valueSet;
}

template <class T>
void DitchTmpl<T>::resetValue_StaEnd()
{
    m_bStaEnd_valueSet = false;
}


template <class T>
double DitchTmpl<T>::getBottomWidth() const
{
    return m_BottomWidth;
}

template <class T>
void DitchTmpl<T>::setBottomWidth(double value)
{
    m_BottomWidth = value;
    m_bBottomWidth_valueSet = true;
}

template <class T>
bool DitchTmpl<T>::hasValue_BottomWidth() const
{
    return m_bBottomWidth_valueSet;
}

template <class T>
void DitchTmpl<T>::resetValue_BottomWidth()
{
    m_bBottomWidth_valueSet = false;
}


template <class T>
EnumDitchBottomShape::Values DitchTmpl<T>::getBottomShape() const
{
    return m_BottomShape;
}

template <class T>
void DitchTmpl<T>::setBottomShape(EnumDitchBottomShape::Values value)
{
    m_BottomShape = value;
    m_bBottomShape_valueSet = true;
}

template <class T>
bool DitchTmpl<T>::hasValue_BottomShape() const
{
    return m_bBottomShape_valueSet;
}

template <class T>
void DitchTmpl<T>::resetValue_BottomShape()
{
    m_bBottomShape_valueSet = false;
}



template <class T>
void DitchTmpl<T>::toXml (IStream& stream)
{
    static const wchar_t* kstrElementName = L"Ditch";
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
    if (m_bBottomWidth_valueSet)
    {
        stream.write(L" bottomWidth=\"");
        DoubleObjectImpl::streamOut(m_BottomWidth, stream);
        stream.write(L"\"");
    }
    if (m_bBottomShape_valueSet)
    {
        stream.write(L" bottomShape=\"");
        EnumDitchBottomShapeImpl::streamOut(m_BottomShape, stream);
        stream.write(L"\"");
    }
    stream.write(L">");
    stream.write(L"</");
    stream.write(kstrElementName);
    stream.write(L">");
}

template <class T>
Object::ValidityEnum DitchTmpl<T>::validate (IValidationEventSink* pEventSink) const
{
    Object::ValidityEnum returnCode = Object::kValid;
    returnCode = this->ObjectTmpl<T>::validate(pEventSink);
    if (!m_bStaStart_valueSet)
    {
        pEventSink->onEvent(IValidationEventSink::EventCode::kRequiredValueNotSet, this, L"StaStart", L"Required value not set");
        returnCode = Object::kInvalid;
    }
    if (!m_bStaEnd_valueSet)
    {
        pEventSink->onEvent(IValidationEventSink::EventCode::kRequiredValueNotSet, this, L"StaEnd", L"Required value not set");
        returnCode = Object::kInvalid;
    }
    if (!m_bBottomWidth_valueSet)
    {
        pEventSink->onEvent(IValidationEventSink::EventCode::kRequiredValueNotSet, this, L"BottomWidth", L"Required value not set");
        returnCode = Object::kInvalid;
    }
    return returnCode;
}

}; // namespace : LX
