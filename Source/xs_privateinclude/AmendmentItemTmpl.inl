#include "stdafx.h"
#include "LXTypes.h"
#include "AmendmentItem.h"
#include "LXTypesTmpl.h"
#include "AmendmentItemImpl.h"
#include "LXTypesTmpl.inl"

namespace LX
{


template<class T>
AmendmentItemTmpl<T>::AmendmentItemTmpl<T> (DocumentImpl* pDoc)
    : ObjectTmpl<T>(pDoc)
{
    m_ElementName = L"";
    m_bElementName_valueSet = false;
    m_OldName = L"";
    m_bOldName_valueSet = false;
    m_NewName = L"";
    m_bNewName_valueSet = false;
}


template<class T>
AmendmentItemTmpl<T>::~AmendmentItemTmpl<T> ()
{
}



template <class T>
String AmendmentItemTmpl<T>::getElementName() const
{
    return m_ElementName;
}

template <class T>
void AmendmentItemTmpl<T>::setElementName(String value)
{
    m_ElementName = value;
    m_bElementName_valueSet = true;
}

template <class T>
bool AmendmentItemTmpl<T>::hasValue_ElementName() const
{
    return m_bElementName_valueSet;
}

template <class T>
void AmendmentItemTmpl<T>::resetValue_ElementName()
{
    m_bElementName_valueSet = false;
}


template <class T>
String AmendmentItemTmpl<T>::getOldName() const
{
    return m_OldName;
}

template <class T>
void AmendmentItemTmpl<T>::setOldName(String value)
{
    m_OldName = value;
    m_bOldName_valueSet = true;
}

template <class T>
bool AmendmentItemTmpl<T>::hasValue_OldName() const
{
    return m_bOldName_valueSet;
}

template <class T>
void AmendmentItemTmpl<T>::resetValue_OldName()
{
    m_bOldName_valueSet = false;
}


template <class T>
String AmendmentItemTmpl<T>::getNewName() const
{
    return m_NewName;
}

template <class T>
void AmendmentItemTmpl<T>::setNewName(String value)
{
    m_NewName = value;
    m_bNewName_valueSet = true;
}

template <class T>
bool AmendmentItemTmpl<T>::hasValue_NewName() const
{
    return m_bNewName_valueSet;
}

template <class T>
void AmendmentItemTmpl<T>::resetValue_NewName()
{
    m_bNewName_valueSet = false;
}



template <class T>
void AmendmentItemTmpl<T>::toXml (IStream& stream)
{
    static const wchar_t* kstrElementName = L"AmendmentItem";
    stream.write(L"<");
    stream.write(kstrElementName);
    if (m_bElementName_valueSet)
    {
        stream.write(L" elementName=\"");
        StringObjectImpl::streamOut(m_ElementName, stream);
        stream.write(L"\"");
    }
    if (m_bOldName_valueSet)
    {
        stream.write(L" oldName=\"");
        StringObjectImpl::streamOut(m_OldName, stream);
        stream.write(L"\"");
    }
    if (m_bNewName_valueSet)
    {
        stream.write(L" newName=\"");
        StringObjectImpl::streamOut(m_NewName, stream);
        stream.write(L"\"");
    }
    stream.write(L">");
    stream.write(L"</");
    stream.write(kstrElementName);
    stream.write(L">");
}

template <class T>
Object::ValidityEnum AmendmentItemTmpl<T>::validate (IValidationEventSink* pEventSink) const
{
    Object::ValidityEnum returnCode = Object::kValid;
    returnCode = this->ObjectTmpl<T>::validate(pEventSink);
    return returnCode;
}

}; // namespace : LX
