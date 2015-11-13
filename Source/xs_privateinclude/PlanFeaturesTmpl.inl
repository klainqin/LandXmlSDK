#include "stdafx.h"
#include "LXTypes.h"
#include "PlanFeatures.h"
#include "PlanFeatureCollection.h"
#include "FeatureCollection.h"
#include "LXTypesTmpl.h"
#include "PlanFeaturesImpl.h"
#include "PlanFeatureCollectionImpl.h"
#include "FeatureCollectionImpl.h"
#include "LXTypesTmpl.inl"

namespace LX
{


template<class T>
PlanFeaturesTmpl<T>::PlanFeaturesTmpl<T> (DocumentImpl* pDoc)
    : ObjectTmpl<T>(pDoc)
{
    m_PlanFeature = createPlanFeatureCollectionObject(pDoc);
    m_Feature = createFeatureCollectionObject(pDoc);
    m_Desc = L"";
    m_bDesc_valueSet = false;
    m_Name = L"";
    m_bName_valueSet = false;
    m_State = EnumStateType::Values::k_null;
    m_bState_valueSet = false;
}


template<class T>
PlanFeaturesTmpl<T>::~PlanFeaturesTmpl<T> ()
{
    if (m_PlanFeature != NULL)
    {
        m_PlanFeature->release();
        m_PlanFeature = NULL;
    }
    if (m_Feature != NULL)
    {
        m_Feature->release();
        m_Feature = NULL;
    }
}


template <class T>
bool PlanFeaturesTmpl<T>::getObjectId(const String*& pId) const
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
ValueObject* PlanFeaturesTmpl<T>::id() const
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
PlanFeatureCollection& PlanFeaturesTmpl<T>::PlanFeature()
{
    return *m_PlanFeature;
}

template <class T>
const PlanFeatureCollection& PlanFeaturesTmpl<T>::PlanFeature() const
{
    return *m_PlanFeature;
}

template <class T>
FeatureCollection& PlanFeaturesTmpl<T>::Feature()
{
    return *m_Feature;
}

template <class T>
const FeatureCollection& PlanFeaturesTmpl<T>::Feature() const
{
    return *m_Feature;
}



template <class T>
String PlanFeaturesTmpl<T>::getDesc() const
{
    return m_Desc;
}

template <class T>
void PlanFeaturesTmpl<T>::setDesc(String value)
{
    m_Desc = value;
    m_bDesc_valueSet = true;
}

template <class T>
bool PlanFeaturesTmpl<T>::hasValue_Desc() const
{
    return m_bDesc_valueSet;
}

template <class T>
void PlanFeaturesTmpl<T>::resetValue_Desc()
{
    m_bDesc_valueSet = false;
}


template <class T>
String PlanFeaturesTmpl<T>::getName() const
{
    return m_Name;
}

template <class T>
void PlanFeaturesTmpl<T>::setName(String value)
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
bool PlanFeaturesTmpl<T>::hasValue_Name() const
{
    return m_bName_valueSet;
}

template <class T>
void PlanFeaturesTmpl<T>::resetValue_Name()
{
    m_bName_valueSet = false;
}


template <class T>
EnumStateType::Values PlanFeaturesTmpl<T>::getState() const
{
    return m_State;
}

template <class T>
void PlanFeaturesTmpl<T>::setState(EnumStateType::Values value)
{
    m_State = value;
    m_bState_valueSet = true;
}

template <class T>
bool PlanFeaturesTmpl<T>::hasValue_State() const
{
    return m_bState_valueSet;
}

template <class T>
void PlanFeaturesTmpl<T>::resetValue_State()
{
    m_bState_valueSet = false;
}



template <class T>
void PlanFeaturesTmpl<T>::toXml (IStream& stream)
{
    static const wchar_t* kstrElementName = L"PlanFeatures";
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
    if (m_PlanFeature)
    {
    	m_PlanFeature->toXml(stream);
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
Object::ValidityEnum PlanFeaturesTmpl<T>::validate (IValidationEventSink* pEventSink) const
{
    Object::ValidityEnum returnCode = Object::kValid;
    returnCode = this->ObjectTmpl<T>::validate(pEventSink);
    if (m_PlanFeature)
    {
        if (m_PlanFeature->validate(pEventSink) != Object::kValid)
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
