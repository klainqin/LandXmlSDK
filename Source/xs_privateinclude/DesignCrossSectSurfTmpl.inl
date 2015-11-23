#include "stdafx.h"
#include "LXTypes.h"
#include "DesignCrossSectSurf.h"
#include "CrossSectPntCollection.h"
#include "FeatureCollection.h"
#include "LXTypesTmpl.h"
#include "DesignCrossSectSurfImpl.h"
#include "CrossSectPntCollectionImpl.h"
#include "FeatureCollectionImpl.h"
#include "LXTypesTmpl.inl"

namespace LX
{


template<class T>
DesignCrossSectSurfTmpl<T>::DesignCrossSectSurfTmpl (DocumentImpl* pDoc)
    : ObjectTmpl<T>(pDoc)
{
    m_CrossSectPnt = createCrossSectPntCollectionObject(pDoc);
    m_Feature = createFeatureCollectionObject(pDoc);
    m_Name = L"";
    m_bName_valueSet = false;
    m_Desc = L"";
    m_bDesc_valueSet = false;
    m_State = EnumStateType::Values::k_null;
    m_bState_valueSet = false;
    m_Side = EnumSideofRoadType::Values::k_null;
    m_bSide_valueSet = false;
    m_Material = L"";
    m_bMaterial_valueSet = false;
    m_ClosedArea = false;
    m_bClosedArea_valueSet = false;
    m_TypicalThickness = 0.0;
    m_bTypicalThickness_valueSet = false;
    m_TypicalWidth = 0.0;
    m_bTypicalWidth_valueSet = false;
    m_Area = 0.0;
    m_bArea_valueSet = false;
    m_Volume = 0.0;
    m_bVolume_valueSet = false;
}


template<class T>
DesignCrossSectSurfTmpl<T>::~DesignCrossSectSurfTmpl ()
{
    if (m_CrossSectPnt != NULL)
    {
        m_CrossSectPnt->release();
        m_CrossSectPnt = NULL;
    }
    if (m_Feature != NULL)
    {
        m_Feature->release();
        m_Feature = NULL;
    }
}


template <class T>
bool DesignCrossSectSurfTmpl<T>::getObjectId(const String*& pId) const
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
ValueObject* DesignCrossSectSurfTmpl<T>::id() const
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
CrossSectPntCollection& DesignCrossSectSurfTmpl<T>::CrossSectPnt()
{
    return *m_CrossSectPnt;
}

template <class T>
const CrossSectPntCollection& DesignCrossSectSurfTmpl<T>::CrossSectPnt() const
{
    return *m_CrossSectPnt;
}

template <class T>
FeatureCollection& DesignCrossSectSurfTmpl<T>::Feature()
{
    return *m_Feature;
}

template <class T>
const FeatureCollection& DesignCrossSectSurfTmpl<T>::Feature() const
{
    return *m_Feature;
}



template <class T>
String DesignCrossSectSurfTmpl<T>::getName() const
{
    return m_Name;
}

template <class T>
void DesignCrossSectSurfTmpl<T>::setName(String value)
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
bool DesignCrossSectSurfTmpl<T>::hasValue_Name() const
{
    return m_bName_valueSet;
}

template <class T>
void DesignCrossSectSurfTmpl<T>::resetValue_Name()
{
    m_bName_valueSet = false;
}


template <class T>
String DesignCrossSectSurfTmpl<T>::getDesc() const
{
    return m_Desc;
}

template <class T>
void DesignCrossSectSurfTmpl<T>::setDesc(String value)
{
    m_Desc = value;
    m_bDesc_valueSet = true;
}

template <class T>
bool DesignCrossSectSurfTmpl<T>::hasValue_Desc() const
{
    return m_bDesc_valueSet;
}

template <class T>
void DesignCrossSectSurfTmpl<T>::resetValue_Desc()
{
    m_bDesc_valueSet = false;
}


template <class T>
EnumStateType::Values DesignCrossSectSurfTmpl<T>::getState() const
{
    return m_State;
}

template <class T>
void DesignCrossSectSurfTmpl<T>::setState(EnumStateType::Values value)
{
    m_State = value;
    m_bState_valueSet = true;
}

template <class T>
bool DesignCrossSectSurfTmpl<T>::hasValue_State() const
{
    return m_bState_valueSet;
}

template <class T>
void DesignCrossSectSurfTmpl<T>::resetValue_State()
{
    m_bState_valueSet = false;
}


template <class T>
EnumSideofRoadType::Values DesignCrossSectSurfTmpl<T>::getSide() const
{
    return m_Side;
}

template <class T>
void DesignCrossSectSurfTmpl<T>::setSide(EnumSideofRoadType::Values value)
{
    m_Side = value;
    m_bSide_valueSet = true;
}

template <class T>
bool DesignCrossSectSurfTmpl<T>::hasValue_Side() const
{
    return m_bSide_valueSet;
}

template <class T>
void DesignCrossSectSurfTmpl<T>::resetValue_Side()
{
    m_bSide_valueSet = false;
}


template <class T>
String DesignCrossSectSurfTmpl<T>::getMaterial() const
{
    return m_Material;
}

template <class T>
void DesignCrossSectSurfTmpl<T>::setMaterial(String value)
{
    m_Material = value;
    m_bMaterial_valueSet = true;
}

template <class T>
bool DesignCrossSectSurfTmpl<T>::hasValue_Material() const
{
    return m_bMaterial_valueSet;
}

template <class T>
void DesignCrossSectSurfTmpl<T>::resetValue_Material()
{
    m_bMaterial_valueSet = false;
}


template <class T>
bool DesignCrossSectSurfTmpl<T>::getClosedArea() const
{
    return m_ClosedArea;
}

template <class T>
void DesignCrossSectSurfTmpl<T>::setClosedArea(bool value)
{
    m_ClosedArea = value;
    m_bClosedArea_valueSet = true;
}

template <class T>
bool DesignCrossSectSurfTmpl<T>::hasValue_ClosedArea() const
{
    return m_bClosedArea_valueSet;
}

template <class T>
void DesignCrossSectSurfTmpl<T>::resetValue_ClosedArea()
{
    m_bClosedArea_valueSet = false;
}


template <class T>
double DesignCrossSectSurfTmpl<T>::getTypicalThickness() const
{
    return m_TypicalThickness;
}

template <class T>
void DesignCrossSectSurfTmpl<T>::setTypicalThickness(double value)
{
    m_TypicalThickness = value;
    m_bTypicalThickness_valueSet = true;
}

template <class T>
bool DesignCrossSectSurfTmpl<T>::hasValue_TypicalThickness() const
{
    return m_bTypicalThickness_valueSet;
}

template <class T>
void DesignCrossSectSurfTmpl<T>::resetValue_TypicalThickness()
{
    m_bTypicalThickness_valueSet = false;
}


template <class T>
double DesignCrossSectSurfTmpl<T>::getTypicalWidth() const
{
    return m_TypicalWidth;
}

template <class T>
void DesignCrossSectSurfTmpl<T>::setTypicalWidth(double value)
{
    m_TypicalWidth = value;
    m_bTypicalWidth_valueSet = true;
}

template <class T>
bool DesignCrossSectSurfTmpl<T>::hasValue_TypicalWidth() const
{
    return m_bTypicalWidth_valueSet;
}

template <class T>
void DesignCrossSectSurfTmpl<T>::resetValue_TypicalWidth()
{
    m_bTypicalWidth_valueSet = false;
}


template <class T>
double DesignCrossSectSurfTmpl<T>::getArea() const
{
    return m_Area;
}

template <class T>
void DesignCrossSectSurfTmpl<T>::setArea(double value)
{
    m_Area = value;
    m_bArea_valueSet = true;
}

template <class T>
bool DesignCrossSectSurfTmpl<T>::hasValue_Area() const
{
    return m_bArea_valueSet;
}

template <class T>
void DesignCrossSectSurfTmpl<T>::resetValue_Area()
{
    m_bArea_valueSet = false;
}


template <class T>
double DesignCrossSectSurfTmpl<T>::getVolume() const
{
    return m_Volume;
}

template <class T>
void DesignCrossSectSurfTmpl<T>::setVolume(double value)
{
    m_Volume = value;
    m_bVolume_valueSet = true;
}

template <class T>
bool DesignCrossSectSurfTmpl<T>::hasValue_Volume() const
{
    return m_bVolume_valueSet;
}

template <class T>
void DesignCrossSectSurfTmpl<T>::resetValue_Volume()
{
    m_bVolume_valueSet = false;
}



template <class T>
void DesignCrossSectSurfTmpl<T>::toXml (IStream& stream)
{
    static const wchar_t* kstrElementName = L"DesignCrossSectSurf";
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
    if (m_bSide_valueSet)
    {
        stream.write(L" side=\"");
        EnumSideofRoadTypeImpl::streamOut(m_Side, stream);
        stream.write(L"\"");
    }
    if (m_bMaterial_valueSet)
    {
        stream.write(L" material=\"");
        StringObjectImpl::streamOut(m_Material, stream);
        stream.write(L"\"");
    }
    if (m_bClosedArea_valueSet)
    {
        stream.write(L" closedArea=\"");
        BooleanObjectImpl::streamOut(m_ClosedArea, stream);
        stream.write(L"\"");
    }
    if (m_bTypicalThickness_valueSet)
    {
        stream.write(L" typicalThickness=\"");
        DoubleObjectImpl::streamOut(m_TypicalThickness, stream);
        stream.write(L"\"");
    }
    if (m_bTypicalWidth_valueSet)
    {
        stream.write(L" typicalWidth=\"");
        DoubleObjectImpl::streamOut(m_TypicalWidth, stream);
        stream.write(L"\"");
    }
    if (m_bArea_valueSet)
    {
        stream.write(L" area=\"");
        DoubleObjectImpl::streamOut(m_Area, stream);
        stream.write(L"\"");
    }
    if (m_bVolume_valueSet)
    {
        stream.write(L" volume=\"");
        DoubleObjectImpl::streamOut(m_Volume, stream);
        stream.write(L"\"");
    }
    stream.write(L">");
    if (m_CrossSectPnt)
    {
    	m_CrossSectPnt->toXml(stream);
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
Object::ValidityEnum DesignCrossSectSurfTmpl<T>::validate (IValidationEventSink* pEventSink) const
{
    Object::ValidityEnum returnCode = Object::kValid;
    returnCode = this->ObjectTmpl<T>::validate(pEventSink);
    if (m_CrossSectPnt)
    {
        if (m_CrossSectPnt->validate(pEventSink) != Object::kValid)
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
