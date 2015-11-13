#include "stdafx.h"
#include "LXTypes.h"
#include "Roadway.h"
#include "ClassificationCollection.h"
#include "LanesCollection.h"
#include "RoadsideCollection.h"
#include "SpeedsCollection.h"
#include "NoPassingZoneCollection.h"
#include "TrafficVolumeCollection.h"
#include "CrashDataCollection.h"
#include "DecisionSightDistanceCollection.h"
#include "BridgeElementCollection.h"
#include "PlanFeatureCollection.h"
#include "FeatureCollection.h"
#include "LXTypesTmpl.h"
#include "RoadwayImpl.h"
#include "ClassificationCollectionImpl.h"
#include "LanesCollectionImpl.h"
#include "RoadsideCollectionImpl.h"
#include "SpeedsCollectionImpl.h"
#include "NoPassingZoneCollectionImpl.h"
#include "TrafficVolumeCollectionImpl.h"
#include "CrashDataCollectionImpl.h"
#include "DecisionSightDistanceCollectionImpl.h"
#include "BridgeElementCollectionImpl.h"
#include "PlanFeatureCollectionImpl.h"
#include "FeatureCollectionImpl.h"
#include "LXTypesTmpl.inl"

namespace LX
{


template<class T>
RoadwayTmpl<T>::RoadwayTmpl<T> (DocumentImpl* pDoc)
    : ObjectTmpl<T>(pDoc)
{
    m_Classification = createClassificationCollectionObject(pDoc);
    m_Lanes = createLanesCollectionObject(pDoc);
    m_Roadside = createRoadsideCollectionObject(pDoc);
    m_Speeds = createSpeedsCollectionObject(pDoc);
    m_NoPassingZone = createNoPassingZoneCollectionObject(pDoc);
    m_TrafficVolume = createTrafficVolumeCollectionObject(pDoc);
    m_CrashData = createCrashDataCollectionObject(pDoc);
    m_DecisionSightDistance = createDecisionSightDistanceCollectionObject(pDoc);
    m_BridgeElement = createBridgeElementCollectionObject(pDoc);
    m_PlanFeature = createPlanFeatureCollectionObject(pDoc);
    m_Feature = createFeatureCollectionObject(pDoc);
    m_Name = L"";
    m_bName_valueSet = false;
    m_AlignmentRefs = NULL;
    m_SurfaceRefs = NULL;
    m_GradeModelRefs = NULL;
    m_StaStart = 0.0;
    m_bStaStart_valueSet = false;
    m_StaEnd = 0.0;
    m_bStaEnd_valueSet = false;
    m_Desc = L"";
    m_bDesc_valueSet = false;
    m_RoadTerrain = EnumRoadTerrainType::Values::k_null;
    m_bRoadTerrain_valueSet = false;
    m_State = EnumStateType::Values::k_null;
    m_bState_valueSet = false;
}


template<class T>
RoadwayTmpl<T>::~RoadwayTmpl<T> ()
{
    if (m_Classification != NULL)
    {
        m_Classification->release();
        m_Classification = NULL;
    }
    if (m_Lanes != NULL)
    {
        m_Lanes->release();
        m_Lanes = NULL;
    }
    if (m_Roadside != NULL)
    {
        m_Roadside->release();
        m_Roadside = NULL;
    }
    if (m_Speeds != NULL)
    {
        m_Speeds->release();
        m_Speeds = NULL;
    }
    if (m_NoPassingZone != NULL)
    {
        m_NoPassingZone->release();
        m_NoPassingZone = NULL;
    }
    if (m_TrafficVolume != NULL)
    {
        m_TrafficVolume->release();
        m_TrafficVolume = NULL;
    }
    if (m_CrashData != NULL)
    {
        m_CrashData->release();
        m_CrashData = NULL;
    }
    if (m_DecisionSightDistance != NULL)
    {
        m_DecisionSightDistance->release();
        m_DecisionSightDistance = NULL;
    }
    if (m_BridgeElement != NULL)
    {
        m_BridgeElement->release();
        m_BridgeElement = NULL;
    }
    if (m_PlanFeature != NULL)
    {
        m_PlanFeature->release();
        m_PlanFeature = NULL;
    }
    if (m_Feature != NULL)
    {
        m_Feature->release();
        m_Feature = NULL;
    }
    if (m_AlignmentRefs != NULL)
    {
        m_AlignmentRefs->release();
        m_AlignmentRefs = NULL;
    }
    if (m_SurfaceRefs != NULL)
    {
        m_SurfaceRefs->release();
        m_SurfaceRefs = NULL;
    }
    if (m_GradeModelRefs != NULL)
    {
        m_GradeModelRefs->release();
        m_GradeModelRefs = NULL;
    }
}


template <class T>
bool RoadwayTmpl<T>::getObjectId(const String*& pId) const
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
ValueObject* RoadwayTmpl<T>::id() const
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
ClassificationCollection& RoadwayTmpl<T>::Classification()
{
    return *m_Classification;
}

template <class T>
const ClassificationCollection& RoadwayTmpl<T>::Classification() const
{
    return *m_Classification;
}

template <class T>
LanesCollection& RoadwayTmpl<T>::Lanes()
{
    return *m_Lanes;
}

template <class T>
const LanesCollection& RoadwayTmpl<T>::Lanes() const
{
    return *m_Lanes;
}

template <class T>
RoadsideCollection& RoadwayTmpl<T>::Roadside()
{
    return *m_Roadside;
}

template <class T>
const RoadsideCollection& RoadwayTmpl<T>::Roadside() const
{
    return *m_Roadside;
}

template <class T>
SpeedsCollection& RoadwayTmpl<T>::Speeds()
{
    return *m_Speeds;
}

template <class T>
const SpeedsCollection& RoadwayTmpl<T>::Speeds() const
{
    return *m_Speeds;
}

template <class T>
NoPassingZoneCollection& RoadwayTmpl<T>::NoPassingZone()
{
    return *m_NoPassingZone;
}

template <class T>
const NoPassingZoneCollection& RoadwayTmpl<T>::NoPassingZone() const
{
    return *m_NoPassingZone;
}

template <class T>
TrafficVolumeCollection& RoadwayTmpl<T>::TrafficVolume()
{
    return *m_TrafficVolume;
}

template <class T>
const TrafficVolumeCollection& RoadwayTmpl<T>::TrafficVolume() const
{
    return *m_TrafficVolume;
}

template <class T>
CrashDataCollection& RoadwayTmpl<T>::CrashData()
{
    return *m_CrashData;
}

template <class T>
const CrashDataCollection& RoadwayTmpl<T>::CrashData() const
{
    return *m_CrashData;
}

template <class T>
DecisionSightDistanceCollection& RoadwayTmpl<T>::DecisionSightDistance()
{
    return *m_DecisionSightDistance;
}

template <class T>
const DecisionSightDistanceCollection& RoadwayTmpl<T>::DecisionSightDistance() const
{
    return *m_DecisionSightDistance;
}

template <class T>
BridgeElementCollection& RoadwayTmpl<T>::BridgeElement()
{
    return *m_BridgeElement;
}

template <class T>
const BridgeElementCollection& RoadwayTmpl<T>::BridgeElement() const
{
    return *m_BridgeElement;
}

template <class T>
PlanFeatureCollection& RoadwayTmpl<T>::PlanFeature()
{
    return *m_PlanFeature;
}

template <class T>
const PlanFeatureCollection& RoadwayTmpl<T>::PlanFeature() const
{
    return *m_PlanFeature;
}

template <class T>
FeatureCollection& RoadwayTmpl<T>::Feature()
{
    return *m_Feature;
}

template <class T>
const FeatureCollection& RoadwayTmpl<T>::Feature() const
{
    return *m_Feature;
}


template <class T>
StringCollection* RoadwayTmpl<T>::getAlignmentRefs() const
{
    return m_AlignmentRefs;
}

template <class T>
void RoadwayTmpl<T>::setAlignmentRefs(StringCollection* pValue)
{
    m_AlignmentRefs = pValue;
}

template <class T>
StringCollection* RoadwayTmpl<T>::getSurfaceRefs() const
{
    return m_SurfaceRefs;
}

template <class T>
void RoadwayTmpl<T>::setSurfaceRefs(StringCollection* pValue)
{
    m_SurfaceRefs = pValue;
}

template <class T>
StringCollection* RoadwayTmpl<T>::getGradeModelRefs() const
{
    return m_GradeModelRefs;
}

template <class T>
void RoadwayTmpl<T>::setGradeModelRefs(StringCollection* pValue)
{
    m_GradeModelRefs = pValue;
}


template <class T>
String RoadwayTmpl<T>::getName() const
{
    return m_Name;
}

template <class T>
void RoadwayTmpl<T>::setName(String value)
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
bool RoadwayTmpl<T>::hasValue_Name() const
{
    return m_bName_valueSet;
}

template <class T>
void RoadwayTmpl<T>::resetValue_Name()
{
    m_bName_valueSet = false;
}


template <class T>
double RoadwayTmpl<T>::getStaStart() const
{
    return m_StaStart;
}

template <class T>
void RoadwayTmpl<T>::setStaStart(double value)
{
    m_StaStart = value;
    m_bStaStart_valueSet = true;
}

template <class T>
bool RoadwayTmpl<T>::hasValue_StaStart() const
{
    return m_bStaStart_valueSet;
}

template <class T>
void RoadwayTmpl<T>::resetValue_StaStart()
{
    m_bStaStart_valueSet = false;
}


template <class T>
double RoadwayTmpl<T>::getStaEnd() const
{
    return m_StaEnd;
}

template <class T>
void RoadwayTmpl<T>::setStaEnd(double value)
{
    m_StaEnd = value;
    m_bStaEnd_valueSet = true;
}

template <class T>
bool RoadwayTmpl<T>::hasValue_StaEnd() const
{
    return m_bStaEnd_valueSet;
}

template <class T>
void RoadwayTmpl<T>::resetValue_StaEnd()
{
    m_bStaEnd_valueSet = false;
}


template <class T>
String RoadwayTmpl<T>::getDesc() const
{
    return m_Desc;
}

template <class T>
void RoadwayTmpl<T>::setDesc(String value)
{
    m_Desc = value;
    m_bDesc_valueSet = true;
}

template <class T>
bool RoadwayTmpl<T>::hasValue_Desc() const
{
    return m_bDesc_valueSet;
}

template <class T>
void RoadwayTmpl<T>::resetValue_Desc()
{
    m_bDesc_valueSet = false;
}


template <class T>
EnumRoadTerrainType::Values RoadwayTmpl<T>::getRoadTerrain() const
{
    return m_RoadTerrain;
}

template <class T>
void RoadwayTmpl<T>::setRoadTerrain(EnumRoadTerrainType::Values value)
{
    m_RoadTerrain = value;
    m_bRoadTerrain_valueSet = true;
}

template <class T>
bool RoadwayTmpl<T>::hasValue_RoadTerrain() const
{
    return m_bRoadTerrain_valueSet;
}

template <class T>
void RoadwayTmpl<T>::resetValue_RoadTerrain()
{
    m_bRoadTerrain_valueSet = false;
}


template <class T>
EnumStateType::Values RoadwayTmpl<T>::getState() const
{
    return m_State;
}

template <class T>
void RoadwayTmpl<T>::setState(EnumStateType::Values value)
{
    m_State = value;
    m_bState_valueSet = true;
}

template <class T>
bool RoadwayTmpl<T>::hasValue_State() const
{
    return m_bState_valueSet;
}

template <class T>
void RoadwayTmpl<T>::resetValue_State()
{
    m_bState_valueSet = false;
}



template <class T>
void RoadwayTmpl<T>::toXml (IStream& stream)
{
    static const wchar_t* kstrElementName = L"Roadway";
    stream.write(L"<");
    stream.write(kstrElementName);
    if (m_bName_valueSet)
    {
        stream.write(L" name=\"");
        StringObjectImpl::streamOut(m_Name, stream);
        stream.write(L"\"");
    }
    if (m_AlignmentRefs)
    {
        stream.write(L" alignmentRefs=\"");
        StringCollectionImpl::streamOut(m_AlignmentRefs, stream);
        stream.write(L"\"");
    }
    if (m_SurfaceRefs)
    {
        stream.write(L" surfaceRefs=\"");
        StringCollectionImpl::streamOut(m_SurfaceRefs, stream);
        stream.write(L"\"");
    }
    if (m_GradeModelRefs)
    {
        stream.write(L" gradeModelRefs=\"");
        StringCollectionImpl::streamOut(m_GradeModelRefs, stream);
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
    if (m_bDesc_valueSet)
    {
        stream.write(L" desc=\"");
        StringObjectImpl::streamOut(m_Desc, stream);
        stream.write(L"\"");
    }
    if (m_bRoadTerrain_valueSet)
    {
        stream.write(L" roadTerrain=\"");
        EnumRoadTerrainTypeImpl::streamOut(m_RoadTerrain, stream);
        stream.write(L"\"");
    }
    if (m_bState_valueSet)
    {
        stream.write(L" state=\"");
        EnumStateTypeImpl::streamOut(m_State, stream);
        stream.write(L"\"");
    }
    stream.write(L">");
    if (m_Classification)
    {
    	m_Classification->toXml(stream);
    }
    if (m_Lanes)
    {
    	m_Lanes->toXml(stream);
    }
    if (m_Roadside)
    {
    	m_Roadside->toXml(stream);
    }
    if (m_Speeds)
    {
    	m_Speeds->toXml(stream);
    }
    if (m_NoPassingZone)
    {
    	m_NoPassingZone->toXml(stream);
    }
    if (m_TrafficVolume)
    {
    	m_TrafficVolume->toXml(stream);
    }
    if (m_CrashData)
    {
    	m_CrashData->toXml(stream);
    }
    if (m_DecisionSightDistance)
    {
    	m_DecisionSightDistance->toXml(stream);
    }
    if (m_BridgeElement)
    {
    	m_BridgeElement->toXml(stream);
    }
    if (m_PlanFeature)
    {
    	m_PlanFeature->toXml(stream);
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
Object::ValidityEnum RoadwayTmpl<T>::validate (IValidationEventSink* pEventSink) const
{
    Object::ValidityEnum returnCode = Object::kValid;
    returnCode = this->ObjectTmpl<T>::validate(pEventSink);
    if (m_Classification)
    {
        if (m_Classification->validate(pEventSink) != Object::kValid)
            returnCode = Object::kValidWithInvalidChildren;
    }
    if (m_Lanes)
    {
        if (m_Lanes->validate(pEventSink) != Object::kValid)
            returnCode = Object::kValidWithInvalidChildren;
    }
    if (m_Roadside)
    {
        if (m_Roadside->validate(pEventSink) != Object::kValid)
            returnCode = Object::kValidWithInvalidChildren;
    }
    if (m_Speeds)
    {
        if (m_Speeds->validate(pEventSink) != Object::kValid)
            returnCode = Object::kValidWithInvalidChildren;
    }
    if (m_NoPassingZone)
    {
        if (m_NoPassingZone->validate(pEventSink) != Object::kValid)
            returnCode = Object::kValidWithInvalidChildren;
    }
    if (m_TrafficVolume)
    {
        if (m_TrafficVolume->validate(pEventSink) != Object::kValid)
            returnCode = Object::kValidWithInvalidChildren;
    }
    if (m_CrashData)
    {
        if (m_CrashData->validate(pEventSink) != Object::kValid)
            returnCode = Object::kValidWithInvalidChildren;
    }
    if (m_DecisionSightDistance)
    {
        if (m_DecisionSightDistance->validate(pEventSink) != Object::kValid)
            returnCode = Object::kValidWithInvalidChildren;
    }
    if (m_BridgeElement)
    {
        if (m_BridgeElement->validate(pEventSink) != Object::kValid)
            returnCode = Object::kValidWithInvalidChildren;
    }
    if (m_PlanFeature)
    {
        if (m_PlanFeature->validate(pEventSink) != Object::kValid)
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
    if (!m_AlignmentRefs)
    {
        pEventSink->onEvent(IValidationEventSink::EventCode::kRequiredObjectNotSet, this, L"AlignmentRefs", L"Required object not set");
        returnCode = Object::kInvalid;
    }
    return returnCode;
}

}; // namespace : LX
