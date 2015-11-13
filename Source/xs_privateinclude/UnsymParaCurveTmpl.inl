#include "stdafx.h"
#include "LXTypes.h"
#include "UnsymParaCurve.h"
#include "LXTypesTmpl.h"
#include "UnsymParaCurveImpl.h"
#include "LXTypesTmpl.inl"

namespace LX
{


template<class T>
UnsymParaCurveTmpl<T>::UnsymParaCurveTmpl<T> (DocumentImpl* pDoc)
    : DoubleCollectionTmpl<T>(pDoc)
{
    m_LengthIn = 0.0;
    m_bLengthIn_valueSet = false;
    m_LengthOut = 0.0;
    m_bLengthOut_valueSet = false;
    m_Desc = L"";
    m_bDesc_valueSet = false;
}


template<class T>
UnsymParaCurveTmpl<T>::~UnsymParaCurveTmpl<T> ()
{
}



template <class T>
double UnsymParaCurveTmpl<T>::getLengthIn() const
{
    return m_LengthIn;
}

template <class T>
void UnsymParaCurveTmpl<T>::setLengthIn(double value)
{
    m_LengthIn = value;
    m_bLengthIn_valueSet = true;
}

template <class T>
bool UnsymParaCurveTmpl<T>::hasValue_LengthIn() const
{
    return m_bLengthIn_valueSet;
}

template <class T>
void UnsymParaCurveTmpl<T>::resetValue_LengthIn()
{
    m_bLengthIn_valueSet = false;
}


template <class T>
double UnsymParaCurveTmpl<T>::getLengthOut() const
{
    return m_LengthOut;
}

template <class T>
void UnsymParaCurveTmpl<T>::setLengthOut(double value)
{
    m_LengthOut = value;
    m_bLengthOut_valueSet = true;
}

template <class T>
bool UnsymParaCurveTmpl<T>::hasValue_LengthOut() const
{
    return m_bLengthOut_valueSet;
}

template <class T>
void UnsymParaCurveTmpl<T>::resetValue_LengthOut()
{
    m_bLengthOut_valueSet = false;
}


template <class T>
String UnsymParaCurveTmpl<T>::getDesc() const
{
    return m_Desc;
}

template <class T>
void UnsymParaCurveTmpl<T>::setDesc(String value)
{
    m_Desc = value;
    m_bDesc_valueSet = true;
}

template <class T>
bool UnsymParaCurveTmpl<T>::hasValue_Desc() const
{
    return m_bDesc_valueSet;
}

template <class T>
void UnsymParaCurveTmpl<T>::resetValue_Desc()
{
    m_bDesc_valueSet = false;
}



template <class T>
void UnsymParaCurveTmpl<T>::toXml (IStream& stream)
{
    static const wchar_t* kstrElementName = L"UnsymParaCurve";
    stream.write(L"<");
    stream.write(kstrElementName);
    if (m_bLengthIn_valueSet)
    {
        stream.write(L" lengthIn=\"");
        DoubleObjectImpl::streamOut(m_LengthIn, stream);
        stream.write(L"\"");
    }
    if (m_bLengthOut_valueSet)
    {
        stream.write(L" lengthOut=\"");
        DoubleObjectImpl::streamOut(m_LengthOut, stream);
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
Object::ValidityEnum UnsymParaCurveTmpl<T>::validate (IValidationEventSink* pEventSink) const
{
    Object::ValidityEnum returnCode = Object::kValid;
    returnCode = this->ObjectTmpl<T>::validate(pEventSink);
    if (!m_bLengthIn_valueSet)
    {
        pEventSink->onEvent(IValidationEventSink::EventCode::kRequiredValueNotSet, this, L"LengthIn", L"Required value not set");
        returnCode = Object::kInvalid;
    }
    if (!m_bLengthOut_valueSet)
    {
        pEventSink->onEvent(IValidationEventSink::EventCode::kRequiredValueNotSet, this, L"LengthOut", L"Required value not set");
        returnCode = Object::kInvalid;
    }
    return returnCode;
}

}; // namespace : LX
