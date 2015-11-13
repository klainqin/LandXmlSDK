#include "stdafx.h"
#include "LXTypes.h"
#include "PipeNetwork.h"
#include "Structs.h"
#include "Pipes.h"
#include "FeatureCollection.h"
#include "LXTypesTmpl.h"
#include "PipeNetworkImpl.h"
#include "StructsImpl.h"
#include "PipesImpl.h"
#include "FeatureCollectionImpl.h"
#include "LXTypesTmpl.inl"

namespace LX
{


template<class T>
PipeNetworkTmpl<T>::PipeNetworkTmpl<T> (DocumentImpl* pDoc)
    : ObjectTmpl<T>(pDoc)
{
    m_Structs = NULL;
    m_Pipes = NULL;
    m_Feature = createFeatureCollectionObject(pDoc);
    m_Name = L"";
    m_bName_valueSet = false;
    m_PipeNetType = EnumPipeNetworkType::Values::k_null;
    m_bPipeNetType_valueSet = false;
    m_AlignmentRef = L"";
    m_bAlignmentRef_valueSet = false;
    m_Desc = L"";
    m_bDesc_valueSet = false;
    m_OID = L"";
    m_bOID_valueSet = false;
    m_State = EnumStateType::Values::k_null;
    m_bState_valueSet = false;
}


template<class T>
PipeNetworkTmpl<T>::~PipeNetworkTmpl<T> ()
{
    if (m_Structs != NULL)
    {
        m_Structs->release();
        m_Structs = NULL;
    }
    if (m_Pipes != NULL)
    {
        m_Pipes->release();
        m_Pipes = NULL;
    }
    if (m_Feature != NULL)
    {
        m_Feature->release();
        m_Feature = NULL;
    }
}


template <class T>
bool PipeNetworkTmpl<T>::getObjectId(const String*& pId) const
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
ValueObject* PipeNetworkTmpl<T>::id() const
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
FeatureCollection& PipeNetworkTmpl<T>::Feature()
{
    return *m_Feature;
}

template <class T>
const FeatureCollection& PipeNetworkTmpl<T>::Feature() const
{
    return *m_Feature;
}


template <class T>
Structs* PipeNetworkTmpl<T>::getStructs() const
{
    return m_Structs;
}

template <class T>
void PipeNetworkTmpl<T>::setStructs(Structs* pValue)
{
    m_Structs = pValue;
}

template <class T>
Pipes* PipeNetworkTmpl<T>::getPipes() const
{
    return m_Pipes;
}

template <class T>
void PipeNetworkTmpl<T>::setPipes(Pipes* pValue)
{
    m_Pipes = pValue;
}


template <class T>
String PipeNetworkTmpl<T>::getName() const
{
    return m_Name;
}

template <class T>
void PipeNetworkTmpl<T>::setName(String value)
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
bool PipeNetworkTmpl<T>::hasValue_Name() const
{
    return m_bName_valueSet;
}

template <class T>
void PipeNetworkTmpl<T>::resetValue_Name()
{
    m_bName_valueSet = false;
}


template <class T>
EnumPipeNetworkType::Values PipeNetworkTmpl<T>::getPipeNetType() const
{
    return m_PipeNetType;
}

template <class T>
void PipeNetworkTmpl<T>::setPipeNetType(EnumPipeNetworkType::Values value)
{
    m_PipeNetType = value;
    m_bPipeNetType_valueSet = true;
}

template <class T>
bool PipeNetworkTmpl<T>::hasValue_PipeNetType() const
{
    return m_bPipeNetType_valueSet;
}

template <class T>
void PipeNetworkTmpl<T>::resetValue_PipeNetType()
{
    m_bPipeNetType_valueSet = false;
}


template <class T>
String PipeNetworkTmpl<T>::getAlignmentRef() const
{
    return m_AlignmentRef;
}

template <class T>
void PipeNetworkTmpl<T>::setAlignmentRef(String value)
{
    m_AlignmentRef = value;
    m_bAlignmentRef_valueSet = true;
}

template <class T>
bool PipeNetworkTmpl<T>::hasValue_AlignmentRef() const
{
    return m_bAlignmentRef_valueSet;
}

template <class T>
void PipeNetworkTmpl<T>::resetValue_AlignmentRef()
{
    m_bAlignmentRef_valueSet = false;
}


template <class T>
String PipeNetworkTmpl<T>::getDesc() const
{
    return m_Desc;
}

template <class T>
void PipeNetworkTmpl<T>::setDesc(String value)
{
    m_Desc = value;
    m_bDesc_valueSet = true;
}

template <class T>
bool PipeNetworkTmpl<T>::hasValue_Desc() const
{
    return m_bDesc_valueSet;
}

template <class T>
void PipeNetworkTmpl<T>::resetValue_Desc()
{
    m_bDesc_valueSet = false;
}


template <class T>
String PipeNetworkTmpl<T>::getOID() const
{
    return m_OID;
}

template <class T>
void PipeNetworkTmpl<T>::setOID(String value)
{
    m_OID = value;
    m_bOID_valueSet = true;
}

template <class T>
bool PipeNetworkTmpl<T>::hasValue_OID() const
{
    return m_bOID_valueSet;
}

template <class T>
void PipeNetworkTmpl<T>::resetValue_OID()
{
    m_bOID_valueSet = false;
}


template <class T>
EnumStateType::Values PipeNetworkTmpl<T>::getState() const
{
    return m_State;
}

template <class T>
void PipeNetworkTmpl<T>::setState(EnumStateType::Values value)
{
    m_State = value;
    m_bState_valueSet = true;
}

template <class T>
bool PipeNetworkTmpl<T>::hasValue_State() const
{
    return m_bState_valueSet;
}

template <class T>
void PipeNetworkTmpl<T>::resetValue_State()
{
    m_bState_valueSet = false;
}



template <class T>
void PipeNetworkTmpl<T>::toXml (IStream& stream)
{
    static const wchar_t* kstrElementName = L"PipeNetwork";
    stream.write(L"<");
    stream.write(kstrElementName);
    if (m_bName_valueSet)
    {
        stream.write(L" name=\"");
        StringObjectImpl::streamOut(m_Name, stream);
        stream.write(L"\"");
    }
    if (m_bPipeNetType_valueSet)
    {
        stream.write(L" pipeNetType=\"");
        EnumPipeNetworkTypeImpl::streamOut(m_PipeNetType, stream);
        stream.write(L"\"");
    }
    if (m_bAlignmentRef_valueSet)
    {
        stream.write(L" alignmentRef=\"");
        StringObjectImpl::streamOut(m_AlignmentRef, stream);
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
    if (m_Structs)
    {
    	m_Structs->toXml(stream);
    }
    if (m_Pipes)
    {
    	m_Pipes->toXml(stream);
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
Object::ValidityEnum PipeNetworkTmpl<T>::validate (IValidationEventSink* pEventSink) const
{
    Object::ValidityEnum returnCode = Object::kValid;
    returnCode = this->ObjectTmpl<T>::validate(pEventSink);
    if (m_Structs)
    {
        if (m_Structs->validate(pEventSink) != Object::kValid)
            returnCode = Object::kValidWithInvalidChildren;
    }
    if (m_Pipes)
    {
        if (m_Pipes->validate(pEventSink) != Object::kValid)
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
    if (!m_bPipeNetType_valueSet)
    {
        pEventSink->onEvent(IValidationEventSink::EventCode::kRequiredValueNotSet, this, L"PipeNetType", L"Required value not set");
        returnCode = Object::kInvalid;
    }
    return returnCode;
}

}; // namespace : LX
