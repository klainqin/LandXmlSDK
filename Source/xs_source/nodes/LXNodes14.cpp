#include "stdafx.h"
#include "ObjectNode.h"
#include "CollectionNode.h"
#include "ValueNode.h"
#include "Exception.h"
#include "ValueTypeObjects.h"
#include "LXTypesImpl.h"
#include "LXNodes.h"
#include "InstrumentSetup.h"
#include "InstrumentPoint.h"
#include "BacksightCollection.h"
#include "TargetSetupCollection.h"
#include "RawObservationCollection.h"
#include "ObservationGroupCollection.h"
#include "ControlChecksCollection.h"
#include "FieldNoteCollection.h"
#include "FeatureCollection.h"
#include "SurfVolumes.h"
#include "SurfVolumeCollection.h"
#include "TurnSpeedCollection.h"
#include "POI.h"

namespace LX
{

InstrumentSetupNode::InstrumentSetupNode (Object* pObj)
    : ObjectNode (pObj)
{
    ILxNode* pVariant = NULL;
    m_pLxObj = dynamic_cast<InstrumentSetup*>(pObj);
    if (m_pLxObj == NULL)
        throw new Exception(Exception::Code::kFail, L"InstrumentSetupNode :: Invalid Object.");
    int nNumChildren = 15;
    m_arrChildren.reserve(nNumChildren);
    m_nNumChildren = 0;
    if (m_pLxObj->getInstrumentPoint())
        m_arrChildren.push_back(new InstrumentPointNode(m_pLxObj->getInstrumentPoint()));
    m_arrChildren.push_back(new BacksightCollectionNode(m_pLxObj->Backsight()));
    m_arrChildren.push_back(new TargetSetupCollectionNode(m_pLxObj->TargetSetup()));
    m_arrChildren.push_back(new RawObservationCollectionNode(m_pLxObj->RawObservation()));
    m_arrChildren.push_back(new ObservationGroupCollectionNode(m_pLxObj->ObservationGroup()));
    m_arrChildren.push_back(new ControlChecksCollectionNode(m_pLxObj->ControlChecks()));
    m_arrChildren.push_back(new FieldNoteCollectionNode(m_pLxObj->FieldNote()));
    m_arrChildren.push_back(new FeatureCollectionNode(m_pLxObj->Feature()));
    m_arrChildren.push_back(new ValueNode(this, L"Id", L"Id"));
    m_arrChildren.push_back(new ValueNode(this, L"InstrumentDetailsID", L"InstrumentDetailsID"));
    m_arrChildren.push_back(new ValueNode(this, L"StationName", L"StationName"));
    m_arrChildren.push_back(new ValueNode(this, L"InstrumentHeight", L"InstrumentHeight"));
    m_arrChildren.push_back(new ValueNode(this, L"OrientationAzimuth", L"OrientationAzimuth"));
    m_arrChildren.push_back(new ValueNode(this, L"CircleAzimuth", L"CircleAzimuth"));
    m_arrChildren.push_back(new ValueNode(this, L"Status", L"Status"));
}

bool InstrumentSetupNode::setValue (const String& strMemberName, const String* pstrValue)
{
    bool bValueSet = false;
    InstrumentSetup* pObject = dynamic_cast<InstrumentSetup*>(m_pObject);
    if (strMemberName == L"Id")
    {
        if (!pstrValue)
        {
            pObject->resetValue_Id();
        }
        else
        {
            pObject->setId(StringObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"InstrumentDetailsID")
    {
        if (!pstrValue)
        {
            pObject->resetValue_InstrumentDetailsID();
        }
        else
        {
            pObject->setInstrumentDetailsID(StringObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"StationName")
    {
        if (!pstrValue)
        {
            pObject->resetValue_StationName();
        }
        else
        {
            pObject->setStationName(StringObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"InstrumentHeight")
    {
        if (!pstrValue)
        {
            pObject->resetValue_InstrumentHeight();
        }
        else
        {
            pObject->setInstrumentHeight(DoubleObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"OrientationAzimuth")
    {
        if (!pstrValue)
        {
            pObject->resetValue_OrientationAzimuth();
        }
        else
        {
            pObject->setOrientationAzimuth(DoubleObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"CircleAzimuth")
    {
        if (!pstrValue)
        {
            pObject->resetValue_CircleAzimuth();
        }
        else
        {
            pObject->setCircleAzimuth(DoubleObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"Status")
    {
        if (!pstrValue)
        {
            pObject->resetValue_Status();
        }
        else
        {
            pObject->setStatus(EnumObservationStatusTypeImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    return bValueSet;
}

bool InstrumentSetupNode::getValue (const String& strMemberName, String& strValue)
{
    bool bValueSet = false;
    InstrumentSetup* pObject = dynamic_cast<InstrumentSetup*>(m_pObject);
    if (strMemberName == L"value")
    {
        ValueObject* pValueObj = dynamic_cast<ValueObject*>(m_pObject);
        if (pValueObj)
        {
            if (!pValueObj->isNothing())
            {
                strValue = pValueObj->toString();
                bValueSet = true;
            }
        }
    }
    else if (strMemberName == L"Id")
    {
        if (pObject->hasValue_Id())
        {
            strValue = (StringObjectImpl(pObject->getId())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"InstrumentDetailsID")
    {
        if (pObject->hasValue_InstrumentDetailsID())
        {
            strValue = (StringObjectImpl(pObject->getInstrumentDetailsID())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"StationName")
    {
        if (pObject->hasValue_StationName())
        {
            strValue = (StringObjectImpl(pObject->getStationName())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"InstrumentHeight")
    {
        if (pObject->hasValue_InstrumentHeight())
        {
            strValue = (DoubleObjectImpl(pObject->getInstrumentHeight())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"OrientationAzimuth")
    {
        if (pObject->hasValue_OrientationAzimuth())
        {
            strValue = (DoubleObjectImpl(pObject->getOrientationAzimuth())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"CircleAzimuth")
    {
        if (pObject->hasValue_CircleAzimuth())
        {
            strValue = (DoubleObjectImpl(pObject->getCircleAzimuth())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"Status")
    {
        if (pObject->hasValue_Status())
        {
            strValue = (EnumObservationStatusTypeImpl(pObject->getStatus())).toString();
            bValueSet = true;
        }
    }
    return bValueSet;
}

String InstrumentSetupNode::nodeName() const
{
    return L"InstrumentSetup";
}

SurfVolumesNode::SurfVolumesNode (Object* pObj)
    : ObjectNode (pObj)
{
    ILxNode* pVariant = NULL;
    m_pLxObj = dynamic_cast<SurfVolumes*>(pObj);
    if (m_pLxObj == NULL)
        throw new Exception(Exception::Code::kFail, L"SurfVolumesNode :: Invalid Object.");
    int nNumChildren = 5;
    m_arrChildren.reserve(nNumChildren);
    m_nNumChildren = 0;
    m_arrChildren.push_back(new SurfVolumeCollectionNode(m_pLxObj->SurfVolume()));
    m_arrChildren.push_back(new FeatureCollectionNode(m_pLxObj->Feature()));
    m_arrChildren.push_back(new ValueNode(this, L"Desc", L"Desc"));
    m_arrChildren.push_back(new ValueNode(this, L"Name", L"Name"));
    m_arrChildren.push_back(new ValueNode(this, L"SurfVolCalcMethod", L"SurfVolCalcMethod"));
}

bool SurfVolumesNode::setValue (const String& strMemberName, const String* pstrValue)
{
    bool bValueSet = false;
    SurfVolumes* pObject = dynamic_cast<SurfVolumes*>(m_pObject);
    if (strMemberName == L"Desc")
    {
        if (!pstrValue)
        {
            pObject->resetValue_Desc();
        }
        else
        {
            pObject->setDesc(StringObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"Name")
    {
        if (!pstrValue)
        {
            pObject->resetValue_Name();
        }
        else
        {
            pObject->setName(StringObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"SurfVolCalcMethod")
    {
        if (!pstrValue)
        {
            pObject->resetValue_SurfVolCalcMethod();
        }
        else
        {
            pObject->setSurfVolCalcMethod(EnumSurfVolCMethodTypeImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    return bValueSet;
}

bool SurfVolumesNode::getValue (const String& strMemberName, String& strValue)
{
    bool bValueSet = false;
    SurfVolumes* pObject = dynamic_cast<SurfVolumes*>(m_pObject);
    if (strMemberName == L"value")
    {
        ValueObject* pValueObj = dynamic_cast<ValueObject*>(m_pObject);
        if (pValueObj)
        {
            if (!pValueObj->isNothing())
            {
                strValue = pValueObj->toString();
                bValueSet = true;
            }
        }
    }
    else if (strMemberName == L"Desc")
    {
        if (pObject->hasValue_Desc())
        {
            strValue = (StringObjectImpl(pObject->getDesc())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"Name")
    {
        if (pObject->hasValue_Name())
        {
            strValue = (StringObjectImpl(pObject->getName())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"SurfVolCalcMethod")
    {
        if (pObject->hasValue_SurfVolCalcMethod())
        {
            strValue = (EnumSurfVolCMethodTypeImpl(pObject->getSurfVolCalcMethod())).toString();
            bValueSet = true;
        }
    }
    return bValueSet;
}

String SurfVolumesNode::nodeName() const
{
    return L"SurfVolumes";
}

TurnSpeedCollectionNode::TurnSpeedCollectionNode (Object& obj)
    : CollectionNode(&obj) 
{
    initialize(&obj);
}

TurnSpeedCollectionNode::TurnSpeedCollectionNode (Object* pObj)
    : CollectionNode (pObj) 
{
    initialize(pObj);
}

void TurnSpeedCollectionNode::initialize (Object* pObj)
{
    ILxNode* pVariant = NULL;
    m_pLxObj = dynamic_cast<TurnSpeedCollection*>(pObj);
    if (m_pLxObj == NULL)
        throw new Exception(Exception::Code::kFail, L"TurnSpeedCollectionNode :: Invalid Object.");
    int nNumChildren = m_pLxObj->count();
    m_arrChildren.reserve(nNumChildren);
    TurnSpeedCollectionIterator* pIterator = m_pLxObj->iterator();
    m_nNumChildren = 0;
    while (!pIterator->atEnd())
    {
        m_arrChildren.push_back(new TurnSpeedNode(pIterator->current()));
        pIterator->next();
    }
    pIterator->release();
}

String TurnSpeedCollectionNode::nodeName() const
{
    return L"TurnSpeedCollection";
}

ILxNode* TurnSpeedCollectionNode::findChild(const String& strChildId) const
{
    return NULL;
}
FeatureCollectionNode::FeatureCollectionNode (Object& obj)
    : CollectionNode(&obj) 
{
    initialize(&obj);
}

FeatureCollectionNode::FeatureCollectionNode (Object* pObj)
    : CollectionNode (pObj) 
{
    initialize(pObj);
}

void FeatureCollectionNode::initialize (Object* pObj)
{
    ILxNode* pVariant = NULL;
    m_pLxObj = dynamic_cast<FeatureCollection*>(pObj);
    if (m_pLxObj == NULL)
        throw new Exception(Exception::Code::kFail, L"FeatureCollectionNode :: Invalid Object.");
    int nNumChildren = m_pLxObj->count();
    m_arrChildren.reserve(nNumChildren);
    FeatureCollectionIterator* pIterator = m_pLxObj->iterator();
    m_nNumChildren = 0;
    while (!pIterator->atEnd())
    {
        m_arrChildren.push_back(new FeatureNode(pIterator->current()));
        pIterator->next();
    }
    pIterator->release();
}

String FeatureCollectionNode::nodeName() const
{
    return L"FeatureCollection";
}

ILxNode* FeatureCollectionNode::findChild(const String& strChildId) const
{
    // Grab string from child
    StringObjectImpl::Type idValue;
    ILxNode* pFoundNode = NULL;
    if (StringObjectImpl::parseString(strChildId.c_str(), strChildId.size(), idValue))
    {
        FeatureCollectionIterator* pFoundIter = m_pLxObj->find(idValue);
        if (pFoundIter)
        {
            Object* pFoundObj = pFoundIter->current();
            pFoundIter->release();
	         // Find the object in the child array
            for (unsigned int i = 0; i < m_arrChildren.size(); i++)
		     {
                if (pFoundObj == m_arrChildren[i]->getObject())
                {
                    pFoundNode = m_arrChildren[i];
			         break;
                }
            }
        }
    }
    return pFoundNode;
}
POINode::POINode (Object* pObj)
    : ObjectNode (pObj)
{
    ILxNode* pVariant = NULL;
    m_pLxObj = dynamic_cast<POI*>(pObj);
    if (m_pLxObj == NULL)
        throw new Exception(Exception::Code::kFail, L"POINode :: Invalid Object.");
    DoubleCollection* pValObj = dynamic_cast<DoubleCollection*>(m_pLxObj);
    int nNumChildren = 18;
    if (pValObj)
        nNumChildren += 1;
    m_arrChildren.reserve(nNumChildren);
    m_nNumChildren = 0;
    if (pValObj)
    {
        m_arrChildren.push_back(new ValueNode(this, L"value", L"value"));
    }
    m_arrChildren.push_back(new ValueNode(this, L"Name", L"Name"));
    m_arrChildren.push_back(new ValueNode(this, L"Desc", L"Desc"));
    m_arrChildren.push_back(new ValueNode(this, L"Code", L"Code"));
    m_arrChildren.push_back(new ValueNode(this, L"State", L"State"));
    m_arrChildren.push_back(new ValueNode(this, L"PntRef", L"PntRef"));
    m_arrChildren.push_back(new ValueNode(this, L"FeatureRef", L"FeatureRef"));
    m_arrChildren.push_back(new ValueNode(this, L"PointGeometry", L"PointGeometry"));
    m_arrChildren.push_back(new ValueNode(this, L"DTMAttribute", L"DTMAttribute"));
    m_arrChildren.push_back(new ValueNode(this, L"TimeStamp", L"TimeStamp"));
    m_arrChildren.push_back(new ValueNode(this, L"Role", L"Role"));
    m_arrChildren.push_back(new ValueNode(this, L"DeterminedTimeStamp", L"DeterminedTimeStamp"));
    m_arrChildren.push_back(new ValueNode(this, L"EllipsoidHeight", L"EllipsoidHeight"));
    m_arrChildren.push_back(new ValueNode(this, L"Latitude", L"Latitude"));
    m_arrChildren.push_back(new ValueNode(this, L"Longitude", L"Longitude"));
    m_arrChildren.push_back(new ValueNode(this, L"Zone", L"Zone"));
    m_arrChildren.push_back(new ValueNode(this, L"NorthingStdError", L"NorthingStdError"));
    m_arrChildren.push_back(new ValueNode(this, L"EastingStdError", L"EastingStdError"));
    m_arrChildren.push_back(new ValueNode(this, L"ElevationStdError", L"ElevationStdError"));
}

bool POINode::setValue (const String& strMemberName, const String* pstrValue)
{
    bool bValueSet = false;
    POI* pObject = dynamic_cast<POI*>(m_pObject);
    if (strMemberName == L"Name")
    {
        if (!pstrValue)
        {
            pObject->resetValue_Name();
        }
        else
        {
            pObject->setName(StringObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"Desc")
    {
        if (!pstrValue)
        {
            pObject->resetValue_Desc();
        }
        else
        {
            pObject->setDesc(StringObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"Code")
    {
        if (!pstrValue)
        {
            pObject->resetValue_Code();
        }
        else
        {
            pObject->setCode(StringObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"State")
    {
        if (!pstrValue)
        {
            pObject->resetValue_State();
        }
        else
        {
            pObject->setState(EnumStateTypeImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"PntRef")
    {
        if (!pstrValue)
        {
            pObject->resetValue_PntRef();
        }
        else
        {
            pObject->setPntRef(StringObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"FeatureRef")
    {
        if (!pstrValue)
        {
            pObject->resetValue_FeatureRef();
        }
        else
        {
            pObject->setFeatureRef(StringObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"PointGeometry")
    {
        if (!pstrValue)
        {
            pObject->resetValue_PointGeometry();
        }
        else
        {
            pObject->setPointGeometry(EnumPointGeometryTypeImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"DTMAttribute")
    {
        if (!pstrValue)
        {
            pObject->resetValue_DTMAttribute();
        }
        else
        {
            pObject->setDTMAttribute(EnumDTMAttributeTypeImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"TimeStamp")
    {
        if (!pstrValue)
        {
            pObject->resetValue_TimeStamp();
        }
        else
        {
            pObject->setTimeStamp(StringObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"Role")
    {
        if (!pstrValue)
        {
            pObject->resetValue_Role();
        }
        else
        {
            pObject->setRole(EnumSurveyRoleTypeImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"DeterminedTimeStamp")
    {
        if (!pstrValue)
        {
            pObject->resetValue_DeterminedTimeStamp();
        }
        else
        {
            pObject->setDeterminedTimeStamp(StringObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"EllipsoidHeight")
    {
        if (!pstrValue)
        {
            pObject->resetValue_EllipsoidHeight();
        }
        else
        {
            pObject->setEllipsoidHeight(DoubleObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"Latitude")
    {
        if (!pstrValue)
        {
            pObject->resetValue_Latitude();
        }
        else
        {
            pObject->setLatitude(DoubleObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"Longitude")
    {
        if (!pstrValue)
        {
            pObject->resetValue_Longitude();
        }
        else
        {
            pObject->setLongitude(DoubleObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"Zone")
    {
        if (!pstrValue)
        {
            pObject->resetValue_Zone();
        }
        else
        {
            pObject->setZone(StringObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"NorthingStdError")
    {
        if (!pstrValue)
        {
            pObject->resetValue_NorthingStdError();
        }
        else
        {
            pObject->setNorthingStdError(DoubleObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"EastingStdError")
    {
        if (!pstrValue)
        {
            pObject->resetValue_EastingStdError();
        }
        else
        {
            pObject->setEastingStdError(DoubleObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"ElevationStdError")
    {
        if (!pstrValue)
        {
            pObject->resetValue_ElevationStdError();
        }
        else
        {
            pObject->setElevationStdError(DoubleObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    return bValueSet;
}

bool POINode::getValue (const String& strMemberName, String& strValue)
{
    bool bValueSet = false;
    POI* pObject = dynamic_cast<POI*>(m_pObject);
    if (strMemberName == L"value")
    {
        ValueObject* pValueObj = dynamic_cast<ValueObject*>(m_pObject);
        if (pValueObj)
        {
            if (!pValueObj->isNothing())
            {
                strValue = pValueObj->toString();
                bValueSet = true;
            }
        }
    }
    else if (strMemberName == L"Name")
    {
        if (pObject->hasValue_Name())
        {
            strValue = (StringObjectImpl(pObject->getName())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"Desc")
    {
        if (pObject->hasValue_Desc())
        {
            strValue = (StringObjectImpl(pObject->getDesc())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"Code")
    {
        if (pObject->hasValue_Code())
        {
            strValue = (StringObjectImpl(pObject->getCode())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"State")
    {
        if (pObject->hasValue_State())
        {
            strValue = (EnumStateTypeImpl(pObject->getState())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"PntRef")
    {
        if (pObject->hasValue_PntRef())
        {
            strValue = (StringObjectImpl(pObject->getPntRef())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"FeatureRef")
    {
        if (pObject->hasValue_FeatureRef())
        {
            strValue = (StringObjectImpl(pObject->getFeatureRef())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"PointGeometry")
    {
        if (pObject->hasValue_PointGeometry())
        {
            strValue = (EnumPointGeometryTypeImpl(pObject->getPointGeometry())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"DTMAttribute")
    {
        if (pObject->hasValue_DTMAttribute())
        {
            strValue = (EnumDTMAttributeTypeImpl(pObject->getDTMAttribute())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"TimeStamp")
    {
        if (pObject->hasValue_TimeStamp())
        {
            strValue = (StringObjectImpl(pObject->getTimeStamp())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"Role")
    {
        if (pObject->hasValue_Role())
        {
            strValue = (EnumSurveyRoleTypeImpl(pObject->getRole())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"DeterminedTimeStamp")
    {
        if (pObject->hasValue_DeterminedTimeStamp())
        {
            strValue = (StringObjectImpl(pObject->getDeterminedTimeStamp())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"EllipsoidHeight")
    {
        if (pObject->hasValue_EllipsoidHeight())
        {
            strValue = (DoubleObjectImpl(pObject->getEllipsoidHeight())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"Latitude")
    {
        if (pObject->hasValue_Latitude())
        {
            strValue = (DoubleObjectImpl(pObject->getLatitude())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"Longitude")
    {
        if (pObject->hasValue_Longitude())
        {
            strValue = (DoubleObjectImpl(pObject->getLongitude())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"Zone")
    {
        if (pObject->hasValue_Zone())
        {
            strValue = (StringObjectImpl(pObject->getZone())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"NorthingStdError")
    {
        if (pObject->hasValue_NorthingStdError())
        {
            strValue = (DoubleObjectImpl(pObject->getNorthingStdError())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"EastingStdError")
    {
        if (pObject->hasValue_EastingStdError())
        {
            strValue = (DoubleObjectImpl(pObject->getEastingStdError())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"ElevationStdError")
    {
        if (pObject->hasValue_ElevationStdError())
        {
            strValue = (DoubleObjectImpl(pObject->getElevationStdError())).toString();
            bValueSet = true;
        }
    }
    return bValueSet;
}

String POINode::nodeName() const
{
    return L"POI";
}

}; // namespace : LX
