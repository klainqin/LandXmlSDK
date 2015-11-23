#include "stdafx.h"
#include "LXTypes.h"
#include "Annotation.h"
#include "LXTypesTmpl.h"
#include "AnnotationImpl.h"
#include "LXTypesTmpl.inl"

namespace LX
{


template<class T>
AnnotationTmpl<T>::AnnotationTmpl (DocumentImpl* pDoc)
    : ObjectTmpl<T>(pDoc)
{
    m_Type = L"";
    m_bType_valueSet = false;
    m_Name = L"";
    m_bName_valueSet = false;
    m_Desc = L"";
    m_bDesc_valueSet = false;
    m_PclRef = NULL;
}


template<class T>
AnnotationTmpl<T>::~AnnotationTmpl ()
{
    if (m_PclRef != NULL)
    {
        m_PclRef->release();
        m_PclRef = NULL;
    }
}


template <class T>
bool AnnotationTmpl<T>::getObjectId(const String*& pId) const
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
ValueObject* AnnotationTmpl<T>::id() const
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
StringCollection* AnnotationTmpl<T>::getPclRef() const
{
    return m_PclRef;
}

template <class T>
void AnnotationTmpl<T>::setPclRef(StringCollection* pValue)
{
    m_PclRef = pValue;
}


template <class T>
String AnnotationTmpl<T>::getType() const
{
    return m_Type;
}

template <class T>
void AnnotationTmpl<T>::setType(String value)
{
    m_Type = value;
    m_bType_valueSet = true;
}

template <class T>
bool AnnotationTmpl<T>::hasValue_Type() const
{
    return m_bType_valueSet;
}

template <class T>
void AnnotationTmpl<T>::resetValue_Type()
{
    m_bType_valueSet = false;
}


template <class T>
String AnnotationTmpl<T>::getName() const
{
    return m_Name;
}

template <class T>
void AnnotationTmpl<T>::setName(String value)
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
bool AnnotationTmpl<T>::hasValue_Name() const
{
    return m_bName_valueSet;
}

template <class T>
void AnnotationTmpl<T>::resetValue_Name()
{
    m_bName_valueSet = false;
}


template <class T>
String AnnotationTmpl<T>::getDesc() const
{
    return m_Desc;
}

template <class T>
void AnnotationTmpl<T>::setDesc(String value)
{
    m_Desc = value;
    m_bDesc_valueSet = true;
}

template <class T>
bool AnnotationTmpl<T>::hasValue_Desc() const
{
    return m_bDesc_valueSet;
}

template <class T>
void AnnotationTmpl<T>::resetValue_Desc()
{
    m_bDesc_valueSet = false;
}



template <class T>
void AnnotationTmpl<T>::toXml (IStream& stream)
{
    static const wchar_t* kstrElementName = L"Annotation";
    stream.write(L"<");
    stream.write(kstrElementName);
    if (m_bType_valueSet)
    {
        stream.write(L" type=\"");
        StringObjectImpl::streamOut(m_Type, stream);
        stream.write(L"\"");
    }
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
Object::ValidityEnum AnnotationTmpl<T>::validate (IValidationEventSink* pEventSink) const
{
    Object::ValidityEnum returnCode = Object::kValid;
    returnCode = this->ObjectTmpl<T>::validate(pEventSink);
    if (!m_bType_valueSet)
    {
        pEventSink->onEvent(IValidationEventSink::EventCode::kRequiredValueNotSet, this, L"Type", L"Required value not set");
        returnCode = Object::kInvalid;
    }
    return returnCode;
}

}; // namespace : LX
