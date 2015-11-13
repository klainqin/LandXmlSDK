#include "stdafx.h"
#include "LXTypes.h"
#include "Feature.h"
#include "PropertyCollection.h"
#include "DocFileRefCollection.h"
#include "LXTypesTmpl.h"
#include "FeatureImpl.h"
#include "PropertyCollectionImpl.h"
#include "DocFileRefCollectionImpl.h"
#include "LXTypesTmpl.inl"

namespace LX
{


template<class T>
FeatureTmpl<T>::FeatureTmpl<T> (DocumentImpl* pDoc)
    : ObjectTmpl<T>(pDoc)
{
    m_Property = createPropertyCollectionObject(pDoc);
    m_DocFileRef = createDocFileRefCollectionObject(pDoc);
    m_Name = L"";
    m_bName_valueSet = false;
    m_Code = L"";
    m_bCode_valueSet = false;
    m_Source = L"";
    m_bSource_valueSet = false;
}


template<class T>
FeatureTmpl<T>::~FeatureTmpl<T> ()
{
    if (m_Property != NULL)
    {
        m_Property->release();
        m_Property = NULL;
    }
    if (m_DocFileRef != NULL)
    {
        m_DocFileRef->release();
        m_DocFileRef = NULL;
    }
}


template <class T>
bool FeatureTmpl<T>::getObjectId(const String*& pId) const
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
ValueObject* FeatureTmpl<T>::id() const
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
PropertyCollection& FeatureTmpl<T>::Property()
{
    return *m_Property;
}

template <class T>
const PropertyCollection& FeatureTmpl<T>::Property() const
{
    return *m_Property;
}

template <class T>
DocFileRefCollection& FeatureTmpl<T>::DocFileRef()
{
    return *m_DocFileRef;
}

template <class T>
const DocFileRefCollection& FeatureTmpl<T>::DocFileRef() const
{
    return *m_DocFileRef;
}



template <class T>
String FeatureTmpl<T>::getName() const
{
    return m_Name;
}

template <class T>
void FeatureTmpl<T>::setName(String value)
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
bool FeatureTmpl<T>::hasValue_Name() const
{
    return m_bName_valueSet;
}

template <class T>
void FeatureTmpl<T>::resetValue_Name()
{
    m_bName_valueSet = false;
}


template <class T>
String FeatureTmpl<T>::getCode() const
{
    return m_Code;
}

template <class T>
void FeatureTmpl<T>::setCode(String value)
{
    m_Code = value;
    m_bCode_valueSet = true;
}

template <class T>
bool FeatureTmpl<T>::hasValue_Code() const
{
    return m_bCode_valueSet;
}

template <class T>
void FeatureTmpl<T>::resetValue_Code()
{
    m_bCode_valueSet = false;
}


template <class T>
String FeatureTmpl<T>::getSource() const
{
    return m_Source;
}

template <class T>
void FeatureTmpl<T>::setSource(String value)
{
    m_Source = value;
    m_bSource_valueSet = true;
}

template <class T>
bool FeatureTmpl<T>::hasValue_Source() const
{
    return m_bSource_valueSet;
}

template <class T>
void FeatureTmpl<T>::resetValue_Source()
{
    m_bSource_valueSet = false;
}



template <class T>
void FeatureTmpl<T>::toXml (IStream& stream)
{
    static const wchar_t* kstrElementName = L"Feature";
    stream.write(L"<");
    stream.write(kstrElementName);
    if (m_bName_valueSet)
    {
        stream.write(L" name=\"");
        StringObjectImpl::streamOut(m_Name, stream);
        stream.write(L"\"");
    }
    if (m_bCode_valueSet)
    {
        stream.write(L" code=\"");
        StringObjectImpl::streamOut(m_Code, stream);
        stream.write(L"\"");
    }
    if (m_bSource_valueSet)
    {
        stream.write(L" source=\"");
        StringObjectImpl::streamOut(m_Source, stream);
        stream.write(L"\"");
    }
    stream.write(L">");
    if (m_Property)
    {
    	m_Property->toXml(stream);
    }
    if (m_DocFileRef)
    {
    	m_DocFileRef->toXml(stream);
    }
    stream.write(L"</");
    stream.write(kstrElementName);
    stream.write(L">");
}

template <class T>
Object::ValidityEnum FeatureTmpl<T>::validate (IValidationEventSink* pEventSink) const
{
    Object::ValidityEnum returnCode = Object::kValid;
    returnCode = this->ObjectTmpl<T>::validate(pEventSink);
    if (m_Property)
    {
        if (m_Property->validate(pEventSink) != Object::kValid)
            returnCode = Object::kValidWithInvalidChildren;
    }
    if (m_DocFileRef)
    {
        if (m_DocFileRef->validate(pEventSink) != Object::kValid)
            returnCode = Object::kValidWithInvalidChildren;
    }
    return returnCode;
}

}; // namespace : LX
