#include "stdafx.h"
#include "LXTypes.h"
#include "PurposeOfSurvey.h"
#include "LXTypesTmpl.h"
#include "PurposeOfSurveyImpl.h"
#include "LXTypesTmpl.inl"

namespace LX
{


template<class T>
PurposeOfSurveyTmpl<T>::PurposeOfSurveyTmpl (DocumentImpl* pDoc)
    : ObjectTmpl<T>(pDoc)
{
    m_Name = L"";
    m_bName_valueSet = false;
}


template<class T>
PurposeOfSurveyTmpl<T>::~PurposeOfSurveyTmpl ()
{
}


template <class T>
bool PurposeOfSurveyTmpl<T>::getObjectId(const String*& pId) const
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
ValueObject* PurposeOfSurveyTmpl<T>::id() const
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
String PurposeOfSurveyTmpl<T>::getName() const
{
    return m_Name;
}

template <class T>
void PurposeOfSurveyTmpl<T>::setName(String value)
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
bool PurposeOfSurveyTmpl<T>::hasValue_Name() const
{
    return m_bName_valueSet;
}

template <class T>
void PurposeOfSurveyTmpl<T>::resetValue_Name()
{
    m_bName_valueSet = false;
}



template <class T>
void PurposeOfSurveyTmpl<T>::toXml (IStream& stream)
{
    static const wchar_t* kstrElementName = L"PurposeOfSurvey";
    stream.write(L"<");
    stream.write(kstrElementName);
    if (m_bName_valueSet)
    {
        stream.write(L" name=\"");
        StringObjectImpl::streamOut(m_Name, stream);
        stream.write(L"\"");
    }
    stream.write(L">");
    stream.write(L"</");
    stream.write(kstrElementName);
    stream.write(L">");
}

template <class T>
Object::ValidityEnum PurposeOfSurveyTmpl<T>::validate (IValidationEventSink* pEventSink) const
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
