#include "stdafx.h"
#include "ObjectNode.h"
#include "CollectionNode.h"
#include "ValueNode.h"
#include "Exception.h"
#include "ValueTypeObjects.h"
#include "LXTypesImpl.h"
#include "LXNodes.h"
#include "TurnRestrictionCollection.h"
#include "WideningLane.h"
#include "ReducedObservation.h"
#include "TargetPoint.h"
#include "OffsetVals.h"
#include "FieldNoteCollection.h"
#include "FeatureCollection.h"
#include "ZoneMaterialCollection.h"
#include "WideningLaneCollection.h"

namespace LX
{

TurnRestrictionCollectionNode::TurnRestrictionCollectionNode (Object& obj)
    : CollectionNode(&obj) 
{
    initialize(&obj);
}

TurnRestrictionCollectionNode::TurnRestrictionCollectionNode (Object* pObj)
    : CollectionNode (pObj) 
{
    initialize(pObj);
}

void TurnRestrictionCollectionNode::initialize (Object* pObj)
{
    ILxNode* pVariant = NULL;
    m_pLxObj = dynamic_cast<TurnRestrictionCollection*>(pObj);
    if (m_pLxObj == NULL)
        throw new Exception(Exception::Code::kFail, L"TurnRestrictionCollectionNode :: Invalid Object.");
    int nNumChildren = m_pLxObj->count();
    m_arrChildren.reserve(nNumChildren);
    TurnRestrictionCollectionIterator* pIterator = m_pLxObj->iterator();
    m_nNumChildren = 0;
    while (!pIterator->atEnd())
    {
        m_arrChildren.push_back(new TurnRestrictionNode(pIterator->current()));
        pIterator->next();
    }
    pIterator->release();
}

String TurnRestrictionCollectionNode::nodeName() const
{
    return L"TurnRestrictionCollection";
}

ILxNode* TurnRestrictionCollectionNode::findChild(const String& strChildId) const
{
    return NULL;
}
WideningLaneNode::WideningLaneNode (Object* pObj)
    : ObjectNode (pObj)
{
    ILxNode* pVariant = NULL;
    m_pLxObj = dynamic_cast<WideningLane*>(pObj);
    if (m_pLxObj == NULL)
        throw new Exception(Exception::Code::kFail, L"WideningLaneNode :: Invalid Object.");
    int nNumChildren = 8;
    m_arrChildren.reserve(nNumChildren);
    m_nNumChildren = 0;
    m_arrChildren.push_back(new ValueNode(this, L"StaStart", L"StaStart"));
    m_arrChildren.push_back(new ValueNode(this, L"StaEnd", L"StaEnd"));
    m_arrChildren.push_back(new ValueNode(this, L"BeginFullWidthSta", L"BeginFullWidthSta"));
    m_arrChildren.push_back(new ValueNode(this, L"EndFullWidthSta", L"EndFullWidthSta"));
    m_arrChildren.push_back(new ValueNode(this, L"Offset", L"Offset"));
    m_arrChildren.push_back(new ValueNode(this, L"Widening", L"Widening"));
    m_arrChildren.push_back(new ValueNode(this, L"Width", L"Width"));
    m_arrChildren.push_back(new ValueNode(this, L"SideofRoad", L"SideofRoad"));
}

bool WideningLaneNode::setValue (const String& strMemberName, const String* pstrValue)
{
    bool bValueSet = false;
    WideningLane* pObject = dynamic_cast<WideningLane*>(m_pObject);
    if (strMemberName == L"StaStart")
    {
        if (!pstrValue)
        {
            pObject->resetValue_StaStart();
        }
        else
        {
            pObject->setStaStart(DoubleObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"StaEnd")
    {
        if (!pstrValue)
        {
            pObject->resetValue_StaEnd();
        }
        else
        {
            pObject->setStaEnd(DoubleObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"BeginFullWidthSta")
    {
        if (!pstrValue)
        {
            pObject->resetValue_BeginFullWidthSta();
        }
        else
        {
            pObject->setBeginFullWidthSta(DoubleObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"EndFullWidthSta")
    {
        if (!pstrValue)
        {
            pObject->resetValue_EndFullWidthSta();
        }
        else
        {
            pObject->setEndFullWidthSta(DoubleObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"Offset")
    {
        if (!pstrValue)
        {
            pObject->resetValue_Offset();
        }
        else
        {
            pObject->setOffset(DoubleObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"Widening")
    {
        if (!pstrValue)
        {
            pObject->resetValue_Widening();
        }
        else
        {
            pObject->setWidening(DoubleObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"Width")
    {
        if (!pstrValue)
        {
            pObject->resetValue_Width();
        }
        else
        {
            pObject->setWidth(DoubleObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"SideofRoad")
    {
        if (!pstrValue)
        {
            pObject->resetValue_SideofRoad();
        }
        else
        {
            pObject->setSideofRoad(EnumSideofRoadTypeImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    return bValueSet;
}

bool WideningLaneNode::getValue (const String& strMemberName, String& strValue)
{
    bool bValueSet = false;
    WideningLane* pObject = dynamic_cast<WideningLane*>(m_pObject);
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
    else if (strMemberName == L"StaStart")
    {
        if (pObject->hasValue_StaStart())
        {
            strValue = (DoubleObjectImpl(pObject->getStaStart())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"StaEnd")
    {
        if (pObject->hasValue_StaEnd())
        {
            strValue = (DoubleObjectImpl(pObject->getStaEnd())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"BeginFullWidthSta")
    {
        if (pObject->hasValue_BeginFullWidthSta())
        {
            strValue = (DoubleObjectImpl(pObject->getBeginFullWidthSta())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"EndFullWidthSta")
    {
        if (pObject->hasValue_EndFullWidthSta())
        {
            strValue = (DoubleObjectImpl(pObject->getEndFullWidthSta())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"Offset")
    {
        if (pObject->hasValue_Offset())
        {
            strValue = (DoubleObjectImpl(pObject->getOffset())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"Widening")
    {
        if (pObject->hasValue_Widening())
        {
            strValue = (DoubleObjectImpl(pObject->getWidening())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"Width")
    {
        if (pObject->hasValue_Width())
        {
            strValue = (DoubleObjectImpl(pObject->getWidth())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"SideofRoad")
    {
        if (pObject->hasValue_SideofRoad())
        {
            strValue = (EnumSideofRoadTypeImpl(pObject->getSideofRoad())).toString();
            bValueSet = true;
        }
    }
    return bValueSet;
}

String WideningLaneNode::nodeName() const
{
    return L"WideningLane";
}

ReducedObservationNode::ReducedObservationNode (Object* pObj)
    : ObjectNode (pObj)
{
    ILxNode* pVariant = NULL;
    m_pLxObj = dynamic_cast<ReducedObservation*>(pObj);
    if (m_pLxObj == NULL)
        throw new Exception(Exception::Code::kFail, L"ReducedObservationNode :: Invalid Object.");
    int nNumChildren = 42;
    m_arrChildren.reserve(nNumChildren);
    m_nNumChildren = 0;
    if (m_pLxObj->getTargetPoint())
        m_arrChildren.push_back(new TargetPointNode(m_pLxObj->getTargetPoint()));
    if (m_pLxObj->getOffsetVals())
        m_arrChildren.push_back(new OffsetValsNode(m_pLxObj->getOffsetVals()));
    m_arrChildren.push_back(new FieldNoteCollectionNode(m_pLxObj->FieldNote()));
    m_arrChildren.push_back(new FeatureCollectionNode(m_pLxObj->Feature()));
    m_arrChildren.push_back(new ValueNode(this, L"Purpose", L"Purpose"));
    m_arrChildren.push_back(new ValueNode(this, L"SetupID", L"SetupID"));
    m_arrChildren.push_back(new ValueNode(this, L"TargetSetupID", L"TargetSetupID"));
    m_arrChildren.push_back(new ValueNode(this, L"TargetSetup2ID", L"TargetSetup2ID"));
    m_arrChildren.push_back(new ValueNode(this, L"SetID", L"SetID"));
    m_arrChildren.push_back(new ValueNode(this, L"TargetHeight", L"TargetHeight"));
    m_arrChildren.push_back(new ValueNode(this, L"Azimuth", L"Azimuth"));
    m_arrChildren.push_back(new ValueNode(this, L"HorizDistance", L"HorizDistance"));
    m_arrChildren.push_back(new ValueNode(this, L"VertDistance", L"VertDistance"));
    m_arrChildren.push_back(new ValueNode(this, L"HorizAngle", L"HorizAngle"));
    m_arrChildren.push_back(new ValueNode(this, L"SlopeDistance", L"SlopeDistance"));
    m_arrChildren.push_back(new ValueNode(this, L"ZenithAngle", L"ZenithAngle"));
    m_arrChildren.push_back(new ValueNode(this, L"EquipmentUsed", L"EquipmentUsed"));
    m_arrChildren.push_back(new ValueNode(this, L"AzimuthAccuracy", L"AzimuthAccuracy"));
    m_arrChildren.push_back(new ValueNode(this, L"DistanceAccuracy", L"DistanceAccuracy"));
    m_arrChildren.push_back(new ValueNode(this, L"AngleAccuracy", L"AngleAccuracy"));
    m_arrChildren.push_back(new ValueNode(this, L"Date", L"Date"));
    m_arrChildren.push_back(new ValueNode(this, L"DistanceType", L"DistanceType"));
    m_arrChildren.push_back(new ValueNode(this, L"AzimuthType", L"AzimuthType"));
    m_arrChildren.push_back(new ValueNode(this, L"AngleType", L"AngleType"));
    m_arrChildren.push_back(new ValueNode(this, L"AdoptedAzimuthSurvey", L"AdoptedAzimuthSurvey"));
    m_arrChildren.push_back(new ValueNode(this, L"AdoptedDistanceSurvey", L"AdoptedDistanceSurvey"));
    m_arrChildren.push_back(new ValueNode(this, L"AdoptedAngleSurvey", L"AdoptedAngleSurvey"));
    m_arrChildren.push_back(new ValueNode(this, L"DistanceAccClass", L"DistanceAccClass"));
    m_arrChildren.push_back(new ValueNode(this, L"AzimuthAccClass", L"AzimuthAccClass"));
    m_arrChildren.push_back(new ValueNode(this, L"AngleAccClass", L"AngleAccClass"));
    m_arrChildren.push_back(new ValueNode(this, L"AzimuthAdoptionFactor", L"AzimuthAdoptionFactor"));
    m_arrChildren.push_back(new ValueNode(this, L"DistanceAdoptionFactor", L"DistanceAdoptionFactor"));
    m_arrChildren.push_back(new ValueNode(this, L"Name", L"Name"));
    m_arrChildren.push_back(new ValueNode(this, L"Desc", L"Desc"));
    m_arrChildren.push_back(new ValueNode(this, L"State", L"State"));
    m_arrChildren.push_back(new ValueNode(this, L"OID", L"OID"));
    m_arrChildren.push_back(new ValueNode(this, L"MSLDistance", L"MSLDistance"));
    m_arrChildren.push_back(new ValueNode(this, L"SpherDistance", L"SpherDistance"));
    m_arrChildren.push_back(new ValueNode(this, L"CoordGeomRefs", L"CoordGeomRefs"));
    m_arrChildren.push_back(new ValueNode(this, L"AlignRef", L"AlignRef"));
    m_arrChildren.push_back(new ValueNode(this, L"AlignStationName", L"AlignStationName"));
    m_arrChildren.push_back(new ValueNode(this, L"AlignOffset", L"AlignOffset"));
}

bool ReducedObservationNode::setValue (const String& strMemberName, const String* pstrValue)
{
    bool bValueSet = false;
    ReducedObservation* pObject = dynamic_cast<ReducedObservation*>(m_pObject);
    if (strMemberName == L"Purpose")
    {
        if (!pstrValue)
        {
            pObject->resetValue_Purpose();
        }
        else
        {
            pObject->setPurpose(EnumPurposeTypeImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"SetupID")
    {
        if (!pstrValue)
        {
            pObject->resetValue_SetupID();
        }
        else
        {
            pObject->setSetupID(StringObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"TargetSetupID")
    {
        if (!pstrValue)
        {
            pObject->resetValue_TargetSetupID();
        }
        else
        {
            pObject->setTargetSetupID(StringObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"TargetSetup2ID")
    {
        if (!pstrValue)
        {
            pObject->resetValue_TargetSetup2ID();
        }
        else
        {
            pObject->setTargetSetup2ID(StringObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"SetID")
    {
        if (!pstrValue)
        {
            pObject->resetValue_SetID();
        }
        else
        {
            pObject->setSetID(StringObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"TargetHeight")
    {
        if (!pstrValue)
        {
            pObject->resetValue_TargetHeight();
        }
        else
        {
            pObject->setTargetHeight(DoubleObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"Azimuth")
    {
        if (!pstrValue)
        {
            pObject->resetValue_Azimuth();
        }
        else
        {
            pObject->setAzimuth(DoubleObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"HorizDistance")
    {
        if (!pstrValue)
        {
            pObject->resetValue_HorizDistance();
        }
        else
        {
            pObject->setHorizDistance(DoubleObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"VertDistance")
    {
        if (!pstrValue)
        {
            pObject->resetValue_VertDistance();
        }
        else
        {
            pObject->setVertDistance(DoubleObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"HorizAngle")
    {
        if (!pstrValue)
        {
            pObject->resetValue_HorizAngle();
        }
        else
        {
            pObject->setHorizAngle(DoubleObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"SlopeDistance")
    {
        if (!pstrValue)
        {
            pObject->resetValue_SlopeDistance();
        }
        else
        {
            pObject->setSlopeDistance(DoubleObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"ZenithAngle")
    {
        if (!pstrValue)
        {
            pObject->resetValue_ZenithAngle();
        }
        else
        {
            pObject->setZenithAngle(DoubleObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"EquipmentUsed")
    {
        if (!pstrValue)
        {
            pObject->resetValue_EquipmentUsed();
        }
        else
        {
            pObject->setEquipmentUsed(StringObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"AzimuthAccuracy")
    {
        if (!pstrValue)
        {
            pObject->resetValue_AzimuthAccuracy();
        }
        else
        {
            pObject->setAzimuthAccuracy(DoubleObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"DistanceAccuracy")
    {
        if (!pstrValue)
        {
            pObject->resetValue_DistanceAccuracy();
        }
        else
        {
            pObject->setDistanceAccuracy(DoubleObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"AngleAccuracy")
    {
        if (!pstrValue)
        {
            pObject->resetValue_AngleAccuracy();
        }
        else
        {
            pObject->setAngleAccuracy(DoubleObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"Date")
    {
        if (!pstrValue)
        {
            pObject->resetValue_Date();
        }
        else
        {
            pObject->setDate(StringObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"DistanceType")
    {
        if (!pstrValue)
        {
            pObject->resetValue_DistanceType();
        }
        else
        {
            pObject->setDistanceType(StringObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"AzimuthType")
    {
        if (!pstrValue)
        {
            pObject->resetValue_AzimuthType();
        }
        else
        {
            pObject->setAzimuthType(StringObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"AngleType")
    {
        if (!pstrValue)
        {
            pObject->resetValue_AngleType();
        }
        else
        {
            pObject->setAngleType(StringObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"AdoptedAzimuthSurvey")
    {
        if (!pstrValue)
        {
            pObject->resetValue_AdoptedAzimuthSurvey();
        }
        else
        {
            pObject->setAdoptedAzimuthSurvey(StringObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"AdoptedDistanceSurvey")
    {
        if (!pstrValue)
        {
            pObject->resetValue_AdoptedDistanceSurvey();
        }
        else
        {
            pObject->setAdoptedDistanceSurvey(StringObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"AdoptedAngleSurvey")
    {
        if (!pstrValue)
        {
            pObject->resetValue_AdoptedAngleSurvey();
        }
        else
        {
            pObject->setAdoptedAngleSurvey(StringObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"DistanceAccClass")
    {
        if (!pstrValue)
        {
            pObject->resetValue_DistanceAccClass();
        }
        else
        {
            pObject->setDistanceAccClass(StringObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"AzimuthAccClass")
    {
        if (!pstrValue)
        {
            pObject->resetValue_AzimuthAccClass();
        }
        else
        {
            pObject->setAzimuthAccClass(StringObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"AngleAccClass")
    {
        if (!pstrValue)
        {
            pObject->resetValue_AngleAccClass();
        }
        else
        {
            pObject->setAngleAccClass(StringObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"AzimuthAdoptionFactor")
    {
        if (!pstrValue)
        {
            pObject->resetValue_AzimuthAdoptionFactor();
        }
        else
        {
            pObject->setAzimuthAdoptionFactor(DoubleObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"DistanceAdoptionFactor")
    {
        if (!pstrValue)
        {
            pObject->resetValue_DistanceAdoptionFactor();
        }
        else
        {
            pObject->setDistanceAdoptionFactor(DoubleObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
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
    if (strMemberName == L"OID")
    {
        if (!pstrValue)
        {
            pObject->resetValue_OID();
        }
        else
        {
            pObject->setOID(StringObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"MSLDistance")
    {
        if (!pstrValue)
        {
            pObject->resetValue_MSLDistance();
        }
        else
        {
            pObject->setMSLDistance(StringObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"SpherDistance")
    {
        if (!pstrValue)
        {
            pObject->resetValue_SpherDistance();
        }
        else
        {
            pObject->setSpherDistance(StringObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"CoordGeomRefs")
    {
        if (!pstrValue)
        {
            pObject->setCoordGeomRefs(NULL);
        }
        else
        {
            pObject->setCoordGeomRefs(StringCollectionImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"AlignRef")
    {
        if (!pstrValue)
        {
            pObject->resetValue_AlignRef();
        }
        else
        {
            pObject->setAlignRef(StringObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"AlignStationName")
    {
        if (!pstrValue)
        {
            pObject->resetValue_AlignStationName();
        }
        else
        {
            pObject->setAlignStationName(StringObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"AlignOffset")
    {
        if (!pstrValue)
        {
            pObject->resetValue_AlignOffset();
        }
        else
        {
            pObject->setAlignOffset(DoubleObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    return bValueSet;
}

bool ReducedObservationNode::getValue (const String& strMemberName, String& strValue)
{
    bool bValueSet = false;
    ReducedObservation* pObject = dynamic_cast<ReducedObservation*>(m_pObject);
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
    else if (strMemberName == L"Purpose")
    {
        if (pObject->hasValue_Purpose())
        {
            strValue = (EnumPurposeTypeImpl(pObject->getPurpose())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"SetupID")
    {
        if (pObject->hasValue_SetupID())
        {
            strValue = (StringObjectImpl(pObject->getSetupID())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"TargetSetupID")
    {
        if (pObject->hasValue_TargetSetupID())
        {
            strValue = (StringObjectImpl(pObject->getTargetSetupID())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"TargetSetup2ID")
    {
        if (pObject->hasValue_TargetSetup2ID())
        {
            strValue = (StringObjectImpl(pObject->getTargetSetup2ID())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"SetID")
    {
        if (pObject->hasValue_SetID())
        {
            strValue = (StringObjectImpl(pObject->getSetID())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"TargetHeight")
    {
        if (pObject->hasValue_TargetHeight())
        {
            strValue = (DoubleObjectImpl(pObject->getTargetHeight())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"Azimuth")
    {
        if (pObject->hasValue_Azimuth())
        {
            strValue = (DoubleObjectImpl(pObject->getAzimuth())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"HorizDistance")
    {
        if (pObject->hasValue_HorizDistance())
        {
            strValue = (DoubleObjectImpl(pObject->getHorizDistance())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"VertDistance")
    {
        if (pObject->hasValue_VertDistance())
        {
            strValue = (DoubleObjectImpl(pObject->getVertDistance())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"HorizAngle")
    {
        if (pObject->hasValue_HorizAngle())
        {
            strValue = (DoubleObjectImpl(pObject->getHorizAngle())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"SlopeDistance")
    {
        if (pObject->hasValue_SlopeDistance())
        {
            strValue = (DoubleObjectImpl(pObject->getSlopeDistance())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"ZenithAngle")
    {
        if (pObject->hasValue_ZenithAngle())
        {
            strValue = (DoubleObjectImpl(pObject->getZenithAngle())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"EquipmentUsed")
    {
        if (pObject->hasValue_EquipmentUsed())
        {
            strValue = (StringObjectImpl(pObject->getEquipmentUsed())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"AzimuthAccuracy")
    {
        if (pObject->hasValue_AzimuthAccuracy())
        {
            strValue = (DoubleObjectImpl(pObject->getAzimuthAccuracy())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"DistanceAccuracy")
    {
        if (pObject->hasValue_DistanceAccuracy())
        {
            strValue = (DoubleObjectImpl(pObject->getDistanceAccuracy())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"AngleAccuracy")
    {
        if (pObject->hasValue_AngleAccuracy())
        {
            strValue = (DoubleObjectImpl(pObject->getAngleAccuracy())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"Date")
    {
        if (pObject->hasValue_Date())
        {
            strValue = (StringObjectImpl(pObject->getDate())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"DistanceType")
    {
        if (pObject->hasValue_DistanceType())
        {
            strValue = (StringObjectImpl(pObject->getDistanceType())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"AzimuthType")
    {
        if (pObject->hasValue_AzimuthType())
        {
            strValue = (StringObjectImpl(pObject->getAzimuthType())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"AngleType")
    {
        if (pObject->hasValue_AngleType())
        {
            strValue = (StringObjectImpl(pObject->getAngleType())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"AdoptedAzimuthSurvey")
    {
        if (pObject->hasValue_AdoptedAzimuthSurvey())
        {
            strValue = (StringObjectImpl(pObject->getAdoptedAzimuthSurvey())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"AdoptedDistanceSurvey")
    {
        if (pObject->hasValue_AdoptedDistanceSurvey())
        {
            strValue = (StringObjectImpl(pObject->getAdoptedDistanceSurvey())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"AdoptedAngleSurvey")
    {
        if (pObject->hasValue_AdoptedAngleSurvey())
        {
            strValue = (StringObjectImpl(pObject->getAdoptedAngleSurvey())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"DistanceAccClass")
    {
        if (pObject->hasValue_DistanceAccClass())
        {
            strValue = (StringObjectImpl(pObject->getDistanceAccClass())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"AzimuthAccClass")
    {
        if (pObject->hasValue_AzimuthAccClass())
        {
            strValue = (StringObjectImpl(pObject->getAzimuthAccClass())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"AngleAccClass")
    {
        if (pObject->hasValue_AngleAccClass())
        {
            strValue = (StringObjectImpl(pObject->getAngleAccClass())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"AzimuthAdoptionFactor")
    {
        if (pObject->hasValue_AzimuthAdoptionFactor())
        {
            strValue = (DoubleObjectImpl(pObject->getAzimuthAdoptionFactor())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"DistanceAdoptionFactor")
    {
        if (pObject->hasValue_DistanceAdoptionFactor())
        {
            strValue = (DoubleObjectImpl(pObject->getDistanceAdoptionFactor())).toString();
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
    else if (strMemberName == L"Desc")
    {
        if (pObject->hasValue_Desc())
        {
            strValue = (StringObjectImpl(pObject->getDesc())).toString();
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
    else if (strMemberName == L"OID")
    {
        if (pObject->hasValue_OID())
        {
            strValue = (StringObjectImpl(pObject->getOID())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"MSLDistance")
    {
        if (pObject->hasValue_MSLDistance())
        {
            strValue = (StringObjectImpl(pObject->getMSLDistance())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"SpherDistance")
    {
        if (pObject->hasValue_SpherDistance())
        {
            strValue = (StringObjectImpl(pObject->getSpherDistance())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"CoordGeomRefs")
    {
        if (pObject->getCoordGeomRefs())
        {
            strValue = pObject->getCoordGeomRefs()->toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"AlignRef")
    {
        if (pObject->hasValue_AlignRef())
        {
            strValue = (StringObjectImpl(pObject->getAlignRef())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"AlignStationName")
    {
        if (pObject->hasValue_AlignStationName())
        {
            strValue = (StringObjectImpl(pObject->getAlignStationName())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"AlignOffset")
    {
        if (pObject->hasValue_AlignOffset())
        {
            strValue = (DoubleObjectImpl(pObject->getAlignOffset())).toString();
            bValueSet = true;
        }
    }
    return bValueSet;
}

String ReducedObservationNode::nodeName() const
{
    return L"ReducedObservation";
}

ZoneMaterialCollectionNode::ZoneMaterialCollectionNode (Object& obj)
    : CollectionNode(&obj) 
{
    initialize(&obj);
}

ZoneMaterialCollectionNode::ZoneMaterialCollectionNode (Object* pObj)
    : CollectionNode (pObj) 
{
    initialize(pObj);
}

void ZoneMaterialCollectionNode::initialize (Object* pObj)
{
    ILxNode* pVariant = NULL;
    m_pLxObj = dynamic_cast<ZoneMaterialCollection*>(pObj);
    if (m_pLxObj == NULL)
        throw new Exception(Exception::Code::kFail, L"ZoneMaterialCollectionNode :: Invalid Object.");
    int nNumChildren = m_pLxObj->count();
    m_arrChildren.reserve(nNumChildren);
    ZoneMaterialCollectionIterator* pIterator = m_pLxObj->iterator();
    m_nNumChildren = 0;
    while (!pIterator->atEnd())
    {
        m_arrChildren.push_back(new ZoneMaterialNode(pIterator->current()));
        pIterator->next();
    }
    pIterator->release();
}

String ZoneMaterialCollectionNode::nodeName() const
{
    return L"ZoneMaterialCollection";
}

ILxNode* ZoneMaterialCollectionNode::findChild(const String& strChildId) const
{
    return NULL;
}
WideningLaneCollectionNode::WideningLaneCollectionNode (Object& obj)
    : CollectionNode(&obj) 
{
    initialize(&obj);
}

WideningLaneCollectionNode::WideningLaneCollectionNode (Object* pObj)
    : CollectionNode (pObj) 
{
    initialize(pObj);
}

void WideningLaneCollectionNode::initialize (Object* pObj)
{
    ILxNode* pVariant = NULL;
    m_pLxObj = dynamic_cast<WideningLaneCollection*>(pObj);
    if (m_pLxObj == NULL)
        throw new Exception(Exception::Code::kFail, L"WideningLaneCollectionNode :: Invalid Object.");
    int nNumChildren = m_pLxObj->count();
    m_arrChildren.reserve(nNumChildren);
    WideningLaneCollectionIterator* pIterator = m_pLxObj->iterator();
    m_nNumChildren = 0;
    while (!pIterator->atEnd())
    {
        m_arrChildren.push_back(new WideningLaneNode(pIterator->current()));
        pIterator->next();
    }
    pIterator->release();
}

String WideningLaneCollectionNode::nodeName() const
{
    return L"WideningLaneCollection";
}

ILxNode* WideningLaneCollectionNode::findChild(const String& strChildId) const
{
    return NULL;
}
}; // namespace : LX
