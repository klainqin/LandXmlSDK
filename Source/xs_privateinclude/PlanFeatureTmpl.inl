#include "stdafx.h"
#include "LXTypes.h"
#include "PlanFeature.h"
#include "CoordGeom.h"
#include "LocationCollection.h"
#include "FieldNoteCollection.h"
#include "FeatureCollection.h"
#include "LXTypesTmpl.h"
#include "PlanFeatureImpl.h"
#include "CoordGeomImpl.h"
#include "LocationCollectionImpl.h"
#include "FieldNoteCollectionImpl.h"
#include "FeatureCollectionImpl.h"
#include "LXTypesTmpl.inl"

namespace LX
{


template<class T>
PlanFeatureTmpl<T>::PlanFeatureTmpl (DocumentImpl* pDoc)
    : ObjectTmpl<T>(pDoc)
{
    m_CoordGeom = NULL;
    m_Location = createLocationCollectionObject(pDoc);
    m_FieldNote = createFieldNoteCollectionObject(pDoc);
    m_Feature = createFeatureCollectionObject(pDoc);
    m_Desc = L"";
    m_bDesc_valueSet = false;
    m_Name = L"";
    m_bName_valueSet = false;
    m_State = EnumStateType::Values::k_null;
    m_bState_valueSet = false;
}


template<class T>
PlanFeatureTmpl<T>::~PlanFeatureTmpl ()
{
    if (m_CoordGeom != NULL)
    {
        m_CoordGeom->release();
        m_CoordGeom = NULL;
    }
    if (m_Location != NULL)
    {
        m_Location->release();
        m_Location = NULL;
    }
    if (m_FieldNote != NULL)
    {
        m_FieldNote->release();
        m_FieldNote = NULL;
    }
    if (m_Feature != NULL)
    {
        m_Feature->release();
        m_Feature = NULL;
    }
}


template <class T>
bool PlanFeatureTmpl<T>::getObjectId(const String*& pId) const
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
ValueObject* PlanFeatureTmpl<T>::id() const
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
LocationCollection& PlanFeatureTmpl<T>::Location()
{
    return *m_Location;
}

template <class T>
const LocationCollection& PlanFeatureTmpl<T>::Location() const
{
    return *m_Location;
}

template <class T>
FieldNoteCollection& PlanFeatureTmpl<T>::FieldNote()
{
    return *m_FieldNote;
}

template <class T>
const FieldNoteCollection& PlanFeatureTmpl<T>::FieldNote() const
{
    return *m_FieldNote;
}

template <class T>
FeatureCollection& PlanFeatureTmpl<T>::Feature()
{
    return *m_Feature;
}

template <class T>
const FeatureCollection& PlanFeatureTmpl<T>::Feature() const
{
    return *m_Feature;
}


template <class T>
CoordGeom* PlanFeatureTmpl<T>::getCoordGeom() const
{
    return m_CoordGeom;
}

template <class T>
void PlanFeatureTmpl<T>::setCoordGeom(CoordGeom* pValue)
{
    m_CoordGeom = pValue;
}


template <class T>
String PlanFeatureTmpl<T>::getDesc() const
{
    return m_Desc;
}

template <class T>
void PlanFeatureTmpl<T>::setDesc(String value)
{
    m_Desc = value;
    m_bDesc_valueSet = true;
}

template <class T>
bool PlanFeatureTmpl<T>::hasValue_Desc() const
{
    return m_bDesc_valueSet;
}

template <class T>
void PlanFeatureTmpl<T>::resetValue_Desc()
{
    m_bDesc_valueSet = false;
}


template <class T>
String PlanFeatureTmpl<T>::getName() const
{
    return m_Name;
}

template <class T>
void PlanFeatureTmpl<T>::setName(String value)
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
bool PlanFeatureTmpl<T>::hasValue_Name() const
{
    return m_bName_valueSet;
}

template <class T>
void PlanFeatureTmpl<T>::resetValue_Name()
{
    m_bName_valueSet = false;
}


template <class T>
EnumStateType::Values PlanFeatureTmpl<T>::getState() const
{
    return m_State;
}

template <class T>
void PlanFeatureTmpl<T>::setState(EnumStateType::Values value)
{
    m_State = value;
    m_bState_valueSet = true;
}

template <class T>
bool PlanFeatureTmpl<T>::hasValue_State() const
{
    return m_bState_valueSet;
}

template <class T>
void PlanFeatureTmpl<T>::resetValue_State()
{
    m_bState_valueSet = false;
}



template <class T>
void PlanFeatureTmpl<T>::toXml (IStream& stream)
{
    static const wchar_t* kstrElementName = L"PlanFeature";
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
    if (m_CoordGeom)
    {
    	m_CoordGeom->toXml(stream);
    }
    if (m_Location)
    {
    	m_Location->toXml(stream);
    }
    if (m_FieldNote)
    {
    	m_FieldNote->toXml(stream);
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
Object::ValidityEnum PlanFeatureTmpl<T>::validate (IValidationEventSink* pEventSink) const
{
    Object::ValidityEnum returnCode = Object::kValid;
    returnCode = this->ObjectTmpl<T>::validate(pEventSink);
    if (m_CoordGeom)
    {
        if (m_CoordGeom->validate(pEventSink) != Object::kValid)
            returnCode = Object::kValidWithInvalidChildren;
    }
    if (m_Location)
    {
        if (m_Location->validate(pEventSink) != Object::kValid)
            returnCode = Object::kValidWithInvalidChildren;
    }
    if (m_FieldNote)
    {
        if (m_FieldNote->validate(pEventSink) != Object::kValid)
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
