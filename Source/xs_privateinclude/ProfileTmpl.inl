#include "stdafx.h"
#include "LXTypes.h"
#include "Profile.h"
#include "ProfSurfCollection.h"
#include "ProfAlignCollection.h"
#include "FeatureCollection.h"
#include "LXTypesTmpl.h"
#include "ProfileImpl.h"
#include "ProfSurfCollectionImpl.h"
#include "ProfAlignCollectionImpl.h"
#include "FeatureCollectionImpl.h"
#include "LXTypesTmpl.inl"

namespace LX
{


template<class T>
ProfileTmpl<T>::ProfileTmpl<T> (DocumentImpl* pDoc)
    : ObjectTmpl<T>(pDoc)
{
    m_ProfSurf = createProfSurfCollectionObject(pDoc);
    m_ProfAlign = createProfAlignCollectionObject(pDoc);
    m_Feature = createFeatureCollectionObject(pDoc);
    m_Desc = L"";
    m_bDesc_valueSet = false;
    m_Name = L"";
    m_bName_valueSet = false;
    m_StaStart = 0.0;
    m_bStaStart_valueSet = false;
    m_State = EnumStateType::Values::k_null;
    m_bState_valueSet = false;
}


template<class T>
ProfileTmpl<T>::~ProfileTmpl<T> ()
{
    if (m_ProfSurf != NULL)
    {
        m_ProfSurf->release();
        m_ProfSurf = NULL;
    }
    if (m_ProfAlign != NULL)
    {
        m_ProfAlign->release();
        m_ProfAlign = NULL;
    }
    if (m_Feature != NULL)
    {
        m_Feature->release();
        m_Feature = NULL;
    }
}


template <class T>
bool ProfileTmpl<T>::getObjectId(const String*& pId) const
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
ValueObject* ProfileTmpl<T>::id() const
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
ProfSurfCollection& ProfileTmpl<T>::ProfSurf()
{
    return *m_ProfSurf;
}

template <class T>
const ProfSurfCollection& ProfileTmpl<T>::ProfSurf() const
{
    return *m_ProfSurf;
}

template <class T>
ProfAlignCollection& ProfileTmpl<T>::ProfAlign()
{
    return *m_ProfAlign;
}

template <class T>
const ProfAlignCollection& ProfileTmpl<T>::ProfAlign() const
{
    return *m_ProfAlign;
}

template <class T>
FeatureCollection& ProfileTmpl<T>::Feature()
{
    return *m_Feature;
}

template <class T>
const FeatureCollection& ProfileTmpl<T>::Feature() const
{
    return *m_Feature;
}



template <class T>
String ProfileTmpl<T>::getDesc() const
{
    return m_Desc;
}

template <class T>
void ProfileTmpl<T>::setDesc(String value)
{
    m_Desc = value;
    m_bDesc_valueSet = true;
}

template <class T>
bool ProfileTmpl<T>::hasValue_Desc() const
{
    return m_bDesc_valueSet;
}

template <class T>
void ProfileTmpl<T>::resetValue_Desc()
{
    m_bDesc_valueSet = false;
}


template <class T>
String ProfileTmpl<T>::getName() const
{
    return m_Name;
}

template <class T>
void ProfileTmpl<T>::setName(String value)
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
bool ProfileTmpl<T>::hasValue_Name() const
{
    return m_bName_valueSet;
}

template <class T>
void ProfileTmpl<T>::resetValue_Name()
{
    m_bName_valueSet = false;
}


template <class T>
double ProfileTmpl<T>::getStaStart() const
{
    return m_StaStart;
}

template <class T>
void ProfileTmpl<T>::setStaStart(double value)
{
    m_StaStart = value;
    m_bStaStart_valueSet = true;
}

template <class T>
bool ProfileTmpl<T>::hasValue_StaStart() const
{
    return m_bStaStart_valueSet;
}

template <class T>
void ProfileTmpl<T>::resetValue_StaStart()
{
    m_bStaStart_valueSet = false;
}


template <class T>
EnumStateType::Values ProfileTmpl<T>::getState() const
{
    return m_State;
}

template <class T>
void ProfileTmpl<T>::setState(EnumStateType::Values value)
{
    m_State = value;
    m_bState_valueSet = true;
}

template <class T>
bool ProfileTmpl<T>::hasValue_State() const
{
    return m_bState_valueSet;
}

template <class T>
void ProfileTmpl<T>::resetValue_State()
{
    m_bState_valueSet = false;
}



template <class T>
void ProfileTmpl<T>::toXml (IStream& stream)
{
    static const wchar_t* kstrElementName = L"Profile";
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
    if (m_bStaStart_valueSet)
    {
        stream.write(L" staStart=\"");
        DoubleObjectImpl::streamOut(m_StaStart, stream);
        stream.write(L"\"");
    }
    if (m_bState_valueSet)
    {
        stream.write(L" state=\"");
        EnumStateTypeImpl::streamOut(m_State, stream);
        stream.write(L"\"");
    }
    stream.write(L">");
    if (m_ProfSurf)
    {
    	m_ProfSurf->toXml(stream);
    }
    if (m_ProfAlign)
    {
    	m_ProfAlign->toXml(stream);
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
Object::ValidityEnum ProfileTmpl<T>::validate (IValidationEventSink* pEventSink) const
{
    Object::ValidityEnum returnCode = Object::kValid;
    returnCode = this->ObjectTmpl<T>::validate(pEventSink);
    if (m_ProfSurf)
    {
        if (m_ProfSurf->validate(pEventSink) != Object::kValid)
            returnCode = Object::kValidWithInvalidChildren;
    }
    if (m_ProfAlign)
    {
        if (m_ProfAlign->validate(pEventSink) != Object::kValid)
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
