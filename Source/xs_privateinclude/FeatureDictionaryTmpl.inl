#include "stdafx.h"
#include "LXTypes.h"
#include "FeatureDictionary.h"
#include "DocFileRefCollection.h"
#include "LXTypesTmpl.h"
#include "FeatureDictionaryImpl.h"
#include "DocFileRefCollectionImpl.h"
#include "LXTypesTmpl.inl"

namespace LX
{


template<class T>
FeatureDictionaryTmpl<T>::FeatureDictionaryTmpl<T> (DocumentImpl* pDoc)
    : ObjectTmpl<T>(pDoc)
{
    m_DocFileRef = createDocFileRefCollectionObject(pDoc);
    m_Name = L"";
    m_bName_valueSet = false;
    m_Version = L"";
    m_bVersion_valueSet = false;
}


template<class T>
FeatureDictionaryTmpl<T>::~FeatureDictionaryTmpl<T> ()
{
    if (m_DocFileRef != NULL)
    {
        m_DocFileRef->release();
        m_DocFileRef = NULL;
    }
}


template <class T>
bool FeatureDictionaryTmpl<T>::getObjectId(const String*& pId) const
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
ValueObject* FeatureDictionaryTmpl<T>::id() const
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
DocFileRefCollection& FeatureDictionaryTmpl<T>::DocFileRef()
{
    return *m_DocFileRef;
}

template <class T>
const DocFileRefCollection& FeatureDictionaryTmpl<T>::DocFileRef() const
{
    return *m_DocFileRef;
}



template <class T>
String FeatureDictionaryTmpl<T>::getName() const
{
    return m_Name;
}

template <class T>
void FeatureDictionaryTmpl<T>::setName(String value)
{
    String oldValue = m_Name;
    m_Name = value;
    if (m_pCollectionLocation)
    {
        // We are in a collection. Now check to make sure we are in a named collection.
        NamedCollectionLocation* pNamedCollLoc = dynamic_cast<NamedCollectionLocation*>(m_pCollectionLocation);
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
bool FeatureDictionaryTmpl<T>::hasValue_Name() const
{
    return m_bName_valueSet;
}

template <class T>
void FeatureDictionaryTmpl<T>::resetValue_Name()
{
    m_bName_valueSet = false;
}


template <class T>
String FeatureDictionaryTmpl<T>::getVersion() const
{
    return m_Version;
}

template <class T>
void FeatureDictionaryTmpl<T>::setVersion(String value)
{
    m_Version = value;
    m_bVersion_valueSet = true;
}

template <class T>
bool FeatureDictionaryTmpl<T>::hasValue_Version() const
{
    return m_bVersion_valueSet;
}

template <class T>
void FeatureDictionaryTmpl<T>::resetValue_Version()
{
    m_bVersion_valueSet = false;
}



template <class T>
void FeatureDictionaryTmpl<T>::toXml (IStream& stream)
{
    static const wchar_t* kstrElementName = L"FeatureDictionary";
    stream.write(L"<");
    stream.write(kstrElementName);
    if (m_bName_valueSet)
    {
        stream.write(L" name=\"");
        StringObjectImpl::streamOut(m_Name, stream);
        stream.write(L"\"");
    }
    if (m_bVersion_valueSet)
    {
        stream.write(L" version=\"");
        StringObjectImpl::streamOut(m_Version, stream);
        stream.write(L"\"");
    }
    stream.write(L">");
    if (m_DocFileRef)
    {
    	m_DocFileRef->toXml(stream);
    }
    stream.write(L"</");
    stream.write(kstrElementName);
    stream.write(L">");
}

template <class T>
Object::ValidityEnum FeatureDictionaryTmpl<T>::validate (IValidationEventSink* pEventSink) const
{
    Object::ValidityEnum returnCode = Object::kValid;
    returnCode = this->ObjectTmpl<T>::validate(pEventSink);
    if (m_DocFileRef)
    {
        if (m_DocFileRef->validate(pEventSink) != Object::kValid)
            returnCode = Object::kValidWithInvalidChildren;
    }
    if (!m_bName_valueSet)
    {
        pEventSink->onEvent(IValidationEventSink::EventCode::kRequiredValueNotSet, this, L"Name", L"Required value not set");
        returnCode = Object::kInvalid;
    }
    return returnCode;
}

}; // namespace : LX
