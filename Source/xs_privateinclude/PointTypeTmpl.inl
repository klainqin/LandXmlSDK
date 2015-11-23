#include "stdafx.h"
#include "LXTypes.h"
#include "PointType.h"
#include "LXTypesTmpl.h"
#include "PointTypeImpl.h"
#include "LXTypesTmpl.inl"

namespace LX
{


template<class T>
PointTypeTmpl<T>::PointTypeTmpl (DocumentImpl* pDoc)
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
    m_DeterminedTimeStamp = L"";
    m_bDeterminedTimeStamp_valueSet = false;
    m_EllipsoidHeight = 0.0;
    m_bEllipsoidHeight_valueSet = false;
    m_Latitude = 0.0;
    m_bLatitude_valueSet = false;
    m_Longitude = 0.0;
    m_bLongitude_valueSet = false;
    m_Zone = L"";
    m_bZone_valueSet = false;
    m_NorthingStdError = 0.0;
    m_bNorthingStdError_valueSet = false;
    m_EastingStdError = 0.0;
    m_bEastingStdError_valueSet = false;
    m_ElevationStdError = 0.0;
    m_bElevationStdError_valueSet = false;
}


template<class T>
PointTypeTmpl<T>::~PointTypeTmpl ()
{
}


template <class T>
bool PointTypeTmpl<T>::getObjectId(const String*& pId) const
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
ValueObject* PointTypeTmpl<T>::id() const
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
String PointTypeTmpl<T>::getName() const
{
    return m_Name;
}

template <class T>
void PointTypeTmpl<T>::setName(String value)
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
bool PointTypeTmpl<T>::hasValue_Name() const
{
    return m_bName_valueSet;
}

template <class T>
void PointTypeTmpl<T>::resetValue_Name()
{
    m_bName_valueSet = false;
}


template <class T>
String PointTypeTmpl<T>::getDesc() const
{
    return m_Desc;
}

template <class T>
void PointTypeTmpl<T>::setDesc(String value)
{
    m_Desc = value;
    m_bDesc_valueSet = true;
}

template <class T>
bool PointTypeTmpl<T>::hasValue_Desc() const
{
    return m_bDesc_valueSet;
}

template <class T>
void PointTypeTmpl<T>::resetValue_Desc()
{
    m_bDesc_valueSet = false;
}


template <class T>
String PointTypeTmpl<T>::getCode() const
{
    return m_Code;
}

template <class T>
void PointTypeTmpl<T>::setCode(String value)
{
    m_Code = value;
    m_bCode_valueSet = true;
}

template <class T>
bool PointTypeTmpl<T>::hasValue_Code() const
{
    return m_bCode_valueSet;
}

template <class T>
void PointTypeTmpl<T>::resetValue_Code()
{
    m_bCode_valueSet = false;
}


template <class T>
EnumStateType::Values PointTypeTmpl<T>::getState() const
{
    return m_State;
}

template <class T>
void PointTypeTmpl<T>::setState(EnumStateType::Values value)
{
    m_State = value;
    m_bState_valueSet = true;
}

template <class T>
bool PointTypeTmpl<T>::hasValue_State() const
{
    return m_bState_valueSet;
}

template <class T>
void PointTypeTmpl<T>::resetValue_State()
{
    m_bState_valueSet = false;
}


template <class T>
String PointTypeTmpl<T>::getPntRef() const
{
    return m_PntRef;
}

template <class T>
void PointTypeTmpl<T>::setPntRef(String value)
{
    m_PntRef = value;
    m_bPntRef_valueSet = true;
}

template <class T>
bool PointTypeTmpl<T>::hasValue_PntRef() const
{
    return m_bPntRef_valueSet;
}

template <class T>
void PointTypeTmpl<T>::resetValue_PntRef()
{
    m_bPntRef_valueSet = false;
}


template <class T>
String PointTypeTmpl<T>::getFeatureRef() const
{
    return m_FeatureRef;
}

template <class T>
void PointTypeTmpl<T>::setFeatureRef(String value)
{
    m_FeatureRef = value;
    m_bFeatureRef_valueSet = true;
}

template <class T>
bool PointTypeTmpl<T>::hasValue_FeatureRef() const
{
    return m_bFeatureRef_valueSet;
}

template <class T>
void PointTypeTmpl<T>::resetValue_FeatureRef()
{
    m_bFeatureRef_valueSet = false;
}


template <class T>
EnumPointGeometryType::Values PointTypeTmpl<T>::getPointGeometry() const
{
    return m_PointGeometry;
}

