#include "stdafx.h"
#include "LXTypes.h"
#include "Zones.h"
#include "ZoneCollection.h"
#include "ZoneHingeCollection.h"
#include "FeatureCollection.h"
#include "LXTypesTmpl.h"
#include "ZonesImpl.h"
#include "ZoneCollectionImpl.h"
#include "ZoneHingeCollectionImpl.h"
#include "FeatureCollectionImpl.h"
#include "LXTypesTmpl.inl"

namespace LX
{


template<class T>
ZonesTmpl<T>::ZonesTmpl (DocumentImpl* pDoc)
    : ObjectTmpl<T>(pDoc)
{
    m_Zone = createZoneCollectionObject(pDoc);
    m_ZoneHinge = createZoneHingeCollectionObject(pDoc);
    m_Feature = createFeatureCollectionObject(pDoc);
    m_Side = EnumSideofRoadType::Values::k_null;
    m_bSide_valueSet = false;
    m_Desc = L"";
    m_bDesc_valueSet = false;
    m_Name = L"";
    m_bName_valueSet = false;
    m_State = EnumStateType::Values::k_null;
    m_bState_valueSet = false;
}


template<class T>
ZonesTmpl<T>::~ZonesTmpl ()
{
    if (m_Zone != NULL)
    {
        m_Zone->release();
        m_Zone = NULL;
    }
    if (m_ZoneHinge != NULL)
    {
        m_ZoneHinge->release();
        m_ZoneHinge = NULL;
    }
    if (m_Feature != NULL)
    {
        m_Feature->release();
        m_Feature = NULL;
    }
}


template <class T>
bool ZonesTmpl<T>::getObjectId(const String*& pId) const
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
ValueObject* ZonesTmpl<T>::id() const
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
ZoneCollection& ZonesTmpl<T>::Zone()
{
    return *m_Zone;
}

template <class T>
const ZoneCollection& ZonesTmpl<T>::Zone() const
{
    return *m_Zone;
}

template <class T>
ZoneHingeCollection& ZonesTmpl<T>::ZoneHinge()
{
    return *m_ZoneHinge;
}

template <class T>
const ZoneHingeCollection& ZonesTmpl<T>::ZoneHinge() const
{
    return *m_ZoneHinge;
}

template <class T>
FeatureCollection& ZonesTmpl<T>::Feature()
{
    return *m_Feature;
}

template <class T>
const FeatureCollection& ZonesTmpl<T>::Feature() const
{
    return *m_Feature;
}



template <class T>
EnumSideofRoadType::Values ZonesTmpl<T>::getSide() const
{
    return m_Side;
}

template <class T>
void ZonesTmpl<T>::setSide(EnumSideofRoadType::Values value)
{
    m_Side = value;
    m_bSide_valueSet = true;
}

template <class T>
bool ZonesTmpl<T>::hasValue_Side() const
{
    return m_bSide_valueSet;
}

template <class T>
void ZonesTmpl<T>::resetValue_Side()
{
    m_bSide_valueSet = false;
}


template <class T>
String ZonesTmpl<T>::getDesc() const
{
    return m_Desc;
}

template <class T>
void ZonesTmpl<T>::setDesc(String value)
{
    m_Desc = value;
    m_bDesc_valueSet = true;
}

template <class T>
bool ZonesTmpl<T>::hasValue_Desc() const
{
    return m_bDesc_valueSet;
}

template <class T>
void ZonesTmpl<T>::resetValue_Desc()
{
    m_bDesc_valueSet = false;
}


template <class T>
String ZonesTmpl<T>::getName() const
{
    return m_Name;
}

template <class T>
void ZonesTmpl<T>::setName(String value)
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
bool ZonesTmpl<T>::hasValue_Name() const
{
    return m_bName_valueSet;
}

template <class T>
void ZonesTmpl<T>::resetValue_Name()
{
    m_bName_valueSet = false;
}


template <class T>
EnumStateType::Values ZonesTmpl<T>::getState() const
{
    return m_State;
}

template <class T>
void ZonesTmpl<T>::setState(EnumStateType::Values value)
{
    m_State = value;
    m_bState_valueSet = true;
}

template <class T>
bool ZonesTmpl<T>::hasValue_State() const
{
    return m_bState_valueSet;
}

template <class T>
void ZonesTmpl<T>::resetValue_State()
{
    m_bState_valueSet = false;
}



template <class T>
void ZonesTmpl<T>::toXml (IStream& stream)
{
    static const wchar_t* kstrElementName = L"Zones";
    stream.write(L"<");
    stream.write(kstrElementName);
    if (m_bSide_valueSet)
    {
        stream.write(L" side=\"");
        EnumSideofRoadTypeImpl::streamOut(m_Side, stream);
        stream.write(L"\"");
    }
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
    if (m_Zone)
    {
    	m_Zone->toXml(stream);
    }
    if (m_ZoneHinge)
    {
    	m_ZoneHinge->toXml(stream);
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
Object::ValidityEnum ZonesTmpl<T>::validate (IValidationEventSink* pEventSink) const
{
    Object::ValidityEnum returnCode = Object::kValid;
    returnCode = this->ObjectTmpl<T>::validate(pEventSink);
    if (m_Zone)
    {
        if (m_Zone->validate(pEventSink) != Object::kValid)
            returnCode = Object::kValidWithInvalidChildren;
    }
    if (m_ZoneHinge)
    {
        if (m_ZoneHinge->validate(pEventSink) != Object::kValid)
            returnCode = Object::kValidWithInvalidChildren;
    }
    if (m_Feature)
    {
        if (m_Feature->validate(pEventSink) != Object::kValid)
            returnCode = Object::kValidWithInvalidChildren;
    }
    if (!m_bSide_valueSet)
    {
        pEventSink->onEvent(IValidationEventSink::EventCode::kRequiredValueNotSet, this, L"Side", L"Required value not set");
        returnCode = Object::kInvalid;
    }
    return returnCode;
}

}; // namespace : LX
