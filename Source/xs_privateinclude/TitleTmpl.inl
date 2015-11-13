#include "stdafx.h"
#include "LXTypes.h"
#include "Title.h"
#include "LXTypesTmpl.h"
#include "TitleImpl.h"
#include "LXTypesTmpl.inl"

namespace LX
{


template<class T>
TitleTmpl<T>::TitleTmpl<T> (DocumentImpl* pDoc)
    : ObjectTmpl<T>(pDoc)
{
    m_Name = L"";
    m_bName_valueSet = false;
    m_TitleType = L"";
    m_bTitleType_valueSet = false;
}


template<class T>
TitleTmpl<T>::~TitleTmpl<T> ()
{
}


template <class T>
bool TitleTmpl<T>::getObjectId(const String*& pId) const
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
ValueObject* TitleTmpl<T>::id() const
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
String TitleTmpl<T>::getName() const
{
    return m_Name;
}

template <class T>
void TitleTmpl<T>::setName(String value)
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
bool TitleTmpl<T>::hasValue_Name() const
{
    return m_bName_valueSet;
}

template <class T>
void TitleTmpl<T>::resetValue_Name()
{
    m_bName_valueSet = false;
}


template <class T>
String TitleTmpl<T>::getTitleType() const
{
    return m_TitleType;
}

template <class T>
void TitleTmpl<T>::setTitleType(String value)
{
    m_TitleType = value;
    m_bTitleType_valueSet = true;
}

template <class T>
bool TitleTmpl<T>::hasValue_TitleType() const
{
    return m_bTitleType_valueSet;
}

template <class T>
void TitleTmpl<T>::resetValue_TitleType()
{
    m_bTitleType_valueSet = false;
}



template <class T>
void TitleTmpl<T>::toXml (IStream& stream)
{
    static const wchar_t* kstrElementName = L"Title";
    stream.write(L"<");
    stream.write(kstrElementName);
    if (m_bName_valueSet)
    {
        stream.write(L" name=\"");
        StringObjectImpl::streamOut(m_Name, stream);
        stream.write(L"\"");
    }
    if (m_bTitleType_valueSet)
    {
        stream.write(L" titleType=\"");
        StringObjectImpl::streamOut(m_TitleType, stream);
        stream.write(L"\"");
    }
    stream.write(L">");
    stream.write(L"</");
    stream.write(kstrElementName);
    stream.write(L">");
}

template <class T>
Object::ValidityEnum TitleTmpl<T>::validate (IValidationEventSink* pEventSink) const
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
