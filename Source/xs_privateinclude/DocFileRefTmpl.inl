#include "stdafx.h"
#include "LXTypes.h"
#include "DocFileRef.h"
#include "LXTypesTmpl.h"
#include "DocFileRefImpl.h"
#include "LXTypesTmpl.inl"

namespace LX
{


template<class T>
DocFileRefTmpl<T>::DocFileRefTmpl<T> (DocumentImpl* pDoc)
    : ObjectTmpl<T>(pDoc)
{
    m_Name = L"";
    m_bName_valueSet = false;
    m_Location = L"";
    m_bLocation_valueSet = false;
    m_FileType = L"";
    m_bFileType_valueSet = false;
    m_FileFormat = L"";
    m_bFileFormat_valueSet = false;
}


template<class T>
DocFileRefTmpl<T>::~DocFileRefTmpl<T> ()
{
}


template <class T>
bool DocFileRefTmpl<T>::getObjectId(const String*& pId) const
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
ValueObject* DocFileRefTmpl<T>::id() const
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
String DocFileRefTmpl<T>::getName() const
{
    return m_Name;
}

template <class T>
void DocFileRefTmpl<T>::setName(String value)
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
bool DocFileRefTmpl<T>::hasValue_Name() const
{
    return m_bName_valueSet;
}

template <class T>
void DocFileRefTmpl<T>::resetValue_Name()
{
    m_bName_valueSet = false;
}


template <class T>
String DocFileRefTmpl<T>::getLocation() const
{
    return m_Location;
}

template <class T>
void DocFileRefTmpl<T>::setLocation(String value)
{
    m_Location = value;
    m_bLocation_valueSet = true;
}

template <class T>
bool DocFileRefTmpl<T>::hasValue_Location() const
{
    return m_bLocation_valueSet;
}

template <class T>
void DocFileRefTmpl<T>::resetValue_Location()
{
    m_bLocation_valueSet = false;
}


template <class T>
String DocFileRefTmpl<T>::getFileType() const
{
    return m_FileType;
}

template <class T>
void DocFileRefTmpl<T>::setFileType(String value)
{
    m_FileType = value;
    m_bFileType_valueSet = true;
}

template <class T>
bool DocFileRefTmpl<T>::hasValue_FileType() const
{
    return m_bFileType_valueSet;
}

template <class T>
void DocFileRefTmpl<T>::resetValue_FileType()
{
    m_bFileType_valueSet = false;
}


template <class T>
String DocFileRefTmpl<T>::getFileFormat() const
{
    return m_FileFormat;
}

template <class T>
void DocFileRefTmpl<T>::setFileFormat(String value)
{
    m_FileFormat = value;
    m_bFileFormat_valueSet = true;
}

template <class T>
bool DocFileRefTmpl<T>::hasValue_FileFormat() const
{
    return m_bFileFormat_valueSet;
}

template <class T>
void DocFileRefTmpl<T>::resetValue_FileFormat()
{
    m_bFileFormat_valueSet = false;
}



template <class T>
void DocFileRefTmpl<T>::toXml (IStream& stream)
{
    static const wchar_t* kstrElementName = L"DocFileRef";
    stream.write(L"<");
    stream.write(kstrElementName);
    if (m_bName_valueSet)
    {
        stream.write(L" name=\"");
        StringObjectImpl::streamOut(m_Name, stream);
        stream.write(L"\"");
    }
    if (m_bLocation_valueSet)
    {
        stream.write(L" location=\"");
        StringObjectImpl::streamOut(m_Location, stream);
        stream.write(L"\"");
    }
    if (m_bFileType_valueSet)
    {
        stream.write(L" fileType=\"");
        StringObjectImpl::streamOut(m_FileType, stream);
        stream.write(L"\"");
    }
    if (m_bFileFormat_valueSet)
    {
        stream.write(L" fileFormat=\"");
        StringObjectImpl::streamOut(m_FileFormat, stream);
        stream.write(L"\"");
    }
    stream.write(L">");
    stream.write(L"</");
    stream.write(kstrElementName);
    stream.write(L">");
}

template <class T>
Object::ValidityEnum DocFileRefTmpl<T>::validate (IValidationEventSink* pEventSink) const
{
    Object::ValidityEnum returnCode = Object::kValid;
    returnCode = this->ObjectTmpl<T>::validate(pEventSink);
    if (!m_bName_valueSet)
    {
        pEventSink->onEvent(IValidationEventSink::EventCode::kRequiredValueNotSet, this, L"Name", L"Required value not set");
        returnCode = Object::kInvalid;
    }
    if (!m_bLocation_valueSet)
    {
        pEventSink->onEvent(IValidationEventSink::EventCode::kRequiredValueNotSet, this, L"Location", L"Required value not set");
        returnCode = Object::kInvalid;
    }
    return returnCode;
}

}; // namespace : LX