template <class T>
void PointTypeTmpl<T>::setPointGeometry(EnumPointGeometryType::Values value)
{
    m_PointGeometry = value;
    m_bPointGeometry_valueSet = true;
}

template <class T>
bool PointTypeTmpl<T>::hasValue_PointGeometry() const
{
    return m_bPointGeometry_valueSet;
}

template <class T>
void PointTypeTmpl<T>::resetValue_PointGeometry()
{
    m_bPointGeometry_valueSet = false;
}


template <class T>
EnumDTMAttributeType::Values PointTypeTmpl<T>::getDTMAttribute() const
{
    return m_DTMAttribute;
}

template <class T>
void PointTypeTmpl<T>::setDTMAttribute(EnumDTMAttributeType::Values value)
{
    m_DTMAttribute = value;
    m_bDTMAttribute_valueSet = true;
}

template <class T>
bool PointTypeTmpl<T>::hasValue_DTMAttribute() const
{
    return m_bDTMAttribute_valueSet;
}

template <class T>
void PointTypeTmpl<T>::resetValue_DTMAttribute()
{
    m_bDTMAttribute_valueSet = false;
}


template <class T>
String PointTypeTmpl<T>::getTimeStamp() const
{
    return m_TimeStamp;
}

template <class T>
void PointTypeTmpl<T>::setTimeStamp(String value)
{
    m_TimeStamp = value;
    m_bTimeStamp_valueSet = true;
}

template <class T>
bool PointTypeTmpl<T>::hasValue_TimeStamp() const
{
    return m_bTimeStamp_valueSet;
}

template <class T>
void PointTypeTmpl<T>::resetValue_TimeStamp()
{
    m_bTimeStamp_valueSet = false;
}


template <class T>
EnumSurveyRoleType::Values PointTypeTmpl<T>::getRole() const
{
    return m_Role;
}

template <class T>
void PointTypeTmpl<T>::setRole(EnumSurveyRoleType::Values value)
{
    m_Role = value;
    m_bRole_valueSet = true;
}

template <class T>
bool PointTypeTmpl<T>::hasValue_Role() const
{
    return m_bRole_valueSet;
}

template <class T>
void PointTypeTmpl<T>::resetValue_Role()
{
    m_bRole_valueSet = false;
}


template <class T>
String PointTypeTmpl<T>::getDeterminedTimeStamp() const
{
    return m_DeterminedTimeStamp;
}

template <class T>
void PointTypeTmpl<T>::setDeterminedTimeStamp(String value)
{
    m_DeterminedTimeStamp = value;
    m_bDeterminedTimeStamp_valueSet = true;
}

template <class T>
bool PointTypeTmpl<T>::hasValue_DeterminedTimeStamp() const
{
    return m_bDeterminedTimeStamp_valueSet;
}

template <class T>
void PointTypeTmpl<T>::resetValue_DeterminedTimeStamp()
{
    m_bDeterminedTimeStamp_valueSet = false;
}


template <class T>
double PointTypeTmpl<T>::getEllipsoidHeight() const
{
    return m_EllipsoidHeight;
}

template <class T>
void PointTypeTmpl<T>::setEllipsoidHeight(double value)
{
    m_EllipsoidHeight = value;
    m_bEllipsoidHeight_valueSet = true;
}

template <class T>
bool PointTypeTmpl<T>::hasValue_EllipsoidHeight() const
{
    return m_bEllipsoidHeight_valueSet;
}

template <class T>
void PointTypeTmpl<T>::resetValue_EllipsoidHeight()
{
    m_bEllipsoidHeight_valueSet = false;
}


template <class T>
double PointTypeTmpl<T>::getLatitude() const
{
    return m_Latitude;
}

template <class T>
void PointTypeTmpl<T>::setLatitude(double value)
{
    m_Latitude = value;
    m_bLatitude_valueSet = true;
}

template <class T>
bool PointTypeTmpl<T>::hasValue_Latitude() const
{
    return m_bLatitude_valueSet;
}

template <class T>
void PointTypeTmpl<T>::resetValue_Latitude()
{
    m_bLatitude_valueSet = false;
}


template <class T>
double PointTypeTmpl<T>::getLongitude() const
{
    return m_Longitude;
}

template <class T>
void PointTypeTmpl<T>::setLongitude(double value)
{
    m_Longitude = value;
    m_bLongitude_valueSet = true;
}

template <class T>
bool PointTypeTmpl<T>::hasValue_Longitude() const
{
    return m_bLongitude_valueSet;
}

