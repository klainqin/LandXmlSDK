#include "stdafx.h"
#include "LXTypes.h"
#include "Application.h"
#include "AuthorCollection.h"
#include "LXTypesTmpl.h"
#include "ApplicationImpl.h"
#include "AuthorCollectionImpl.h"
#include "LXTypesTmpl.inl"

namespace LX
{


template<class T>
ApplicationTmpl<T>::ApplicationTmpl<T> (DocumentImpl* pDoc)
    : ObjectTmpl<T>(pDoc)
{
    m_Author = createAuthorCollectionObject(pDoc);
    m_Name = L"";
    m_bName_valueSet = false;
    m_Desc = L"";
    m_bDesc_valueSet = false;
    m_Manufacturer = L"";
    m_bManufacturer_valueSet = false;
    m_Version = L"";
    m_bVersion_valueSet = false;
    m_ManufacturerURL = L"";
    m_bManufacturerURL_valueSet = false;
    m_TimeStamp = L"";
    m_bTimeStamp_valueSet = false;
}


template<class T>
ApplicationTmpl<T>::~ApplicationTmpl<T> ()
{
    if (m_Author != NULL)
    {
        m_Author->release();
        m_Author = NULL;
    }
}


template <class T>
bool ApplicationTmpl<T>::getObjectId(const String*& pId) const
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
ValueObject* ApplicationTmpl<T>::id() const
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
AuthorCollection& ApplicationTmpl<T>::Author()
{
    return *m_Author;
}

template <class T>
const AuthorCollection& ApplicationTmpl<T>::Author() const
{
    return *m_Author;
}



template <class T>
String ApplicationTmpl<T>::getName() const
{
    return m_Name;
}

template <class T>
void ApplicationTmpl<T>::setName(String value)
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
bool ApplicationTmpl<T>::hasValue_Name() const
{
    return m_bName_valueSet;
}

template <class T>
void ApplicationTmpl<T>::resetValue_Name()
{
    m_bName_valueSet = false;
}


template <class T>
String ApplicationTmpl<T>::getDesc() const
{
    return m_Desc;
}

template <class T>
void ApplicationTmpl<T>::setDesc(String value)
{
    m_Desc = value;
    m_bDesc_valueSet = true;
}

template <class T>
bool ApplicationTmpl<T>::hasValue_Desc() const
{
    return m_bDesc_valueSet;
}

template <class T>
void ApplicationTmpl<T>::resetValue_Desc()
{
    m_bDesc_valueSet = false;
}


template <class T>
String ApplicationTmpl<T>::getManufacturer() const
{
    return m_Manufacturer;
}

template <class T>
void ApplicationTmpl<T>::setManufacturer(String value)
{
    m_Manufacturer = value;
    m_bManufacturer_valueSet = true;
}

template <class T>
bool ApplicationTmpl<T>::hasValue_Manufacturer() const
{
    return m_bManufacturer_valueSet;
}

template <class T>
void ApplicationTmpl<T>::resetValue_Manufacturer()
{
    m_bManufacturer_valueSet = false;
}


template <class T>
String ApplicationTmpl<T>::getVersion() const
{
    return m_Version;
}

template <class T>
void ApplicationTmpl<T>::setVersion(String value)
{
    m_Version = value;
    m_bVersion_valueSet = true;
}

template <class T>
bool ApplicationTmpl<T>::hasValue_Version() const
{
    return m_bVersion_valueSet;
}

template <class T>
void ApplicationTmpl<T>::resetValue_Version()
{
    m_bVersion_valueSet = false;
}


template <class T>
String ApplicationTmpl<T>::getManufacturerURL() const
{
    return m_ManufacturerURL;
}

template <class T>
void ApplicationTmpl<T>::setManufacturerURL(String value)
{
    m_ManufacturerURL = value;
    m_bManufacturerURL_valueSet = true;
}

template <class T>
bool ApplicationTmpl<T>::hasValue_ManufacturerURL() const
{
    return m_bManufacturerURL_valueSet;
}

template <class T>
void ApplicationTmpl<T>::resetValue_ManufacturerURL()
{
    m_bManufacturerURL_valueSet = false;
}


template <class T>
String ApplicationTmpl<T>::getTimeStamp() const
{
    return m_TimeStamp;
}

template <class T>
void ApplicationTmpl<T>::setTimeStamp(String value)
{
    m_TimeStamp = value;
    m_bTimeStamp_valueSet = true;
}

template <class T>
bool ApplicationTmpl<T>::hasValue_TimeStamp() const
{
    return m_bTimeStamp_valueSet;
}

template <class T>
void ApplicationTmpl<T>::resetValue_TimeStamp()
{
    m_bTimeStamp_valueSet = false;
}



template <class T>
void ApplicationTmpl<T>::toXml (IStream& stream)
{
    static const wchar_t* kstrElementName = L"Application";
    stream.write(L"<");
    stream.write(kstrElementName);
    if (m_bName_valueSet)
    {
        stream.write(L" name=\"");
        StringObjectImpl::streamOut(m_Name, stream);
        stream.write(L"\"");
    }
    if (m_bDesc_valueSet)
    {
        stream.write(L" desc=\"");
        StringObjectImpl::streamOut(m_Desc, stream);
        stream.write(L"\"");
    }
    if (m_bManufacturer_valueSet)
    {
        stream.write(L" manufacturer=\"");
        StringObjectImpl::streamOut(m_Manufacturer, stream);
        stream.write(L"\"");
    }
    if (m_bVersion_valueSet)
    {
        stream.write(L" version=\"");
        StringObjectImpl::streamOut(m_Version, stream);
        stream.write(L"\"");
    }
    if (m_bManufacturerURL_valueSet)
    {
        stream.write(L" manufacturerURL=\"");
        StringObjectImpl::streamOut(m_ManufacturerURL, stream);
        stream.write(L"\"");
    }
    if (m_bTimeStamp_valueSet)
    {
        stream.write(L" timeStamp=\"");
        StringObjectImpl::streamOut(m_TimeStamp, stream);
        stream.write(L"\"");
    }
    stream.write(L">");
    if (m_Author)
    {
    	m_Author->toXml(stream);
    }
    stream.write(L"</");
    stream.write(kstrElementName);
    stream.write(L">");
}

template <class T>
Object::ValidityEnum ApplicationTmpl<T>::validate (IValidationEventSink* pEventSink) const
{
    Object::ValidityEnum returnCode = Object::kValid;
    returnCode = this->ObjectTmpl<T>::validate(pEventSink);
    if (m_Author)
    {
        if (m_Author->validate(pEventSink) != Object::kValid)
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
