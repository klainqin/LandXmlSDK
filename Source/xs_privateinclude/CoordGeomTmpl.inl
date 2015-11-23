#include "stdafx.h"
#include "LXTypes.h"
#include "CoordGeom.h"
#include "LXTypesTmpl.h"
#include "CoordGeomImpl.h"
#include "LXTypesTmpl.inl"

namespace LX
{



template<class T>
CoordGeomTmpl<T>::CoordGeomTmpl (DocumentImpl* pDoc)
    : ObjectTmpl<T>(pDoc)
{
    m_GeomList = createObjectCollectionObject(pDoc);
    m_Desc = L"";
    m_bDesc_valueSet = false;
    m_Name = L"";
    m_bName_valueSet = false;
    m_State = EnumStateType::Values::k_null;
    m_bState_valueSet = false;
    m_OID = L"";
    m_bOID_valueSet = false;
}


template<class T>
CoordGeomTmpl<T>::~CoordGeomTmpl ()
{
    if (m_GeomList != NULL)
    {
        m_GeomList->release();
        m_GeomList = NULL;
    }
}


template <class T>
bool CoordGeomTmpl<T>::getObjectId(const String*& pId) const
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
ValueObject* CoordGeomTmpl<T>::id() const
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
ObjectCollection& CoordGeomTmpl<T>::GeomList()
{
    return *m_GeomList;
}

template <class T>
const ObjectCollection& CoordGeomTmpl<T>::GeomList() const
{
    return *m_GeomList;
}



template <class T>
String CoordGeomTmpl<T>::getDesc() const
{
    return m_Desc;
}

template <class T>
void CoordGeomTmpl<T>::setDesc(String value)
{
    m_Desc = value;
    m_bDesc_valueSet = true;
}

template <class T>
bool CoordGeomTmpl<T>::hasValue_Desc() const
{
    return m_bDesc_valueSet;
}

template <class T>
void CoordGeomTmpl<T>::resetValue_Desc()
{
    m_bDesc_valueSet = false;
}


template <class T>
String CoordGeomTmpl<T>::getName() const
{
    return m_Name;
}

template <class T>
void CoordGeomTmpl<T>::setName(String value)
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
bool CoordGeomTmpl<T>::hasValue_Name() const
{
    return m_bName_valueSet;
}

template <class T>
void CoordGeomTmpl<T>::resetValue_Name()
{
    m_bName_valueSet = false;
}


template <class T>
EnumStateType::Values CoordGeomTmpl<T>::getState() const
{
    return m_State;
}

template <class T>
void CoordGeomTmpl<T>::setState(EnumStateType::Values value)
{
    m_State = value;
    m_bState_valueSet = true;
}

template <class T>
bool CoordGeomTmpl<T>::hasValue_State() const
{
    return m_bState_valueSet;
}

template <class T>
void CoordGeomTmpl<T>::resetValue_State()
{
    m_bState_valueSet = false;
}


template <class T>
String CoordGeomTmpl<T>::getOID() const
{
    return m_OID;
}

template <class T>
void CoordGeomTmpl<T>::setOID(String value)
{
    m_OID = value;
    m_bOID_valueSet = true;
}

template <class T>
bool CoordGeomTmpl<T>::hasValue_OID() const
{
    return m_bOID_valueSet;
}

template <class T>
void CoordGeomTmpl<T>::resetValue_OID()
{
    m_bOID_valueSet = false;
}



template <class T>
void CoordGeomTmpl<T>::toXml (IStream& stream)
{
    static const wchar_t* kstrElementName = L"CoordGeom";
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
    stream.write(L">");
    if (m_GeomList)
    {
    	m_GeomList->toXml(stream);
    }
    stream.write(L"</");
    stream.write(kstrElementName);
    stream.write(L">");
}

template <class T>
Object::ValidityEnum CoordGeomTmpl<T>::validate (IValidationEventSink* pEventSink) const
{
    Object::ValidityEnum returnCode = Object::kValid;
    returnCode = this->ObjectTmpl<T>::validate(pEventSink);
    if (m_GeomList)
    {
        if (m_GeomList->validate(pEventSink) != Object::kValid)
            returnCode = Object::kValidWithInvalidChildren;
    }
    return returnCode;
}

}; // namespace : LX
