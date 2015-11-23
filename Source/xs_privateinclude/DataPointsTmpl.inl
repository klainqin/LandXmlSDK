#include "stdafx.h"
#include "LXTypes.h"
#include "DataPoints.h"
#include "PntList3DCollection.h"
#include "FeatureCollection.h"
#include "LXTypesTmpl.h"
#include "DataPointsImpl.h"
#include "PntList3DCollectionImpl.h"
#include "FeatureCollectionImpl.h"
#include "LXTypesTmpl.inl"

namespace LX
{


template<class T>
DataPointsTmpl<T>::DataPointsTmpl (DocumentImpl* pDoc)
    : ObjectTmpl<T>(pDoc)
{
    m_PntList3D = createPntList3DCollectionObject(pDoc);
    m_Feature = createFeatureCollectionObject(pDoc);
    m_Name = L"";
    m_bName_valueSet = false;
    m_Desc = L"";
    m_bDesc_valueSet = false;
    m_Code = L"";
    m_bCode_valueSet = false;
    m_State = EnumStateType::Values::k_null;
    m_bState_valueSet = false;
    m_PntRef = L"";
    m_bPntRef_valueSet = false;
    m_PointGeometry = EnumPointGeometryType::Values::k_null;
    m_bPointGeometry_valueSet = false;
    m_DTMAttribute = EnumDTMAttributeType::Values::k_null;
    m_bDTMAttribute_valueSet = false;
}


template<class T>
DataPointsTmpl<T>::~DataPointsTmpl ()
{
    if (m_PntList3D != NULL)
    {
        m_PntList3D->release();
        m_PntList3D = NULL;
    }
    if (m_Feature != NULL)
    {
        m_Feature->release();
        m_Feature = NULL;
    }
}


template <class T>
bool DataPointsTmpl<T>::getObjectId(const String*& pId) const
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
ValueObject* DataPointsTmpl<T>::id() const
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
PntList3DCollection& DataPointsTmpl<T>::PntList3D()
{
    return *m_PntList3D;
}

template <class T>
const PntList3DCollection& DataPointsTmpl<T>::PntList3D() const
{
    return *m_PntList3D;
}

template <class T>
FeatureCollection& DataPointsTmpl<T>::Feature()
{
    return *m_Feature;
}

template <class T>
const FeatureCollection& DataPointsTmpl<T>::Feature() const
{
    return *m_Feature;
}



template <class T>
String DataPointsTmpl<T>::getName() const
{
    return m_Name;
}

template <class T>
void DataPointsTmpl<T>::setName(String value)
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
bool DataPointsTmpl<T>::hasValue_Name() const
{
    return m_bName_valueSet;
}

template <class T>
void DataPointsTmpl<T>::resetValue_Name()
{
    m_bName_valueSet = false;
}


template <class T>
String DataPointsTmpl<T>::getDesc() const
{
    return m_Desc;
}

template <class T>
void DataPointsTmpl<T>::setDesc(String value)
{
    m_Desc = value;
    m_bDesc_valueSet = true;
}

template <class T>
bool DataPointsTmpl<T>::hasValue_Desc() const
{
    return m_bDesc_valueSet;
}

template <class T>
void DataPointsTmpl<T>::resetValue_Desc()
{
    m_bDesc_valueSet = false;
}


template <class T>
String DataPointsTmpl<T>::getCode() const
{
    return m_Code;
}

template <class T>
void DataPointsTmpl<T>::setCode(String value)
{
    m_Code = value;
    m_bCode_valueSet = true;
}

template <class T>
bool DataPointsTmpl<T>::hasValue_Code() const
{
    return m_bCode_valueSet;
}

template <class T>
void DataPointsTmpl<T>::resetValue_Code()
{
    m_bCode_valueSet = false;
}


template <class T>
EnumStateType::Values DataPointsTmpl<T>::getState() const
{
    return m_State;
}

template <class T>
void DataPointsTmpl<T>::setState(EnumStateType::Values value)
{
    m_State = value;
    m_bState_valueSet = true;
}

template <class T>
bool DataPointsTmpl<T>::hasValue_State() const
{
    return m_bState_valueSet;
}

template <class T>
void DataPointsTmpl<T>::resetValue_State()
{
    m_bState_valueSet = false;
}


template <class T>
String DataPointsTmpl<T>::getPntRef() const
{
    return m_PntRef;
}

template <class T>
void DataPointsTmpl<T>::setPntRef(String value)
{
    m_PntRef = value;
    m_bPntRef_valueSet = true;
}

template <class T>
bool DataPointsTmpl<T>::hasValue_PntRef() const
{
    return m_bPntRef_valueSet;
}

template <class T>
void DataPointsTmpl<T>::resetValue_PntRef()
{
    m_bPntRef_valueSet = false;
}


template <class T>
EnumPointGeometryType::Values DataPointsTmpl<T>::getPointGeometry() const
{
    return m_PointGeometry;
}

template <class T>
void DataPointsTmpl<T>::setPointGeometry(EnumPointGeometryType::Values value)
{
    m_PointGeometry = value;
    m_bPointGeometry_valueSet = true;
}

template <class T>
bool DataPointsTmpl<T>::hasValue_PointGeometry() const
{
    return m_bPointGeometry_valueSet;
}

template <class T>
void DataPointsTmpl<T>::resetValue_PointGeometry()
{
    m_bPointGeometry_valueSet = false;
}


template <class T>
EnumDTMAttributeType::Values DataPointsTmpl<T>::getDTMAttribute() const
{
    return m_DTMAttribute;
}

template <class T>
void DataPointsTmpl<T>::setDTMAttribute(EnumDTMAttributeType::Values value)
{
    m_DTMAttribute = value;
    m_bDTMAttribute_valueSet = true;
}

template <class T>
bool DataPointsTmpl<T>::hasValue_DTMAttribute() const
{
    return m_bDTMAttribute_valueSet;
}

template <class T>
void DataPointsTmpl<T>::resetValue_DTMAttribute()
{
    m_bDTMAttribute_valueSet = false;
}



template <class T>
void DataPointsTmpl<T>::toXml (IStream& stream)
{
    static const wchar_t* kstrElementName = L"DataPoints";
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
    if (m_bCode_valueSet)
    {
        stream.write(L" code=\"");
        StringObjectImpl::streamOut(m_Code, stream);
        stream.write(L"\"");
    }
    if (m_bState_valueSet)
    {
        stream.write(L" state=\"");
        EnumStateTypeImpl::streamOut(m_State, stream);
        stream.write(L"\"");
    }
    if (m_bPntRef_valueSet)
    {
        stream.write(L" pntRef=\"");
        StringObjectImpl::streamOut(m_PntRef, stream);
        stream.write(L"\"");
    }
    if (m_bPointGeometry_valueSet)
    {
        stream.write(L" pointGeometry=\"");
        EnumPointGeometryTypeImpl::streamOut(m_PointGeometry, stream);
        stream.write(L"\"");
    }
    if (m_bDTMAttribute_valueSet)
    {
        stream.write(L" DTMAttribute=\"");
        EnumDTMAttributeTypeImpl::streamOut(m_DTMAttribute, stream);
        stream.write(L"\"");
    }
    stream.write(L">");
    if (m_PntList3D)
    {
    	m_PntList3D->toXml(stream);
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
Object::ValidityEnum DataPointsTmpl<T>::validate (IValidationEventSink* pEventSink) const
{
    Object::ValidityEnum returnCode = Object::kValid;
    returnCode = this->ObjectTmpl<T>::validate(pEventSink);
    if (m_PntList3D)
    {
        if (m_PntList3D->validate(pEventSink) != Object::kValid)
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
