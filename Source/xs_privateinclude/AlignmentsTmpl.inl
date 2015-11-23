#include "stdafx.h"
#include "LXTypes.h"
#include "Alignments.h"
#include "AlignmentCollection.h"
#include "FeatureCollection.h"
#include "LXTypesTmpl.h"
#include "AlignmentsImpl.h"
#include "AlignmentCollectionImpl.h"
#include "FeatureCollectionImpl.h"
#include "LXTypesTmpl.inl"

namespace LX
{


template<class T>
AlignmentsTmpl<T>::AlignmentsTmpl (DocumentImpl* pDoc)
    : ObjectTmpl<T>(pDoc)
{
    m_Alignment = createAlignmentCollectionObject(pDoc);
    m_Feature = createFeatureCollectionObject(pDoc);
    m_Desc = L"";
    m_bDesc_valueSet = false;
    m_Name = L"";
    m_bName_valueSet = false;
    m_State = EnumStateType::Values::k_null;
    m_bState_valueSet = false;
}


template<class T>
AlignmentsTmpl<T>::~AlignmentsTmpl ()
{
    if (m_Alignment != NULL)
    {
        m_Alignment->release();
        m_Alignment = NULL;
    }
    if (m_Feature != NULL)
    {
        m_Feature->release();
        m_Feature = NULL;
    }
}


template <class T>
bool AlignmentsTmpl<T>::getObjectId(const String*& pId) const
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
ValueObject* AlignmentsTmpl<T>::id() const
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
AlignmentCollection& AlignmentsTmpl<T>::Alignment()
{
    return *m_Alignment;
}

template <class T>
const AlignmentCollection& AlignmentsTmpl<T>::Alignment() const
{
    return *m_Alignment;
}

template <class T>
FeatureCollection& AlignmentsTmpl<T>::Feature()
{
    return *m_Feature;
}

template <class T>
const FeatureCollection& AlignmentsTmpl<T>::Feature() const
{
    return *m_Feature;
}



template <class T>
String AlignmentsTmpl<T>::getDesc() const
{
    return m_Desc;
}

template <class T>
void AlignmentsTmpl<T>::setDesc(String value)
{
    m_Desc = value;
    m_bDesc_valueSet = true;
}

template <class T>
bool AlignmentsTmpl<T>::hasValue_Desc() const
{
    return m_bDesc_valueSet;
}

template <class T>
void AlignmentsTmpl<T>::resetValue_Desc()
{
    m_bDesc_valueSet = false;
}


template <class T>
String AlignmentsTmpl<T>::getName() const
{
    return m_Name;
}

template <class T>
void AlignmentsTmpl<T>::setName(String value)
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
bool AlignmentsTmpl<T>::hasValue_Name() const
{
    return m_bName_valueSet;
}

template <class T>
void AlignmentsTmpl<T>::resetValue_Name()
{
    m_bName_valueSet = false;
}


template <class T>
EnumStateType::Values AlignmentsTmpl<T>::getState() const
{
    return m_State;
}

template <class T>
void AlignmentsTmpl<T>::setState(EnumStateType::Values value)
{
    m_State = value;
    m_bState_valueSet = true;
}

template <class T>
bool AlignmentsTmpl<T>::hasValue_State() const
{
    return m_bState_valueSet;
}

template <class T>
void AlignmentsTmpl<T>::resetValue_State()
{
    m_bState_valueSet = false;
}



template <class T>
void AlignmentsTmpl<T>::toXml (IStream& stream)
{
    static const wchar_t* kstrElementName = L"Alignments";
    stream.write(L"<");
    stream.write(kstrElementName);
    if (m_bDesc_valueSet)
    {
        stream.write(L" desc=\"");
        StringObjectImpl::streamOut(m_Desc, stream);
        stream.write(L"\"");
    }
    if (m_bName_valueSet)
    {
        stream.write(L" name=\"");
        StringObjectImpl::streamOut(m_Name, stream);
        stream.write(L"\"");
    }
    if (m_bState_valueSet)
    {
        stream.write(L" state=\"");
        EnumStateTypeImpl::streamOut(m_State, stream);
        stream.write(L"\"");
    }
    stream.write(L">");
    if (m_Alignment)
    {
    	m_Alignment->toXml(stream);
    }
    if (m_Feature)
    {
    	m_Feature->toXml(stream);
    }
    stream.write(L"</");
    stream.write(kstrElementName);
    stream.write(L">");
}

template <class T>
Object::ValidityEnum AlignmentsTmpl<T>::validate (IValidationEventSink* pEventSink) const
{
    Object::ValidityEnum returnCode = Object::kValid;
    returnCode = this->ObjectTmpl<T>::validate(pEventSink);
    if (m_Alignment)
    {
        if (m_Alignment->validate(pEventSink) != Object::kValid)
            returnCode = Object::kValidWithInvalidChildren;
    }
    if (m_Feature)
    {
        if (m_Feature->validate(pEventSink) != Object::kValid)
            returnCode = Object::kValidWithInvalidChildren;
    }
    return returnCode;
}

}; // namespace : LX
