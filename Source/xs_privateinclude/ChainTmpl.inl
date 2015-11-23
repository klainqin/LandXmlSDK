#include "stdafx.h"
#include "LXTypes.h"
#include "Chain.h"
#include "LXTypesTmpl.h"
#include "ChainImpl.h"
#include "LXTypesTmpl.inl"

namespace LX
{


template<class T>
ChainTmpl<T>::ChainTmpl (DocumentImpl* pDoc)
    : StringCollectionTmpl<T>(pDoc)
{
    m_Name = L"";
    m_bName_valueSet = false;
    m_Desc = L"";
    m_bDesc_valueSet = false;
    m_Code = L"";
    m_bCode_valueSet = false;
    m_State = EnumStateType::Values::k_null;
    m_bState_valueSet = false;
    m_PointGeometry = EnumPointGeometryType::Values::k_null;
    m_bPointGeometry_valueSet = false;
    m_DTMAttribute = EnumDTMAttributeType::Values::k_null;
    m_bDTMAttribute_valueSet = false;
    m_TimeStamp = L"";
    m_bTimeStamp_valueSet = false;
    m_Role = EnumSurveyRoleType::Values::k_null;
    m_bRole_valueSet = false;
    m_Station = 0.0;
    m_bStation_valueSet = false;
    m_Zone = L"";
    m_bZone_valueSet = false;
    m_Status = EnumObservationStatusType::Values::k_null;
    m_bStatus_valueSet = false;
}


template<class T>
ChainTmpl<T>::~ChainTmpl ()
{
}


template <class T>
bool ChainTmpl<T>::getObjectId(const String*& pId) const
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
ValueObject* ChainTmpl<T>::id() const
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
String ChainTmpl<T>::getName() const
{
    return m_Name;
}

template <class T>
void ChainTmpl<T>::setName(String value)
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
bool ChainTmpl<T>::hasValue_Name() const
{
    return m_bName_valueSet;
}

template <class T>
void ChainTmpl<T>::resetValue_Name()
{
    m_bName_valueSet = false;
}


template <class T>
String ChainTmpl<T>::getDesc() const
{
    return m_Desc;
}

template <class T>
void ChainTmpl<T>::setDesc(String value)
{
    m_Desc = value;
    m_bDesc_valueSet = true;
}

template <class T>
bool ChainTmpl<T>::hasValue_Desc() const
{
    return m_bDesc_valueSet;
}

template <class T>
void ChainTmpl<T>::resetValue_Desc()
{
    m_bDesc_valueSet = false;
}


template <class T>
String ChainTmpl<T>::getCode() const
{
    return m_Code;
}

template <class T>
void ChainTmpl<T>::setCode(String value)
{
    m_Code = value;
    m_bCode_valueSet = true;
}

template <class T>
bool ChainTmpl<T>::hasValue_Code() const
{
    return m_bCode_valueSet;
}

template <class T>
void ChainTmpl<T>::resetValue_Code()
{
    m_bCode_valueSet = false;
}


template <class T>
EnumStateType::Values ChainTmpl<T>::getState() const
{
    return m_State;
}

template <class T>
void ChainTmpl<T>::setState(EnumStateType::Values value)
{
    m_State = value;
    m_bState_valueSet = true;
}

template <class T>
bool ChainTmpl<T>::hasValue_State() const
{
    return m_bState_valueSet;
}

template <class T>
void ChainTmpl<T>::resetValue_State()
{
    m_bState_valueSet = false;
}


template <class T>
EnumPointGeometryType::Values ChainTmpl<T>::getPointGeometry() const
{
    return m_PointGeometry;
}

template <class T>
void ChainTmpl<T>::setPointGeometry(EnumPointGeometryType::Values value)
{
    m_PointGeometry = value;
    m_bPointGeometry_valueSet = true;
}

template <class T>
bool ChainTmpl<T>::hasValue_PointGeometry() const
{
    return m_bPointGeometry_valueSet;
}

template <class T>
void ChainTmpl<T>::resetValue_PointGeometry()
{
    m_bPointGeometry_valueSet = false;
}


template <class T>
EnumDTMAttributeType::Values ChainTmpl<T>::getDTMAttribute() const
{
    return m_DTMAttribute;
}

template <class T>
void ChainTmpl<T>::setDTMAttribute(EnumDTMAttributeType::Values value)
{
    m_DTMAttribute = value;
    m_bDTMAttribute_valueSet = true;
}

template <class T>
bool ChainTmpl<T>::hasValue_DTMAttribute() const
{
    return m_bDTMAttribute_valueSet;
}

template <class T>
void ChainTmpl<T>::resetValue_DTMAttribute()
{
    m_bDTMAttribute_valueSet = false;
}


template <class T>
String ChainTmpl<T>::getTimeStamp() const
{
    return m_TimeStamp;
}

template <class T>
void ChainTmpl<T>::setTimeStamp(String value)
{
    m_TimeStamp = value;
    m_bTimeStamp_valueSet = true;
}

template <class T>
bool ChainTmpl<T>::hasValue_TimeStamp() const
{
    return m_bTimeStamp_valueSet;
}

template <class T>
void ChainTmpl<T>::resetValue_TimeStamp()
{
    m_bTimeStamp_valueSet = false;
}


template <class T>
EnumSurveyRoleType::Values ChainTmpl<T>::getRole() const
{
    return m_Role;
}

template <class T>
void ChainTmpl<T>::setRole(EnumSurveyRoleType::Values value)
{
    m_Role = value;
    m_bRole_valueSet = true;
}

template <class T>
bool ChainTmpl<T>::hasValue_Role() const
{
    return m_bRole_valueSet;
}

template <class T>
void ChainTmpl<T>::resetValue_Role()
{
    m_bRole_valueSet = false;
}


template <class T>
double ChainTmpl<T>::getStation() const
{
    return m_Station;
}

template <class T>
void ChainTmpl<T>::setStation(double value)
{
    m_Station = value;
    m_bStation_valueSet = true;
}

template <class T>
bool ChainTmpl<T>::hasValue_Station() const
{
    return m_bStation_valueSet;
}

template <class T>
void ChainTmpl<T>::resetValue_Station()
{
    m_bStation_valueSet = false;
}


template <class T>
String ChainTmpl<T>::getZone() const
{
    return m_Zone;
}

template <class T>
void ChainTmpl<T>::setZone(String value)
{
    m_Zone = value;
    m_bZone_valueSet = true;
}

template <class T>
bool ChainTmpl<T>::hasValue_Zone() const
{
    return m_bZone_valueSet;
}

template <class T>
void ChainTmpl<T>::resetValue_Zone()
{
    m_bZone_valueSet = false;
}


template <class T>
EnumObservationStatusType::Values ChainTmpl<T>::getStatus() const
{
    return m_Status;
}

template <class T>
void ChainTmpl<T>::setStatus(EnumObservationStatusType::Values value)
{
    m_Status = value;
    m_bStatus_valueSet = true;
}

template <class T>
bool ChainTmpl<T>::hasValue_Status() const
{
    return m_bStatus_valueSet;
}

template <class T>
void ChainTmpl<T>::resetValue_Status()
{
    m_bStatus_valueSet = false;
}



template <class T>
void ChainTmpl<T>::toXml (IStream& stream)
{
    static const wchar_t* kstrElementName = L"Chain";
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
    if (m_bStation_valueSet)
    {
        stream.write(L" station=\"");
        DoubleObjectImpl::streamOut(m_Station, stream);
        stream.write(L"\"");
    }
    if (m_bZone_valueSet)
    {
        stream.write(L" zone=\"");
        StringObjectImpl::streamOut(m_Zone, stream);
        stream.write(L"\"");
    }
    if (m_bStatus_valueSet)
    {
        stream.write(L" status=\"");
        EnumObservationStatusTypeImpl::streamOut(m_Status, stream);
        stream.write(L"\"");
    }
    stream.write(L">");
    this->toStream(stream);
    stream.write(L"</");
    stream.write(kstrElementName);
    stream.write(L">");
}

template <class T>
Object::ValidityEnum ChainTmpl<T>::validate (IValidationEventSink* pEventSink) const
{
    Object::ValidityEnum returnCode = Object::kValid;
    returnCode = this->ObjectTmpl<T>::validate(pEventSink);
    return returnCode;
}

}; // namespace : LX