template <class T>
void PointTypeTmpl<T>::resetValue_Longitude()
{
    m_bLongitude_valueSet = false;
}


template <class T>
String PointTypeTmpl<T>::getZone() const
{
    return m_Zone;
}

template <class T>
void PointTypeTmpl<T>::setZone(String value)
{
    m_Zone = value;
    m_bZone_valueSet = true;
}

template <class T>
bool PointTypeTmpl<T>::hasValue_Zone() const
{
    return m_bZone_valueSet;
}

template <class T>
void PointTypeTmpl<T>::resetValue_Zone()
{
    m_bZone_valueSet = false;
}


template <class T>
double PointTypeTmpl<T>::getNorthingStdError() const
{
    return m_NorthingStdError;
}

template <class T>
void PointTypeTmpl<T>::setNorthingStdError(double value)
{
    m_NorthingStdError = value;
    m_bNorthingStdError_valueSet = true;
}

template <class T>
bool PointTypeTmpl<T>::hasValue_NorthingStdError() const
{
    return m_bNorthingStdError_valueSet;
}

template <class T>
void PointTypeTmpl<T>::resetValue_NorthingStdError()
{
    m_bNorthingStdError_valueSet = false;
}


template <class T>
double PointTypeTmpl<T>::getEastingStdError() const
{
    return m_EastingStdError;
}

template <class T>
void PointTypeTmpl<T>::setEastingStdError(double value)
{
    m_EastingStdError = value;
    m_bEastingStdError_valueSet = true;
}

template <class T>
bool PointTypeTmpl<T>::hasValue_EastingStdError() const
{
    return m_bEastingStdError_valueSet;
}

template <class T>
void PointTypeTmpl<T>::resetValue_EastingStdError()
{
    m_bEastingStdError_valueSet = false;
}


template <class T>
double PointTypeTmpl<T>::getElevationStdError() const
{
    return m_ElevationStdError;
}

template <class T>
void PointTypeTmpl<T>::setElevationStdError(double value)
{
    m_ElevationStdError = value;
    m_bElevationStdError_valueSet = true;
}

template <class T>
bool PointTypeTmpl<T>::hasValue_ElevationStdError() const
{
    return m_bElevationStdError_valueSet;
}

template <class T>
void PointTypeTmpl<T>::resetValue_ElevationStdError()
{
    m_bElevationStdError_valueSet = false;
}



template <class T>
void PointTypeTmpl<T>::toXml (IStream& stream)
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
    if (m_bDeterminedTimeStamp_valueSet)
    {
        stream.write(L" determinedTimeStamp=\"");
        StringObjectImpl::streamOut(m_DeterminedTimeStamp, stream);
        stream.write(L"\"");
    }
    if (m_bEllipsoidHeight_valueSet)
    {
        stream.write(L" ellipsoidHeight=\"");
        DoubleObjectImpl::streamOut(m_EllipsoidHeight, stream);
        stream.write(L"\"");
    }
    if (m_bLatitude_valueSet)
    {
        stream.write(L" latitude=\"");
        DoubleObjectImpl::streamOut(m_Latitude, stream);
        stream.write(L"\"");
    }
    if (m_bLongitude_valueSet)
    {
        stream.write(L" longitude=\"");
        DoubleObjectImpl::streamOut(m_Longitude, stream);
        stream.write(L"\"");
    }
    if (m_bZone_valueSet)
    {
        stream.write(L" zone=\"");
        StringObjectImpl::streamOut(m_Zone, stream);
        stream.write(L"\"");
    }
    if (m_bNorthingStdError_valueSet)
    {
        stream.write(L" northingStdError=\"");
        DoubleObjectImpl::streamOut(m_NorthingStdError, stream);
        stream.write(L"\"");
    }
    if (m_bEastingStdError_valueSet)
    {
        stream.write(L" eastingStdError=\"");
        DoubleObjectImpl::streamOut(m_EastingStdError, stream);
        stream.write(L"\"");
    }
    if (m_bElevationStdError_valueSet)
    {
        stream.write(L" elevationStdError=\"");
        DoubleObjectImpl::streamOut(m_ElevationStdError, stream);
        stream.write(L"\"");
    }
    stream.write(L">");
    this->toStream(stream);
}

template <class T>
Object::ValidityEnum PointTypeTmpl<T>::validate (IValidationEventSink* pEventSink) const
{
    Object::ValidityEnum returnCode = Object::kValid;
    returnCode = this->ObjectTmpl<T>::validate(pEventSink);
    return returnCode;
}

}; // namespace : LX
