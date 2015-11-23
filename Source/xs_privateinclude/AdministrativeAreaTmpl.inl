#include "stdafx.h"
#include "LXTypes.h"
#include "AdministrativeArea.h"
#include "LXTypesTmpl.h"
#include "AdministrativeAreaImpl.h"
#include "LXTypesTmpl.inl"

namespace LX
{


template<class T>
AdministrativeAreaTmpl<T>::AdministrativeAreaTmpl (DocumentImpl* pDoc)
    : ObjectTmpl<T>(pDoc)
{
    m_AdminAreaType = L"";
    m_bAdminAreaType_valueSet = false;
    m_AdminAreaName = L"";
    m_bAdminAreaName_valueSet = false;
    m_AdminAreaCode = L"";
    m_bAdminAreaCode_valueSet = false;
    m_PclRef = NULL;
}


template<class T>
AdministrativeAreaTmpl<T>::~AdministrativeAreaTmpl ()
{
    if (m_PclRef != NULL)
    {
        m_PclRef->release();
        m_PclRef = NULL;
    }
}


template <class T>
StringCollection* AdministrativeAreaTmpl<T>::getPclRef() const
{
    return m_PclRef;
}

template <class T>
void AdministrativeAreaTmpl<T>::setPclRef(StringCollection* pValue)
{
    m_PclRef = pValue;
}


template <class T>
String AdministrativeAreaTmpl<T>::getAdminAreaType() const
{
    return m_AdminAreaType;
}

template <class T>
void AdministrativeAreaTmpl<T>::setAdminAreaType(String value)
{
    m_AdminAreaType = value;
    m_bAdminAreaType_valueSet = true;
}

template <class T>
bool AdministrativeAreaTmpl<T>::hasValue_AdminAreaType() const
{
    return m_bAdminAreaType_valueSet;
}

template <class T>
void AdministrativeAreaTmpl<T>::resetValue_AdminAreaType()
{
    m_bAdminAreaType_valueSet = false;
}


template <class T>
String AdministrativeAreaTmpl<T>::getAdminAreaName() const
{
    return m_AdminAreaName;
}

template <class T>
void AdministrativeAreaTmpl<T>::setAdminAreaName(String value)
{
    m_AdminAreaName = value;
    m_bAdminAreaName_valueSet = true;
}

template <class T>
bool AdministrativeAreaTmpl<T>::hasValue_AdminAreaName() const
{
    return m_bAdminAreaName_valueSet;
}

template <class T>
void AdministrativeAreaTmpl<T>::resetValue_AdminAreaName()
{
    m_bAdminAreaName_valueSet = false;
}


template <class T>
String AdministrativeAreaTmpl<T>::getAdminAreaCode() const
{
    return m_AdminAreaCode;
}

template <class T>
void AdministrativeAreaTmpl<T>::setAdminAreaCode(String value)
{
    m_AdminAreaCode = value;
    m_bAdminAreaCode_valueSet = true;
}

template <class T>
bool AdministrativeAreaTmpl<T>::hasValue_AdminAreaCode() const
{
    return m_bAdminAreaCode_valueSet;
}

template <class T>
void AdministrativeAreaTmpl<T>::resetValue_AdminAreaCode()
{
    m_bAdminAreaCode_valueSet = false;
}



template <class T>
void AdministrativeAreaTmpl<T>::toXml (IStream& stream)
{
    static const wchar_t* kstrElementName = L"AdministrativeArea";
    stream.write(L"<");
    stream.write(kstrElementName);
    if (m_bAdminAreaType_valueSet)
    {
        stream.write(L" adminAreaType=\"");
        StringObjectImpl::streamOut(m_AdminAreaType, stream);
        stream.write(L"\"");
    }
    if (m_bAdminAreaName_valueSet)
    {
        stream.write(L" adminAreaName=\"");
        StringObjectImpl::streamOut(m_AdminAreaName, stream);
        stream.write(L"\"");
    }
    if (m_bAdminAreaCode_valueSet)
    {
        stream.write(L" adminAreaCode=\"");
        StringObjectImpl::streamOut(m_AdminAreaCode, stream);
        stream.write(L"\"");
    }
    if (m_PclRef)
    {
        stream.write(L" pclRef=\"");
        StringCollectionImpl::streamOut(m_PclRef, stream);
        stream.write(L"\"");
    }
    stream.write(L">");
    stream.write(L"</");
    stream.write(kstrElementName);
    stream.write(L">");
}

template <class T>
Object::ValidityEnum AdministrativeAreaTmpl<T>::validate (IValidationEventSink* pEventSink) const
{
    Object::ValidityEnum returnCode = Object::kValid;
    returnCode = this->ObjectTmpl<T>::validate(pEventSink);
    if (!m_bAdminAreaType_valueSet)
    {
        pEventSink->onEvent(IValidationEventSink::EventCode::kRequiredValueNotSet, this, L"AdminAreaType", L"Required value not set");
        returnCode = Object::kInvalid;
    }
    return returnCode;
}

}; // namespace : LX
