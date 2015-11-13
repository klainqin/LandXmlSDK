#include "stdafx.h"
#include "LXTypes.h"
#include "Monument.h"
#include "LXTypesTmpl.h"
#include "MonumentImpl.h"
#include "LXTypesTmpl.inl"

namespace LX
{


template<class T>
MonumentTmpl<T>::MonumentTmpl<T> (DocumentImpl* pDoc)
    : ObjectTmpl<T>(pDoc)
{
    m_Name = L"";
    m_bName_valueSet = false;
    m_PntRef = L"";
    m_bPntRef_valueSet = false;
    m_FeatureRef = L"";
    m_bFeatureRef_valueSet = false;
    m_Desc = L"";
    m_bDesc_valueSet = false;
    m_State = L"";
    m_bState_valueSet = false;
    m_Type = L"";
    m_bType_valueSet = false;
    m_Condition = L"";
    m_bCondition_valueSet = false;
    m_Category = EnumMonumentCategory::Values::k_null;
    m_bCategory_valueSet = false;
    m_Beacon = EnumBeaconType::Values::k_null;
    m_bBeacon_valueSet = false;
    m_BeaconProtection = EnumBeaconProtectionType::Values::k_null;
    m_bBeaconProtection_valueSet = false;
    m_OID = L"";
    m_bOID_valueSet = false;
    m_Reference = L"";
    m_bReference_valueSet = false;
    m_OriginSurvey = L"";
    m_bOriginSurvey_valueSet = false;
}


template<class T>
MonumentTmpl<T>::~MonumentTmpl<T> ()
{
}


template <class T>
bool MonumentTmpl<T>::getObjectId(const String*& pId) const
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
ValueObject* MonumentTmpl<T>::id() const
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
String MonumentTmpl<T>::getName() const
{
    return m_Name;
}

template <class T>
void MonumentTmpl<T>::setName(String value)
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
bool MonumentTmpl<T>::hasValue_Name() const
{
    return m_bName_valueSet;
}

template <class T>
void MonumentTmpl<T>::resetValue_Name()
{
    m_bName_valueSet = false;
}


template <class T>
String MonumentTmpl<T>::getPntRef() const
{
    return m_PntRef;
}

template <class T>
void MonumentTmpl<T>::setPntRef(String value)
{
    m_PntRef = value;
    m_bPntRef_valueSet = true;
}

template <class T>
bool MonumentTmpl<T>::hasValue_PntRef() const
{
    return m_bPntRef_valueSet;
}

template <class T>
void MonumentTmpl<T>::resetValue_PntRef()
{
    m_bPntRef_valueSet = false;
}


template <class T>
String MonumentTmpl<T>::getFeatureRef() const
{
    return m_FeatureRef;
}

template <class T>
void MonumentTmpl<T>::setFeatureRef(String value)
{
    m_FeatureRef = value;
    m_bFeatureRef_valueSet = true;
}

template <class T>
bool MonumentTmpl<T>::hasValue_FeatureRef() const
{
    return m_bFeatureRef_valueSet;
}

template <class T>
void MonumentTmpl<T>::resetValue_FeatureRef()
{
    m_bFeatureRef_valueSet = false;
}


template <class T>
String MonumentTmpl<T>::getDesc() const
{
    return m_Desc;
}

template <class T>
void MonumentTmpl<T>::setDesc(String value)
{
    m_Desc = value;
    m_bDesc_valueSet = true;
}

template <class T>
bool MonumentTmpl<T>::hasValue_Desc() const
{
    return m_bDesc_valueSet;
}

template <class T>
void MonumentTmpl<T>::resetValue_Desc()
{
    m_bDesc_valueSet = false;
}


template <class T>
String MonumentTmpl<T>::getState() const
{
    return m_State;
}

template <class T>
void MonumentTmpl<T>::setState(String value)
{
    m_State = value;
    m_bState_valueSet = true;
}

template <class T>
bool MonumentTmpl<T>::hasValue_State() const
{
    return m_bState_valueSet;
}

template <class T>
void MonumentTmpl<T>::resetValue_State()
{
    m_bState_valueSet = false;
}


template <class T>
String MonumentTmpl<T>::getType() const
{
    return m_Type;
}

template <class T>
void MonumentTmpl<T>::setType(String value)
{
    m_Type = value;
    m_bType_valueSet = true;
}

template <class T>
bool MonumentTmpl<T>::hasValue_Type() const
{
    return m_bType_valueSet;
}

template <class T>
void MonumentTmpl<T>::resetValue_Type()
{
    m_bType_valueSet = false;
}


template <class T>
String MonumentTmpl<T>::getCondition() const
{
    return m_Condition;
}

template <class T>
void MonumentTmpl<T>::setCondition(String value)
{
    m_Condition = value;
    m_bCondition_valueSet = true;
}

template <class T>
bool MonumentTmpl<T>::hasValue_Condition() const
{
    return m_bCondition_valueSet;
}

template <class T>
void MonumentTmpl<T>::resetValue_Condition()
{
    m_bCondition_valueSet = false;
}


template <class T>
EnumMonumentCategory::Values MonumentTmpl<T>::getCategory() const
{
    return m_Category;
}

template <class T>
void MonumentTmpl<T>::setCategory(EnumMonumentCategory::Values value)
{
    m_Category = value;
    m_bCategory_valueSet = true;
}

template <class T>
bool MonumentTmpl<T>::hasValue_Category() const
{
    return m_bCategory_valueSet;
}

template <class T>
void MonumentTmpl<T>::resetValue_Category()
{
    m_bCategory_valueSet = false;
}


template <class T>
EnumBeaconType::Values MonumentTmpl<T>::getBeacon() const
{
    return m_Beacon;
}

template <class T>
void MonumentTmpl<T>::setBeacon(EnumBeaconType::Values value)
{
    m_Beacon = value;
    m_bBeacon_valueSet = true;
}

template <class T>
bool MonumentTmpl<T>::hasValue_Beacon() const
{
    return m_bBeacon_valueSet;
}

template <class T>
void MonumentTmpl<T>::resetValue_Beacon()
{
    m_bBeacon_valueSet = false;
}


template <class T>
EnumBeaconProtectionType::Values MonumentTmpl<T>::getBeaconProtection() const
{
    return m_BeaconProtection;
}

template <class T>
void MonumentTmpl<T>::setBeaconProtection(EnumBeaconProtectionType::Values value)
{
    m_BeaconProtection = value;
    m_bBeaconProtection_valueSet = true;
}

template <class T>
bool MonumentTmpl<T>::hasValue_BeaconProtection() const
{
    return m_bBeaconProtection_valueSet;
}

template <class T>
void MonumentTmpl<T>::resetValue_BeaconProtection()
{
    m_bBeaconProtection_valueSet = false;
}


template <class T>
String MonumentTmpl<T>::getOID() const
{
    return m_OID;
}

template <class T>
void MonumentTmpl<T>::setOID(String value)
{
    m_OID = value;
    m_bOID_valueSet = true;
}

template <class T>
bool MonumentTmpl<T>::hasValue_OID() const
{
    return m_bOID_valueSet;
}

template <class T>
void MonumentTmpl<T>::resetValue_OID()
{
    m_bOID_valueSet = false;
}


template <class T>
String MonumentTmpl<T>::getReference() const
{
    return m_Reference;
}

template <class T>
void MonumentTmpl<T>::setReference(String value)
{
    m_Reference = value;
    m_bReference_valueSet = true;
}

template <class T>
bool MonumentTmpl<T>::hasValue_Reference() const
{
    return m_bReference_valueSet;
}

template <class T>
void MonumentTmpl<T>::resetValue_Reference()
{
    m_bReference_valueSet = false;
}


template <class T>
String MonumentTmpl<T>::getOriginSurvey() const
{
    return m_OriginSurvey;
}

template <class T>
void MonumentTmpl<T>::setOriginSurvey(String value)
{
    m_OriginSurvey = value;
    m_bOriginSurvey_valueSet = true;
}

template <class T>
bool MonumentTmpl<T>::hasValue_OriginSurvey() const
{
    return m_bOriginSurvey_valueSet;
}

template <class T>
void MonumentTmpl<T>::resetValue_OriginSurvey()
{
    m_bOriginSurvey_valueSet = false;
}



template <class T>
void MonumentTmpl<T>::toXml (IStream& stream)
{
    static const wchar_t* kstrElementName = L"Monument";
    stream.write(L"<");
    stream.write(kstrElementName);
    if (m_bName_valueSet)
    {
        stream.write(L" name=\"");
        StringObjectImpl::streamOut(m_Name, stream);
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
    if (m_bDesc_valueSet)
    {
        stream.write(L" desc=\"");
        StringObjectImpl::streamOut(m_Desc, stream);
        stream.write(L"\"");
    }
    if (m_bState_valueSet)
    {
        stream.write(L" state=\"");
        StringObjectImpl::streamOut(m_State, stream);
        stream.write(L"\"");
    }
    if (m_bType_valueSet)
    {
        stream.write(L" type=\"");
        StringObjectImpl::streamOut(m_Type, stream);
        stream.write(L"\"");
    }
    if (m_bCondition_valueSet)
    {
        stream.write(L" condition=\"");
        StringObjectImpl::streamOut(m_Condition, stream);
        stream.write(L"\"");
    }
    if (m_bCategory_valueSet)
    {
        stream.write(L" category=\"");
        EnumMonumentCategoryImpl::streamOut(m_Category, stream);
        stream.write(L"\"");
    }
    if (m_bBeacon_valueSet)
    {
        stream.write(L" beacon=\"");
        EnumBeaconTypeImpl::streamOut(m_Beacon, stream);
        stream.write(L"\"");
    }
    if (m_bBeaconProtection_valueSet)
    {
        stream.write(L" beaconProtection=\"");
        EnumBeaconProtectionTypeImpl::streamOut(m_BeaconProtection, stream);
        stream.write(L"\"");
    }
    if (m_bOID_valueSet)
    {
        stream.write(L" oID=\"");
        StringObjectImpl::streamOut(m_OID, stream);
        stream.write(L"\"");
    }
    if (m_bReference_valueSet)
    {
        stream.write(L" reference=\"");
        StringObjectImpl::streamOut(m_Reference, stream);
        stream.write(L"\"");
    }
    if (m_bOriginSurvey_valueSet)
    {
        stream.write(L" originSurvey=\"");
        StringObjectImpl::streamOut(m_OriginSurvey, stream);
        stream.write(L"\"");
    }
    stream.write(L">");
    stream.write(L"</");
    stream.write(kstrElementName);
    stream.write(L">");
}

template <class T>
Object::ValidityEnum MonumentTmpl<T>::validate (IValidationEventSink* pEventSink) const
{
    Object::ValidityEnum returnCode = Object::kValid;
    returnCode = this->ObjectTmpl<T>::validate(pEventSink);
    if (!m_bName_valueSet)
    {
        pEventSink->onEvent(IValidationEventSink::EventCode::kRequiredValueNotSet, this, L"Name", L"Required value not set");
        returnCode = Object::kInvalid;
    }
    return returnCode;
}

}; // namespace : LX
