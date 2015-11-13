#include "stdafx.h"
#include "LXTypes.h"
#include "CrossSect.h"
#include "CrossSectSurfCollection.h"
#include "DesignCrossSectSurfCollection.h"
#include "FeatureCollection.h"
#include "LXTypesTmpl.h"
#include "CrossSectImpl.h"
#include "CrossSectSurfCollectionImpl.h"
#include "DesignCrossSectSurfCollectionImpl.h"
#include "FeatureCollectionImpl.h"
#include "LXTypesTmpl.inl"

namespace LX
{


template<class T>
CrossSectTmpl<T>::CrossSectTmpl<T> (DocumentImpl* pDoc)
    : ObjectTmpl<T>(pDoc)
{
    m_CrossSectSurf = createCrossSectSurfCollectionObject(pDoc);
    m_DesignCrossSectSurf = createDesignCrossSectSurfCollectionObject(pDoc);
    m_Feature = createFeatureCollectionObject(pDoc);
    m_Sta = 0.0;
    m_bSta_valueSet = false;
    m_Name = L"";
    m_bName_valueSet = false;
    m_Desc = L"";
    m_bDesc_valueSet = false;
    m_AngleSkew = 0.0;
    m_bAngleSkew_valueSet = false;
    m_AreaCut = 0.0;
    m_bAreaCut_valueSet = false;
    m_AreaFill = 0.0;
    m_bAreaFill_valueSet = false;
    m_CentroidCut = 0.0;
    m_bCentroidCut_valueSet = false;
    m_CentroidFill = 0.0;
    m_bCentroidFill_valueSet = false;
    m_SectType = L"";
    m_bSectType_valueSet = false;
    m_VolumeCut = 0.0;
    m_bVolumeCut_valueSet = false;
    m_VolumeFill = 0.0;
    m_bVolumeFill_valueSet = false;
}


template<class T>
CrossSectTmpl<T>::~CrossSectTmpl<T> ()
{
    if (m_CrossSectSurf != NULL)
    {
        m_CrossSectSurf->release();
        m_CrossSectSurf = NULL;
    }
    if (m_DesignCrossSectSurf != NULL)
    {
        m_DesignCrossSectSurf->release();
        m_DesignCrossSectSurf = NULL;
    }
    if (m_Feature != NULL)
    {
        m_Feature->release();
        m_Feature = NULL;
    }
}


template <class T>
bool CrossSectTmpl<T>::getObjectId(const String*& pId) const
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
ValueObject* CrossSectTmpl<T>::id() const
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
CrossSectSurfCollection& CrossSectTmpl<T>::CrossSectSurf()
{
    return *m_CrossSectSurf;
}

template <class T>
const CrossSectSurfCollection& CrossSectTmpl<T>::CrossSectSurf() const
{
    return *m_CrossSectSurf;
}

template <class T>
DesignCrossSectSurfCollection& CrossSectTmpl<T>::DesignCrossSectSurf()
{
    return *m_DesignCrossSectSurf;
}

template <class T>
const DesignCrossSectSurfCollection& CrossSectTmpl<T>::DesignCrossSectSurf() const
{
    return *m_DesignCrossSectSurf;
}

template <class T>
FeatureCollection& CrossSectTmpl<T>::Feature()
{
    return *m_Feature;
}

template <class T>
const FeatureCollection& CrossSectTmpl<T>::Feature() const
{
    return *m_Feature;
}



template <class T>
double CrossSectTmpl<T>::getSta() const
{
    return m_Sta;
}

template <class T>
void CrossSectTmpl<T>::setSta(double value)
{
    m_Sta = value;
    m_bSta_valueSet = true;
}

template <class T>
bool CrossSectTmpl<T>::hasValue_Sta() const
{
    return m_bSta_valueSet;
}

template <class T>
void CrossSectTmpl<T>::resetValue_Sta()
{
    m_bSta_valueSet = false;
}


template <class T>
String CrossSectTmpl<T>::getName() const
{
    return m_Name;
}

template <class T>
void CrossSectTmpl<T>::setName(String value)
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
bool CrossSectTmpl<T>::hasValue_Name() const
{
    return m_bName_valueSet;
}

template <class T>
void CrossSectTmpl<T>::resetValue_Name()
{
    m_bName_valueSet = false;
}


template <class T>
String CrossSectTmpl<T>::getDesc() const
{
    return m_Desc;
}

template <class T>
void CrossSectTmpl<T>::setDesc(String value)
{
    m_Desc = value;
    m_bDesc_valueSet = true;
}

template <class T>
bool CrossSectTmpl<T>::hasValue_Desc() const
{
    return m_bDesc_valueSet;
}

template <class T>
void CrossSectTmpl<T>::resetValue_Desc()
{
    m_bDesc_valueSet = false;
}


template <class T>
double CrossSectTmpl<T>::getAngleSkew() const
{
    return m_AngleSkew;
}

template <class T>
void CrossSectTmpl<T>::setAngleSkew(double value)
{
    m_AngleSkew = value;
    m_bAngleSkew_valueSet = true;
}

template <class T>
bool CrossSectTmpl<T>::hasValue_AngleSkew() const
{
    return m_bAngleSkew_valueSet;
}

template <class T>
void CrossSectTmpl<T>::resetValue_AngleSkew()
{
    m_bAngleSkew_valueSet = false;
}


template <class T>
double CrossSectTmpl<T>::getAreaCut() const
{
    return m_AreaCut;
}

template <class T>
void CrossSectTmpl<T>::setAreaCut(double value)
{
    m_AreaCut = value;
    m_bAreaCut_valueSet = true;
}

template <class T>
bool CrossSectTmpl<T>::hasValue_AreaCut() const
{
    return m_bAreaCut_valueSet;
}

template <class T>
void CrossSectTmpl<T>::resetValue_AreaCut()
{
    m_bAreaCut_valueSet = false;
}


template <class T>
double CrossSectTmpl<T>::getAreaFill() const
{
    return m_AreaFill;
}

template <class T>
void CrossSectTmpl<T>::setAreaFill(double value)
{
    m_AreaFill = value;
    m_bAreaFill_valueSet = true;
}

template <class T>
bool CrossSectTmpl<T>::hasValue_AreaFill() const
{
    return m_bAreaFill_valueSet;
}

template <class T>
void CrossSectTmpl<T>::resetValue_AreaFill()
{
    m_bAreaFill_valueSet = false;
}


template <class T>
double CrossSectTmpl<T>::getCentroidCut() const
{
    return m_CentroidCut;
}

template <class T>
void CrossSectTmpl<T>::setCentroidCut(double value)
{
    m_CentroidCut = value;
    m_bCentroidCut_valueSet = true;
}

template <class T>
bool CrossSectTmpl<T>::hasValue_CentroidCut() const
{
    return m_bCentroidCut_valueSet;
}

template <class T>
void CrossSectTmpl<T>::resetValue_CentroidCut()
{
    m_bCentroidCut_valueSet = false;
}


template <class T>
double CrossSectTmpl<T>::getCentroidFill() const
{
    return m_CentroidFill;
}

template <class T>
void CrossSectTmpl<T>::setCentroidFill(double value)
{
    m_CentroidFill = value;
    m_bCentroidFill_valueSet = true;
}

template <class T>
bool CrossSectTmpl<T>::hasValue_CentroidFill() const
{
    return m_bCentroidFill_valueSet;
}

template <class T>
void CrossSectTmpl<T>::resetValue_CentroidFill()
{
    m_bCentroidFill_valueSet = false;
}


template <class T>
String CrossSectTmpl<T>::getSectType() const
{
    return m_SectType;
}

template <class T>
void CrossSectTmpl<T>::setSectType(String value)
{
    m_SectType = value;
    m_bSectType_valueSet = true;
}

template <class T>
bool CrossSectTmpl<T>::hasValue_SectType() const
{
    return m_bSectType_valueSet;
}

template <class T>
void CrossSectTmpl<T>::resetValue_SectType()
{
    m_bSectType_valueSet = false;
}


template <class T>
double CrossSectTmpl<T>::getVolumeCut() const
{
    return m_VolumeCut;
}

template <class T>
void CrossSectTmpl<T>::setVolumeCut(double value)
{
    m_VolumeCut = value;
    m_bVolumeCut_valueSet = true;
}

template <class T>
bool CrossSectTmpl<T>::hasValue_VolumeCut() const
{
    return m_bVolumeCut_valueSet;
}

template <class T>
void CrossSectTmpl<T>::resetValue_VolumeCut()
{
    m_bVolumeCut_valueSet = false;
}


template <class T>
double CrossSectTmpl<T>::getVolumeFill() const
{
    return m_VolumeFill;
}

template <class T>
void CrossSectTmpl<T>::setVolumeFill(double value)
{
    m_VolumeFill = value;
    m_bVolumeFill_valueSet = true;
}

template <class T>
bool CrossSectTmpl<T>::hasValue_VolumeFill() const
{
    return m_bVolumeFill_valueSet;
}

template <class T>
void CrossSectTmpl<T>::resetValue_VolumeFill()
{
    m_bVolumeFill_valueSet = false;
}



template <class T>
void CrossSectTmpl<T>::toXml (IStream& stream)
{
    static const wchar_t* kstrElementName = L"CrossSect";
    stream.write(L"<");
    stream.write(kstrElementName);
    if (m_bSta_valueSet)
    {
        stream.write(L" sta=\"");
        DoubleObjectImpl::streamOut(m_Sta, stream);
        stream.write(L"\"");
    }
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
    if (m_bAngleSkew_valueSet)
    {
        stream.write(L" angleSkew=\"");
        DoubleObjectImpl::streamOut(m_AngleSkew, stream);
        stream.write(L"\"");
    }
    if (m_bAreaCut_valueSet)
    {
        stream.write(L" areaCut=\"");
        DoubleObjectImpl::streamOut(m_AreaCut, stream);
        stream.write(L"\"");
    }
    if (m_bAreaFill_valueSet)
    {
        stream.write(L" areaFill=\"");
        DoubleObjectImpl::streamOut(m_AreaFill, stream);
        stream.write(L"\"");
    }
    if (m_bCentroidCut_valueSet)
    {
        stream.write(L" centroidCut=\"");
        DoubleObjectImpl::streamOut(m_CentroidCut, stream);
        stream.write(L"\"");
    }
    if (m_bCentroidFill_valueSet)
    {
        stream.write(L" centroidFill=\"");
        DoubleObjectImpl::streamOut(m_CentroidFill, stream);
        stream.write(L"\"");
    }
    if (m_bSectType_valueSet)
    {
        stream.write(L" sectType=\"");
        StringObjectImpl::streamOut(m_SectType, stream);
        stream.write(L"\"");
    }
    if (m_bVolumeCut_valueSet)
    {
        stream.write(L" volumeCut=\"");
        DoubleObjectImpl::streamOut(m_VolumeCut, stream);
        stream.write(L"\"");
    }
    if (m_bVolumeFill_valueSet)
    {
        stream.write(L" volumeFill=\"");
        DoubleObjectImpl::streamOut(m_VolumeFill, stream);
        stream.write(L"\"");
    }
    stream.write(L">");
    if (m_CrossSectSurf)
    {
    	m_CrossSectSurf->toXml(stream);
    }
    if (m_DesignCrossSectSurf)
    {
    	m_DesignCrossSectSurf->toXml(stream);
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
Object::ValidityEnum CrossSectTmpl<T>::validate (IValidationEventSink* pEventSink) const
{
    Object::ValidityEnum returnCode = Object::kValid;
    returnCode = this->ObjectTmpl<T>::validate(pEventSink);
    if (m_CrossSectSurf)
    {
        if (m_CrossSectSurf->validate(pEventSink) != Object::kValid)
            returnCode = Object::kValidWithInvalidChildren;
    }
    if (m_DesignCrossSectSurf)
    {
        if (m_DesignCrossSectSurf->validate(pEventSink) != Object::kValid)
            returnCode = Object::kValidWithInvalidChildren;
    }
    if (m_Feature)
    {
        if (m_Feature->validate(pEventSink) != Object::kValid)
            returnCode = Object::kValidWithInvalidChildren;
    }
    if (!m_bSta_valueSet)
    {
        pEventSink->onEvent(IValidationEventSink::EventCode::kRequiredValueNotSet, this, L"Sta", L"Required value not set");
        returnCode = Object::kInvalid;
    }
    return returnCode;
}

}; // namespace : LX
