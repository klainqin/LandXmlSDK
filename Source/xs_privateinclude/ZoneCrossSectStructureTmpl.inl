#include "stdafx.h"
#include "LXTypes.h"
#include "ZoneCrossSectStructure.h"
#include "PntList2D.h"
#include "FeatureCollection.h"
#include "LXTypesTmpl.h"
#include "ZoneCrossSectStructureImpl.h"
#include "PntList2DImpl.h"
#include "FeatureCollectionImpl.h"
#include "LXTypesTmpl.inl"

namespace LX
{


template<class T>
ZoneCrossSectStructureTmpl<T>::ZoneCrossSectStructureTmpl (DocumentImpl* pDoc)
    : ObjectTmpl<T>(pDoc)
{
    m_PntList2D = NULL;
    m_Feature = createFeatureCollectionObject(pDoc);
    m_Name = L"";
    m_bName_valueSet = false;
    m_InnerConnectPnt = NULL;
    m_OuterConnectPnt = NULL;
    m_OffsetMode = EnumZoneOffsetType::Values::k_null;
    m_bOffsetMode_valueSet = false;
    m_StartOffset = 0.0;
    m_bStartOffset_valueSet = false;
    m_StartOffsetElev = 0.0;
    m_bStartOffsetElev_valueSet = false;
    m_EndOffset = 0.0;
    m_bEndOffset_valueSet = false;
    m_EndOffsetElev = 0.0;
    m_bEndOffsetElev_valueSet = false;
    m_Transition = EnumZoneTransitionType::Values::k_null;
    m_bTransition_valueSet = false;
    m_Placement = EnumZonePlacementType::Values::k_null;
    m_bPlacement_valueSet = false;
    m_CatalogReference = L"";
    m_bCatalogReference_valueSet = false;
}


template<class T>
ZoneCrossSectStructureTmpl<T>::~ZoneCrossSectStructureTmpl ()
{
    if (m_PntList2D != NULL)
    {
        m_PntList2D->release();
        m_PntList2D = NULL;
    }
    if (m_Feature != NULL)
    {
        m_Feature->release();
        m_Feature = NULL;
    }
    if (m_InnerConnectPnt != NULL)
    {
        m_InnerConnectPnt->release();
        m_InnerConnectPnt = NULL;
    }
    if (m_OuterConnectPnt != NULL)
    {
        m_OuterConnectPnt->release();
        m_OuterConnectPnt = NULL;
    }
}


template <class T>
bool ZoneCrossSectStructureTmpl<T>::getObjectId(const String*& pId) const
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
ValueObject* ZoneCrossSectStructureTmpl<T>::id() const
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
FeatureCollection& ZoneCrossSectStructureTmpl<T>::Feature()
{
    return *m_Feature;
}

template <class T>
const FeatureCollection& ZoneCrossSectStructureTmpl<T>::Feature() const
{
    return *m_Feature;
}


template <class T>
PntList2D* ZoneCrossSectStructureTmpl<T>::getPntList2D() const
{
    return m_PntList2D;
}

template <class T>
void ZoneCrossSectStructureTmpl<T>::setPntList2D(PntList2D* pValue)
{
    m_PntList2D = pValue;
}

template <class T>
DoubleCollection* ZoneCrossSectStructureTmpl<T>::getInnerConnectPnt() const
{
    return m_InnerConnectPnt;
}

template <class T>
void ZoneCrossSectStructureTmpl<T>::setInnerConnectPnt(DoubleCollection* pValue)
{
    m_InnerConnectPnt = pValue;
}

template <class T>
DoubleCollection* ZoneCrossSectStructureTmpl<T>::getOuterConnectPnt() const
{
    return m_OuterConnectPnt;
}

template <class T>
void ZoneCrossSectStructureTmpl<T>::setOuterConnectPnt(DoubleCollection* pValue)
{
    m_OuterConnectPnt = pValue;
}


template <class T>
String ZoneCrossSectStructureTmpl<T>::getName() const
{
    return m_Name;
}

template <class T>
void ZoneCrossSectStructureTmpl<T>::setName(String value)
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
bool ZoneCrossSectStructureTmpl<T>::hasValue_Name() const
{
    return m_bName_valueSet;
}

template <class T>
void ZoneCrossSectStructureTmpl<T>::resetValue_Name()
{
    m_bName_valueSet = false;
}


template <class T>
EnumZoneOffsetType::Values ZoneCrossSectStructureTmpl<T>::getOffsetMode() const
{
    return m_OffsetMode;
}

template <class T>
void ZoneCrossSectStructureTmpl<T>::setOffsetMode(EnumZoneOffsetType::Values value)
{
    m_OffsetMode = value;
    m_bOffsetMode_valueSet = true;
}

template <class T>
bool ZoneCrossSectStructureTmpl<T>::hasValue_OffsetMode() const
{
    return m_bOffsetMode_valueSet;
}

template <class T>
void ZoneCrossSectStructureTmpl<T>::resetValue_OffsetMode()
{
    m_bOffsetMode_valueSet = false;
}


template <class T>
double ZoneCrossSectStructureTmpl<T>::getStartOffset() const
{
    return m_StartOffset;
}

template <class T>
void ZoneCrossSectStructureTmpl<T>::setStartOffset(double value)
{
    m_StartOffset = value;
    m_bStartOffset_valueSet = true;
}

template <class T>
bool ZoneCrossSectStructureTmpl<T>::hasValue_StartOffset() const
{
    return m_bStartOffset_valueSet;
}

template <class T>
void ZoneCrossSectStructureTmpl<T>::resetValue_StartOffset()
{
    m_bStartOffset_valueSet = false;
}


template <class T>
double ZoneCrossSectStructureTmpl<T>::getStartOffsetElev() const
{
    return m_StartOffsetElev;
}

template <class T>
void ZoneCrossSectStructureTmpl<T>::setStartOffsetElev(double value)
{
    m_StartOffsetElev = value;
    m_bStartOffsetElev_valueSet = true;
}

template <class T>
bool ZoneCrossSectStructureTmpl<T>::hasValue_StartOffsetElev() const
{
    return m_bStartOffsetElev_valueSet;
}

template <class T>
void ZoneCrossSectStructureTmpl<T>::resetValue_StartOffsetElev()
{
    m_bStartOffsetElev_valueSet = false;
}


template <class T>
double ZoneCrossSectStructureTmpl<T>::getEndOffset() const
{
    return m_EndOffset;
}

template <class T>
void ZoneCrossSectStructureTmpl<T>::setEndOffset(double value)
{
    m_EndOffset = value;
    m_bEndOffset_valueSet = true;
}

template <class T>
bool ZoneCrossSectStructureTmpl<T>::hasValue_EndOffset() const
{
    return m_bEndOffset_valueSet;
}

template <class T>
void ZoneCrossSectStructureTmpl<T>::resetValue_EndOffset()
{
    m_bEndOffset_valueSet = false;
}


template <class T>
double ZoneCrossSectStructureTmpl<T>::getEndOffsetElev() const
{
    return m_EndOffsetElev;
}

template <class T>
void ZoneCrossSectStructureTmpl<T>::setEndOffsetElev(double value)
{
    m_EndOffsetElev = value;
    m_bEndOffsetElev_valueSet = true;
}

template <class T>
bool ZoneCrossSectStructureTmpl<T>::hasValue_EndOffsetElev() const
{
    return m_bEndOffsetElev_valueSet;
}

template <class T>
void ZoneCrossSectStructureTmpl<T>::resetValue_EndOffsetElev()
{
    m_bEndOffsetElev_valueSet = false;
}


template <class T>
EnumZoneTransitionType::Values ZoneCrossSectStructureTmpl<T>::getTransition() const
{
    return m_Transition;
}

template <class T>
void ZoneCrossSectStructureTmpl<T>::setTransition(EnumZoneTransitionType::Values value)
{
    m_Transition = value;
    m_bTransition_valueSet = true;
}

template <class T>
bool ZoneCrossSectStructureTmpl<T>::hasValue_Transition() const
{
    return m_bTransition_valueSet;
}

template <class T>
void ZoneCrossSectStructureTmpl<T>::resetValue_Transition()
{
    m_bTransition_valueSet = false;
}


template <class T>
EnumZonePlacementType::Values ZoneCrossSectStructureTmpl<T>::getPlacement() const
{
    return m_Placement;
}

template <class T>
void ZoneCrossSectStructureTmpl<T>::setPlacement(EnumZonePlacementType::Values value)
{
    m_Placement = value;
    m_bPlacement_valueSet = true;
}

template <class T>
bool ZoneCrossSectStructureTmpl<T>::hasValue_Placement() const
{
    return m_bPlacement_valueSet;
}

template <class T>
void ZoneCrossSectStructureTmpl<T>::resetValue_Placement()
{
    m_bPlacement_valueSet = false;
}


template <class T>
String ZoneCrossSectStructureTmpl<T>::getCatalogReference() const
{
    return m_CatalogReference;
}

template <class T>
void ZoneCrossSectStructureTmpl<T>::setCatalogReference(String value)
{
    m_CatalogReference = value;
    m_bCatalogReference_valueSet = true;
}

template <class T>
bool ZoneCrossSectStructureTmpl<T>::hasValue_CatalogReference() const
{
    return m_bCatalogReference_valueSet;
}

template <class T>
void ZoneCrossSectStructureTmpl<T>::resetValue_CatalogReference()
{
    m_bCatalogReference_valueSet = false;
}



template <class T>
void ZoneCrossSectStructureTmpl<T>::toXml (IStream& stream)
{
    static const wchar_t* kstrElementName = L"ZoneCrossSectStructure";
    stream.write(L"<");
    stream.write(kstrElementName);
    if (m_bName_valueSet)
    {
        stream.write(L" name=\"");
        StringObjectImpl::streamOut(m_Name, stream);
        stream.write(L"\"");
    }
    if (m_InnerConnectPnt)
    {
        stream.write(L" innerConnectPnt=\"");
        DoubleCollectionImpl::streamOut(m_InnerConnectPnt, stream);
        stream.write(L"\"");
    }
    if (m_OuterConnectPnt)
    {
        stream.write(L" outerConnectPnt=\"");
        DoubleCollectionImpl::streamOut(m_OuterConnectPnt, stream);
        stream.write(L"\"");
    }
    if (m_bOffsetMode_valueSet)
    {
        stream.write(L" offsetMode=\"");
        EnumZoneOffsetTypeImpl::streamOut(m_OffsetMode, stream);
        stream.write(L"\"");
    }
    if (m_bStartOffset_valueSet)
    {
        stream.write(L" startOffset=\"");
        DoubleObjectImpl::streamOut(m_StartOffset, stream);
        stream.write(L"\"");
    }
    if (m_bStartOffsetElev_valueSet)
    {
        stream.write(L" startOffsetElev=\"");
        DoubleObjectImpl::streamOut(m_StartOffsetElev, stream);
        stream.write(L"\"");
    }
    if (m_bEndOffset_valueSet)
    {
        stream.write(L" endOffset=\"");
        DoubleObjectImpl::streamOut(m_EndOffset, stream);
        stream.write(L"\"");
    }
    if (m_bEndOffsetElev_valueSet)
    {
        stream.write(L" endOffsetElev=\"");
        DoubleObjectImpl::streamOut(m_EndOffsetElev, stream);
        stream.write(L"\"");
    }
    if (m_bTransition_valueSet)
    {
        stream.write(L" transition=\"");
        EnumZoneTransitionTypeImpl::streamOut(m_Transition, stream);
        stream.write(L"\"");
    }
    if (m_bPlacement_valueSet)
    {
        stream.write(L" placement=\"");
        EnumZonePlacementTypeImpl::streamOut(m_Placement, stream);
        stream.write(L"\"");
    }
    if (m_bCatalogReference_valueSet)
    {
        stream.write(L" catalogReference=\"");
        StringObjectImpl::streamOut(m_CatalogReference, stream);
        stream.write(L"\"");
    }
    stream.write(L">");
    if (m_PntList2D)
    {
    	m_PntList2D->toXml(stream);
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
Object::ValidityEnum ZoneCrossSectStructureTmpl<T>::validate (IValidationEventSink* pEventSink) const
{
    Object::ValidityEnum returnCode = Object::kValid;
    returnCode = this->ObjectTmpl<T>::validate(pEventSink);
    if (m_PntList2D)
    {
        if (m_PntList2D->validate(pEventSink) != Object::kValid)
            returnCode = Object::kValidWithInvalidChildren;
    }
    if (m_Feature)
    {
        if (m_Feature->validate(pEventSink) != Object::kValid)
            returnCode = Object::kValidWithInvalidChildren;
    }
    if (!m_InnerConnectPnt)
    {
        pEventSink->onEvent(IValidationEventSink::EventCode::kRequiredObjectNotSet, this, L"InnerConnectPnt", L"Required object not set");
        returnCode = Object::kInvalid;
    }
    if (!m_OuterConnectPnt)
    {
        pEventSink->onEvent(IValidationEventSink::EventCode::kRequiredObjectNotSet, this, L"OuterConnectPnt", L"Required object not set");
        returnCode = Object::kInvalid;
    }
    return returnCode;
}

}; // namespace : LX
