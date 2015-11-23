#include "stdafx.h"
#include "LXTypes.h"
#include "SurveyorCertificate.h"
#include "LXTypesTmpl.h"
#include "SurveyorCertificateImpl.h"
#include "LXTypesTmpl.inl"

namespace LX
{


template<class T>
SurveyorCertificateTmpl<T>::SurveyorCertificateTmpl (DocumentImpl* pDoc)
    : ObjectTmpl<T>(pDoc)
{
    m_Name = L"";
    m_bName_valueSet = false;
    m_CertificateType = L"";
    m_bCertificateType_valueSet = false;
    m_TextCertificate = L"";
    m_bTextCertificate_valueSet = false;
    m_SurveyDate = L"";
    m_bSurveyDate_valueSet = false;
}


template<class T>
SurveyorCertificateTmpl<T>::~SurveyorCertificateTmpl ()
{
}


template <class T>
bool SurveyorCertificateTmpl<T>::getObjectId(const String*& pId) const
{
    if (m_bName_valueSet)
    {
        pId = &m_Name;
        return true;
    }
    else
    {
        pId = NULL;
        return false;
    }
}

template <class T>
ValueObject* SurveyorCertificateTmpl<T>::id() const
{
    if (m_bName_valueSet)
    {
        ValueObject* pValue = new StringObjectTmpl<StringObject>(m_Name);
        if (!pValue)
	         throw Exception(Exception::kUnableToAllocateMemory, L"Out of Memory.");
        return pValue;
    }
    else
        return NULL;
}



template <class T>
String SurveyorCertificateTmpl<T>::getName() const
{
    return m_Name;
}

template <class T>
void SurveyorCertificateTmpl<T>::setName(String value)
{
    String oldValue = m_Name;
    m_Name = value;
    if (this->m_pCollectionLocation)
    {
        // We are in a collection. Now check to make sure we are in a named collection.
        NamedCollectionLocation* pNamedCollLoc = dynamic_cast<NamedCollectionLocation*>(this->m_pCollectionLocation);
        if (pNamedCollLoc)
        {
            try
            {
                // First check the name.
                if (!pNamedCollLoc->objectCheckNewName())
	                 throw Exception(Exception::kObjectIdCollectionConflict, L"Unable to change identifying member, because collection name conflict.");
                // We are in a named collection. Now tell the collection the object has been renamed.
                if (!pNamedCollLoc->objectRenamed())
                    // Object could not be renamed within the collection.
	                 throw Exception(Exception::kObjectRenamedFailed, L"Could not rename object within collection.");
            }
            catch (Exception e)
            {
                m_Name = oldValue;
                throw;
            }
        }
    }
    m_bName_valueSet = true;
}

template <class T>
bool SurveyorCertificateTmpl<T>::hasValue_Name() const
{
    return m_bName_valueSet;
}

template <class T>
void SurveyorCertificateTmpl<T>::resetValue_Name()
{
    m_bName_valueSet = false;
}


template <class T>
String SurveyorCertificateTmpl<T>::getCertificateType() const
{
    return m_CertificateType;
}

template <class T>
void SurveyorCertificateTmpl<T>::setCertificateType(String value)
{
    m_CertificateType = value;
    m_bCertificateType_valueSet = true;
}

template <class T>
bool SurveyorCertificateTmpl<T>::hasValue_CertificateType() const
{
    return m_bCertificateType_valueSet;
}

template <class T>
void SurveyorCertificateTmpl<T>::resetValue_CertificateType()
{
    m_bCertificateType_valueSet = false;
}


template <class T>
String SurveyorCertificateTmpl<T>::getTextCertificate() const
{
    return m_TextCertificate;
}

template <class T>
void SurveyorCertificateTmpl<T>::setTextCertificate(String value)
{
    m_TextCertificate = value;
    m_bTextCertificate_valueSet = true;
}

template <class T>
bool SurveyorCertificateTmpl<T>::hasValue_TextCertificate() const
{
    return m_bTextCertificate_valueSet;
}

template <class T>
void SurveyorCertificateTmpl<T>::resetValue_TextCertificate()
{
    m_bTextCertificate_valueSet = false;
}


template <class T>
String SurveyorCertificateTmpl<T>::getSurveyDate() const
{
    return m_SurveyDate;
}

template <class T>
void SurveyorCertificateTmpl<T>::setSurveyDate(String value)
{
    m_SurveyDate = value;
    m_bSurveyDate_valueSet = true;
}

template <class T>
bool SurveyorCertificateTmpl<T>::hasValue_SurveyDate() const
{
    return m_bSurveyDate_valueSet;
}

template <class T>
void SurveyorCertificateTmpl<T>::resetValue_SurveyDate()
{
    m_bSurveyDate_valueSet = false;
}



template <class T>
void SurveyorCertificateTmpl<T>::toXml (IStream& stream)
{
    static const wchar_t* kstrElementName = L"SurveyorCertificate";
    stream.write(L"<");
    stream.write(kstrElementName);
    if (m_bName_valueSet)
    {
        stream.write(L" name=\"");
        StringObjectImpl::streamOut(m_Name, stream);
        stream.write(L"\"");
    }
    if (m_bCertificateType_valueSet)
    {
        stream.write(L" certificateType=\"");
        StringObjectImpl::streamOut(m_CertificateType, stream);
        stream.write(L"\"");
    }
    if (m_bTextCertificate_valueSet)
    {
        stream.write(L" textCertificate=\"");
        StringObjectImpl::streamOut(m_TextCertificate, stream);
        stream.write(L"\"");
    }
    if (m_bSurveyDate_valueSet)
    {
        stream.write(L" surveyDate=\"");
        StringObjectImpl::streamOut(m_SurveyDate, stream);
        stream.write(L"\"");
    }
    stream.write(L">");
    stream.write(L"</");
    stream.write(kstrElementName);
    stream.write(L">");
}

template <class T>
Object::ValidityEnum SurveyorCertificateTmpl<T>::validate (IValidationEventSink* pEventSink) const
{
    Object::ValidityEnum returnCode = Object::kValid;
    returnCode = this->ObjectTmpl<T>::validate(pEventSink);
    if (!m_bName_valueSet)
    {
        pEventSink->onEvent(IValidationEventSink::EventCode::kRequiredValueNotSet, this, L"Name", L"Required value not set");
        returnCode = Object::kInvalid;
    }
    return returnCode;
}

}; // namespace : LX
