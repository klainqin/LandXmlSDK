#include "stdafx.h"
#include "LXTypes.h"
#include "Boundary.h"
#include "FeatureCollection.h"
#include "LXTypesTmpl.h"
#include "BoundaryImpl.h"
#include "FeatureCollectionImpl.h"
#include "LXTypesTmpl.inl"

namespace LX
{



template<class T>
BoundaryTmpl<T>::BoundaryTmpl<T> (DocumentImpl* pDoc)
    : ObjectTmpl<T>(pDoc)
{
    m_PntList = NULL;
    m_Feature = createFeatureCollectionObject(pDoc);
    m_BndType = EnumSurfBndType::Values::k_null;
    m_bBndType_valueSet = false;
    m_EdgeTrim = false;
    m_bEdgeTrim_valueSet = false;
    m_Area = 0.0;
    m_bArea_valueSet = false;
    m_Desc = L"";
    m_bDesc_valueSet = false;
    m_Name = L"";
    m_bName_valueSet = false;
    m_State = EnumStateType::Values::k_null;
    m_bState_valueSet = false;
}


template<class T>
BoundaryTmpl<T>::~BoundaryTmpl<T> ()
{
    if (m_PntList != NULL)
    {
        m_PntList->release();
        m_PntList = NULL;
    }
    if (m_Feature != NULL)
    {
        m_Feature->release();
        m_Feature = NULL;
    }
}


template <class T>
bool BoundaryTmpl<T>::getObjectId(const String*& pId) const
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
ValueObject* BoundaryTmpl<T>::id() const
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
FeatureCollection& BoundaryTmpl<T>::Feature()
{
    return *m_Feature;
}

template <class T>
const FeatureCollection& BoundaryTmpl<T>::Feature() const
{
    return *m_Feature;
}


template <class T>
Object* BoundaryTmpl<T>::getPntList() const
{
    return m_PntList;
}

template <class T>
void BoundaryTmpl<T>::setPntList(Object* pValue)
{
    m_PntList = pValue;
}


template <class T>
EnumSurfBndType::Values BoundaryTmpl<T>::getBndType() const
{
    return m_BndType;
}

template <class T>
void BoundaryTmpl<T>::setBndType(EnumSurfBndType::Values value)
{
    m_BndType = value;
    m_bBndType_valueSet = true;
}

template <class T>
bool BoundaryTmpl<T>::hasValue_BndType() const
{
    return m_bBndType_valueSet;
}

template <class T>
void BoundaryTmpl<T>::resetValue_BndType()
{
    m_bBndType_valueSet = false;
}


template <class T>
bool BoundaryTmpl<T>::getEdgeTrim() const
{
    return m_EdgeTrim;
}

template <class T>
void BoundaryTmpl<T>::setEdgeTrim(bool value)
{
    m_EdgeTrim = value;
    m_bEdgeTrim_valueSet = true;
}

template <class T>
bool BoundaryTmpl<T>::hasValue_EdgeTrim() const
{
    return m_bEdgeTrim_valueSet;
}

template <class T>
void BoundaryTmpl<T>::resetValue_EdgeTrim()
{
    m_bEdgeTrim_valueSet = false;
}


template <class T>
double BoundaryTmpl<T>::getArea() const
{
    return m_Area;
}

template <class T>
void BoundaryTmpl<T>::setArea(double value)
{
    m_Area = value;
    m_bArea_valueSet = true;
}

template <class T>
bool BoundaryTmpl<T>::hasValue_Area() const
{
    return m_bArea_valueSet;
}

template <class T>
void BoundaryTmpl<T>::resetValue_Area()
{
    m_bArea_valueSet = false;
}


template <class T>
String BoundaryTmpl<T>::getDesc() const
{
    return m_Desc;
}

template <class T>
void BoundaryTmpl<T>::setDesc(String value)
{
    m_Desc = value;
    m_bDesc_valueSet = true;
}

template <class T>
bool BoundaryTmpl<T>::hasValue_Desc() const
{
    return m_bDesc_valueSet;
}

template <class T>
void BoundaryTmpl<T>::resetValue_Desc()
{
    m_bDesc_valueSet = false;
}


template <class T>
String BoundaryTmpl<T>::getName() const
{
    return m_Name;
}

template <class T>
void BoundaryTmpl<T>::setName(String value)
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
bool BoundaryTmpl<T>::hasValue_Name() const
{
    return m_bName_valueSet;
}

template <class T>
void BoundaryTmpl<T>::resetValue_Name()
{
    m_bName_valueSet = false;
}


template <class T>
EnumStateType::Values BoundaryTmpl<T>::getState() const
{
    return m_State;
}

template <class T>
void BoundaryTmpl<T>::setState(EnumStateType::Values value)
{
    m_State = value;
    m_bState_valueSet = true;
}

template <class T>
bool BoundaryTmpl<T>::hasValue_State() const
{
    return m_bState_valueSet;
}

template <class T>
void BoundaryTmpl<T>::resetValue_State()
{
    m_bState_valueSet = false;
}



template <class T>
void BoundaryTmpl<T>::toXml (IStream& stream)
{
    static const wchar_t* kstrElementName = L"Boundary";
    stream.write(L"<");
    stream.write(kstrElementName);
    if (m_bBndType_valueSet)
    {
        stream.write(L" bndType=\"");
        EnumSurfBndTypeImpl::streamOut(m_BndType, stream);
        stream.write(L"\"");
    }
    if (m_bEdgeTrim_valueSet)
    {
        stream.write(L" edgeTrim=\"");
        BooleanObjectImpl::streamOut(m_EdgeTrim, stream);
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
    if (m_PntList)
    {
    	m_PntList->toXml(stream);
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
Object::ValidityEnum BoundaryTmpl<T>::validate (IValidationEventSink* pEventSink) const
{
    Object::ValidityEnum returnCode = Object::kValid;
    returnCode = this->ObjectTmpl<T>::validate(pEventSink);
    if (m_PntList)
    {
        if (m_PntList->validate(pEventSink) != Object::kValid)
            returnCode = Object::kValidWithInvalidChildren;
    }
    if (m_Feature)
    {
        if (m_Feature->validate(pEventSink) != Object::kValid)
            returnCode = Object::kValidWithInvalidChildren;
    }
    if (!m_bBndType_valueSet)
    {
        pEventSink->onEvent(IValidationEventSink::EventCode::kRequiredValueNotSet, this, L"BndType", L"Required value not set");
        returnCode = Object::kInvalid;
    }
    if (!m_bEdgeTrim_valueSet)
    {
        pEventSink->onEvent(IValidationEventSink::EventCode::kRequiredValueNotSet, this, L"EdgeTrim", L"Required value not set");
        returnCode = Object::kInvalid;
    }
    return returnCode;
}

}; // namespace : LX
