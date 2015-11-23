#include "stdafx.h"
#include "LXTypes.h"
#include "Author.h"
#include "LXTypesTmpl.h"
#include "AuthorImpl.h"
#include "LXTypesTmpl.inl"

namespace LX
{


template<class T>
AuthorTmpl<T>::AuthorTmpl (DocumentImpl* pDoc)
    : ObjectTmpl<T>(pDoc)
{
    m_CreatedBy = L"";
    m_bCreatedBy_valueSet = false;
    m_CreatedByEmail = L"";
    m_bCreatedByEmail_valueSet = false;
    m_Company = L"";
    m_bCompany_valueSet = false;
    m_CompanyURL = L"";
    m_bCompanyURL_valueSet = false;
    m_TimeStamp = L"";
    m_bTimeStamp_valueSet = false;
}


template<class T>
AuthorTmpl<T>::~AuthorTmpl ()
{
}



template <class T>
String AuthorTmpl<T>::getCreatedBy() const
{
    return m_CreatedBy;
}

template <class T>
void AuthorTmpl<T>::setCreatedBy(String value)
{
    m_CreatedBy = value;
    m_bCreatedBy_valueSet = true;
}

template <class T>
bool AuthorTmpl<T>::hasValue_CreatedBy() const
{
    return m_bCreatedBy_valueSet;
}

template <class T>
void AuthorTmpl<T>::resetValue_CreatedBy()
{
    m_bCreatedBy_valueSet = false;
}


template <class T>
String AuthorTmpl<T>::getCreatedByEmail() const
{
    return m_CreatedByEmail;
}

template <class T>
void AuthorTmpl<T>::setCreatedByEmail(String value)
{
    m_CreatedByEmail = value;
    m_bCreatedByEmail_valueSet = true;
}

template <class T>
bool AuthorTmpl<T>::hasValue_CreatedByEmail() const
{
    return m_bCreatedByEmail_valueSet;
}

template <class T>
void AuthorTmpl<T>::resetValue_CreatedByEmail()
{
    m_bCreatedByEmail_valueSet = false;
}


template <class T>
String AuthorTmpl<T>::getCompany() const
{
    return m_Company;
}

template <class T>
void AuthorTmpl<T>::setCompany(String value)
{
    m_Company = value;
    m_bCompany_valueSet = true;
}

template <class T>
bool AuthorTmpl<T>::hasValue_Company() const
{
    return m_bCompany_valueSet;
}

template <class T>
void AuthorTmpl<T>::resetValue_Company()
{
    m_bCompany_valueSet = false;
}


template <class T>
String AuthorTmpl<T>::getCompanyURL() const
{
    return m_CompanyURL;
}

template <class T>
void AuthorTmpl<T>::setCompanyURL(String value)
{
    m_CompanyURL = value;
    m_bCompanyURL_valueSet = true;
}

template <class T>
bool AuthorTmpl<T>::hasValue_CompanyURL() const
{
    return m_bCompanyURL_valueSet;
}

template <class T>
void AuthorTmpl<T>::resetValue_CompanyURL()
{
    m_bCompanyURL_valueSet = false;
}


template <class T>
String AuthorTmpl<T>::getTimeStamp() const
{
    return m_TimeStamp;
}

template <class T>
void AuthorTmpl<T>::setTimeStamp(String value)
{
    m_TimeStamp = value;
    m_bTimeStamp_valueSet = true;
}

template <class T>
bool AuthorTmpl<T>::hasValue_TimeStamp() const
{
    return m_bTimeStamp_valueSet;
}

template <class T>
void AuthorTmpl<T>::resetValue_TimeStamp()
{
    m_bTimeStamp_valueSet = false;
}



template <class T>
void AuthorTmpl<T>::toXml (IStream& stream)
{
    static const wchar_t* kstrElementName = L"Author";
    stream.write(L"<");
    stream.write(kstrElementName);
    if (m_bCreatedBy_valueSet)
    {
        stream.write(L" createdBy=\"");
        StringObjectImpl::streamOut(m_CreatedBy, stream);
        stream.write(L"\"");
    }
    if (m_bCreatedByEmail_valueSet)
    {
        stream.write(L" createdByEmail=\"");
        StringObjectImpl::streamOut(m_CreatedByEmail, stream);
        stream.write(L"\"");
    }
    if (m_bCompany_valueSet)
    {
        stream.write(L" company=\"");
        StringObjectImpl::streamOut(m_Company, stream);
        stream.write(L"\"");
    }
    if (m_bCompanyURL_valueSet)
    {
        stream.write(L" companyURL=\"");
        StringObjectImpl::streamOut(m_CompanyURL, stream);
        stream.write(L"\"");
    }
    if (m_bTimeStamp_valueSet)
    {
        stream.write(L" timeStamp=\"");
        StringObjectImpl::streamOut(m_TimeStamp, stream);
        stream.write(L"\"");
    }
    stream.write(L">");
    stream.write(L"</");
    stream.write(kstrElementName);
    stream.write(L">");
}

template <class T>
Object::ValidityEnum AuthorTmpl<T>::validate (IValidationEventSink* pEventSink) const
{
    Object::ValidityEnum returnCode = Object::kValid;
    returnCode = this->ObjectTmpl<T>::validate(pEventSink);
    return returnCode;
}

}; // namespace : LX
