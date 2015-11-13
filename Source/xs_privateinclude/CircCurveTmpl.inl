#include "stdafx.h"
#include "LXTypes.h"
#include "CircCurve.h"
#include "LXTypesTmpl.h"
#include "CircCurveImpl.h"
#include "LXTypesTmpl.inl"

namespace LX
{


template<class T>
CircCurveTmpl<T>::CircCurveTmpl<T> (DocumentImpl* pDoc)
    : DoubleCollectionTmpl<T>(pDoc)
{
    m_Length = 0.0;
    m_bLength_valueSet = false;
    m_Radius = 0.0;
    m_bRadius_valueSet = false;
    m_Desc = L"";
    m_bDesc_valueSet = false;
}


template<class T>
CircCurveTmpl<T>::~CircCurveTmpl<T> ()
{
}



template <class T>
double CircCurveTmpl<T>::getLength() const
{
    return m_Length;
}

template <class T>
void CircCurveTmpl<T>::setLength(double value)
{
    m_Length = value;
    m_bLength_valueSet = true;
}

template <class T>
bool CircCurveTmpl<T>::hasValue_Length() const
{
    return m_bLength_valueSet;
}

template <class T>
void CircCurveTmpl<T>::resetValue_Length()
{
    m_bLength_valueSet = false;
}


template <class T>
double CircCurveTmpl<T>::getRadius() const
{
    return m_Radius;
}

template <class T>
void CircCurveTmpl<T>::setRadius(double value)
{
    m_Radius = value;
    m_bRadius_valueSet = true;
}

template <class T>
bool CircCurveTmpl<T>::hasValue_Radius() const
{
    return m_bRadius_valueSet;
}

template <class T>
void CircCurveTmpl<T>::resetValue_Radius()
{
    m_bRadius_valueSet = false;
}


template <class T>
String CircCurveTmpl<T>::getDesc() const
{
    return m_Desc;
}

template <class T>
void CircCurveTmpl<T>::setDesc(String value)
{
    m_Desc = value;
    m_bDesc_valueSet = true;
}

template <class T>
bool CircCurveTmpl<T>::hasValue_Desc() const
{
    return m_bDesc_valueSet;
}

template <class T>
void CircCurveTmpl<T>::resetValue_Desc()
{
    m_bDesc_valueSet = false;
}



template <class T>
void CircCurveTmpl<T>::toXml (IStream& stream)
{
    static const wchar_t* kstrElementName = L"CircCurve";
    stream.write(L"<");
    stream.write(kstrElementName);
    if (m_bLength_valueSet)
    {
        stream.write(L" length=\"");
        DoubleObjectImpl::streamOut(m_Length, stream);
        stream.write(L"\"");
    }
    if (m_bRadius_valueSet)
    {
        stream.write(L" radius=\"");
        DoubleObjectImpl::streamOut(m_Radius, stream);
        stream.write(L"\"");
    }
    if (m_bDesc_valueSet)
    {
        stream.write(L" desc=\"");
        StringObjectImpl::streamOut(m_Desc, stream);
        stream.write(L"\"");
    }
    stream.write(L">");
    toStream(stream);
    stream.write(L"</");
    stream.write(kstrElementName);
    stream.write(L">");
}

template <class T>
Object::ValidityEnum CircCurveTmpl<T>::validate (IValidationEventSink* pEventSink) const
{
    Object::ValidityEnum returnCode = Object::kValid;
    returnCode = this->ObjectTmpl<T>::validate(pEventSink);
    if (!m_bLength_valueSet)
    {
        pEventSink->onEvent(IValidationEventSink::EventCode::kRequiredValueNotSet, this, L"Length", L"Required value not set");
        returnCode = Object::kInvalid;
    }
    if (!m_bRadius_valueSet)
    {
        pEventSink->onEvent(IValidationEventSink::EventCode::kRequiredValueNotSet, this, L"Radius", L"Required value not set");
        returnCode = Object::kInvalid;
    }
    return returnCode;
}

}; // namespace : LX
