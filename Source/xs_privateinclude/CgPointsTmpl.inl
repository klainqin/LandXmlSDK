#include "stdafx.h"
#include "LXTypes.h"
#include "CgPoints.h"
#include "CgPointCollection.h"
#include "CgPointsCollection.h"
#include "FeatureCollection.h"
#include "LXTypesTmpl.h"
#include "CgPointsImpl.h"
#include "CgPointCollectionImpl.h"
#include "CgPointsCollectionImpl.h"
#include "FeatureCollectionImpl.h"
#include "LXTypesTmpl.inl"

namespace LX
{


template<class T>
CgPointsTmpl<T>::CgPointsTmpl<T> (DocumentImpl* pDoc)
    : ObjectTmpl<T>(pDoc)
{
    m_CgPoint = createCgPointCollectionObject(pDoc);
    m_SubCgPoints = createCgPointsCollectionObject(pDoc);
    m_Feature = createFeatureCollectionObject(pDoc);
    m_Desc = L"";
    m_bDesc_valueSet = false;
    m_Name = L"";
    m_bName_valueSet = false;
    m_State = EnumStateType::Values::k_null;
    m_bState_valueSet = false;
    m_Code = L"";
    m_bCode_valueSet = false;
    m_ZoneNumber = 0;
    m_bZoneNumber_valueSet = false;
    m_DTMAttribute = EnumDTMAttributeType::Values::k_null;
    m_bDTMAttribute_valueSet = false;
}


template<class T>
CgPointsTmpl<T>::~CgPointsTmpl<T> ()
{
    if (m_CgPoint != NULL)
    {
        m_CgPoint->release();
        m_CgPoint = NULL;
    }
    if (m_SubCgPoints != NULL)
    {
        m_SubCgPoints->release();
        m_SubCgPoints = NULL;
    }
    if (m_Feature != NULL)
    {
        m_Feature->release();
        m_Feature = NULL;
    }
}


template <class T>
bool CgPointsTmpl<T>::getObjectId(const String*& pId) const
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
ValueObject* CgPointsTmpl<T>::id() const
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
CgPointCollection& CgPointsTmpl<T>::CgPoint()
{
    return *m_CgPoint;
}

template <class T>
const CgPointCollection& CgPointsTmpl<T>::CgPoint() const
{
    return *m_CgPoint;
}

template <class T>
CgPointsCollection& CgPointsTmpl<T>::SubCgPoints()
{
    return *m_SubCgPoints;
}

template <class T>
const CgPointsCollection& CgPointsTmpl<T>::SubCgPoints() const
{
    return *m_SubCgPoints;
}

template <class T>
FeatureCollection& CgPointsTmpl<T>::Feature()
{
    return *m_Feature;
}

template <class T>
const FeatureCollection& CgPointsTmpl<T>::Feature() const
{
    return *m_Feature;
}



template <class T>
String CgPointsTmpl<T>::getDesc() const
{
    return m_Desc;
}

template <class T>
void CgPointsTmpl<T>::setDesc(String value)
{
    m_Desc = value;
    m_bDesc_valueSet = true;
}

template <class T>
bool CgPointsTmpl<T>::hasValue_Desc() const
{
    return m_bDesc_valueSet;
}

template <class T>
void CgPointsTmpl<T>::resetValue_Desc()
{
    m_bDesc_valueSet = false;
}


template <class T>
String CgPointsTmpl<T>::getName() const
{
    return m_Name;
}

template <class T>
void CgPointsTmpl<T>::setName(String value)
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
bool CgPointsTmpl<T>::hasValue_Name() const
{
    return m_bName_valueSet;
}

template <class T>
void CgPointsTmpl<T>::resetValue_Name()
{
    m_bName_valueSet = false;
}


template <class T>
EnumStateType::Values CgPointsTmpl<T>::getState() const
{
    return m_State;
}

template <class T>
void CgPointsTmpl<T>::setState(EnumStateType::Values value)
{
    m_State = value;
    m_bState_valueSet = true;
}

template <class T>
bool CgPointsTmpl<T>::hasValue_State() const
{
    return m_bState_valueSet;
}

template <class T>
void CgPointsTmpl<T>::resetValue_State()
{
    m_bState_valueSet = false;
}


template <class T>
String CgPointsTmpl<T>::getCode() const
{
    return m_Code;
}

template <class T>
void CgPointsTmpl<T>::setCode(String value)
{
    m_Code = value;
    m_bCode_valueSet = true;
}

template <class T>
bool CgPointsTmpl<T>::hasValue_Code() const
{
    return m_bCode_valueSet;
}

template <class T>
void CgPointsTmpl<T>::resetValue_Code()
{
    m_bCode_valueSet = false;
}


template <class T>
unsigned int CgPointsTmpl<T>::getZoneNumber() const
{
    return m_ZoneNumber;
}

template <class T>
void CgPointsTmpl<T>::setZoneNumber(unsigned int value)
{
    m_ZoneNumber = value;
    m_bZoneNumber_valueSet = true;
}

template <class T>
bool CgPointsTmpl<T>::hasValue_ZoneNumber() const
{
    return m_bZoneNumber_valueSet;
}

template <class T>
void CgPointsTmpl<T>::resetValue_ZoneNumber()
{
    m_bZoneNumber_valueSet = false;
}


template <class T>
EnumDTMAttributeType::Values CgPointsTmpl<T>::getDTMAttribute() const
{
    return m_DTMAttribute;
}

template <class T>
void CgPointsTmpl<T>::setDTMAttribute(EnumDTMAttributeType::Values value)
{
    m_DTMAttribute = value;
    m_bDTMAttribute_valueSet = true;
}

template <class T>
bool CgPointsTmpl<T>::hasValue_DTMAttribute() const
{
    return m_bDTMAttribute_valueSet;
}

template <class T>
void CgPointsTmpl<T>::resetValue_DTMAttribute()
{
    m_bDTMAttribute_valueSet = false;
}



template <class T>
void CgPointsTmpl<T>::toXml (IStream& stream)
{
    static const wchar_t* kstrElementName = L"CgPoints";
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
    if (m_bCode_valueSet)
    {
        stream.write(L" code=\"");
        StringObjectImpl::streamOut(m_Code, stream);
        stream.write(L"\"");
    }
    if (m_bZoneNumber_valueSet)
    {
        stream.write(L" zoneNumber=\"");
        UIntegerObjectImpl::streamOut(m_ZoneNumber, stream);
        stream.write(L"\"");
    }
    if (m_bDTMAttribute_valueSet)
    {
        stream.write(L" DTMAttribute=\"");
        EnumDTMAttributeTypeImpl::streamOut(m_DTMAttribute, stream);
        stream.write(L"\"");
    }
    stream.write(L">");
    if (m_CgPoint)
    {
    	m_CgPoint->toXml(stream);
    }
    if (m_SubCgPoints)
    {
    	m_SubCgPoints->toXml(stream);
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
Object::ValidityEnum CgPointsTmpl<T>::validate (IValidationEventSink* pEventSink) const
{
    Object::ValidityEnum returnCode = Object::kValid;
    returnCode = this->ObjectTmpl<T>::validate(pEventSink);
    if (m_CgPoint)
    {
        if (m_CgPoint->validate(pEventSink) != Object::kValid)
            returnCode = Object::kValidWithInvalidChildren;
    }
    if (m_SubCgPoints)
    {
        if (m_SubCgPoints->validate(pEventSink) != Object::kValid)
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
