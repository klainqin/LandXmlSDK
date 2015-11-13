#include "stdafx.h"
#include "LXTypes.h"
#include "PointType3dReq.h"
#include "LXTypesTmpl.h"
#include "PointType3dReqImpl.h"
#include "LXTypesTmpl.inl"

namespace LX
{


template<class T>
PointType3dReqTmpl<T>::PointType3dReqTmpl<T> (DocumentImpl* pDoc)
    : DoubleCollectionTmpl<T>(pDoc)
{
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
    m_FeatureRef = L"";
    m_bFeatureRef_valueSet = false;
    m_PointGeometry = EnumPointGeometryType::Values::k_null;
    m_bPointGeometry_valueSet = false;
    m_DTMAttribute = EnumDTMAttributeType::Values::k_null;
    m_bDTMAttribute_valueSet = false;
    m_TimeStamp = L"";
    m_bTimeStamp_valueSet = false;
    m_Role = EnumSurveyRoleType::Values::k_null;
    m_bRole_valueSet = false;
}


template<class T>
PointType3dReqTmpl<T>::~PointType3dReqTmpl<T> ()
{
}


template <class T>
bool PointType3dReqTmpl<T>::getObjectId(const String*& pId) const
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
ValueObject* PointType3dReqTmpl<T>::id() const
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
String PointType3dReqTmpl<T>::getName() const
{
    return m_Name;
}

template <class T>
void PointType3dReqTmpl<T>::setName(String value)
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
bool PointType3dReqTmpl<T>::hasValue_Name() const
{
    return m_bName_valueSet;
}

template <class T>
void PointType3dReqTmpl<T>::resetValue_Name()
{
    m_bName_valueSet = false;
}


template <class T>
String PointType3dReqTmpl<T>::getDesc() const
{
    return m_Desc;
}

template <class T>
void PointType3dReqTmpl<T>::setDesc(String value)
{
    m_Desc = value;
    m_bDesc_valueSet = true;
}

template <class T>
bool PointType3dReqTmpl<T>::hasValue_Desc() const
{
    return m_bDesc_valueSet;
}

template <class T>
void PointType3dReqTmpl<T>::resetValue_Desc()
{
    m_bDesc_valueSet = false;
}


template <class T>
String PointType3dReqTmpl<T>::getCode() const
{
    return m_Code;
}

template <class T>
void PointType3dReqTmpl<T>::setCode(String value)
{
    m_Code = value;
    m_bCode_valueSet = true;
}

template <class T>
bool PointType3dReqTmpl<T>::hasValue_Code() const
{
    return m_bCode_valueSet;
}

template <class T>
void PointType3dReqTmpl<T>::resetValue_Code()
{
    m_bCode_valueSet = false;
}


template <class T>
EnumStateType::Values PointType3dReqTmpl<T>::getState() const
{
    return m_State;
}

template <class T>
void PointType3dReqTmpl<T>::setState(EnumStateType::Values value)
{
    m_State = value;
    m_bState_valueSet = true;
}

template <class T>
bool PointType3dReqTmpl<T>::hasValue_State() const
{
    return m_bState_valueSet;
}

template <class T>
void PointType3dReqTmpl<T>::resetValue_State()
{
    m_bState_valueSet = false;
}


template <class T>
String PointType3dReqTmpl<T>::getPntRef() const
{
    return m_PntRef;
}

template <class T>
void PointType3dReqTmpl<T>::setPntRef(String value)
{
    m_PntRef = value;
    m_bPntRef_valueSet = true;
}

template <class T>
bool PointType3dReqTmpl<T>::hasValue_PntRef() const
{
    return m_bPntRef_valueSet;
}

template <class T>
void PointType3dReqTmpl<T>::resetValue_PntRef()
{
    m_bPntRef_valueSet = false;
}


template <class T>
String PointType3dReqTmpl<T>::getFeatureRef() const
{
    return m_FeatureRef;
}

template <class T>
void PointType3dReqTmpl<T>::setFeatureRef(String value)
{
    m_FeatureRef = value;
    m_bFeatureRef_valueSet = true;
}

template <class T>
bool PointType3dReqTmpl<T>::hasValue_FeatureRef() const
{
    return m_bFeatureRef_valueSet;
}

template <class T>
void PointType3dReqTmpl<T>::resetValue_FeatureRef()
{
    m_bFeatureRef_valueSet = false;
}


template <class T>
EnumPointGeometryType::Values PointType3dReqTmpl<T>::getPointGeometry() const
{
    return m_PointGeometry;
}

template <class T>
void PointType3dReqTmpl<T>::setPointGeometry(EnumPointGeometryType::Values value)
{
    m_PointGeometry = value;
    m_bPointGeometry_valueSet = true;
}

template <class T>
bool PointType3dReqTmpl<T>::hasValue_PointGeometry() const
{
    return m_bPointGeometry_valueSet;
}

template <class T>
void PointType3dReqTmpl<T>::resetValue_PointGeometry()
{
    m_bPointGeometry_valueSet = false;
}


template <class T>
EnumDTMAttributeType::Values PointType3dReqTmpl<T>::getDTMAttribute() const
{
    return m_DTMAttribute;
}

template <class T>
void PointType3dReqTmpl<T>::setDTMAttribute(EnumDTMAttributeType::Values value)
{
    m_DTMAttribute = value;
    m_bDTMAttribute_valueSet = true;
}

template <class T>
bool PointType3dReqTmpl<T>::hasValue_DTMAttribute() const
{
    return m_bDTMAttribute_valueSet;
}

template <class T>
void PointType3dReqTmpl<T>::resetValue_DTMAttribute()
{
    m_bDTMAttribute_valueSet = false;
}


template <class T>
String PointType3dReqTmpl<T>::getTimeStamp() const
{
    return m_TimeStamp;
}

template <class T>
void PointType3dReqTmpl<T>::setTimeStamp(String value)
{
    m_TimeStamp = value;
    m_bTimeStamp_valueSet = true;
}

template <class T>
bool PointType3dReqTmpl<T>::hasValue_TimeStamp() const
{
    return m_bTimeStamp_valueSet;
}

template <class T>
void PointType3dReqTmpl<T>::resetValue_TimeStamp()
{
    m_bTimeStamp_valueSet = false;
}


template <class T>
EnumSurveyRoleType::Values PointType3dReqTmpl<T>::getRole() const
{
    return m_Role;
}

template <class T>
void PointType3dReqTmpl<T>::setRole(EnumSurveyRoleType::Values value)
{
    m_Role = value;
    m_bRole_valueSet = true;
}

template <class T>
bool PointType3dReqTmpl<T>::hasValue_Role() const
{
    return m_bRole_valueSet;
}

template <class T>
void PointType3dReqTmpl<T>::resetValue_Role()
{
    m_bRole_valueSet = false;
}



template <class T>
void PointType3dReqTmpl<T>::toXml (IStream& stream)
{
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
    if (m_bFeatureRef_valueSet)
    {
        stream.write(L" featureRef=\"");
        StringObjectImpl::streamOut(m_FeatureRef, stream);
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
    if (m_bTimeStamp_valueSet)
    {
        stream.write(L" timeStamp=\"");
        StringObjectImpl::streamOut(m_TimeStamp, stream);
        stream.write(L"\"");
    }
    if (m_bRole_valueSet)
    {
        stream.write(L" role=\"");
        EnumSurveyRoleTypeImpl::streamOut(m_Role, stream);
        stream.write(L"\"");
    }
    stream.write(L">");
    toStream(stream);
}

template <class T>
Object::ValidityEnum PointType3dReqTmpl<T>::validate (IValidationEventSink* pEventSink) const
{
    Object::ValidityEnum returnCode = Object::kValid;
    returnCode = this->ObjectTmpl<T>::validate(pEventSink);
    return returnCode;
}

}; // namespace : LX
