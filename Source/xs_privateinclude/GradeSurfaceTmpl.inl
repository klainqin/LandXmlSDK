#include "stdafx.h"
#include "LXTypes.h"
#include "GradeSurface.h"
#include "Start.h"
#include "ZonesCollection.h"
#include "FeatureCollection.h"
#include "LXTypesTmpl.h"
#include "GradeSurfaceImpl.h"
#include "StartImpl.h"
#include "ZonesCollectionImpl.h"
#include "FeatureCollectionImpl.h"
#include "LXTypesTmpl.inl"

namespace LX
{


template<class T>
GradeSurfaceTmpl<T>::GradeSurfaceTmpl (DocumentImpl* pDoc)
    : ObjectTmpl<T>(pDoc)
{
    m_Start = NULL;
    m_Zones = createZonesCollectionObject(pDoc);
    m_Feature = createFeatureCollectionObject(pDoc);
    m_AlignmentRef = L"";
    m_bAlignmentRef_valueSet = false;
    m_StationAlignmentRef = L"";
    m_bStationAlignmentRef_valueSet = false;
    m_SurfaceType = EnumZoneSurfaceType::Values::k_null;
    m_bSurfaceType_valueSet = false;
    m_SurfaceRef = L"";
    m_bSurfaceRef_valueSet = false;
    m_SurfaceRefs = NULL;
    m_CgPointRefs = NULL;
    m_Name = L"";
    m_bName_valueSet = false;
    m_Desc = L"";
    m_bDesc_valueSet = false;
    m_State = EnumStateType::Values::k_null;
    m_bState_valueSet = false;
}


template<class T>
GradeSurfaceTmpl<T>::~GradeSurfaceTmpl ()
{
    if (m_Start != NULL)
    {
        m_Start->release();
        m_Start = NULL;
    }
    if (m_Zones != NULL)
    {
        m_Zones->release();
        m_Zones = NULL;
    }
    if (m_Feature != NULL)
    {
        m_Feature->release();
        m_Feature = NULL;
    }
    if (m_SurfaceRefs != NULL)
    {
        m_SurfaceRefs->release();
        m_SurfaceRefs = NULL;
    }
    if (m_CgPointRefs != NULL)
    {
        m_CgPointRefs->release();
        m_CgPointRefs = NULL;
    }
}


template <class T>
bool GradeSurfaceTmpl<T>::getObjectId(const String*& pId) const
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
ValueObject* GradeSurfaceTmpl<T>::id() const
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
ZonesCollection& GradeSurfaceTmpl<T>::Zones()
{
    return *m_Zones;
}

template <class T>
const ZonesCollection& GradeSurfaceTmpl<T>::Zones() const
{
    return *m_Zones;
}

template <class T>
FeatureCollection& GradeSurfaceTmpl<T>::Feature()
{
    return *m_Feature;
}

template <class T>
const FeatureCollection& GradeSurfaceTmpl<T>::Feature() const
{
    return *m_Feature;
}


template <class T>
Start* GradeSurfaceTmpl<T>::getStart() const
{
    return m_Start;
}

template <class T>
void GradeSurfaceTmpl<T>::setStart(Start* pValue)
{
    m_Start = pValue;
}

template <class T>
StringCollection* GradeSurfaceTmpl<T>::getSurfaceRefs() const
{
    return m_SurfaceRefs;
}

template <class T>
void GradeSurfaceTmpl<T>::setSurfaceRefs(StringCollection* pValue)
{
    m_SurfaceRefs = pValue;
}

template <class T>
StringCollection* GradeSurfaceTmpl<T>::getCgPointRefs() const
{
    return m_CgPointRefs;
}

template <class T>
void GradeSurfaceTmpl<T>::setCgPointRefs(StringCollection* pValue)
{
    m_CgPointRefs = pValue;
}


template <class T>
String GradeSurfaceTmpl<T>::getAlignmentRef() const
{
    return m_AlignmentRef;
}

template <class T>
void GradeSurfaceTmpl<T>::setAlignmentRef(String value)
{
    m_AlignmentRef = value;
    m_bAlignmentRef_valueSet = true;
}

template <class T>
bool GradeSurfaceTmpl<T>::hasValue_AlignmentRef() const
{
    return m_bAlignmentRef_valueSet;
}

template <class T>
void GradeSurfaceTmpl<T>::resetValue_AlignmentRef()
{
    m_bAlignmentRef_valueSet = false;
}


template <class T>
String GradeSurfaceTmpl<T>::getStationAlignmentRef() const
{
    return m_StationAlignmentRef;
}

template <class T>
void GradeSurfaceTmpl<T>::setStationAlignmentRef(String value)
{
    m_StationAlignmentRef = value;
    m_bStationAlignmentRef_valueSet = true;
}

template <class T>
bool GradeSurfaceTmpl<T>::hasValue_StationAlignmentRef() const
{
    return m_bStationAlignmentRef_valueSet;
}

template <class T>
void GradeSurfaceTmpl<T>::resetValue_StationAlignmentRef()
{
    m_bStationAlignmentRef_valueSet = false;
}


template <class T>
EnumZoneSurfaceType::Values GradeSurfaceTmpl<T>::getSurfaceType() const
{
    return m_SurfaceType;
}

template <class T>
void GradeSurfaceTmpl<T>::setSurfaceType(EnumZoneSurfaceType::Values value)
{
    m_SurfaceType = value;
    m_bSurfaceType_valueSet = true;
}

template <class T>
bool GradeSurfaceTmpl<T>::hasValue_SurfaceType() const
{
    return m_bSurfaceType_valueSet;
}

template <class T>
void GradeSurfaceTmpl<T>::resetValue_SurfaceType()
{
    m_bSurfaceType_valueSet = false;
}


template <class T>
String GradeSurfaceTmpl<T>::getSurfaceRef() const
{
    return m_SurfaceRef;
}

template <class T>
void GradeSurfaceTmpl<T>::setSurfaceRef(String value)
{
    m_SurfaceRef = value;
    m_bSurfaceRef_valueSet = true;
}

template <class T>
bool GradeSurfaceTmpl<T>::hasValue_SurfaceRef() const
{
    return m_bSurfaceRef_valueSet;
}

template <class T>
void GradeSurfaceTmpl<T>::resetValue_SurfaceRef()
{
    m_bSurfaceRef_valueSet = false;
}


template <class T>
String GradeSurfaceTmpl<T>::getName() const
{
    return m_Name;
}

template <class T>
void GradeSurfaceTmpl<T>::setName(String value)
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
bool GradeSurfaceTmpl<T>::hasValue_Name() const
{
    return m_bName_valueSet;
}

template <class T>
void GradeSurfaceTmpl<T>::resetValue_Name()
{
    m_bName_valueSet = false;
}


template <class T>
String GradeSurfaceTmpl<T>::getDesc() const
{
    return m_Desc;
}

template <class T>
void GradeSurfaceTmpl<T>::setDesc(String value)
{
    m_Desc = value;
    m_bDesc_valueSet = true;
}

template <class T>
bool GradeSurfaceTmpl<T>::hasValue_Desc() const
{
    return m_bDesc_valueSet;
}

template <class T>
void GradeSurfaceTmpl<T>::resetValue_Desc()
{
    m_bDesc_valueSet = false;
}


template <class T>
EnumStateType::Values GradeSurfaceTmpl<T>::getState() const
{
    return m_State;
}

template <class T>
void GradeSurfaceTmpl<T>::setState(EnumStateType::Values value)
{
    m_State = value;
    m_bState_valueSet = true;
}

template <class T>
bool GradeSurfaceTmpl<T>::hasValue_State() const
{
    return m_bState_valueSet;
}

template <class T>
void GradeSurfaceTmpl<T>::resetValue_State()
{
    m_bState_valueSet = false;
}



template <class T>
void GradeSurfaceTmpl<T>::toXml (IStream& stream)
{
    static const wchar_t* kstrElementName = L"GradeSurface";
    stream.write(L"<");
    stream.write(kstrElementName);
    if (m_bAlignmentRef_valueSet)
    {
        stream.write(L" alignmentRef=\"");
        StringObjectImpl::streamOut(m_AlignmentRef, stream);
        stream.write(L"\"");
    }
    if (m_bStationAlignmentRef_valueSet)
    {
        stream.write(L" stationAlignmentRef=\"");
        StringObjectImpl::streamOut(m_StationAlignmentRef, stream);
        stream.write(L"\"");
    }
    if (m_bSurfaceType_valueSet)
    {
        stream.write(L" surfaceType=\"");
        EnumZoneSurfaceTypeImpl::streamOut(m_SurfaceType, stream);
        stream.write(L"\"");
    }
    if (m_bSurfaceRef_valueSet)
    {
        stream.write(L" surfaceRef=\"");
        StringObjectImpl::streamOut(m_SurfaceRef, stream);
        stream.write(L"\"");
    }
    if (m_SurfaceRefs)
    {
        stream.write(L" surfaceRefs=\"");
        StringCollectionImpl::streamOut(m_SurfaceRefs, stream);
        stream.write(L"\"");
    }
    if (m_CgPointRefs)
    {
        stream.write(L" cgPointRefs=\"");
        StringCollectionImpl::streamOut(m_CgPointRefs, stream);
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
    if (m_bState_valueSet)
    {
        stream.write(L" state=\"");
        EnumStateTypeImpl::streamOut(m_State, stream);
        stream.write(L"\"");
    }
    stream.write(L">");
    if (m_Start)
    {
    	m_Start->toXml(stream);
    }
    if (m_Zones)
    {
    	m_Zones->toXml(stream);
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
Object::ValidityEnum GradeSurfaceTmpl<T>::validate (IValidationEventSink* pEventSink) const
{
    Object::ValidityEnum returnCode = Object::kValid;
    returnCode = this->ObjectTmpl<T>::validate(pEventSink);
    if (m_Start)
    {
        if (m_Start->validate(pEventSink) != Object::kValid)
            returnCode = Object::kValidWithInvalidChildren;
    }
    if (m_Zones)
    {
        if (m_Zones->validate(pEventSink) != Object::kValid)
            returnCode = Object::kValidWithInvalidChildren;
    }
    if (m_Feature)
    {
        if (m_Feature->validate(pEventSink) != Object::kValid)
            returnCode = Object::kValidWithInvalidChildren;
    }
    if (!m_bAlignmentRef_valueSet)
    {
        pEventSink->onEvent(IValidationEventSink::EventCode::kRequiredValueNotSet, this, L"AlignmentRef", L"Required value not set");
        returnCode = Object::kInvalid;
    }
    if (!m_bSurfaceType_valueSet)
    {
        pEventSink->onEvent(IValidationEventSink::EventCode::kRequiredValueNotSet, this, L"SurfaceType", L"Required value not set");
        returnCode = Object::kInvalid;
    }
    return returnCode;
}

}; // namespace : LX
