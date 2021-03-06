#include "stdafx.h"
#include "LXTypes.h"
#include "Watershed.h"
#include "OutletCollection.h"
#include "FeatureCollection.h"
#include "LXTypesTmpl.h"
#include "WatershedImpl.h"
#include "OutletCollectionImpl.h"
#include "FeatureCollectionImpl.h"
#include "LXTypesTmpl.inl"

namespace LX
{



template<class T>
WatershedTmpl<T>::WatershedTmpl (DocumentImpl* pDoc)
    : ObjectTmpl<T>(pDoc)
{
    m_PntList = NULL;
    m_Outlet = createOutletCollectionObject(pDoc);
    m_Feature = createFeatureCollectionObject(pDoc);
    m_Name = L"";
    m_bName_valueSet = false;
    m_Area = 0.0;
    m_bArea_valueSet = false;
    m_Desc = L"";
    m_bDesc_valueSet = false;
}


template<class T>
WatershedTmpl<T>::~WatershedTmpl ()
{
    if (m_PntList != NULL)
    {
        m_PntList->release();
        m_PntList = NULL;
    }
    if (m_Outlet != NULL)
    {
        m_Outlet->release();
        m_Outlet = NULL;
    }
    if (m_Feature != NULL)
    {
        m_Feature->release();
        m_Feature = NULL;
    }
}


template <class T>
bool WatershedTmpl<T>::getObjectId(const String*& pId) const
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
ValueObject* WatershedTmpl<T>::id() const
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
OutletCollection& WatershedTmpl<T>::Outlet()
{
    return *m_Outlet;
}

template <class T>
const OutletCollection& WatershedTmpl<T>::Outlet() const
{
    return *m_Outlet;
}

template <class T>
FeatureCollection& WatershedTmpl<T>::Feature()
{
    return *m_Feature;
}

template <class T>
const FeatureCollection& WatershedTmpl<T>::Feature() const
{
    return *m_Feature;
}


template <class T>
Object* WatershedTmpl<T>::getPntList() const
{
    return m_PntList;
}

template <class T>
void WatershedTmpl<T>::setPntList(Object* pValue)
{
    m_PntList = pValue;
}


template <class T>
String WatershedTmpl<T>::getName() const
{
    return m_Name;
}

template <class T>
void WatershedTmpl<T>::setName(String value)
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
bool WatershedTmpl<T>::hasValue_Name() const
{
    return m_bName_valueSet;
}

template <class T>
void WatershedTmpl<T>::resetValue_Name()
{
    m_bName_valueSet = false;
}


template <class T>
double WatershedTmpl<T>::getArea() const
{
    return m_Area;
}

template <class T>
void WatershedTmpl<T>::setArea(double value)
{
    m_Area = value;
    m_bArea_valueSet = true;
}

template <class T>
bool WatershedTmpl<T>::hasValue_Area() const
{
    return m_bArea_valueSet;
}

template <class T>
void WatershedTmpl<T>::resetValue_Area()
{
    m_bArea_valueSet = false;
}


template <class T>
String WatershedTmpl<T>::getDesc() const
{
    return m_Desc;
}

template <class T>
void WatershedTmpl<T>::setDesc(String value)
{
    m_Desc = value;
    m_bDesc_valueSet = true;
}

template <class T>
bool WatershedTmpl<T>::hasValue_Desc() const
{
    return m_bDesc_valueSet;
}

template <class T>
void WatershedTmpl<T>::resetValue_Desc()
{
    m_bDesc_valueSet = false;
}



template <class T>
void WatershedTmpl<T>::toXml (IStream& stream)
{
    static const wchar_t* kstrElementName = L"Watershed";
    stream.write(L"<");
    stream.write(kstrElementName);
    if (m_bName_valueSet)
    {
        stream.write(L" name=\"");
        StringObjectImpl::streamOut(m_Name, stream);
        stream.write(L"\"");
    }
    if (m_bArea_valueSet)
    {
        stream.write(L" area=\"");
        DoubleObjectImpl::streamOut(m_Area, stream);
        stream.write(L"\"");
    }
    if (m_bDesc_valueSet)
    {
        stream.write(L" desc=\"");
        StringObjectImpl::streamOut(m_Desc, stream);
        stream.write(L"\"");
    }
    stream.write(L">");
    if (m_PntList)
    {
    	m_PntList->toXml(stream);
    }
    if (m_Outlet)
    {
    	m_Outlet->toXml(stream);
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
Object::ValidityEnum WatershedTmpl<T>::validate (IValidationEventSink* pEventSink) const
{
    Object::ValidityEnum returnCode = Object::kValid;
    returnCode = this->ObjectTmpl<T>::validate(pEventSink);
    if (m_PntList)
    {
        if (m_PntList->validate(pEventSink) != Object::kValid)
            returnCode = Object::kValidWithInvalidChildren;
    }
    if (m_Outlet)
    {
        if (m_Outlet->validate(pEventSink) != Object::kValid)
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
