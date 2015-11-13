#include "stdafx.h"
#include "LXTypes.h"
#include "Line.h"
#include "Start.h"
#include "End.h"
#include "FeatureCollection.h"
#include "LXTypesTmpl.h"
#include "LineImpl.h"
#include "StartImpl.h"
#include "EndImpl.h"
#include "FeatureCollectionImpl.h"
#include "LXTypesTmpl.inl"

namespace LX
{


template<class T>
LineTmpl<T>::LineTmpl<T> (DocumentImpl* pDoc)
    : ObjectTmpl<T>(pDoc)
{
    m_Start = NULL;
    m_End = NULL;
    m_Feature = createFeatureCollectionObject(pDoc);
    m_Desc = L"";
    m_bDesc_valueSet = false;
    m_Dir = 0.0;
    m_bDir_valueSet = false;
    m_Length = 0.0;
    m_bLength_valueSet = false;
    m_Name = L"";
    m_bName_valueSet = false;
    m_StaStart = 0.0;
    m_bStaStart_valueSet = false;
    m_State = EnumStateType::Values::k_null;
    m_bState_valueSet = false;
    m_OID = L"";
    m_bOID_valueSet = false;
    m_Note = L"";
    m_bNote_valueSet = false;
}


template<class T>
LineTmpl<T>::~LineTmpl<T> ()
{
    if (m_Start != NULL)
    {
        m_Start->release();
        m_Start = NULL;
    }
    if (m_End != NULL)
    {
        m_End->release();
        m_End = NULL;
    }
    if (m_Feature != NULL)
    {
        m_Feature->release();
        m_Feature = NULL;
    }
}


template <class T>
bool LineTmpl<T>::getObjectId(const String*& pId) const
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
ValueObject* LineTmpl<T>::id() const
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
FeatureCollection& LineTmpl<T>::Feature()
{
    return *m_Feature;
}

template <class T>
const FeatureCollection& LineTmpl<T>::Feature() const
{
    return *m_Feature;
}


template <class T>
Start* LineTmpl<T>::getStart() const
{
    return m_Start;
}

template <class T>
void LineTmpl<T>::setStart(Start* pValue)
{
    m_Start = pValue;
}

template <class T>
End* LineTmpl<T>::getEnd() const
{
    return m_End;
}

template <class T>
void LineTmpl<T>::setEnd(End* pValue)
{
    m_End = pValue;
}


template <class T>
String LineTmpl<T>::getDesc() const
{
    return m_Desc;
}

template <class T>
void LineTmpl<T>::setDesc(String value)
{
    m_Desc = value;
    m_bDesc_valueSet = true;
}

template <class T>
bool LineTmpl<T>::hasValue_Desc() const
{
    return m_bDesc_valueSet;
}

template <class T>
void LineTmpl<T>::resetValue_Desc()
{
    m_bDesc_valueSet = false;
}


template <class T>
double LineTmpl<T>::getDir() const
{
    return m_Dir;
}

template <class T>
void LineTmpl<T>::setDir(double value)
{
    m_Dir = value;
    m_bDir_valueSet = true;
}

template <class T>
bool LineTmpl<T>::hasValue_Dir() const
{
    return m_bDir_valueSet;
}

template <class T>
void LineTmpl<T>::resetValue_Dir()
{
    m_bDir_valueSet = false;
}


template <class T>
double LineTmpl<T>::getLength() const
{
    return m_Length;
}

template <class T>
void LineTmpl<T>::setLength(double value)
{
    m_Length = value;
    m_bLength_valueSet = true;
}

template <class T>
bool LineTmpl<T>::hasValue_Length() const
{
    return m_bLength_valueSet;
}

template <class T>
void LineTmpl<T>::resetValue_Length()
{
    m_bLength_valueSet = false;
}


template <class T>
String LineTmpl<T>::getName() const
{
    return m_Name;
}

template <class T>
void LineTmpl<T>::setName(String value)
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
bool LineTmpl<T>::hasValue_Name() const
{
    return m_bName_valueSet;
}

template <class T>
void LineTmpl<T>::resetValue_Name()
{
    m_bName_valueSet = false;
}


template <class T>
double LineTmpl<T>::getStaStart() const
{
    return m_StaStart;
}

template <class T>
void LineTmpl<T>::setStaStart(double value)
{
    m_StaStart = value;
    m_bStaStart_valueSet = true;
}

template <class T>
bool LineTmpl<T>::hasValue_StaStart() const
{
    return m_bStaStart_valueSet;
}

template <class T>
void LineTmpl<T>::resetValue_StaStart()
{
    m_bStaStart_valueSet = false;
}


template <class T>
EnumStateType::Values LineTmpl<T>::getState() const
{
    return m_State;
}

template <class T>
void LineTmpl<T>::setState(EnumStateType::Values value)
{
    m_State = value;
    m_bState_valueSet = true;
}

template <class T>
bool LineTmpl<T>::hasValue_State() const
{
    return m_bState_valueSet;
}

template <class T>
void LineTmpl<T>::resetValue_State()
{
    m_bState_valueSet = false;
}


template <class T>
String LineTmpl<T>::getOID() const
{
    return m_OID;
}

template <class T>
void LineTmpl<T>::setOID(String value)
{
    m_OID = value;
    m_bOID_valueSet = true;
}

template <class T>
bool LineTmpl<T>::hasValue_OID() const
{
    return m_bOID_valueSet;
}

template <class T>
void LineTmpl<T>::resetValue_OID()
{
    m_bOID_valueSet = false;
}


template <class T>
String LineTmpl<T>::getNote() const
{
    return m_Note;
}

template <class T>
void LineTmpl<T>::setNote(String value)
{
    m_Note = value;
    m_bNote_valueSet = true;
}

template <class T>
bool LineTmpl<T>::hasValue_Note() const
{
    return m_bNote_valueSet;
}

template <class T>
void LineTmpl<T>::resetValue_Note()
{
    m_bNote_valueSet = false;
}



template <class T>
void LineTmpl<T>::toXml (IStream& stream)
{
    static const wchar_t* kstrElementName = L"Line";
    stream.write(L"<");
    stream.write(kstrElementName);
    if (m_bDesc_valueSet)
    {
        stream.write(L" desc=\"");
        StringObjectImpl::streamOut(m_Desc, stream);
        stream.write(L"\"");
    }
    if (m_bDir_valueSet)
    {
        stream.write(L" dir=\"");
        DoubleObjectImpl::streamOut(m_Dir, stream);
        stream.write(L"\"");
    }
    if (m_bLength_valueSet)
    {
        stream.write(L" length=\"");
        DoubleObjectImpl::streamOut(m_Length, stream);
        stream.write(L"\"");
    }
    if (m_bName_valueSet)
    {
        stream.write(L" name=\"");
        StringObjectImpl::streamOut(m_Name, stream);
        stream.write(L"\"");
    }
    if (m_bStaStart_valueSet)
    {
        stream.write(L" staStart=\"");
        DoubleObjectImpl::streamOut(m_StaStart, stream);
        stream.write(L"\"");
    }
    if (m_bState_valueSet)
    {
        stream.write(L" state=\"");
        EnumStateTypeImpl::streamOut(m_State, stream);
        stream.write(L"\"");
    }
    if (m_bOID_valueSet)
    {
        stream.write(L" oID=\"");
        StringObjectImpl::streamOut(m_OID, stream);
        stream.write(L"\"");
    }
    if (m_bNote_valueSet)
    {
        stream.write(L" note=\"");
        StringObjectImpl::streamOut(m_Note, stream);
        stream.write(L"\"");
    }
    stream.write(L">");
    if (m_Start)
    {
    	m_Start->toXml(stream);
    }
    if (m_End)
    {
    	m_End->toXml(stream);
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
Object::ValidityEnum LineTmpl<T>::validate (IValidationEventSink* pEventSink) const
{
    Object::ValidityEnum returnCode = Object::kValid;
    returnCode = this->ObjectTmpl<T>::validate(pEventSink);
    if (m_Start)
    {
        if (m_Start->validate(pEventSink) != Object::kValid)
            returnCode = Object::kValidWithInvalidChildren;
    }
    if (m_End)
    {
        if (m_End->validate(pEventSink) != Object::kValid)
            returnCode = Object::kValidWithInvalidChildren;
    }
    if (m_Feature)
    {
        if (m_Feature->validate(pEventSink) != Object::kValid)
            returnCode = Object::kValidWithInvalidChildren;
    }
    return returnCode;
}

}; // namespace : LX
