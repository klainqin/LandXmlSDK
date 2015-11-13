#include "stdafx.h"
#include "LXTypes.h"
#include "RedHorizontalPosition.h"
#include "LXTypesTmpl.h"
#include "RedHorizontalPositionImpl.h"
#include "LXTypesTmpl.inl"

namespace LX
{


template<class T>
RedHorizontalPositionTmpl<T>::RedHorizontalPositionTmpl<T> (DocumentImpl* pDoc)
    : ObjectTmpl<T>(pDoc)
{
    m_Desc = L"";
    m_bDesc_valueSet = false;
    m_Name = L"";
    m_bName_valueSet = false;
    m_State = L"";
    m_bState_valueSet = false;
    m_OID = L"";
    m_bOID_valueSet = false;
    m_Purpose = EnumPurposeType::Values::k_null;
    m_bPurpose_valueSet = false;
    m_SetupID = L"";
    m_bSetupID_valueSet = false;
    m_Date = L"";
    m_bDate_valueSet = false;
    m_EquipmentUsed = L"";
    m_bEquipmentUsed_valueSet = false;
    m_HorizontalDatum = L"";
    m_bHorizontalDatum_valueSet = false;
    m_HorizontalAdjustment = L"";
    m_bHorizontalAdjustment_valueSet = false;
    m_Latitude = L"";
    m_bLatitude_valueSet = false;
    m_Longitude = L"";
    m_bLongitude_valueSet = false;
    m_HorizontalFix = L"";
    m_bHorizontalFix_valueSet = false;
    m_CurrencyDate = L"";
    m_bCurrencyDate_valueSet = false;
    m_LocalUncertainity = 0.0;
    m_bLocalUncertainity_valueSet = false;
    m_Class = L"";
    m_bClass_valueSet = false;
    m_Order = L"";
    m_bOrder_valueSet = false;
    m_PositionalUncertainity = 0.0;
    m_bPositionalUncertainity_valueSet = false;
}


template<class T>
RedHorizontalPositionTmpl<T>::~RedHorizontalPositionTmpl<T> ()
{
}


template <class T>
bool RedHorizontalPositionTmpl<T>::getObjectId(const String*& pId) const
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
ValueObject* RedHorizontalPositionTmpl<T>::id() const
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
String RedHorizontalPositionTmpl<T>::getDesc() const
{
    return m_Desc;
}

template <class T>
void RedHorizontalPositionTmpl<T>::setDesc(String value)
{
    m_Desc = value;
    m_bDesc_valueSet = true;
}

template <class T>
bool RedHorizontalPositionTmpl<T>::hasValue_Desc() const
{
    return m_bDesc_valueSet;
}

template <class T>
void RedHorizontalPositionTmpl<T>::resetValue_Desc()
{
    m_bDesc_valueSet = false;
}


template <class T>
String RedHorizontalPositionTmpl<T>::getName() const
{
    return m_Name;
}

template <class T>
void RedHorizontalPositionTmpl<T>::setName(String value)
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
bool RedHorizontalPositionTmpl<T>::hasValue_Name() const
{
    return m_bName_valueSet;
}

template <class T>
void RedHorizontalPositionTmpl<T>::resetValue_Name()
{
    m_bName_valueSet = false;
}


template <class T>
String RedHorizontalPositionTmpl<T>::getState() const
{
    return m_State;
}

template <class T>
void RedHorizontalPositionTmpl<T>::setState(String value)
{
    m_State = value;
    m_bState_valueSet = true;
}

template <class T>
bool RedHorizontalPositionTmpl<T>::hasValue_State() const
{
    return m_bState_valueSet;
}

template <class T>
void RedHorizontalPositionTmpl<T>::resetValue_State()
{
    m_bState_valueSet = false;
}


template <class T>
String RedHorizontalPositionTmpl<T>::getOID() const
{
    return m_OID;
}

template <class T>
void RedHorizontalPositionTmpl<T>::setOID(String value)
{
    m_OID = value;
    m_bOID_valueSet = true;
}

template <class T>
bool RedHorizontalPositionTmpl<T>::hasValue_OID() const
{
    return m_bOID_valueSet;
}

template <class T>
void RedHorizontalPositionTmpl<T>::resetValue_OID()
{
    m_bOID_valueSet = false;
}


template <class T>
EnumPurposeType::Values RedHorizontalPositionTmpl<T>::getPurpose() const
{
    return m_Purpose;
}

template <class T>
void RedHorizontalPositionTmpl<T>::setPurpose(EnumPurposeType::Values value)
{
    m_Purpose = value;
    m_bPurpose_valueSet = true;
}

template <class T>
bool RedHorizontalPositionTmpl<T>::hasValue_Purpose() const
{
    return m_bPurpose_valueSet;
}

template <class T>
void RedHorizontalPositionTmpl<T>::resetValue_Purpose()
{
    m_bPurpose_valueSet = false;
}


template <class T>
String RedHorizontalPositionTmpl<T>::getSetupID() const
{
    return m_SetupID;
}

template <class T>
void RedHorizontalPositionTmpl<T>::setSetupID(String value)
{
    m_SetupID = value;
    m_bSetupID_valueSet = true;
}

template <class T>
bool RedHorizontalPositionTmpl<T>::hasValue_SetupID() const
{
    return m_bSetupID_valueSet;
}

template <class T>
void RedHorizontalPositionTmpl<T>::resetValue_SetupID()
{
    m_bSetupID_valueSet = false;
}


template <class T>
String RedHorizontalPositionTmpl<T>::getDate() const
{
    return m_Date;
}

template <class T>
void RedHorizontalPositionTmpl<T>::setDate(String value)
{
    m_Date = value;
    m_bDate_valueSet = true;
}

template <class T>
bool RedHorizontalPositionTmpl<T>::hasValue_Date() const
{
    return m_bDate_valueSet;
}

template <class T>
void RedHorizontalPositionTmpl<T>::resetValue_Date()
{
    m_bDate_valueSet = false;
}


template <class T>
String RedHorizontalPositionTmpl<T>::getEquipmentUsed() const
{
    return m_EquipmentUsed;
}

template <class T>
void RedHorizontalPositionTmpl<T>::setEquipmentUsed(String value)
{
    m_EquipmentUsed = value;
    m_bEquipmentUsed_valueSet = true;
}

template <class T>
bool RedHorizontalPositionTmpl<T>::hasValue_EquipmentUsed() const
{
    return m_bEquipmentUsed_valueSet;
}

template <class T>
void RedHorizontalPositionTmpl<T>::resetValue_EquipmentUsed()
{
    m_bEquipmentUsed_valueSet = false;
}


template <class T>
String RedHorizontalPositionTmpl<T>::getHorizontalDatum() const
{
    return m_HorizontalDatum;
}

template <class T>
void RedHorizontalPositionTmpl<T>::setHorizontalDatum(String value)
{
    m_HorizontalDatum = value;
    m_bHorizontalDatum_valueSet = true;
}

template <class T>
bool RedHorizontalPositionTmpl<T>::hasValue_HorizontalDatum() const
{
    return m_bHorizontalDatum_valueSet;
}

template <class T>
void RedHorizontalPositionTmpl<T>::resetValue_HorizontalDatum()
{
    m_bHorizontalDatum_valueSet = false;
}


template <class T>
String RedHorizontalPositionTmpl<T>::getHorizontalAdjustment() const
{
    return m_HorizontalAdjustment;
}

template <class T>
void RedHorizontalPositionTmpl<T>::setHorizontalAdjustment(String value)
{
    m_HorizontalAdjustment = value;
    m_bHorizontalAdjustment_valueSet = true;
}

template <class T>
bool RedHorizontalPositionTmpl<T>::hasValue_HorizontalAdjustment() const
{
    return m_bHorizontalAdjustment_valueSet;
}

template <class T>
void RedHorizontalPositionTmpl<T>::resetValue_HorizontalAdjustment()
{
    m_bHorizontalAdjustment_valueSet = false;
}


template <class T>
String RedHorizontalPositionTmpl<T>::getLatitude() const
{
    return m_Latitude;
}

template <class T>
void RedHorizontalPositionTmpl<T>::setLatitude(String value)
{
    m_Latitude = value;
    m_bLatitude_valueSet = true;
}

template <class T>
bool RedHorizontalPositionTmpl<T>::hasValue_Latitude() const
{
    return m_bLatitude_valueSet;
}

template <class T>
void RedHorizontalPositionTmpl<T>::resetValue_Latitude()
{
    m_bLatitude_valueSet = false;
}


template <class T>
String RedHorizontalPositionTmpl<T>::getLongitude() const
{
    return m_Longitude;
}

template <class T>
void RedHorizontalPositionTmpl<T>::setLongitude(String value)
{
    m_Longitude = value;
    m_bLongitude_valueSet = true;
}

template <class T>
bool RedHorizontalPositionTmpl<T>::hasValue_Longitude() const
{
    return m_bLongitude_valueSet;
}

template <class T>
void RedHorizontalPositionTmpl<T>::resetValue_Longitude()
{
    m_bLongitude_valueSet = false;
}


template <class T>
String RedHorizontalPositionTmpl<T>::getHorizontalFix() const
{
    return m_HorizontalFix;
}

template <class T>
void RedHorizontalPositionTmpl<T>::setHorizontalFix(String value)
{
    m_HorizontalFix = value;
    m_bHorizontalFix_valueSet = true;
}

template <class T>
bool RedHorizontalPositionTmpl<T>::hasValue_HorizontalFix() const
{
    return m_bHorizontalFix_valueSet;
}

template <class T>
void RedHorizontalPositionTmpl<T>::resetValue_HorizontalFix()
{
    m_bHorizontalFix_valueSet = false;
}


template <class T>
String RedHorizontalPositionTmpl<T>::getCurrencyDate() const
{
    return m_CurrencyDate;
}

template <class T>
void RedHorizontalPositionTmpl<T>::setCurrencyDate(String value)
{
    m_CurrencyDate = value;
    m_bCurrencyDate_valueSet = true;
}

template <class T>
bool RedHorizontalPositionTmpl<T>::hasValue_CurrencyDate() const
{
    return m_bCurrencyDate_valueSet;
}

template <class T>
void RedHorizontalPositionTmpl<T>::resetValue_CurrencyDate()
{
    m_bCurrencyDate_valueSet = false;
}


template <class T>
double RedHorizontalPositionTmpl<T>::getLocalUncertainity() const
{
    return m_LocalUncertainity;
}

template <class T>
void RedHorizontalPositionTmpl<T>::setLocalUncertainity(double value)
{
    m_LocalUncertainity = value;
    m_bLocalUncertainity_valueSet = true;
}

template <class T>
bool RedHorizontalPositionTmpl<T>::hasValue_LocalUncertainity() const
{
    return m_bLocalUncertainity_valueSet;
}

template <class T>
void RedHorizontalPositionTmpl<T>::resetValue_LocalUncertainity()
{
    m_bLocalUncertainity_valueSet = false;
}


template <class T>
String RedHorizontalPositionTmpl<T>::getClass() const
{
    return m_Class;
}

template <class T>
void RedHorizontalPositionTmpl<T>::setClass(String value)
{
    m_Class = value;
    m_bClass_valueSet = true;
}

template <class T>
bool RedHorizontalPositionTmpl<T>::hasValue_Class() const
{
    return m_bClass_valueSet;
}

template <class T>
void RedHorizontalPositionTmpl<T>::resetValue_Class()
{
    m_bClass_valueSet = false;
}


template <class T>
String RedHorizontalPositionTmpl<T>::getOrder() const
{
    return m_Order;
}

template <class T>
void RedHorizontalPositionTmpl<T>::setOrder(String value)
{
    m_Order = value;
    m_bOrder_valueSet = true;
}

template <class T>
bool RedHorizontalPositionTmpl<T>::hasValue_Order() const
{
    return m_bOrder_valueSet;
}

template <class T>
void RedHorizontalPositionTmpl<T>::resetValue_Order()
{
    m_bOrder_valueSet = false;
}


template <class T>
double RedHorizontalPositionTmpl<T>::getPositionalUncertainity() const
{
    return m_PositionalUncertainity;
}

template <class T>
void RedHorizontalPositionTmpl<T>::setPositionalUncertainity(double value)
{
    m_PositionalUncertainity = value;
    m_bPositionalUncertainity_valueSet = true;
}

template <class T>
bool RedHorizontalPositionTmpl<T>::hasValue_PositionalUncertainity() const
{
    return m_bPositionalUncertainity_valueSet;
}

template <class T>
void RedHorizontalPositionTmpl<T>::resetValue_PositionalUncertainity()
{
    m_bPositionalUncertainity_valueSet = false;
}



template <class T>
void RedHorizontalPositionTmpl<T>::toXml (IStream& stream)
{
    static const wchar_t* kstrElementName = L"RedHorizontalPosition";
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
        StringObjectImpl::streamOut(m_State, stream);
        stream.write(L"\"");
    }
    if (m_bOID_valueSet)
    {
        stream.write(L" oID=\"");
        StringObjectImpl::streamOut(m_OID, stream);
        stream.write(L"\"");
    }
    if (m_bPurpose_valueSet)
    {
        stream.write(L" purpose=\"");
        EnumPurposeTypeImpl::streamOut(m_Purpose, stream);
        stream.write(L"\"");
    }
    if (m_bSetupID_valueSet)
    {
        stream.write(L" setupID=\"");
        StringObjectImpl::streamOut(m_SetupID, stream);
        stream.write(L"\"");
    }
    if (m_bDate_valueSet)
    {
        stream.write(L" date=\"");
        StringObjectImpl::streamOut(m_Date, stream);
        stream.write(L"\"");
    }
    if (m_bEquipmentUsed_valueSet)
    {
        stream.write(L" equipmentUsed=\"");
        StringObjectImpl::streamOut(m_EquipmentUsed, stream);
        stream.write(L"\"");
    }
    if (m_bHorizontalDatum_valueSet)
    {
        stream.write(L" horizontalDatum=\"");
        StringObjectImpl::streamOut(m_HorizontalDatum, stream);
        stream.write(L"\"");
    }
    if (m_bHorizontalAdjustment_valueSet)
    {
        stream.write(L" horizontalAdjustment=\"");
        StringObjectImpl::streamOut(m_HorizontalAdjustment, stream);
        stream.write(L"\"");
    }
    if (m_bLatitude_valueSet)
    {
        stream.write(L" latitude=\"");
        StringObjectImpl::streamOut(m_Latitude, stream);
        stream.write(L"\"");
    }
    if (m_bLongitude_valueSet)
    {
        stream.write(L" longitude=\"");
        StringObjectImpl::streamOut(m_Longitude, stream);
        stream.write(L"\"");
    }
    if (m_bHorizontalFix_valueSet)
    {
        stream.write(L" horizontalFix=\"");
        StringObjectImpl::streamOut(m_HorizontalFix, stream);
        stream.write(L"\"");
    }
    if (m_bCurrencyDate_valueSet)
    {
        stream.write(L" currencyDate=\"");
        StringObjectImpl::streamOut(m_CurrencyDate, stream);
        stream.write(L"\"");
    }
    if (m_bLocalUncertainity_valueSet)
    {
        stream.write(L" localUncertainity=\"");
        DoubleObjectImpl::streamOut(m_LocalUncertainity, stream);
        stream.write(L"\"");
    }
    if (m_bClass_valueSet)
    {
        stream.write(L" class=\"");
        StringObjectImpl::streamOut(m_Class, stream);
        stream.write(L"\"");
    }
    if (m_bOrder_valueSet)
    {
        stream.write(L" order=\"");
        StringObjectImpl::streamOut(m_Order, stream);
        stream.write(L"\"");
    }
    if (m_bPositionalUncertainity_valueSet)
    {
        stream.write(L" positionalUncertainity=\"");
        DoubleObjectImpl::streamOut(m_PositionalUncertainity, stream);
        stream.write(L"\"");
    }
    stream.write(L">");
    stream.write(L"</");
    stream.write(kstrElementName);
    stream.write(L">");
}

template <class T>
Object::ValidityEnum RedHorizontalPositionTmpl<T>::validate (IValidationEventSink* pEventSink) const
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
