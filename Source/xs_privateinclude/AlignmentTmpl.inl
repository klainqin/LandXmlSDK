#include "stdafx.h"
#include "LXTypes.h"
#include "Alignment.h"
#include "CoordGeom.h"
#include "Start.h"
#include "AlignPIs.h"
#include "Cant.h"
#include "CrossSectsCollection.h"
#include "StaEquationCollection.h"
#include "ProfileCollection.h"
#include "SuperelevationCollection.h"
#include "FeatureCollection.h"
#include "LXTypesTmpl.h"
#include "AlignmentImpl.h"
#include "CoordGeomImpl.h"
#include "StartImpl.h"
#include "AlignPIsImpl.h"
#include "CantImpl.h"
#include "CrossSectsCollectionImpl.h"
#include "StaEquationCollectionImpl.h"
#include "ProfileCollectionImpl.h"
#include "SuperelevationCollectionImpl.h"
#include "FeatureCollectionImpl.h"
#include "LXTypesTmpl.inl"

namespace LX
{


template<class T>
AlignmentTmpl<T>::AlignmentTmpl<T> (DocumentImpl* pDoc)
    : ObjectTmpl<T>(pDoc)
{
    m_CoordGeom = NULL;
    m_Start = NULL;
    m_AlignPIs = NULL;
    m_Cant = NULL;
    m_CrossSects = createCrossSectsCollectionObject(pDoc);
    m_StaEquation = createStaEquationCollectionObject(pDoc);
    m_Profile = createProfileCollectionObject(pDoc);
    m_Superelevation = createSuperelevationCollectionObject(pDoc);
    m_Feature = createFeatureCollectionObject(pDoc);
    m_Name = L"";
    m_bName_valueSet = false;
    m_Length = 0.0;
    m_bLength_valueSet = false;
    m_StaStart = 0.0;
    m_bStaStart_valueSet = false;
    m_Desc = L"";
    m_bDesc_valueSet = false;
    m_OID = L"";
    m_bOID_valueSet = false;
    m_State = EnumStateType::Values::k_null;
    m_bState_valueSet = false;
}


template<class T>
AlignmentTmpl<T>::~AlignmentTmpl<T> ()
{
    if (m_CoordGeom != NULL)
    {
        m_CoordGeom->release();
        m_CoordGeom = NULL;
    }
    if (m_Start != NULL)
    {
        m_Start->release();
        m_Start = NULL;
    }
    if (m_AlignPIs != NULL)
    {
        m_AlignPIs->release();
        m_AlignPIs = NULL;
    }
    if (m_Cant != NULL)
    {
        m_Cant->release();
        m_Cant = NULL;
    }
    if (m_CrossSects != NULL)
    {
        m_CrossSects->release();
        m_CrossSects = NULL;
    }
    if (m_StaEquation != NULL)
    {
        m_StaEquation->release();
        m_StaEquation = NULL;
    }
    if (m_Profile != NULL)
    {
        m_Profile->release();
        m_Profile = NULL;
    }
    if (m_Superelevation != NULL)
    {
        m_Superelevation->release();
        m_Superelevation = NULL;
    }
    if (m_Feature != NULL)
    {
        m_Feature->release();
        m_Feature = NULL;
    }
}


template <class T>
bool AlignmentTmpl<T>::getObjectId(const String*& pId) const
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
ValueObject* AlignmentTmpl<T>::id() const
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
CrossSectsCollection& AlignmentTmpl<T>::CrossSects()
{
    return *m_CrossSects;
}

template <class T>
const CrossSectsCollection& AlignmentTmpl<T>::CrossSects() const
{
    return *m_CrossSects;
}

template <class T>
StaEquationCollection& AlignmentTmpl<T>::StaEquation()
{
    return *m_StaEquation;
}

template <class T>
const StaEquationCollection& AlignmentTmpl<T>::StaEquation() const
{
    return *m_StaEquation;
}

template <class T>
ProfileCollection& AlignmentTmpl<T>::Profile()
{
    return *m_Profile;
}

template <class T>
const ProfileCollection& AlignmentTmpl<T>::Profile() const
{
    return *m_Profile;
}

template <class T>
SuperelevationCollection& AlignmentTmpl<T>::Superelevation()
{
    return *m_Superelevation;
}

template <class T>
const SuperelevationCollection& AlignmentTmpl<T>::Superelevation() const
{
    return *m_Superelevation;
}

template <class T>
FeatureCollection& AlignmentTmpl<T>::Feature()
{
    return *m_Feature;
}

template <class T>
const FeatureCollection& AlignmentTmpl<T>::Feature() const
{
    return *m_Feature;
}


template <class T>
CoordGeom* AlignmentTmpl<T>::getCoordGeom() const
{
    return m_CoordGeom;
}

template <class T>
void AlignmentTmpl<T>::setCoordGeom(CoordGeom* pValue)
{
    m_CoordGeom = pValue;
}

template <class T>
Start* AlignmentTmpl<T>::getStart() const
{
    return m_Start;
}

template <class T>
void AlignmentTmpl<T>::setStart(Start* pValue)
{
    m_Start = pValue;
}

template <class T>
AlignPIs* AlignmentTmpl<T>::getAlignPIs() const
{
    return m_AlignPIs;
}

template <class T>
void AlignmentTmpl<T>::setAlignPIs(AlignPIs* pValue)
{
    m_AlignPIs = pValue;
}

template <class T>
Cant* AlignmentTmpl<T>::getCant() const
{
    return m_Cant;
}

template <class T>
void AlignmentTmpl<T>::setCant(Cant* pValue)
{
    m_Cant = pValue;
}


template <class T>
String AlignmentTmpl<T>::getName() const
{
    return m_Name;
}

template <class T>
void AlignmentTmpl<T>::setName(String value)
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
bool AlignmentTmpl<T>::hasValue_Name() const
{
    return m_bName_valueSet;
}

template <class T>
void AlignmentTmpl<T>::resetValue_Name()
{
    m_bName_valueSet = false;
}


template <class T>
double AlignmentTmpl<T>::getLength() const
{
    return m_Length;
}

template <class T>
void AlignmentTmpl<T>::setLength(double value)
{
    m_Length = value;
    m_bLength_valueSet = true;
}

template <class T>
bool AlignmentTmpl<T>::hasValue_Length() const
{
    return m_bLength_valueSet;
}

template <class T>
void AlignmentTmpl<T>::resetValue_Length()
{
    m_bLength_valueSet = false;
}


template <class T>
double AlignmentTmpl<T>::getStaStart() const
{
    return m_StaStart;
}

template <class T>
void AlignmentTmpl<T>::setStaStart(double value)
{
    m_StaStart = value;
    m_bStaStart_valueSet = true;
}

template <class T>
bool AlignmentTmpl<T>::hasValue_StaStart() const
{
    return m_bStaStart_valueSet;
}

template <class T>
void AlignmentTmpl<T>::resetValue_StaStart()
{
    m_bStaStart_valueSet = false;
}


template <class T>
String AlignmentTmpl<T>::getDesc() const
{
    return m_Desc;
}

template <class T>
void AlignmentTmpl<T>::setDesc(String value)
{
    m_Desc = value;
    m_bDesc_valueSet = true;
}

template <class T>
bool AlignmentTmpl<T>::hasValue_Desc() const
{
    return m_bDesc_valueSet;
}

template <class T>
void AlignmentTmpl<T>::resetValue_Desc()
{
    m_bDesc_valueSet = false;
}


template <class T>
String AlignmentTmpl<T>::getOID() const
{
    return m_OID;
}

template <class T>
void AlignmentTmpl<T>::setOID(String value)
{
    m_OID = value;
    m_bOID_valueSet = true;
}

template <class T>
bool AlignmentTmpl<T>::hasValue_OID() const
{
    return m_bOID_valueSet;
}

template <class T>
void AlignmentTmpl<T>::resetValue_OID()
{
    m_bOID_valueSet = false;
}


template <class T>
EnumStateType::Values AlignmentTmpl<T>::getState() const
{
    return m_State;
}

template <class T>
void AlignmentTmpl<T>::setState(EnumStateType::Values value)
{
    m_State = value;
    m_bState_valueSet = true;
}

template <class T>
bool AlignmentTmpl<T>::hasValue_State() const
{
    return m_bState_valueSet;
}

template <class T>
void AlignmentTmpl<T>::resetValue_State()
{
    m_bState_valueSet = false;
}



template <class T>
void AlignmentTmpl<T>::toXml (IStream& stream)
{
    static const wchar_t* kstrElementName = L"Alignment";
    stream.write(L"<");
    stream.write(kstrElementName);
    if (m_bName_valueSet)
    {
        stream.write(L" name=\"");
        StringObjectImpl::streamOut(m_Name, stream);
        stream.write(L"\"");
    }
    if (m_bLength_valueSet)
    {
        stream.write(L" length=\"");
        DoubleObjectImpl::streamOut(m_Length, stream);
        stream.write(L"\"");
    }
    if (m_bStaStart_valueSet)
    {
        stream.write(L" staStart=\"");
        DoubleObjectImpl::streamOut(m_StaStart, stream);
        stream.write(L"\"");
    }
    if (m_bDesc_valueSet)
    {
        stream.write(L" desc=\"");
        StringObjectImpl::streamOut(m_Desc, stream);
        stream.write(L"\"");
    }
    if (m_bOID_valueSet)
    {
        stream.write(L" oID=\"");
        StringObjectImpl::streamOut(m_OID, stream);
        stream.write(L"\"");
    }
    if (m_bState_valueSet)
    {
        stream.write(L" state=\"");
        EnumStateTypeImpl::streamOut(m_State, stream);
        stream.write(L"\"");
    }
    stream.write(L">");
    if (m_CoordGeom)
    {
    	m_CoordGeom->toXml(stream);
    }
    if (m_Start)
    {
    	m_Start->toXml(stream);
    }
    if (m_AlignPIs)
    {
    	m_AlignPIs->toXml(stream);
    }
    if (m_Cant)
    {
    	m_Cant->toXml(stream);
    }
    if (m_CrossSects)
    {
    	m_CrossSects->toXml(stream);
    }
    if (m_StaEquation)
    {
    	m_StaEquation->toXml(stream);
    }
    if (m_Profile)
    {
    	m_Profile->toXml(stream);
    }
    if (m_Superelevation)
    {
    	m_Superelevation->toXml(stream);
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
Object::ValidityEnum AlignmentTmpl<T>::validate (IValidationEventSink* pEventSink) const
{
    Object::ValidityEnum returnCode = Object::kValid;
    returnCode = this->ObjectTmpl<T>::validate(pEventSink);
    if (m_CoordGeom)
    {
        if (m_CoordGeom->validate(pEventSink) != Object::kValid)
            returnCode = Object::kValidWithInvalidChildren;
    }
    if (m_Start)
    {
        if (m_Start->validate(pEventSink) != Object::kValid)
            returnCode = Object::kValidWithInvalidChildren;
    }
    if (m_AlignPIs)
    {
        if (m_AlignPIs->validate(pEventSink) != Object::kValid)
            returnCode = Object::kValidWithInvalidChildren;
    }
    if (m_Cant)
    {
        if (m_Cant->validate(pEventSink) != Object::kValid)
            returnCode = Object::kValidWithInvalidChildren;
    }
    if (m_CrossSects)
    {
        if (m_CrossSects->validate(pEventSink) != Object::kValid)
            returnCode = Object::kValidWithInvalidChildren;
    }
    if (m_StaEquation)
    {
        if (m_StaEquation->validate(pEventSink) != Object::kValid)
            returnCode = Object::kValidWithInvalidChildren;
    }
    if (m_Profile)
    {
        if (m_Profile->validate(pEventSink) != Object::kValid)
            returnCode = Object::kValidWithInvalidChildren;
    }
    if (m_Superelevation)
    {
        if (m_Superelevation->validate(pEventSink) != Object::kValid)
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
    if (!m_bLength_valueSet)
    {
        pEventSink->onEvent(IValidationEventSink::EventCode::kRequiredValueNotSet, this, L"Length", L"Required value not set");
        returnCode = Object::kInvalid;
    }
    if (!m_bStaStart_valueSet)
    {
        pEventSink->onEvent(IValidationEventSink::EventCode::kRequiredValueNotSet, this, L"StaStart", L"Required value not set");
        returnCode = Object::kInvalid;
    }
    return returnCode;
}

}; // namespace : LX
