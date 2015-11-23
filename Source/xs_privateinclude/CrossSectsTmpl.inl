#include "stdafx.h"
#include "LXTypes.h"
#include "CrossSects.h"
#include "CrossSectCollection.h"
#include "FeatureCollection.h"
#include "LXTypesTmpl.h"
#include "CrossSectsImpl.h"
#include "CrossSectCollectionImpl.h"
#include "FeatureCollectionImpl.h"
#include "LXTypesTmpl.inl"

namespace LX
{


template<class T>
CrossSectsTmpl<T>::CrossSectsTmpl (DocumentImpl* pDoc)
    : ObjectTmpl<T>(pDoc)
{
    m_CrossSect = createCrossSectCollectionObject(pDoc);
    m_Feature = createFeatureCollectionObject(pDoc);
    m_Desc = L"";
    m_bDesc_valueSet = false;
    m_Name = L"";
    m_bName_valueSet = false;
    m_State = EnumStateType::Values::k_null;
    m_bState_valueSet = false;
    m_CalcMethod = EnumXsVolCalcMethodType::Values::k_null;
    m_bCalcMethod_valueSet = false;
    m_CurveCorrection = false;
    m_bCurveCorrection_valueSet = false;
    m_SwellFactor = 0.0;
    m_bSwellFactor_valueSet = false;
    m_ShrinkFactor = 0.0;
    m_bShrinkFactor_valueSet = false;
}


template<class T>
CrossSectsTmpl<T>::~CrossSectsTmpl ()
{
    if (m_CrossSect != NULL)
    {
        m_CrossSect->release();
        m_CrossSect = NULL;
    }
    if (m_Feature != NULL)
    {
        m_Feature->release();
        m_Feature = NULL;
    }
}


template <class T>
bool CrossSectsTmpl<T>::getObjectId(const String*& pId) const
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
ValueObject* CrossSectsTmpl<T>::id() const
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
CrossSectCollection& CrossSectsTmpl<T>::CrossSect()
{
    return *m_CrossSect;
}

template <class T>
const CrossSectCollection& CrossSectsTmpl<T>::CrossSect() const
{
    return *m_CrossSect;
}

template <class T>
FeatureCollection& CrossSectsTmpl<T>::Feature()
{
    return *m_Feature;
}

template <class T>
const FeatureCollection& CrossSectsTmpl<T>::Feature() const
{
    return *m_Feature;
}



template <class T>
String CrossSectsTmpl<T>::getDesc() const
{
    return m_Desc;
}

template <class T>
void CrossSectsTmpl<T>::setDesc(String value)
{
    m_Desc = value;
    m_bDesc_valueSet = true;
}

template <class T>
bool CrossSectsTmpl<T>::hasValue_Desc() const
{
    return m_bDesc_valueSet;
}

template <class T>
void CrossSectsTmpl<T>::resetValue_Desc()
{
    m_bDesc_valueSet = false;
}


template <class T>
String CrossSectsTmpl<T>::getName() const
{
    return m_Name;
}

template <class T>
void CrossSectsTmpl<T>::setName(String value)
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
bool CrossSectsTmpl<T>::hasValue_Name() const
{
    return m_bName_valueSet;
}

template <class T>
void CrossSectsTmpl<T>::resetValue_Name()
{
    m_bName_valueSet = false;
}


template <class T>
EnumStateType::Values CrossSectsTmpl<T>::getState() const
{
    return m_State;
}

template <class T>
void CrossSectsTmpl<T>::setState(EnumStateType::Values value)
{
    m_State = value;
    m_bState_valueSet = true;
}

template <class T>
bool CrossSectsTmpl<T>::hasValue_State() const
{
    return m_bState_valueSet;
}

template <class T>
void CrossSectsTmpl<T>::resetValue_State()
{
    m_bState_valueSet = false;
}


template <class T>
EnumXsVolCalcMethodType::Values CrossSectsTmpl<T>::getCalcMethod() const
{
    return m_CalcMethod;
}

template <class T>
void CrossSectsTmpl<T>::setCalcMethod(EnumXsVolCalcMethodType::Values value)
{
    m_CalcMethod = value;
    m_bCalcMethod_valueSet = true;
}

template <class T>
bool CrossSectsTmpl<T>::hasValue_CalcMethod() const
{
    return m_bCalcMethod_valueSet;
}

template <class T>
void CrossSectsTmpl<T>::resetValue_CalcMethod()
{
    m_bCalcMethod_valueSet = false;
}


template <class T>
bool CrossSectsTmpl<T>::getCurveCorrection() const
{
    return m_CurveCorrection;
}

template <class T>
void CrossSectsTmpl<T>::setCurveCorrection(bool value)
{
    m_CurveCorrection = value;
    m_bCurveCorrection_valueSet = true;
}

template <class T>
bool CrossSectsTmpl<T>::hasValue_CurveCorrection() const
{
    return m_bCurveCorrection_valueSet;
}

template <class T>
void CrossSectsTmpl<T>::resetValue_CurveCorrection()
{
    m_bCurveCorrection_valueSet = false;
}


template <class T>
double CrossSectsTmpl<T>::getSwellFactor() const
{
    return m_SwellFactor;
}

template <class T>
void CrossSectsTmpl<T>::setSwellFactor(double value)
{
    m_SwellFactor = value;
    m_bSwellFactor_valueSet = true;
}

template <class T>
bool CrossSectsTmpl<T>::hasValue_SwellFactor() const
{
    return m_bSwellFactor_valueSet;
}

template <class T>
void CrossSectsTmpl<T>::resetValue_SwellFactor()
{
    m_bSwellFactor_valueSet = false;
}


template <class T>
double CrossSectsTmpl<T>::getShrinkFactor() const
{
    return m_ShrinkFactor;
}

template <class T>
void CrossSectsTmpl<T>::setShrinkFactor(double value)
{
    m_ShrinkFactor = value;
    m_bShrinkFactor_valueSet = true;
}

template <class T>
bool CrossSectsTmpl<T>::hasValue_ShrinkFactor() const
{
    return m_bShrinkFactor_valueSet;
}

template <class T>
void CrossSectsTmpl<T>::resetValue_ShrinkFactor()
{
    m_bShrinkFactor_valueSet = false;
}



template <class T>
void CrossSectsTmpl<T>::toXml (IStream& stream)
{
    static const wchar_t* kstrElementName = L"CrossSects";
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
        EnumStateTypeImpl::streamOut(m_State, stream);
        stream.write(L"\"");
    }
    if (m_bCalcMethod_valueSet)
    {
        stream.write(L" calcMethod=\"");
        EnumXsVolCalcMethodTypeImpl::streamOut(m_CalcMethod, stream);
        stream.write(L"\"");
    }
    if (m_bCurveCorrection_valueSet)
    {
        stream.write(L" curveCorrection=\"");
        BooleanObjectImpl::streamOut(m_CurveCorrection, stream);
        stream.write(L"\"");
    }
    if (m_bSwellFactor_valueSet)
    {
        stream.write(L" swellFactor=\"");
        DoubleObjectImpl::streamOut(m_SwellFactor, stream);
        stream.write(L"\"");
    }
    if (m_bShrinkFactor_valueSet)
    {
        stream.write(L" shrinkFactor=\"");
        DoubleObjectImpl::streamOut(m_ShrinkFactor, stream);
        stream.write(L"\"");
    }
    stream.write(L">");
    if (m_CrossSect)
    {
    	m_CrossSect->toXml(stream);
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
Object::ValidityEnum CrossSectsTmpl<T>::validate (IValidationEventSink* pEventSink) const
{
    Object::ValidityEnum returnCode = Object::kValid;
    returnCode = this->ObjectTmpl<T>::validate(pEventSink);
    if (m_CrossSect)
    {
        if (m_CrossSect->validate(pEventSink) != Object::kValid)
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
