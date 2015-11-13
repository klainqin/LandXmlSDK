#include "stdafx.h"
#include "LXTypes.h"
#include "Cant.h"
#include "CantStationCollection.h"
#include "SpeedStationCollection.h"
#include "FeatureCollection.h"
#include "LXTypesTmpl.h"
#include "CantImpl.h"
#include "CantStationCollectionImpl.h"
#include "SpeedStationCollectionImpl.h"
#include "FeatureCollectionImpl.h"
#include "LXTypesTmpl.inl"

namespace LX
{


template<class T>
CantTmpl<T>::CantTmpl<T> (DocumentImpl* pDoc)
    : ObjectTmpl<T>(pDoc)
{
    m_CantStation = createCantStationCollectionObject(pDoc);
    m_SpeedStation = createSpeedStationCollectionObject(pDoc);
    m_Feature = createFeatureCollectionObject(pDoc);
    m_Name = L"";
    m_bName_valueSet = false;
    m_Desc = L"";
    m_bDesc_valueSet = false;
    m_State = EnumStateType::Values::k_null;
    m_bState_valueSet = false;
    m_EquilibriumConstant = 0.0;
    m_bEquilibriumConstant_valueSet = false;
    m_AppliedCantConstant = 0.0;
    m_bAppliedCantConstant_valueSet = false;
    m_Gauge = 0.0;
    m_bGauge_valueSet = false;
    m_RotationPoint = L"";
    m_bRotationPoint_valueSet = false;
}


template<class T>
CantTmpl<T>::~CantTmpl<T> ()
{
    if (m_CantStation != NULL)
    {
        m_CantStation->release();
        m_CantStation = NULL;
    }
    if (m_SpeedStation != NULL)
    {
        m_SpeedStation->release();
        m_SpeedStation = NULL;
    }
    if (m_Feature != NULL)
    {
        m_Feature->release();
        m_Feature = NULL;
    }
}


template <class T>
bool CantTmpl<T>::getObjectId(const String*& pId) const
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
ValueObject* CantTmpl<T>::id() const
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
CantStationCollection& CantTmpl<T>::CantStation()
{
    return *m_CantStation;
}

template <class T>
const CantStationCollection& CantTmpl<T>::CantStation() const
{
    return *m_CantStation;
}

template <class T>
SpeedStationCollection& CantTmpl<T>::SpeedStation()
{
    return *m_SpeedStation;
}

template <class T>
const SpeedStationCollection& CantTmpl<T>::SpeedStation() const
{
    return *m_SpeedStation;
}

template <class T>
FeatureCollection& CantTmpl<T>::Feature()
{
    return *m_Feature;
}

template <class T>
const FeatureCollection& CantTmpl<T>::Feature() const
{
    return *m_Feature;
}



template <class T>
String CantTmpl<T>::getName() const
{
    return m_Name;
}

template <class T>
void CantTmpl<T>::setName(String value)
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
bool CantTmpl<T>::hasValue_Name() const
{
    return m_bName_valueSet;
}

template <class T>
void CantTmpl<T>::resetValue_Name()
{
    m_bName_valueSet = false;
}


template <class T>
String CantTmpl<T>::getDesc() const
{
    return m_Desc;
}

template <class T>
void CantTmpl<T>::setDesc(String value)
{
    m_Desc = value;
    m_bDesc_valueSet = true;
}

template <class T>
bool CantTmpl<T>::hasValue_Desc() const
{
    return m_bDesc_valueSet;
}

template <class T>
void CantTmpl<T>::resetValue_Desc()
{
    m_bDesc_valueSet = false;
}


template <class T>
EnumStateType::Values CantTmpl<T>::getState() const
{
    return m_State;
}

template <class T>
void CantTmpl<T>::setState(EnumStateType::Values value)
{
    m_State = value;
    m_bState_valueSet = true;
}

template <class T>
bool CantTmpl<T>::hasValue_State() const
{
    return m_bState_valueSet;
}

template <class T>
void CantTmpl<T>::resetValue_State()
{
    m_bState_valueSet = false;
}


template <class T>
double CantTmpl<T>::getEquilibriumConstant() const
{
    return m_EquilibriumConstant;
}

template <class T>
void CantTmpl<T>::setEquilibriumConstant(double value)
{
    m_EquilibriumConstant = value;
    m_bEquilibriumConstant_valueSet = true;
}

template <class T>
bool CantTmpl<T>::hasValue_EquilibriumConstant() const
{
    return m_bEquilibriumConstant_valueSet;
}

template <class T>
void CantTmpl<T>::resetValue_EquilibriumConstant()
{
    m_bEquilibriumConstant_valueSet = false;
}


template <class T>
double CantTmpl<T>::getAppliedCantConstant() const
{
    return m_AppliedCantConstant;
}

template <class T>
void CantTmpl<T>::setAppliedCantConstant(double value)
{
    m_AppliedCantConstant = value;
    m_bAppliedCantConstant_valueSet = true;
}

template <class T>
bool CantTmpl<T>::hasValue_AppliedCantConstant() const
{
    return m_bAppliedCantConstant_valueSet;
}

template <class T>
void CantTmpl<T>::resetValue_AppliedCantConstant()
{
    m_bAppliedCantConstant_valueSet = false;
}


template <class T>
double CantTmpl<T>::getGauge() const
{
    return m_Gauge;
}

template <class T>
void CantTmpl<T>::setGauge(double value)
{
    m_Gauge = value;
    m_bGauge_valueSet = true;
}

template <class T>
bool CantTmpl<T>::hasValue_Gauge() const
{
    return m_bGauge_valueSet;
}

template <class T>
void CantTmpl<T>::resetValue_Gauge()
{
    m_bGauge_valueSet = false;
}


template <class T>
String CantTmpl<T>::getRotationPoint() const
{
    return m_RotationPoint;
}

template <class T>
void CantTmpl<T>::setRotationPoint(String value)
{
    m_RotationPoint = value;
    m_bRotationPoint_valueSet = true;
}

template <class T>
bool CantTmpl<T>::hasValue_RotationPoint() const
{
    return m_bRotationPoint_valueSet;
}

template <class T>
void CantTmpl<T>::resetValue_RotationPoint()
{
    m_bRotationPoint_valueSet = false;
}



template <class T>
void CantTmpl<T>::toXml (IStream& stream)
{
    static const wchar_t* kstrElementName = L"Cant";
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
    if (m_bState_valueSet)
    {
        stream.write(L" state=\"");
        EnumStateTypeImpl::streamOut(m_State, stream);
        stream.write(L"\"");
    }
    if (m_bEquilibriumConstant_valueSet)
    {
        stream.write(L" equilibriumConstant=\"");
        DoubleObjectImpl::streamOut(m_EquilibriumConstant, stream);
        stream.write(L"\"");
    }
    if (m_bAppliedCantConstant_valueSet)
    {
        stream.write(L" appliedCantConstant=\"");
        DoubleObjectImpl::streamOut(m_AppliedCantConstant, stream);
        stream.write(L"\"");
    }
    if (m_bGauge_valueSet)
    {
        stream.write(L" gauge=\"");
        DoubleObjectImpl::streamOut(m_Gauge, stream);
        stream.write(L"\"");
    }
    if (m_bRotationPoint_valueSet)
    {
        stream.write(L" rotationPoint=\"");
        StringObjectImpl::streamOut(m_RotationPoint, stream);
        stream.write(L"\"");
    }
    stream.write(L">");
    if (m_CantStation)
    {
    	m_CantStation->toXml(stream);
    }
    if (m_SpeedStation)
    {
    	m_SpeedStation->toXml(stream);
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
Object::ValidityEnum CantTmpl<T>::validate (IValidationEventSink* pEventSink) const
{
    Object::ValidityEnum returnCode = Object::kValid;
    returnCode = this->ObjectTmpl<T>::validate(pEventSink);
    if (m_CantStation)
    {
        if (m_CantStation->validate(pEventSink) != Object::kValid)
            returnCode = Object::kValidWithInvalidChildren;
    }
    if (m_SpeedStation)
    {
        if (m_SpeedStation->validate(pEventSink) != Object::kValid)
            returnCode = Object::kValidWithInvalidChildren;
    }
    if (m_Feature)
    {
        if (m_Feature->validate(pEventSink) != Object::kValid)
            returnCode = Object::kValidWithInvalidChildren;
    }
    if (!m_bName_valueSet)
    {
        pEventSink->onEvent(IValidationEventSink::EventCode::kRequiredValueNotSet, this, L"Name", L"Required value not set");
        returnCode = Object::kInvalid;
    }
    if (!m_bGauge_valueSet)
    {
        pEventSink->onEvent(IValidationEventSink::EventCode::kRequiredValueNotSet, this, L"Gauge", L"Required value not set");
        returnCode = Object::kInvalid;
    }
    return returnCode;
}

}; // namespace : LX
