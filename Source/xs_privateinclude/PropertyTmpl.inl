#include "stdafx.h"
#include "LXTypes.h"
#include "Property.h"
#include "LXTypesTmpl.h"
#include "PropertyImpl.h"
#include "LXTypesTmpl.inl"

namespace LX
{


template<class T>
PropertyTmpl<T>::PropertyTmpl (DocumentImpl* pDoc)
    : ObjectTmpl<T>(pDoc)
{
    m_Label = L"";
    m_bLabel_valueSet = false;
    m_Value = L"";
    m_bValue_valueSet = false;
}


template<class T>
PropertyTmpl<T>::~PropertyTmpl ()
{
}



template <class T>
String PropertyTmpl<T>::getLabel() const
{
    return m_Label;
}

template <class T>
void PropertyTmpl<T>::setLabel(String value)
{
    m_Label = value;
    m_bLabel_valueSet = true;
}

template <class T>
bool PropertyTmpl<T>::hasValue_Label() const
{
    return m_bLabel_valueSet;
}

template <class T>
void PropertyTmpl<T>::resetValue_Label()
{
    m_bLabel_valueSet = false;
}


template <class T>
String PropertyTmpl<T>::getValue() const
{
    return m_Value;
}

template <class T>
void PropertyTmpl<T>::setValue(String value)
{
    m_Value = value;
    m_bValue_valueSet = true;
}

template <class T>
bool PropertyTmpl<T>::hasValue_Value() const
{
    return m_bValue_valueSet;
}

template <class T>
void PropertyTmpl<T>::resetValue_Value()
{
    m_bValue_valueSet = false;
}



template <class T>
void PropertyTmpl<T>::toXml (IStream& stream)
{
    static const wchar_t* kstrElementName = L"Property";
    stream.write(L"<");
    stream.write(kstrElementName);
    if (m_bLabel_valueSet)
    {
        stream.write(L" label=\"");
        StringObjectImpl::streamOut(m_Label, stream);
        stream.write(L"\"");
    }
    if (m_bValue_valueSet)
    {
        stream.write(L" value=\"");
        StringObjectImpl::streamOut(m_Value, stream);
        stream.write(L"\"");
    }
    stream.write(L">");
    stream.write(L"</");
    stream.write(kstrElementName);
    stream.write(L">");
}

template <class T>
Object::ValidityEnum PropertyTmpl<T>::validate (IValidationEventSink* pEventSink) const
{
    Object::ValidityEnum returnCode = Object::kValid;
    returnCode = this->ObjectTmpl<T>::validate(pEventSink);
    if (!m_bLabel_valueSet)
    {
        pEventSink->onEvent(IValidationEventSink::EventCode::kRequiredValueNotSet, this, L"Label", L"Required value not set");
        returnCode = Object::kInvalid;
    }
    if (!m_bValue_valueSet)
    {
        pEventSink->onEvent(IValidationEventSink::EventCode::kRequiredValueNotSet, this, L"Value", L"Required value not set");
        returnCode = Object::kInvalid;
    }
    return returnCode;
}

}; // namespace : LX
