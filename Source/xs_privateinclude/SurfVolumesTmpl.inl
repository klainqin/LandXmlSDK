#include "stdafx.h"
#include "LXTypes.h"
#include "SurfVolumes.h"
#include "SurfVolumeCollection.h"
#include "FeatureCollection.h"
#include "LXTypesTmpl.h"
#include "SurfVolumesImpl.h"
#include "SurfVolumeCollectionImpl.h"
#include "FeatureCollectionImpl.h"
#include "LXTypesTmpl.inl"

namespace LX
{


template<class T>
SurfVolumesTmpl<T>::SurfVolumesTmpl<T> (DocumentImpl* pDoc)
    : ObjectTmpl<T>(pDoc)
{
    m_SurfVolume = createSurfVolumeCollectionObject(pDoc);
    m_Feature = createFeatureCollectionObject(pDoc);
    m_Desc = L"";
    m_bDesc_valueSet = false;
    m_Name = L"";
    m_bName_valueSet = false;
    m_SurfVolCalcMethod = EnumSurfVolCMethodType::Values::k_null;
    m_bSurfVolCalcMethod_valueSet = false;
}


template<class T>
SurfVolumesTmpl<T>::~SurfVolumesTmpl<T> ()
{
    if (m_SurfVolume != NULL)
    {
        m_SurfVolume->release();
        m_SurfVolume = NULL;
    }
    if (m_Feature != NULL)
    {
        m_Feature->release();
        m_Feature = NULL;
    }
}


template <class T>
bool SurfVolumesTmpl<T>::getObjectId(const String*& pId) const
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
ValueObject* SurfVolumesTmpl<T>::id() const
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
SurfVolumeCollection& SurfVolumesTmpl<T>::SurfVolume()
{
    return *m_SurfVolume;
}

template <class T>
const SurfVolumeCollection& SurfVolumesTmpl<T>::SurfVolume() const
{
    return *m_SurfVolume;
}

template <class T>
FeatureCollection& SurfVolumesTmpl<T>::Feature()
{
    return *m_Feature;
}

template <class T>
const FeatureCollection& SurfVolumesTmpl<T>::Feature() const
{
    return *m_Feature;
}



template <class T>
String SurfVolumesTmpl<T>::getDesc() const
{
    return m_Desc;
}

template <class T>
void SurfVolumesTmpl<T>::setDesc(String value)
{
    m_Desc = value;
    m_bDesc_valueSet = true;
}

template <class T>
bool SurfVolumesTmpl<T>::hasValue_Desc() const
{
    return m_bDesc_valueSet;
}

template <class T>
void SurfVolumesTmpl<T>::resetValue_Desc()
{
    m_bDesc_valueSet = false;
}


template <class T>
String SurfVolumesTmpl<T>::getName() const
{
    return m_Name;
}

template <class T>
void SurfVolumesTmpl<T>::setName(String value)
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
bool SurfVolumesTmpl<T>::hasValue_Name() const
{
    return m_bName_valueSet;
}

template <class T>
void SurfVolumesTmpl<T>::resetValue_Name()
{
    m_bName_valueSet = false;
}


template <class T>
EnumSurfVolCMethodType::Values SurfVolumesTmpl<T>::getSurfVolCalcMethod() const
{
    return m_SurfVolCalcMethod;
}

template <class T>
void SurfVolumesTmpl<T>::setSurfVolCalcMethod(EnumSurfVolCMethodType::Values value)
{
    m_SurfVolCalcMethod = value;
    m_bSurfVolCalcMethod_valueSet = true;
}

template <class T>
bool SurfVolumesTmpl<T>::hasValue_SurfVolCalcMethod() const
{
    return m_bSurfVolCalcMethod_valueSet;
}

template <class T>
void SurfVolumesTmpl<T>::resetValue_SurfVolCalcMethod()
{
    m_bSurfVolCalcMethod_valueSet = false;
}



template <class T>
void SurfVolumesTmpl<T>::toXml (IStream& stream)
{
    static const wchar_t* kstrElementName = L"SurfVolumes";
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
    if (m_bSurfVolCalcMethod_valueSet)
    {
        stream.write(L" surfVolCalcMethod=\"");
        EnumSurfVolCMethodTypeImpl::streamOut(m_SurfVolCalcMethod, stream);
        stream.write(L"\"");
    }
    stream.write(L">");
    if (m_SurfVolume)
    {
    	m_SurfVolume->toXml(stream);
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
Object::ValidityEnum SurfVolumesTmpl<T>::validate (IValidationEventSink* pEventSink) const
{
    Object::ValidityEnum returnCode = Object::kValid;
    returnCode = this->ObjectTmpl<T>::validate(pEventSink);
    if (m_SurfVolume)
    {
        if (m_SurfVolume->validate(pEventSink) != Object::kValid)
            returnCode = Object::kValidWithInvalidChildren;
    }
    if (m_Feature)
    {
        if (m_Feature->validate(pEventSink) != Object::kValid)
            returnCode = Object::kValidWithInvalidChildren;
    }
    if (!m_bSurfVolCalcMethod_valueSet)
    {
        pEventSink->onEvent(IValidationEventSink::EventCode::kRequiredValueNotSet, this, L"SurfVolCalcMethod", L"Required value not set");
        returnCode = Object::kInvalid;
    }
    return returnCode;
}

}; // namespace : LX
