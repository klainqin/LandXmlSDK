#include "stdafx.h"
#include "LXTypes.h"
#include "Surface.h"
#include "SourceData.h"
#include "Definition.h"
#include "Watersheds.h"
#include "FeatureCollection.h"
#include "LXTypesTmpl.h"
#include "SurfaceImpl.h"
#include "SourceDataImpl.h"
#include "DefinitionImpl.h"
#include "WatershedsImpl.h"
#include "FeatureCollectionImpl.h"
#include "LXTypesTmpl.inl"

namespace LX
{


template<class T>
SurfaceTmpl<T>::SurfaceTmpl (DocumentImpl* pDoc)
    : ObjectTmpl<T>(pDoc)
{
    m_SourceData = NULL;
    m_Definition = NULL;
    m_Watersheds = NULL;
    m_Feature = createFeatureCollectionObject(pDoc);
    m_Name = L"";
    m_bName_valueSet = false;
    m_Desc = L"";
    m_bDesc_valueSet = false;
    m_OID = L"";
    m_bOID_valueSet = false;
    m_State = EnumStateType::Values::k_null;
    m_bState_valueSet = false;
}


template<class T>
SurfaceTmpl<T>::~SurfaceTmpl ()
{
    if (m_SourceData != NULL)
    {
        m_SourceData->release();
        m_SourceData = NULL;
    }
    if (m_Definition != NULL)
    {
        m_Definition->release();
        m_Definition = NULL;
    }
    if (m_Watersheds != NULL)
    {
        m_Watersheds->release();
        m_Watersheds = NULL;
    }
    if (m_Feature != NULL)
    {
        m_Feature->release();
        m_Feature = NULL;
    }
}


template <class T>
bool SurfaceTmpl<T>::getObjectId(const String*& pId) const
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
ValueObject* SurfaceTmpl<T>::id() const
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
FeatureCollection& SurfaceTmpl<T>::Feature()
{
    return *m_Feature;
}

template <class T>
const FeatureCollection& SurfaceTmpl<T>::Feature() const
{
    return *m_Feature;
}


template <class T>
SourceData* SurfaceTmpl<T>::getSourceData() const
{
    return m_SourceData;
}

template <class T>
void SurfaceTmpl<T>::setSourceData(SourceData* pValue)
{
    m_SourceData = pValue;
}

template <class T>
Definition* SurfaceTmpl<T>::getDefinition() const
{
    return m_Definition;
}

template <class T>
void SurfaceTmpl<T>::setDefinition(Definition* pValue)
{
    m_Definition = pValue;
}

template <class T>
Watersheds* SurfaceTmpl<T>::getWatersheds() const
{
    return m_Watersheds;
}

template <class T>
void SurfaceTmpl<T>::setWatersheds(Watersheds* pValue)
{
    m_Watersheds = pValue;
}


template <class T>
String SurfaceTmpl<T>::getName() const
{
    return m_Name;
}

template <class T>
void SurfaceTmpl<T>::setName(String value)
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
bool SurfaceTmpl<T>::hasValue_Name() const
{
    return m_bName_valueSet;
}

template <class T>
void SurfaceTmpl<T>::resetValue_Name()
{
    m_bName_valueSet = false;
}


template <class T>
String SurfaceTmpl<T>::getDesc() const
{
    return m_Desc;
}

template <class T>
void SurfaceTmpl<T>::setDesc(String value)
{
    m_Desc = value;
    m_bDesc_valueSet = true;
}

template <class T>
bool SurfaceTmpl<T>::hasValue_Desc() const
{
    return m_bDesc_valueSet;
}

template <class T>
void SurfaceTmpl<T>::resetValue_Desc()
{
    m_bDesc_valueSet = false;
}


template <class T>
String SurfaceTmpl<T>::getOID() const
{
    return m_OID;
}

template <class T>
void SurfaceTmpl<T>::setOID(String value)
{
    m_OID = value;
    m_bOID_valueSet = true;
}

template <class T>
bool SurfaceTmpl<T>::hasValue_OID() const
{
    return m_bOID_valueSet;
}

template <class T>
void SurfaceTmpl<T>::resetValue_OID()
{
    m_bOID_valueSet = false;
}


template <class T>
EnumStateType::Values SurfaceTmpl<T>::getState() const
{
    return m_State;
}

template <class T>
void SurfaceTmpl<T>::setState(EnumStateType::Values value)
{
    m_State = value;
    m_bState_valueSet = true;
}

template <class T>
bool SurfaceTmpl<T>::hasValue_State() const
{
    return m_bState_valueSet;
}

template <class T>
void SurfaceTmpl<T>::resetValue_State()
{
    m_bState_valueSet = false;
}



template <class T>
void SurfaceTmpl<T>::toXml (IStream& stream)
{
    static const wchar_t* kstrElementName = L"Surface";
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
    if (m_bOID_valueSet)
    {
        stream.write(L" OID=\"");
        StringObjectImpl::streamOut(m_OID, stream);
        stream.write(L"\"");
    }
    if (m_bState_valueSet)
    {
        stream.write(L" state=\"");
        EnumStateTypeImpl::streamOut(m_State, stream);
        stream.write(L"\"");
    }
    stream.write(L">");
    if (m_SourceData)
    {
    	m_SourceData->toXml(stream);
    }
    if (m_Definition)
    {
    	m_Definition->toXml(stream);
    }
    if (m_Watersheds)
    {
    	m_Watersheds->toXml(stream);
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
Object::ValidityEnum SurfaceTmpl<T>::validate (IValidationEventSink* pEventSink) const
{
    Object::ValidityEnum returnCode = Object::kValid;
    returnCode = this->ObjectTmpl<T>::validate(pEventSink);
    if (m_SourceData)
    {
        if (m_SourceData->validate(pEventSink) != Object::kValid)
            returnCode = Object::kValidWithInvalidChildren;
    }
    if (m_Definition)
    {
        if (m_Definition->validate(pEventSink) != Object::kValid)
            returnCode = Object::kValidWithInvalidChildren;
    }
    if (m_Watersheds)
    {
        if (m_Watersheds->validate(pEventSink) != Object::kValid)
            returnCode = Object::kValidWithInvalidChildren;
    }
    if (m_Feature)
    {
        if (m_Feature->validate(pEventSink) != Object::kValid)
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
