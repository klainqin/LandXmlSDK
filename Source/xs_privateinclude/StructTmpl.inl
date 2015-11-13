#include "stdafx.h"
#include "LXTypes.h"
#include "Struct.h"
#include "Center.h"
#include "InvertCollection.h"
#include "StructFlow.h"
#include "FeatureCollection.h"
#include "LXTypesTmpl.h"
#include "StructImpl.h"
#include "CenterImpl.h"
#include "InvertCollectionImpl.h"
#include "StructFlowImpl.h"
#include "FeatureCollectionImpl.h"
#include "LXTypesTmpl.inl"

namespace LX
{



template<class T>
StructTmpl<T>::StructTmpl<T> (DocumentImpl* pDoc)
    : ObjectTmpl<T>(pDoc)
{
    m_Center = NULL;
    m_StructGeom = NULL;
    m_Invert = createInvertCollectionObject(pDoc);
    m_StructFlow = NULL;
    m_Feature = createFeatureCollectionObject(pDoc);
    m_Name = L"";
    m_bName_valueSet = false;
    m_Desc = L"";
    m_bDesc_valueSet = false;
    m_ElevRim = 0.0;
    m_bElevRim_valueSet = false;
    m_ElevSump = 0.0;
    m_bElevSump_valueSet = false;
    m_OID = L"";
    m_bOID_valueSet = false;
    m_State = EnumStateType::Values::k_null;
    m_bState_valueSet = false;
}


template<class T>
StructTmpl<T>::~StructTmpl<T> ()
{
    if (m_Center != NULL)
    {
        m_Center->release();
        m_Center = NULL;
    }
    if (m_StructGeom != NULL)
    {
        m_StructGeom->release();
        m_StructGeom = NULL;
    }
    if (m_Invert != NULL)
    {
        m_Invert->release();
        m_Invert = NULL;
    }
    if (m_StructFlow != NULL)
    {
        m_StructFlow->release();
        m_StructFlow = NULL;
    }
    if (m_Feature != NULL)
    {
        m_Feature->release();
        m_Feature = NULL;
    }
}


template <class T>
bool StructTmpl<T>::getObjectId(const String*& pId) const
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
ValueObject* StructTmpl<T>::id() const
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
InvertCollection& StructTmpl<T>::Invert()
{
    return *m_Invert;
}

template <class T>
const InvertCollection& StructTmpl<T>::Invert() const
{
    return *m_Invert;
}

template <class T>
FeatureCollection& StructTmpl<T>::Feature()
{
    return *m_Feature;
}

template <class T>
const FeatureCollection& StructTmpl<T>::Feature() const
{
    return *m_Feature;
}


template <class T>
Center* StructTmpl<T>::getCenter() const
{
    return m_Center;
}

template <class T>
void StructTmpl<T>::setCenter(Center* pValue)
{
    m_Center = pValue;
}

template <class T>
Object* StructTmpl<T>::getStructGeom() const
{
    return m_StructGeom;
}

template <class T>
void StructTmpl<T>::setStructGeom(Object* pValue)
{
    m_StructGeom = pValue;
}

template <class T>
StructFlow* StructTmpl<T>::getStructFlow() const
{
    return m_StructFlow;
}

template <class T>
void StructTmpl<T>::setStructFlow(StructFlow* pValue)
{
    m_StructFlow = pValue;
}


template <class T>
String StructTmpl<T>::getName() const
{
    return m_Name;
}

template <class T>
void StructTmpl<T>::setName(String value)
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
bool StructTmpl<T>::hasValue_Name() const
{
    return m_bName_valueSet;
}

template <class T>
void StructTmpl<T>::resetValue_Name()
{
    m_bName_valueSet = false;
}


template <class T>
String StructTmpl<T>::getDesc() const
{
    return m_Desc;
}

template <class T>
void StructTmpl<T>::setDesc(String value)
{
    m_Desc = value;
    m_bDesc_valueSet = true;
}

template <class T>
bool StructTmpl<T>::hasValue_Desc() const
{
    return m_bDesc_valueSet;
}

template <class T>
void StructTmpl<T>::resetValue_Desc()
{
    m_bDesc_valueSet = false;
}


template <class T>
double StructTmpl<T>::getElevRim() const
{
    return m_ElevRim;
}

template <class T>
void StructTmpl<T>::setElevRim(double value)
{
    m_ElevRim = value;
    m_bElevRim_valueSet = true;
}

template <class T>
bool StructTmpl<T>::hasValue_ElevRim() const
{
    return m_bElevRim_valueSet;
}

template <class T>
void StructTmpl<T>::resetValue_ElevRim()
{
    m_bElevRim_valueSet = false;
}


template <class T>
double StructTmpl<T>::getElevSump() const
{
    return m_ElevSump;
}

template <class T>
void StructTmpl<T>::setElevSump(double value)
{
    m_ElevSump = value;
    m_bElevSump_valueSet = true;
}

template <class T>
bool StructTmpl<T>::hasValue_ElevSump() const
{
    return m_bElevSump_valueSet;
}

template <class T>
void StructTmpl<T>::resetValue_ElevSump()
{
    m_bElevSump_valueSet = false;
}


template <class T>
String StructTmpl<T>::getOID() const
{
    return m_OID;
}

template <class T>
void StructTmpl<T>::setOID(String value)
{
    m_OID = value;
    m_bOID_valueSet = true;
}

template <class T>
bool StructTmpl<T>::hasValue_OID() const
{
    return m_bOID_valueSet;
}

template <class T>
void StructTmpl<T>::resetValue_OID()
{
    m_bOID_valueSet = false;
}


template <class T>
EnumStateType::Values StructTmpl<T>::getState() const
{
    return m_State;
}

template <class T>
void StructTmpl<T>::setState(EnumStateType::Values value)
{
    m_State = value;
    m_bState_valueSet = true;
}

template <class T>
bool StructTmpl<T>::hasValue_State() const
{
    return m_bState_valueSet;
}

template <class T>
void StructTmpl<T>::resetValue_State()
{
    m_bState_valueSet = false;
}



template <class T>
void StructTmpl<T>::toXml (IStream& stream)
{
    static const wchar_t* kstrElementName = L"Struct";
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
    if (m_bElevRim_valueSet)
    {
        stream.write(L" elevRim=\"");
        DoubleObjectImpl::streamOut(m_ElevRim, stream);
        stream.write(L"\"");
    }
    if (m_bElevSump_valueSet)
    {
        stream.write(L" elevSump=\"");
        DoubleObjectImpl::streamOut(m_ElevSump, stream);
        stream.write(L"\"");
    }
    if (m_bOID_valueSet)
    {
        stream.write(L" oID=\"");
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
    if (m_Center)
    {
    	m_Center->toXml(stream);
    }
    if (m_StructGeom)
    {
    	m_StructGeom->toXml(stream);
    }
    if (m_Invert)
    {
    	m_Invert->toXml(stream);
    }
    if (m_StructFlow)
    {
    	m_StructFlow->toXml(stream);
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
Object::ValidityEnum StructTmpl<T>::validate (IValidationEventSink* pEventSink) const
{
    Object::ValidityEnum returnCode = Object::kValid;
    returnCode = this->ObjectTmpl<T>::validate(pEventSink);
    if (m_Center)
    {
        if (m_Center->validate(pEventSink) != Object::kValid)
            returnCode = Object::kValidWithInvalidChildren;
    }
    if (m_StructGeom)
    {
        if (m_StructGeom->validate(pEventSink) != Object::kValid)
            returnCode = Object::kValidWithInvalidChildren;
    }
    if (m_Invert)
    {
        if (m_Invert->validate(pEventSink) != Object::kValid)
            returnCode = Object::kValidWithInvalidChildren;
    }
    if (m_StructFlow)
    {
        if (m_StructFlow->validate(pEventSink) != Object::kValid)
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
