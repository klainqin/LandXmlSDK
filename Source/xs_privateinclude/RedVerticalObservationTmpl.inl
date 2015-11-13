#include "stdafx.h"
#include "LXTypes.h"
#include "RedVerticalObservation.h"
#include "LXTypesTmpl.h"
#include "RedVerticalObservationImpl.h"
#include "LXTypesTmpl.inl"

namespace LX
{


template<class T>
RedVerticalObservationTmpl<T>::RedVerticalObservationTmpl<T> (DocumentImpl* pDoc)
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
    m_Height = 0.0;
    m_bHeight_valueSet = false;
    m_VerticalAdjustment = L"";
    m_bVerticalAdjustment_valueSet = false;
    m_VerticalFix = L"";
    m_bVerticalFix_valueSet = false;
    m_Geosphoid = 0.0;
    m_bGeosphoid_valueSet = false;
    m_GsDatum = L"";
    m_bGsDatum_valueSet = false;
    m_GsModel = L"";
    m_bGsModel_valueSet = false;
    m_GsMethod = L"";
    m_bGsMethod_valueSet = false;
    m_OriginMark = L"";
    m_bOriginMark_valueSet = false;
    m_VerticalDatum = L"";
    m_bVerticalDatum_valueSet = false;
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
RedVerticalObservationTmpl<T>::~RedVerticalObservationTmpl<T> ()
{
}


template <class T>
bool RedVerticalObservationTmpl<T>::getObjectId(const String*& pId) const
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
ValueObject* RedVerticalObservationTmpl<T>::id() const
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
String RedVerticalObservationTmpl<T>::getDesc() const
{
    return m_Desc;
}

template <class T>
void RedVerticalObservationTmpl<T>::setDesc(String value)
{
    m_Desc = value;
    m_bDesc_valueSet = true;
}

template <class T>
bool RedVerticalObservationTmpl<T>::hasValue_Desc() const
{
    return m_bDesc_valueSet;
}

template <class T>
void RedVerticalObservationTmpl<T>::resetValue_Desc()
{
    m_bDesc_valueSet = false;
}


template <class T>
String RedVerticalObservationTmpl<T>::getName() const
{
    return m_Name;
}

template <class T>
void RedVerticalObservationTmpl<T>::setName(String value)
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
bool RedVerticalObservationTmpl<T>::hasValue_Name() const
{
    return m_bName_valueSet;
}

template <class T>
void RedVerticalObservationTmpl<T>::resetValue_Name()
{
    m_bName_valueSet = false;
}


template <class T>
String RedVerticalObservationTmpl<T>::getState() const
{
    return m_State;
}

template <class T>
void RedVerticalObservationTmpl<T>::setState(String value)
{
    m_State = value;
    m_bState_valueSet = true;
}

template <class T>
bool RedVerticalObservationTmpl<T>::hasValue_State() const
{
    return m_bState_valueSet;
}

template <class T>
void RedVerticalObservationTmpl<T>::resetValue_State()
{
    m_bState_valueSet = false;
}


template <class T>
String RedVerticalObservationTmpl<T>::getOID() const
{
    return m_OID;
}

template <class T>
void RedVerticalObservationTmpl<T>::setOID(String value)
{
    m_OID = value;
    m_bOID_valueSet = true;
}

template <class T>
bool RedVerticalObservationTmpl<T>::hasValue_OID() const
{
    return m_bOID_valueSet;
}

template <class T>
void RedVerticalObservationTmpl<T>::resetValue_OID()
{
    m_bOID_valueSet = false;
}


template <class T>
EnumPurposeType::Values RedVerticalObservationTmpl<T>::getPurpose() const
{
    return m_Purpose;
}

template <class T>
void RedVerticalObservationTmpl<T>::setPurpose(EnumPurposeType::Values value)
{
    m_Purpose = value;
    m_bPurpose_valueSet = true;
}

template <class T>
bool RedVerticalObservationTmpl<T>::hasValue_Purpose() const
{
    return m_bPurpose_valueSet;
}

template <class T>
void RedVerticalObservationTmpl<T>::resetValue_Purpose()
{
    m_bPurpose_valueSet = false;
}


template <class T>
String RedVerticalObservationTmpl<T>::getSetupID() const
{
    return m_SetupID;
}

template <class T>
void RedVerticalObservationTmpl<T>::setSetupID(String value)
{
    m_SetupID = value;
    m_bSetupID_valueSet = true;
}

template <class T>
bool RedVerticalObservationTmpl<T>::hasValue_SetupID() const
{
    return m_bSetupID_valueSet;
}

template <class T>
void RedVerticalObservationTmpl<T>::resetValue_SetupID()
{
    m_bSetupID_valueSet = false;
}


template <class T>
String RedVerticalObservationTmpl<T>::getDate() const
{
    return m_Date;
}

template <class T>
void RedVerticalObservationTmpl<T>::setDate(String value)
{
    m_Date = value;
    m_bDate_valueSet = true;
}

template <class T>
bool RedVerticalObservationTmpl<T>::hasValue_Date() const
{
    return m_bDate_valueSet;
}

template <class T>
void RedVerticalObservationTmpl<T>::resetValue_Date()
{
    m_bDate_valueSet = false;
}


template <class T>
String RedVerticalObservationTmpl<T>::getEquipmentUsed() const
{
    return m_EquipmentUsed;
}

template <class T>
void RedVerticalObservationTmpl<T>::setEquipmentUsed(String value)
{
    m_EquipmentUsed = value;
    m_bEquipmentUsed_valueSet = true;
}

template <class T>
bool RedVerticalObservationTmpl<T>::hasValue_EquipmentUsed() const
{
    return m_bEquipmentUsed_valueSet;
}

template <class T>
void RedVerticalObservationTmpl<T>::resetValue_EquipmentUsed()
{
    m_bEquipmentUsed_valueSet = false;
}


template <class T>
double RedVerticalObservationTmpl<T>::getHeight() const
{
    return m_Height;
}

template <class T>
void RedVerticalObservationTmpl<T>::setHeight(double value)
{
    m_Height = value;
    m_bHeight_valueSet = true;
}

template <class T>
bool RedVerticalObservationTmpl<T>::hasValue_Height() const
{
    return m_bHeight_valueSet;
}

template <class T>
void RedVerticalObservationTmpl<T>::resetValue_Height()
{
    m_bHeight_valueSet = false;
}


template <class T>
String RedVerticalObservationTmpl<T>::getVerticalAdjustment() const
{
    return m_VerticalAdjustment;
}

template <class T>
void RedVerticalObservationTmpl<T>::setVerticalAdjustment(String value)
{
    m_VerticalAdjustment = value;
    m_bVerticalAdjustment_valueSet = true;
}

template <class T>
bool RedVerticalObservationTmpl<T>::hasValue_VerticalAdjustment() const
{
    return m_bVerticalAdjustment_valueSet;
}

template <class T>
void RedVerticalObservationTmpl<T>::resetValue_VerticalAdjustment()
{
    m_bVerticalAdjustment_valueSet = false;
}


template <class T>
String RedVerticalObservationTmpl<T>::getVerticalFix() const
{
    return m_VerticalFix;
}

template <class T>
void RedVerticalObservationTmpl<T>::setVerticalFix(String value)
{
    m_VerticalFix = value;
    m_bVerticalFix_valueSet = true;
}

template <class T>
bool RedVerticalObservationTmpl<T>::hasValue_VerticalFix() const
{
    return m_bVerticalFix_valueSet;
}

template <class T>
void RedVerticalObservationTmpl<T>::resetValue_VerticalFix()
{
    m_bVerticalFix_valueSet = false;
}


template <class T>
double RedVerticalObservationTmpl<T>::getGeosphoid() const
{
    return m_Geosphoid;
}

template <class T>
void RedVerticalObservationTmpl<T>::setGeosphoid(double value)
{
    m_Geosphoid = value;
    m_bGeosphoid_valueSet = true;
}

template <class T>
bool RedVerticalObservationTmpl<T>::hasValue_Geosphoid() const
{
    return m_bGeosphoid_valueSet;
}

template <class T>
void RedVerticalObservationTmpl<T>::resetValue_Geosphoid()
{
    m_bGeosphoid_valueSet = false;
}


template <class T>
String RedVerticalObservationTmpl<T>::getGsDatum() const
{
    return m_GsDatum;
}

template <class T>
void RedVerticalObservationTmpl<T>::setGsDatum(String value)
{
    m_GsDatum = value;
    m_bGsDatum_valueSet = true;
}

template <class T>
bool RedVerticalObservationTmpl<T>::hasValue_GsDatum() const
{
    return m_bGsDatum_valueSet;
}

template <class T>
void RedVerticalObservationTmpl<T>::resetValue_GsDatum()
{
    m_bGsDatum_valueSet = false;
}


template <class T>
String RedVerticalObservationTmpl<T>::getGsModel() const
{
    return m_GsModel;
}

template <class T>
void RedVerticalObservationTmpl<T>::setGsModel(String value)
{
    m_GsModel = value;
    m_bGsModel_valueSet = true;
}

template <class T>
bool RedVerticalObservationTmpl<T>::hasValue_GsModel() const
{
    return m_bGsModel_valueSet;
}

template <class T>
void RedVerticalObservationTmpl<T>::resetValue_GsModel()
{
    m_bGsModel_valueSet = false;
}


template <class T>
String RedVerticalObservationTmpl<T>::getGsMethod() const
{
    return m_GsMethod;
}

template <class T>
void RedVerticalObservationTmpl<T>::setGsMethod(String value)
{
    m_GsMethod = value;
    m_bGsMethod_valueSet = true;
}

template <class T>
bool RedVerticalObservationTmpl<T>::hasValue_GsMethod() const
{
    return m_bGsMethod_valueSet;
}

template <class T>
void RedVerticalObservationTmpl<T>::resetValue_GsMethod()
{
    m_bGsMethod_valueSet = false;
}


template <class T>
String RedVerticalObservationTmpl<T>::getOriginMark() const
{
    return m_OriginMark;
}

template <class T>
void RedVerticalObservationTmpl<T>::setOriginMark(String value)
{
    m_OriginMark = value;
    m_bOriginMark_valueSet = true;
}

template <class T>
bool RedVerticalObservationTmpl<T>::hasValue_OriginMark() const
{
    return m_bOriginMark_valueSet;
}

template <class T>
void RedVerticalObservationTmpl<T>::resetValue_OriginMark()
{
    m_bOriginMark_valueSet = false;
}


template <class T>
String RedVerticalObservationTmpl<T>::getVerticalDatum() const
{
    return m_VerticalDatum;
}

template <class T>
void RedVerticalObservationTmpl<T>::setVerticalDatum(String value)
{
    m_VerticalDatum = value;
    m_bVerticalDatum_valueSet = true;
}

template <class T>
bool RedVerticalObservationTmpl<T>::hasValue_VerticalDatum() const
{
    return m_bVerticalDatum_valueSet;
}

template <class T>
void RedVerticalObservationTmpl<T>::resetValue_VerticalDatum()
{
    m_bVerticalDatum_valueSet = false;
}


template <class T>
double RedVerticalObservationTmpl<T>::getLocalUncertainity() const
{
    return m_LocalUncertainity;
}

template <class T>
void RedVerticalObservationTmpl<T>::setLocalUncertainity(double value)
{
    m_LocalUncertainity = value;
    m_bLocalUncertainity_valueSet = true;
}

template <class T>
bool RedVerticalObservationTmpl<T>::hasValue_LocalUncertainity() const
{
    return m_bLocalUncertainity_valueSet;
}

template <class T>
void RedVerticalObservationTmpl<T>::resetValue_LocalUncertainity()
{
    m_bLocalUncertainity_valueSet = false;
}


template <class T>
String RedVerticalObservationTmpl<T>::getClass() const
{
    return m_Class;
}

template <class T>
void RedVerticalObservationTmpl<T>::setClass(String value)
{
    m_Class = value;
    m_bClass_valueSet = true;
}

template <class T>
bool RedVerticalObservationTmpl<T>::hasValue_Class() const
{
    return m_bClass_valueSet;
}

template <class T>
void RedVerticalObservationTmpl<T>::resetValue_Class()
{
    m_bClass_valueSet = false;
}


template <class T>
String RedVerticalObservationTmpl<T>::getOrder() const
{
    return m_Order;
}

template <class T>
void RedVerticalObservationTmpl<T>::setOrder(String value)
{
    m_Order = value;
    m_bOrder_valueSet = true;
}

template <class T>
bool RedVerticalObservationTmpl<T>::hasValue_Order() const
{
    return m_bOrder_valueSet;
}

template <class T>
void RedVerticalObservationTmpl<T>::resetValue_Order()
{
    m_bOrder_valueSet = false;
}


template <class T>
double RedVerticalObservationTmpl<T>::getPositionalUncertainity() const
{
    return m_PositionalUncertainity;
}

template <class T>
void RedVerticalObservationTmpl<T>::setPositionalUncertainity(double value)
{
    m_PositionalUncertainity = value;
    m_bPositionalUncertainity_valueSet = true;
}

template <class T>
bool RedVerticalObservationTmpl<T>::hasValue_PositionalUncertainity() const
{
    return m_bPositionalUncertainity_valueSet;
}

template <class T>
void RedVerticalObservationTmpl<T>::resetValue_PositionalUncertainity()
{
    m_bPositionalUncertainity_valueSet = false;
}



template <class T>
void RedVerticalObservationTmpl<T>::toXml (IStream& stream)
{
    static const wchar_t* kstrElementName = L"RedVerticalObservation";
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
    if (m_bHeight_valueSet)
    {
        stream.write(L" height=\"");
        DoubleObjectImpl::streamOut(m_Height, stream);
        stream.write(L"\"");
    }
    if (m_bVerticalAdjustment_valueSet)
    {
        stream.write(L" verticalAdjustment=\"");
        StringObjectImpl::streamOut(m_VerticalAdjustment, stream);
        stream.write(L"\"");
    }
    if (m_bVerticalFix_valueSet)
    {
        stream.write(L" verticalFix=\"");
        StringObjectImpl::streamOut(m_VerticalFix, stream);
        stream.write(L"\"");
    }
    if (m_bGeosphoid_valueSet)
    {
        stream.write(L" geosphoid=\"");
        DoubleObjectImpl::streamOut(m_Geosphoid, stream);
        stream.write(L"\"");
    }
    if (m_bGsDatum_valueSet)
    {
        stream.write(L" gsDatum=\"");
        StringObjectImpl::streamOut(m_GsDatum, stream);
        stream.write(L"\"");
    }
    if (m_bGsModel_valueSet)
    {
        stream.write(L" gsModel=\"");
        StringObjectImpl::streamOut(m_GsModel, stream);
        stream.write(L"\"");
    }
    if (m_bGsMethod_valueSet)
    {
        stream.write(L" gsMethod=\"");
        StringObjectImpl::streamOut(m_GsMethod, stream);
        stream.write(L"\"");
    }
    if (m_bOriginMark_valueSet)
    {
        stream.write(L" originMark=\"");
        StringObjectImpl::streamOut(m_OriginMark, stream);
        stream.write(L"\"");
    }
    if (m_bVerticalDatum_valueSet)
    {
        stream.write(L" verticalDatum=\"");
        StringObjectImpl::streamOut(m_VerticalDatum, stream);
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
Object::ValidityEnum RedVerticalObservationTmpl<T>::validate (IValidationEventSink* pEventSink) const
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
