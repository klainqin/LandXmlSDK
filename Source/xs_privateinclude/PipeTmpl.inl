#include "stdafx.h"
#include "LXTypes.h"
#include "Pipe.h"
#include "PipeFlow.h"
#include "Center.h"
#include "FeatureCollection.h"
#include "LXTypesTmpl.h"
#include "PipeImpl.h"
#include "PipeFlowImpl.h"
#include "CenterImpl.h"
#include "FeatureCollectionImpl.h"
#include "LXTypesTmpl.inl"

namespace LX
{



template<class T>
PipeTmpl<T>::PipeTmpl (DocumentImpl* pDoc)
    : ObjectTmpl<T>(pDoc)
{
    m_PipeGeom = NULL;
    m_PipeFlow = NULL;
    m_Center = NULL;
    m_Feature = createFeatureCollectionObject(pDoc);
    m_Name = L"";
    m_bName_valueSet = false;
    m_RefEnd = L"";
    m_bRefEnd_valueSet = false;
    m_RefStart = L"";
    m_bRefStart_valueSet = false;
    m_Desc = L"";
    m_bDesc_valueSet = false;
    m_Length = 0.0;
    m_bLength_valueSet = false;
    m_OID = L"";
    m_bOID_valueSet = false;
    m_Slope = 0.0;
    m_bSlope_valueSet = false;
    m_State = EnumStateType::Values::k_null;
    m_bState_valueSet = false;
}


template<class T>
PipeTmpl<T>::~PipeTmpl ()
{
    if (m_PipeGeom != NULL)
    {
        m_PipeGeom->release();
        m_PipeGeom = NULL;
    }
    if (m_PipeFlow != NULL)
    {
        m_PipeFlow->release();
        m_PipeFlow = NULL;
    }
    if (m_Center != NULL)
    {
        m_Center->release();
        m_Center = NULL;
    }
    if (m_Feature != NULL)
    {
        m_Feature->release();
        m_Feature = NULL;
    }
}


template <class T>
bool PipeTmpl<T>::getObjectId(const String*& pId) const
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
ValueObject* PipeTmpl<T>::id() const
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
FeatureCollection& PipeTmpl<T>::Feature()
{
    return *m_Feature;
}

template <class T>
const FeatureCollection& PipeTmpl<T>::Feature() const
{
    return *m_Feature;
}


template <class T>
Object* PipeTmpl<T>::getPipeGeom() const
{
    return m_PipeGeom;
}

template <class T>
void PipeTmpl<T>::setPipeGeom(Object* pValue)
{
    m_PipeGeom = pValue;
}

template <class T>
PipeFlow* PipeTmpl<T>::getPipeFlow() const
{
    return m_PipeFlow;
}

template <class T>
void PipeTmpl<T>::setPipeFlow(PipeFlow* pValue)
{
    m_PipeFlow = pValue;
}

template <class T>
Center* PipeTmpl<T>::getCenter() const
{
    return m_Center;
}

template <class T>
void PipeTmpl<T>::setCenter(Center* pValue)
{
    m_Center = pValue;
}


template <class T>
String PipeTmpl<T>::getName() const
{
    return m_Name;
}

template <class T>
void PipeTmpl<T>::setName(String value)
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
bool PipeTmpl<T>::hasValue_Name() const
{
    return m_bName_valueSet;
}

template <class T>
void PipeTmpl<T>::resetValue_Name()
{
    m_bName_valueSet = false;
}


template <class T>
String PipeTmpl<T>::getRefEnd() const
{
    return m_RefEnd;
}

template <class T>
void PipeTmpl<T>::setRefEnd(String value)
{
    m_RefEnd = value;
    m_bRefEnd_valueSet = true;
}

template <class T>
bool PipeTmpl<T>::hasValue_RefEnd() const
{
    return m_bRefEnd_valueSet;
}

template <class T>
void PipeTmpl<T>::resetValue_RefEnd()
{
    m_bRefEnd_valueSet = false;
}


template <class T>
String PipeTmpl<T>::getRefStart() const
{
    return m_RefStart;
}

template <class T>
void PipeTmpl<T>::setRefStart(String value)
{
    m_RefStart = value;
    m_bRefStart_valueSet = true;
}

template <class T>
bool PipeTmpl<T>::hasValue_RefStart() const
{
    return m_bRefStart_valueSet;
}

template <class T>
void PipeTmpl<T>::resetValue_RefStart()
{
    m_bRefStart_valueSet = false;
}


template <class T>
String PipeTmpl<T>::getDesc() const
{
    return m_Desc;
}

template <class T>
void PipeTmpl<T>::setDesc(String value)
{
    m_Desc = value;
    m_bDesc_valueSet = true;
}

template <class T>
bool PipeTmpl<T>::hasValue_Desc() const
{
    return m_bDesc_valueSet;
}

template <class T>
void PipeTmpl<T>::resetValue_Desc()
{
    m_bDesc_valueSet = false;
}


template <class T>
double PipeTmpl<T>::getLength() const
{
    return m_Length;
}

template <class T>
void PipeTmpl<T>::setLength(double value)
{
    m_Length = value;
    m_bLength_valueSet = true;
}

template <class T>
bool PipeTmpl<T>::hasValue_Length() const
{
    return m_bLength_valueSet;
}

template <class T>
void PipeTmpl<T>::resetValue_Length()
{
    m_bLength_valueSet = false;
}


template <class T>
String PipeTmpl<T>::getOID() const
{
    return m_OID;
}

template <class T>
void PipeTmpl<T>::setOID(String value)
{
    m_OID = value;
    m_bOID_valueSet = true;
}

template <class T>
bool PipeTmpl<T>::hasValue_OID() const
{
    return m_bOID_valueSet;
}

template <class T>
void PipeTmpl<T>::resetValue_OID()
{
    m_bOID_valueSet = false;
}


template <class T>
double PipeTmpl<T>::getSlope() const
{
    return m_Slope;
}

template <class T>
void PipeTmpl<T>::setSlope(double value)
{
    m_Slope = value;
    m_bSlope_valueSet = true;
}

template <class T>
bool PipeTmpl<T>::hasValue_Slope() const
{
    return m_bSlope_valueSet;
}

template <class T>
void PipeTmpl<T>::resetValue_Slope()
{
    m_bSlope_valueSet = false;
}


template <class T>
EnumStateType::Values PipeTmpl<T>::getState() const
{
    return m_State;
}

template <class T>
void PipeTmpl<T>::setState(EnumStateType::Values value)
{
    m_State = value;
    m_bState_valueSet = true;
}

template <class T>
bool PipeTmpl<T>::hasValue_State() const
{
    return m_bState_valueSet;
}

template <class T>
void PipeTmpl<T>::resetValue_State()
{
    m_bState_valueSet = false;
}



template <class T>
void PipeTmpl<T>::toXml (IStream& stream)
{
    static const wchar_t* kstrElementName = L"Pipe";
    stream.write(L"<");
    stream.write(kstrElementName);
    if (m_bName_valueSet)
    {
        stream.write(L" name=\"");
        StringObjectImpl::streamOut(m_Name, stream);
        stream.write(L"\"");
    }
    if (m_bRefEnd_valueSet)
    {
        stream.write(L" refEnd=\"");
        StringObjectImpl::streamOut(m_RefEnd, stream);
        stream.write(L"\"");
    }
    if (m_bRefStart_valueSet)
    {
        stream.write(L" refStart=\"");
        StringObjectImpl::streamOut(m_RefStart, stream);
        stream.write(L"\"");
    }
    if (m_bDesc_valueSet)
    {
        stream.write(L" desc=\"");
        StringObjectImpl::streamOut(m_Desc, stream);
        stream.write(L"\"");
    }
    if (m_bLength_valueSet)
    {
        stream.write(L" length=\"");
        DoubleObjectImpl::streamOut(m_Length, stream);
        stream.write(L"\"");
    }
    if (m_bOID_valueSet)
    {
        stream.write(L" oID=\"");
        StringObjectImpl::streamOut(m_OID, stream);
        stream.write(L"\"");
    }
    if (m_bSlope_valueSet)
    {
        stream.write(L" slope=\"");
        DoubleObjectImpl::streamOut(m_Slope, stream);
        stream.write(L"\"");
    }
    if (m_bState_valueSet)
    {
        stream.write(L" state=\"");
        EnumStateTypeImpl::streamOut(m_State, stream);
        stream.write(L"\"");
    }
    stream.write(L">");
    if (m_PipeGeom)
    {
    	m_PipeGeom->toXml(stream);
    }
    if (m_PipeFlow)
    {
    	m_PipeFlow->toXml(stream);
    }
    if (m_Center)
    {
    	m_Center->toXml(stream);
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
Struct* PipeTmpl<T>::resolveRefStart ()
{
    if (m_bRefStart_valueSet)
    {
        StructCollectionIterator* pIter = this->m_pDoc->getGlobalObjects().getStructCollection().find(m_RefStart);
        if (pIter)
        {
	         Struct* pObject = pIter->current();
            pIter->release();
            return pObject;
        }
        else
        {
            return NULL;
        }
    }
    return NULL;
}
template <class T>
Struct* PipeTmpl<T>::resolveRefEnd ()
{
    if (m_bRefEnd_valueSet)
    {
        StructCollectionIterator* pIter = this->m_pDoc->getGlobalObjects().getStructCollection().find(m_RefEnd);
        if (pIter)
        {
	         Struct* pObject = pIter->current();
            pIter->release();
            return pObject;
        }
        else
        {
            return NULL;
        }
    }
    return NULL;
}

template <class T>
Object::ValidityEnum PipeTmpl<T>::validate (IValidationEventSink* pEventSink) const
{
    Object::ValidityEnum returnCode = Object::kValid;
    returnCode = this->ObjectTmpl<T>::validate(pEventSink);
    if (m_PipeGeom)
    {
        if (m_PipeGeom->validate(pEventSink) != Object::kValid)
            returnCode = Object::kValidWithInvalidChildren;
    }
    if (m_PipeFlow)
    {
        if (m_PipeFlow->validate(pEventSink) != Object::kValid)
            returnCode = Object::kValidWithInvalidChildren;
    }
    if (m_Center)
    {
        if (m_Center->validate(pEventSink) != Object::kValid)
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
    if (!m_bRefEnd_valueSet)
    {
        pEventSink->onEvent(IValidationEventSink::EventCode::kRequiredValueNotSet, this, L"RefEnd", L"Required value not set");
        returnCode = Object::kInvalid;
    }
    if (!m_bRefStart_valueSet)
    {
        pEventSink->onEvent(IValidationEventSink::EventCode::kRequiredValueNotSet, this, L"RefStart", L"Required value not set");
        returnCode = Object::kInvalid;
    }
    if (m_bRefStart_valueSet)
    {
        StructCollectionIterator* pIter = this->m_pDoc->getGlobalObjects().getStructCollection().find(m_RefStart);
        if (!pIter)
        {
            pEventSink->onEvent(IValidationEventSink::EventCode::kUnresolvableReference, this, L"RefStart", L"Reference not set");
            returnCode = Object::kInvalid;
        }
        else
        {
            pIter->release();
        }
    }
    if (m_bRefEnd_valueSet)
    {
        StructCollectionIterator* pIter = this->m_pDoc->getGlobalObjects().getStructCollection().find(m_RefEnd);
        if (!pIter)
        {
            pEventSink->onEvent(IValidationEventSink::EventCode::kUnresolvableReference, this, L"RefEnd", L"Reference not set");
            returnCode = Object::kInvalid;
        }
        else
        {
            pIter->release();
        }
    }
    return returnCode;
}

}; // namespace : LX
