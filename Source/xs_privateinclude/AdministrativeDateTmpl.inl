#include "stdafx.h"
#include "LXTypes.h"
#include "AdministrativeDate.h"
#include "LXTypesTmpl.h"
#include "AdministrativeDateImpl.h"
#include "LXTypesTmpl.inl"

namespace LX
{


template<class T>
AdministrativeDateTmpl<T>::AdministrativeDateTmpl<T> (DocumentImpl* pDoc)
    : ObjectTmpl<T>(pDoc)
{
    m_AdminDateType = L"";
    m_bAdminDateType_valueSet = false;
    m_AdminDate = L"";
    m_bAdminDate_valueSet = false;
}


template<class T>
AdministrativeDateTmpl<T>::~AdministrativeDateTmpl<T> ()
{
}



template <class T>
String AdministrativeDateTmpl<T>::getAdminDateType() const
{
    return m_AdminDateType;
}

template <class T>
void AdministrativeDateTmpl<T>::setAdminDateType(String value)
{
    m_AdminDateType = value;
    m_bAdminDateType_valueSet = true;
}

template <class T>
bool AdministrativeDateTmpl<T>::hasValue_AdminDateType() const
{
    return m_bAdminDateType_valueSet;
}

template <class T>
void AdministrativeDateTmpl<T>::resetValue_AdminDateType()
{
    m_bAdminDateType_valueSet = false;
}


template <class T>
String AdministrativeDateTmpl<T>::getAdminDate() const
{
    return m_AdminDate;
}

template <class T>
void AdministrativeDateTmpl<T>::setAdminDate(String value)
{
    m_AdminDate = value;
    m_bAdminDate_valueSet = true;
}

template <class T>
bool AdministrativeDateTmpl<T>::hasValue_AdminDate() const
{
    return m_bAdminDate_valueSet;
}

template <class T>
void AdministrativeDateTmpl<T>::resetValue_AdminDate()
{
    m_bAdminDate_valueSet = false;
}



template <class T>
void AdministrativeDateTmpl<T>::toXml (IStream& stream)
{
    static const wchar_t* kstrElementName = L"AdministrativeDate";
    stream.write(L"<");
    stream.write(kstrElementName);
    if (m_bAdminDateType_valueSet)
    {
        stream.write(L" adminDateType=\"");
        StringObjectImpl::streamOut(m_AdminDateType, stream);
        stream.write(L"\"");
    }
    if (m_bAdminDate_valueSet)
    {
        stream.write(L" adminDate=\"");
        StringObjectImpl::streamOut(m_AdminDate, stream);
        stream.write(L"\"");
    }
    stream.write(L">");
    stream.write(L"</");
    stream.write(kstrElementName);
    stream.write(L">");
}

template <class T>
Object::ValidityEnum AdministrativeDateTmpl<T>::validate (IValidationEventSink* pEventSink) const
{
    Object::ValidityEnum returnCode = Object::kValid;
    returnCode = this->ObjectTmpl<T>::validate(pEventSink);
    if (!m_bAdminDateType_valueSet)
    {
        pEventSink->onEvent(IValidationEventSink::EventCode::kRequiredValueNotSet, this, L"AdminDateType", L"Required value not set");
        returnCode = Object::kInvalid;
    }
    if (!m_bAdminDate_valueSet)
    {
        pEventSink->onEvent(IValidationEventSink::EventCode::kRequiredValueNotSet, this, L"AdminDate", L"Required value not set");
        returnCode = Object::kInvalid;
    }
    return returnCode;
}

}; // namespace : LX
