#include "stdafx.h"
#include "LXTypes.h"
#include "SurfVolume.h"
#include "FeatureCollection.h"
#include "LXTypesTmpl.h"
#include "SurfVolumeImpl.h"
#include "FeatureCollectionImpl.h"
#include "LXTypesTmpl.inl"

namespace LX
{


template<class T>
SurfVolumeTmpl<T>::SurfVolumeTmpl (DocumentImpl* pDoc)
    : ObjectTmpl<T>(pDoc)
{
    m_Feature = createFeatureCollectionObject(pDoc);
    m_SurfBase = L"";
    m_bSurfBase_valueSet = false;
    m_SurfCompare = L"";
    m_bSurfCompare_valueSet = false;
    m_VolCut = 0.0;
    m_bVolCut_valueSet = false;
    m_VolFill = 0.0;
    m_bVolFill_valueSet = false;
    m_VolTotal = 0.0;
    m_bVolTotal_valueSet = false;
    m_Desc = L"";
    m_bDesc_valueSet = false;
    m_Name = L"";
    m_bName_valueSet = false;
}


template<class T>
SurfVolumeTmpl<T>::~SurfVolumeTmpl ()
{
    if (m_Feature != NULL)
    {
        m_Feature->release();
        m_Feature = NULL;
    }
}


template <class T>
bool SurfVolumeTmpl<T>::getObjectId(const String*& pId) const
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
ValueObject* SurfVolumeTmpl<T>::id() const
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
FeatureCollection& SurfVolumeTmpl<T>::Feature()
{
    return *m_Feature;
}

template <class T>
const FeatureCollection& SurfVolumeTmpl<T>::Feature() const
{
    return *m_Feature;
}



template <class T>
String SurfVolumeTmpl<T>::getSurfBase() const
{
    return m_SurfBase;
}

template <class T>
void SurfVolumeTmpl<T>::setSurfBase(String value)
{
    m_SurfBase = value;
    m_bSurfBase_valueSet = true;
}

template <class T>
bool SurfVolumeTmpl<T>::hasValue_SurfBase() const
{
    return m_bSurfBase_valueSet;
}

template <class T>
void SurfVolumeTmpl<T>::resetValue_SurfBase()
{
    m_bSurfBase_valueSet = false;
}


template <class T>
String SurfVolumeTmpl<T>::getSurfCompare() const
{
    return m_SurfCompare;
}

template <class T>
void SurfVolumeTmpl<T>::setSurfCompare(String value)
{
    m_SurfCompare = value;
    m_bSurfCompare_valueSet = true;
}

template <class T>
bool SurfVolumeTmpl<T>::hasValue_SurfCompare() const
{
    return m_bSurfCompare_valueSet;
}

template <class T>
void SurfVolumeTmpl<T>::resetValue_SurfCompare()
{
    m_bSurfCompare_valueSet = false;
}


template <class T>
double SurfVolumeTmpl<T>::getVolCut() const
{
    return m_VolCut;
}

template <class T>
void SurfVolumeTmpl<T>::setVolCut(double value)
{
    m_VolCut = value;
    m_bVolCut_valueSet = true;
}

template <class T>
bool SurfVolumeTmpl<T>::hasValue_VolCut() const
{
    return m_bVolCut_valueSet;
}

template <class T>
void SurfVolumeTmpl<T>::resetValue_VolCut()
{
    m_bVolCut_valueSet = false;
}


template <class T>
double SurfVolumeTmpl<T>::getVolFill() const
{
    return m_VolFill;
}

template <class T>
void SurfVolumeTmpl<T>::setVolFill(double value)
{
    m_VolFill = value;
    m_bVolFill_valueSet = true;
}

template <class T>
bool SurfVolumeTmpl<T>::hasValue_VolFill() const
{
    return m_bVolFill_valueSet;
}

template <class T>
void SurfVolumeTmpl<T>::resetValue_VolFill()
{
    m_bVolFill_valueSet = false;
}


template <class T>
double SurfVolumeTmpl<T>::getVolTotal() const
{
    return m_VolTotal;
}

template <class T>
void SurfVolumeTmpl<T>::setVolTotal(double value)
{
    m_VolTotal = value;
    m_bVolTotal_valueSet = true;
}

template <class T>
bool SurfVolumeTmpl<T>::hasValue_VolTotal() const
{
    return m_bVolTotal_valueSet;
}

template <class T>
void SurfVolumeTmpl<T>::resetValue_VolTotal()
{
    m_bVolTotal_valueSet = false;
}


template <class T>
String SurfVolumeTmpl<T>::getDesc() const
{
    return m_Desc;
}

template <class T>
void SurfVolumeTmpl<T>::setDesc(String value)
{
    m_Desc = value;
    m_bDesc_valueSet = true;
}

template <class T>
bool SurfVolumeTmpl<T>::hasValue_Desc() const
{
    return m_bDesc_valueSet;
}

template <class T>
void SurfVolumeTmpl<T>::resetValue_Desc()
{
    m_bDesc_valueSet = false;
}


template <class T>
String SurfVolumeTmpl<T>::getName() const
{
    return m_Name;
}

template <class T>
void SurfVolumeTmpl<T>::setName(String value)
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
bool SurfVolumeTmpl<T>::hasValue_Name() const
{
    return m_bName_valueSet;
}

template <class T>
void SurfVolumeTmpl<T>::resetValue_Name()
{
    m_bName_valueSet = false;
}



template <class T>
void SurfVolumeTmpl<T>::toXml (IStream& stream)
{
    static const wchar_t* kstrElementName = L"SurfVolume";
    stream.write(L"<");
    stream.write(kstrElementName);
    if (m_bSurfBase_valueSet)
    {
        stream.write(L" surfBase=\"");
        StringObjectImpl::streamOut(m_SurfBase, stream);
        stream.write(L"\"");
    }
    if (m_bSurfCompare_valueSet)
    {
        stream.write(L" surfCompare=\"");
        StringObjectImpl::streamOut(m_SurfCompare, stream);
        stream.write(L"\"");
    }
    if (m_bVolCut_valueSet)
    {
        stream.write(L" volCut=\"");
        DoubleObjectImpl::streamOut(m_VolCut, stream);
        stream.write(L"\"");
    }
    if (m_bVolFill_valueSet)
    {
        stream.write(L" volFill=\"");
        DoubleObjectImpl::streamOut(m_VolFill, stream);
        stream.write(L"\"");
    }
    if (m_bVolTotal_valueSet)
    {
        stream.write(L" volTotal=\"");
        DoubleObjectImpl::streamOut(m_VolTotal, stream);
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
    stream.write(L">");
    if (m_Feature)
    {
    	m_Feature->toXml(stream);
    }
    stream.write(L"</");
    stream.write(kstrElementName);
    stream.write(L">");
}

template <class T>
Object::ValidityEnum SurfVolumeTmpl<T>::validate (IValidationEventSink* pEventSink) const
{
    Object::ValidityEnum returnCode = Object::kValid;
    returnCode = this->ObjectTmpl<T>::validate(pEventSink);
    if (m_Feature)
    {
        if (m_Feature->validate(pEventSink) != Object::kValid)
            returnCode = Object::kValidWithInvalidChildren;
    }
    if (!m_bSurfBase_valueSet)
    {
        pEventSink->onEvent(IValidationEventSink::EventCode::kRequiredValueNotSet, this, L"SurfBase", L"Required value not set");
        returnCode = Object::kInvalid;
    }
    if (!m_bSurfCompare_valueSet)
    {
        pEventSink->onEvent(IValidationEventSink::EventCode::kRequiredValueNotSet, this, L"SurfCompare", L"Required value not set");
        returnCode = Object::kInvalid;
    }
    if (!m_bVolCut_valueSet)
    {
        pEventSink->onEvent(IValidationEventSink::EventCode::kRequiredValueNotSet, this, L"VolCut", L"Required value not set");
        returnCode = Object::kInvalid;
    }
    if (!m_bVolFill_valueSet)
    {
        pEventSink->onEvent(IValidationEventSink::EventCode::kRequiredValueNotSet, this, L"VolFill", L"Required value not set");
        returnCode = Object::kInvalid;
    }
    if (!m_bVolTotal_valueSet)
    {
        pEventSink->onEvent(IValidationEventSink::EventCode::kRequiredValueNotSet, this, L"VolTotal", L"Required value not set");
        returnCode = Object::kInvalid;
    }
    return returnCode;
}

}; // namespace : LX
