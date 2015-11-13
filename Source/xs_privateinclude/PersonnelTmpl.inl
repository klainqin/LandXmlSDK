#include "stdafx.h"
#include "LXTypes.h"
#include "Personnel.h"
#include "LXTypesTmpl.h"
#include "PersonnelImpl.h"
#include "LXTypesTmpl.inl"

namespace LX
{


template<class T>
PersonnelTmpl<T>::PersonnelTmpl<T> (DocumentImpl* pDoc)
    : ObjectTmpl<T>(pDoc)
{
    m_Name = L"";
    m_bName_valueSet = false;
    m_Role = L"";
    m_bRole_valueSet = false;
    m_RegType = L"";
    m_bRegType_valueSet = false;
    m_RegNumber = L"";
    m_bRegNumber_valueSet = false;
}


template<class T>
PersonnelTmpl<T>::~PersonnelTmpl<T> ()
{
}


template <class T>
bool PersonnelTmpl<T>::getObjectId(const String*& pId) const
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
ValueObject* PersonnelTmpl<T>::id() const
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
String PersonnelTmpl<T>::getName() const
{
    return m_Name;
}

template <class T>
void PersonnelTmpl<T>::setName(String value)
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
bool PersonnelTmpl<T>::hasValue_Name() const
{
    return m_bName_valueSet;
}

template <class T>
void PersonnelTmpl<T>::resetValue_Name()
{
    m_bName_valueSet = false;
}


template <class T>
String PersonnelTmpl<T>::getRole() const
{
    return m_Role;
}

template <class T>
void PersonnelTmpl<T>::setRole(String value)
{
    m_Role = value;
    m_bRole_valueSet = true;
}

template <class T>
bool PersonnelTmpl<T>::hasValue_Role() const
{
    return m_bRole_valueSet;
}

template <class T>
void PersonnelTmpl<T>::resetValue_Role()
{
    m_bRole_valueSet = false;
}


template <class T>
String PersonnelTmpl<T>::getRegType() const
{
    return m_RegType;
}

template <class T>
void PersonnelTmpl<T>::setRegType(String value)
{
    m_RegType = value;
    m_bRegType_valueSet = true;
}

template <class T>
bool PersonnelTmpl<T>::hasValue_RegType() const
{
    return m_bRegType_valueSet;
}

template <class T>
void PersonnelTmpl<T>::resetValue_RegType()
{
    m_bRegType_valueSet = false;
}


template <class T>
String PersonnelTmpl<T>::getRegNumber() const
{
    return m_RegNumber;
}

template <class T>
void PersonnelTmpl<T>::setRegNumber(String value)
{
    m_RegNumber = value;
    m_bRegNumber_valueSet = true;
}

template <class T>
bool PersonnelTmpl<T>::hasValue_RegNumber() const
{
    return m_bRegNumber_valueSet;
}

template <class T>
void PersonnelTmpl<T>::resetValue_RegNumber()
{
    m_bRegNumber_valueSet = false;
}



template <class T>
void PersonnelTmpl<T>::toXml (IStream& stream)
{
    static const wchar_t* kstrElementName = L"Personnel";
    stream.write(L"<");
    stream.write(kstrElementName);
    if (m_bName_valueSet)
    {
        stream.write(L" name=\"");
        StringObjectImpl::streamOut(m_Name, stream);
        stream.write(L"\"");
    }
    if (m_bRole_valueSet)
    {
        stream.write(L" role=\"");
        StringObjectImpl::streamOut(m_Role, stream);
        stream.write(L"\"");
    }
    if (m_bRegType_valueSet)
    {
        stream.write(L" regType=\"");
        StringObjectImpl::streamOut(m_RegType, stream);
        stream.write(L"\"");
    }
    if (m_bRegNumber_valueSet)
    {
        stream.write(L" regNumber=\"");
        StringObjectImpl::streamOut(m_RegNumber, stream);
        stream.write(L"\"");
    }
    stream.write(L">");
    stream.write(L"</");
    stream.write(kstrElementName);
    stream.write(L">");
}

template <class T>
Object::ValidityEnum PersonnelTmpl<T>::validate (IValidationEventSink* pEventSink) const
{
    Object::ValidityEnum returnCode = Object::kValid;
    returnCode = this->ObjectTmpl<T>::validate(pEventSink);
    return returnCode;
}

}; // namespace : LX
