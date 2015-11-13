#include "stdafx.h"
#include "LXTypes.h"
#include "Zone.h"
#include "ZoneWidthCollection.h"
#include "ZoneSlopeCollection.h"
#include "ZoneCutFillCollection.h"
#include "ZoneMaterialCollection.h"
#include "ZoneCrossSectStructureCollection.h"
#include "FeatureCollection.h"
#include "LXTypesTmpl.h"
#include "ZoneImpl.h"
#include "ZoneWidthCollectionImpl.h"
#include "ZoneSlopeCollectionImpl.h"
#include "ZoneCutFillCollectionImpl.h"
#include "ZoneMaterialCollectionImpl.h"
#include "ZoneCrossSectStructureCollectionImpl.h"
#include "FeatureCollectionImpl.h"
#include "LXTypesTmpl.inl"

namespace LX
{


template<class T>
ZoneTmpl<T>::ZoneTmpl<T> (DocumentImpl* pDoc)
    : ObjectTmpl<T>(pDoc)
{
    m_ZoneWidth = createZoneWidthCollectionObject(pDoc);
    m_ZoneSlope = createZoneSlopeCollectionObject(pDoc);
    m_ZoneCutFill = createZoneCutFillCollectionObject(pDoc);
    m_ZoneMaterial = createZoneMaterialCollectionObject(pDoc);
    m_ZoneCrossSectStructure = createZoneCrossSectStructureCollectionObject(pDoc);
    m_Feature = createFeatureCollectionObject(pDoc);
    m_Desc = L"";
    m_bDesc_valueSet = false;
    m_Name = L"";
    m_bName_valueSet = false;
    m_State = EnumStateType::Values::k_null;
    m_bState_valueSet = false;
    m_Priority = 0;
    m_bPriority_valueSet = false;
    m_Category = EnumZoneCategoryType::Values::k_null;
    m_bCategory_valueSet = false;
    m_StaStart = 0.0;
    m_bStaStart_valueSet = false;
    m_StaEnd = 0.0;
    m_bStaEnd_valueSet = false;
    m_StartWidth = 0.0;
    m_bStartWidth_valueSet = false;
    m_StartVertValue = 0.0;
    m_bStartVertValue_valueSet = false;
    m_StartVertType = EnumZoneVertType::Values::k_null;
    m_bStartVertType_valueSet = false;
    m_EndWidth = 0.0;
    m_bEndWidth_valueSet = false;
    m_EndVertValue = 0.0;
    m_bEndVertValue_valueSet = false;
    m_EndVertType = EnumZoneVertType::Values::k_null;
    m_bEndVertType_valueSet = false;
}


template<class T>
ZoneTmpl<T>::~ZoneTmpl<T> ()
{
    if (m_ZoneWidth != NULL)
    {
        m_ZoneWidth->release();
        m_ZoneWidth = NULL;
    }
    if (m_ZoneSlope != NULL)
    {
        m_ZoneSlope->release();
        m_ZoneSlope = NULL;
    }
    if (m_ZoneCutFill != NULL)
    {
        m_ZoneCutFill->release();
        m_ZoneCutFill = NULL;
    }
    if (m_ZoneMaterial != NULL)
    {
        m_ZoneMaterial->release();
        m_ZoneMaterial = NULL;
    }
    if (m_ZoneCrossSectStructure != NULL)
    {
        m_ZoneCrossSectStructure->release();
        m_ZoneCrossSectStructure = NULL;
    }
    if (m_Feature != NULL)
    {
        m_Feature->release();
        m_Feature = NULL;
    }
}


template <class T>
bool ZoneTmpl<T>::getObjectId(const String*& pId) const
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
ValueObject* ZoneTmpl<T>::id() const
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
ZoneWidthCollection& ZoneTmpl<T>::ZoneWidth()
{
    return *m_ZoneWidth;
}

template <class T>
const ZoneWidthCollection& ZoneTmpl<T>::ZoneWidth() const
{
    return *m_ZoneWidth;
}

template <class T>
ZoneSlopeCollection& ZoneTmpl<T>::ZoneSlope()
{
    return *m_ZoneSlope;
}

template <class T>
const ZoneSlopeCollection& ZoneTmpl<T>::ZoneSlope() const
{
    return *m_ZoneSlope;
}

template <class T>
ZoneCutFillCollection& ZoneTmpl<T>::ZoneCutFill()
{
    return *m_ZoneCutFill;
}

template <class T>
const ZoneCutFillCollection& ZoneTmpl<T>::ZoneCutFill() const
{
    return *m_ZoneCutFill;
}

template <class T>
ZoneMaterialCollection& ZoneTmpl<T>::ZoneMaterial()
{
    return *m_ZoneMaterial;
}

template <class T>
const ZoneMaterialCollection& ZoneTmpl<T>::ZoneMaterial() const
{
    return *m_ZoneMaterial;
}

template <class T>
ZoneCrossSectStructureCollection& ZoneTmpl<T>::ZoneCrossSectStructure()
{
    return *m_ZoneCrossSectStructure;
}

template <class T>
const ZoneCrossSectStructureCollection& ZoneTmpl<T>::ZoneCrossSectStructure() const
{
    return *m_ZoneCrossSectStructure;
}

template <class T>
FeatureCollection& ZoneTmpl<T>::Feature()
{
    return *m_Feature;
}

template <class T>
const FeatureCollection& ZoneTmpl<T>::Feature() const
{
    return *m_Feature;
}



template <class T>
String ZoneTmpl<T>::getDesc() const
{
    return m_Desc;
}

template <class T>
void ZoneTmpl<T>::setDesc(String value)
{
    m_Desc = value;
    m_bDesc_valueSet = true;
}

template <class T>
bool ZoneTmpl<T>::hasValue_Desc() const
{
    return m_bDesc_valueSet;
}

template <class T>
void ZoneTmpl<T>::resetValue_Desc()
{
    m_bDesc_valueSet = false;
}


template <class T>
String ZoneTmpl<T>::getName() const
{
    return m_Name;
}

template <class T>
void ZoneTmpl<T>::setName(String value)
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
bool ZoneTmpl<T>::hasValue_Name() const
{
    return m_bName_valueSet;
}

template <class T>
void ZoneTmpl<T>::resetValue_Name()
{
    m_bName_valueSet = false;
}


template <class T>
EnumStateType::Values ZoneTmpl<T>::getState() const
{
    return m_State;
}

template <class T>
void ZoneTmpl<T>::setState(EnumStateType::Values value)
{
    m_State = value;
    m_bState_valueSet = true;
}

template <class T>
bool ZoneTmpl<T>::hasValue_State() const
{
    return m_bState_valueSet;
}

template <class T>
void ZoneTmpl<T>::resetValue_State()
{
    m_bState_valueSet = false;
}


template <class T>
int ZoneTmpl<T>::getPriority() const
{
    return m_Priority;
}

template <class T>
void ZoneTmpl<T>::setPriority(int value)
{
    m_Priority = value;
    m_bPriority_valueSet = true;
}

template <class T>
bool ZoneTmpl<T>::hasValue_Priority() const
{
    return m_bPriority_valueSet;
}

template <class T>
void ZoneTmpl<T>::resetValue_Priority()
{
    m_bPriority_valueSet = false;
}


template <class T>
EnumZoneCategoryType::Values ZoneTmpl<T>::getCategory() const
{
    return m_Category;
}

template <class T>
void ZoneTmpl<T>::setCategory(EnumZoneCategoryType::Values value)
{
    m_Category = value;
    m_bCategory_valueSet = true;
}

template <class T>
bool ZoneTmpl<T>::hasValue_Category() const
{
    return m_bCategory_valueSet;
}

template <class T>
void ZoneTmpl<T>::resetValue_Category()
{
    m_bCategory_valueSet = false;
}


template <class T>
double ZoneTmpl<T>::getStaStart() const
{
    return m_StaStart;
}

template <class T>
void ZoneTmpl<T>::setStaStart(double value)
{
    m_StaStart = value;
    m_bStaStart_valueSet = true;
}

template <class T>
bool ZoneTmpl<T>::hasValue_StaStart() const
{
    return m_bStaStart_valueSet;
}

template <class T>
void ZoneTmpl<T>::resetValue_StaStart()
{
    m_bStaStart_valueSet = false;
}


template <class T>
double ZoneTmpl<T>::getStaEnd() const
{
    return m_StaEnd;
}

template <class T>
void ZoneTmpl<T>::setStaEnd(double value)
{
    m_StaEnd = value;
    m_bStaEnd_valueSet = true;
}

template <class T>
bool ZoneTmpl<T>::hasValue_StaEnd() const
{
    return m_bStaEnd_valueSet;
}

template <class T>
void ZoneTmpl<T>::resetValue_StaEnd()
{
    m_bStaEnd_valueSet = false;
}


template <class T>
double ZoneTmpl<T>::getStartWidth() const
{
    return m_StartWidth;
}

template <class T>
void ZoneTmpl<T>::setStartWidth(double value)
{
    m_StartWidth = value;
    m_bStartWidth_valueSet = true;
}

template <class T>
bool ZoneTmpl<T>::hasValue_StartWidth() const
{
    return m_bStartWidth_valueSet;
}

template <class T>
void ZoneTmpl<T>::resetValue_StartWidth()
{
    m_bStartWidth_valueSet = false;
}


template <class T>
double ZoneTmpl<T>::getStartVertValue() const
{
    return m_StartVertValue;
}

template <class T>
void ZoneTmpl<T>::setStartVertValue(double value)
{
    m_StartVertValue = value;
    m_bStartVertValue_valueSet = true;
}

template <class T>
bool ZoneTmpl<T>::hasValue_StartVertValue() const
{
    return m_bStartVertValue_valueSet;
}

template <class T>
void ZoneTmpl<T>::resetValue_StartVertValue()
{
    m_bStartVertValue_valueSet = false;
}


template <class T>
EnumZoneVertType::Values ZoneTmpl<T>::getStartVertType() const
{
    return m_StartVertType;
}

template <class T>
void ZoneTmpl<T>::setStartVertType(EnumZoneVertType::Values value)
{
    m_StartVertType = value;
    m_bStartVertType_valueSet = true;
}

template <class T>
bool ZoneTmpl<T>::hasValue_StartVertType() const
{
    return m_bStartVertType_valueSet;
}

template <class T>
void ZoneTmpl<T>::resetValue_StartVertType()
{
    m_bStartVertType_valueSet = false;
}


template <class T>
double ZoneTmpl<T>::getEndWidth() const
{
    return m_EndWidth;
}

template <class T>
void ZoneTmpl<T>::setEndWidth(double value)
{
    m_EndWidth = value;
    m_bEndWidth_valueSet = true;
}

template <class T>
bool ZoneTmpl<T>::hasValue_EndWidth() const
{
    return m_bEndWidth_valueSet;
}

template <class T>
void ZoneTmpl<T>::resetValue_EndWidth()
{
    m_bEndWidth_valueSet = false;
}


template <class T>
double ZoneTmpl<T>::getEndVertValue() const
{
    return m_EndVertValue;
}

template <class T>
void ZoneTmpl<T>::setEndVertValue(double value)
{
    m_EndVertValue = value;
    m_bEndVertValue_valueSet = true;
}

template <class T>
bool ZoneTmpl<T>::hasValue_EndVertValue() const
{
    return m_bEndVertValue_valueSet;
}

template <class T>
void ZoneTmpl<T>::resetValue_EndVertValue()
{
    m_bEndVertValue_valueSet = false;
}


template <class T>
EnumZoneVertType::Values ZoneTmpl<T>::getEndVertType() const
{
    return m_EndVertType;
}

template <class T>
void ZoneTmpl<T>::setEndVertType(EnumZoneVertType::Values value)
{
    m_EndVertType = value;
    m_bEndVertType_valueSet = true;
}

template <class T>
bool ZoneTmpl<T>::hasValue_EndVertType() const
{
    return m_bEndVertType_valueSet;
}

template <class T>
void ZoneTmpl<T>::resetValue_EndVertType()
{
    m_bEndVertType_valueSet = false;
}



template <class T>
void ZoneTmpl<T>::toXml (IStream& stream)
{
    static const wchar_t* kstrElementName = L"Zone";
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
    if (m_bPriority_valueSet)
    {
        stream.write(L" priority=\"");
        IntegerObjectImpl::streamOut(m_Priority, stream);
        stream.write(L"\"");
    }
    if (m_bCategory_valueSet)
    {
        stream.write(L" category=\"");
        EnumZoneCategoryTypeImpl::streamOut(m_Category, stream);
        stream.write(L"\"");
    }
    if (m_bStaStart_valueSet)
    {
        stream.write(L" staStart=\"");
        DoubleObjectImpl::streamOut(m_StaStart, stream);
        stream.write(L"\"");
    }
    if (m_bStaEnd_valueSet)
    {
        stream.write(L" staEnd=\"");
        DoubleObjectImpl::streamOut(m_StaEnd, stream);
        stream.write(L"\"");
    }
    if (m_bStartWidth_valueSet)
    {
        stream.write(L" startWidth=\"");
        DoubleObjectImpl::streamOut(m_StartWidth, stream);
        stream.write(L"\"");
    }
    if (m_bStartVertValue_valueSet)
    {
        stream.write(L" startVertValue=\"");
        DoubleObjectImpl::streamOut(m_StartVertValue, stream);
        stream.write(L"\"");
    }
    if (m_bStartVertType_valueSet)
    {
        stream.write(L" startVertType=\"");
        EnumZoneVertTypeImpl::streamOut(m_StartVertType, stream);
        stream.write(L"\"");
    }
    if (m_bEndWidth_valueSet)
    {
        stream.write(L" endWidth=\"");
        DoubleObjectImpl::streamOut(m_EndWidth, stream);
        stream.write(L"\"");
    }
    if (m_bEndVertValue_valueSet)
    {
        stream.write(L" endVertValue=\"");
        DoubleObjectImpl::streamOut(m_EndVertValue, stream);
        stream.write(L"\"");
    }
    if (m_bEndVertType_valueSet)
    {
        stream.write(L" endVertType=\"");
        EnumZoneVertTypeImpl::streamOut(m_EndVertType, stream);
        stream.write(L"\"");
    }
    stream.write(L">");
    if (m_ZoneWidth)
    {
    	m_ZoneWidth->toXml(stream);
    }
    if (m_ZoneSlope)
    {
    	m_ZoneSlope->toXml(stream);
    }
    if (m_ZoneCutFill)
    {
    	m_ZoneCutFill->toXml(stream);
    }
    if (m_ZoneMaterial)
    {
    	m_ZoneMaterial->toXml(stream);
    }
    if (m_ZoneCrossSectStructure)
    {
    	m_ZoneCrossSectStructure->toXml(stream);
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
Object::ValidityEnum ZoneTmpl<T>::validate (IValidationEventSink* pEventSink) const
{
    Object::ValidityEnum returnCode = Object::kValid;
    returnCode = this->ObjectTmpl<T>::validate(pEventSink);
    if (m_ZoneWidth)
    {
        if (m_ZoneWidth->validate(pEventSink) != Object::kValid)
            returnCode = Object::kValidWithInvalidChildren;
    }
    if (m_ZoneSlope)
    {
        if (m_ZoneSlope->validate(pEventSink) != Object::kValid)
            returnCode = Object::kValidWithInvalidChildren;
    }
    if (m_ZoneCutFill)
    {
        if (m_ZoneCutFill->validate(pEventSink) != Object::kValid)
            returnCode = Object::kValidWithInvalidChildren;
    }
    if (m_ZoneMaterial)
    {
        if (m_ZoneMaterial->validate(pEventSink) != Object::kValid)
            returnCode = Object::kValidWithInvalidChildren;
    }
    if (m_ZoneCrossSectStructure)
    {
        if (m_ZoneCrossSectStructure->validate(pEventSink) != Object::kValid)
            returnCode = Object::kValidWithInvalidChildren;
    }
    if (m_Feature)
    {
        if (m_Feature->validate(pEventSink) != Object::kValid)
            returnCode = Object::kValidWithInvalidChildren;
    }
    if (!m_bPriority_valueSet)
    {
        pEventSink->onEvent(IValidationEventSink::EventCode::kRequiredValueNotSet, this, L"Priority", L"Required value not set");
        returnCode = Object::kInvalid;
    }
    if (!m_bCategory_valueSet)
    {
        pEventSink->onEvent(IValidationEventSink::EventCode::kRequiredValueNotSet, this, L"Category", L"Required value not set");
        returnCode = Object::kInvalid;
    }
    if (!m_bStaStart_valueSet)
    {
        pEventSink->onEvent(IValidationEventSink::EventCode::kRequiredValueNotSet, this, L"StaStart", L"Required value not set");
        returnCode = Object::kInvalid;
    }
    if (!m_bStartWidth_valueSet)
    {
        pEventSink->onEvent(IValidationEventSink::EventCode::kRequiredValueNotSet, this, L"StartWidth", L"Required value not set");
        returnCode = Object::kInvalid;
    }
    if (!m_bStartVertValue_valueSet)
    {
        pEventSink->onEvent(IValidationEventSink::EventCode::kRequiredValueNotSet, this, L"StartVertValue", L"Required value not set");
        returnCode = Object::kInvalid;
    }
    if (!m_bStartVertType_valueSet)
    {
        pEventSink->onEvent(IValidationEventSink::EventCode::kRequiredValueNotSet, this, L"StartVertType", L"Required value not set");
        returnCode = Object::kInvalid;
    }
    return returnCode;
}

}; // namespace : LX
