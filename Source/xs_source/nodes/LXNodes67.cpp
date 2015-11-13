#include "stdafx.h"
#include "ObjectNode.h"
#include "CollectionNode.h"
#include "ValueNode.h"
#include "Exception.h"
#include "ValueTypeObjects.h"
#include "LXTypesImpl.h"
#include "LXNodes.h"
#include "SpeedStation.h"
#include "TimingCollection.h"
#include "PointResults.h"
#include "TargetPoint.h"
#include "FieldNoteCollection.h"
#include "FeatureCollection.h"
#include "TurnRestriction.h"
#include "OffsetLane.h"

namespace LX
{

SpeedStationNode::SpeedStationNode (Object* pObj)
    : ObjectNode (pObj)
{
    ILxNode* pVariant = NULL;
    m_pLxObj = dynamic_cast<SpeedStation*>(pObj);
    if (m_pLxObj == NULL)
        throw new Exception(Exception::Code::kFail, L"SpeedStationNode :: Invalid Object.");
    int nNumChildren = 2;
    m_arrChildren.reserve(nNumChildren);
    m_nNumChildren = 0;
    m_arrChildren.push_back(new ValueNode(this, L"Station", L"Station"));
    m_arrChildren.push_back(new ValueNode(this, L"Speed", L"Speed"));
}

bool SpeedStationNode::setValue (const String& strMemberName, const String* pstrValue)
{
    bool bValueSet = false;
    SpeedStation* pObject = dynamic_cast<SpeedStation*>(m_pObject);
    if (strMemberName == L"Station")
    {
        if (!pstrValue)
        {
            pObject->resetValue_Station();
        }
        else
        {
            pObject->setStation(DoubleObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"Speed")
    {
        if (!pstrValue)
        {
            pObject->resetValue_Speed();
        }
        else
        {
            pObject->setSpeed(DoubleObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    return bValueSet;
}

bool SpeedStationNode::getValue (const String& strMemberName, String& strValue)
{
    bool bValueSet = false;
    SpeedStation* pObject = dynamic_cast<SpeedStation*>(m_pObject);
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
    else if (strMemberName == L"Station")
    {
        if (pObject->hasValue_Station())
        {
            strValue = (DoubleObjectImpl(pObject->getStation())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"Speed")
    {
        if (pObject->hasValue_Speed())
        {
            strValue = (DoubleObjectImpl(pObject->getSpeed())).toString();
            bValueSet = true;
        }
    }
    return bValueSet;
}

String SpeedStationNode::nodeName() const
{
    return L"SpeedStation";
}

TimingCollectionNode::TimingCollectionNode (Object& obj)
    : CollectionNode(&obj) 
{
    initialize(&obj);
}

TimingCollectionNode::TimingCollectionNode (Object* pObj)
    : CollectionNode (pObj) 
{
    initialize(pObj);
}

void TimingCollectionNode::initialize (Object* pObj)
{
    ILxNode* pVariant = NULL;
    m_pLxObj = dynamic_cast<TimingCollection*>(pObj);
    if (m_pLxObj == NULL)
        throw new Exception(Exception::Code::kFail, L"TimingCollectionNode :: Invalid Object.");
    int nNumChildren = m_pLxObj->count();
    m_arrChildren.reserve(nNumChildren);
    TimingCollectionIterator* pIterator = m_pLxObj->iterator();
    m_nNumChildren = 0;
    while (!pIterator->atEnd())
    {
        m_arrChildren.push_back(new TimingNode(pIterator->current()));
        pIterator->next();
    }
    pIterator->release();
}

String TimingCollectionNode::nodeName() const
{
    return L"TimingCollection";
}

ILxNode* TimingCollectionNode::findChild(const String& strChildId) const
{
    return NULL;
}
PointResultsNode::PointResultsNode (Object* pObj)
    : ObjectNode (pObj)
{
    ILxNode* pVariant = NULL;
    m_pLxObj = dynamic_cast<PointResults*>(pObj);
    if (m_pLxObj == NULL)
        throw new Exception(Exception::Code::kFail, L"PointResultsNode :: Invalid Object.");
    int nNumChildren = 11;
    m_arrChildren.reserve(nNumChildren);
    m_nNumChildren = 0;
    if (m_pLxObj->getTargetPoint())
        m_arrChildren.push_back(new TargetPointNode(m_pLxObj->getTargetPoint()));
    m_arrChildren.push_back(new FieldNoteCollectionNode(m_pLxObj->FieldNote()));
    m_arrChildren.push_back(new FeatureCollectionNode(m_pLxObj->Feature()));
    m_arrChildren.push_back(new ValueNode(this, L"SetupID", L"SetupID"));
    m_arrChildren.push_back(new ValueNode(this, L"TargetSetupID", L"TargetSetupID"));
    m_arrChildren.push_back(new ValueNode(this, L"MeanHorizAngle", L"MeanHorizAngle"));
    m_arrChildren.push_back(new ValueNode(this, L"HorizStdDeviation", L"HorizStdDeviation"));
    m_arrChildren.push_back(new ValueNode(this, L"MeanzenithAngle", L"MeanzenithAngle"));
    m_arrChildren.push_back(new ValueNode(this, L"VertStdDeviation", L"VertStdDeviation"));
    m_arrChildren.push_back(new ValueNode(this, L"MeanSlopeDistance", L"MeanSlopeDistance"));
    m_arrChildren.push_back(new ValueNode(this, L"SlopeDistanceStdDeviation", L"SlopeDistanceStdDeviation"));
}

bool PointResultsNode::setValue (const String& strMemberName, const String* pstrValue)
{
    bool bValueSet = false;
    PointResults* pObject = dynamic_cast<PointResults*>(m_pObject);
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
    if (strMemberName == L"MeanHorizAngle")
    {
        if (!pstrValue)
        {
            pObject->resetValue_MeanHorizAngle();
        }
        else
        {
            pObject->setMeanHorizAngle(DoubleObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"HorizStdDeviation")
    {
        if (!pstrValue)
        {
            pObject->resetValue_HorizStdDeviation();
        }
        else
        {
            pObject->setHorizStdDeviation(DoubleObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"MeanzenithAngle")
    {
        if (!pstrValue)
        {
            pObject->resetValue_MeanzenithAngle();
        }
        else
        {
            pObject->setMeanzenithAngle(DoubleObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"VertStdDeviation")
    {
        if (!pstrValue)
        {
            pObject->resetValue_VertStdDeviation();
        }
        else
        {
            pObject->setVertStdDeviation(DoubleObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"MeanSlopeDistance")
    {
        if (!pstrValue)
        {
            pObject->resetValue_MeanSlopeDistance();
        }
        else
        {
            pObject->setMeanSlopeDistance(DoubleObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"SlopeDistanceStdDeviation")
    {
        if (!pstrValue)
        {
            pObject->resetValue_SlopeDistanceStdDeviation();
        }
        else
        {
            pObject->setSlopeDistanceStdDeviation(DoubleObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    return bValueSet;
}

bool PointResultsNode::getValue (const String& strMemberName, String& strValue)
{
    bool bValueSet = false;
    PointResults* pObject = dynamic_cast<PointResults*>(m_pObject);
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
    else if (strMemberName == L"MeanHorizAngle")
    {
        if (pObject->hasValue_MeanHorizAngle())
        {
            strValue = (DoubleObjectImpl(pObject->getMeanHorizAngle())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"HorizStdDeviation")
    {
        if (pObject->hasValue_HorizStdDeviation())
        {
            strValue = (DoubleObjectImpl(pObject->getHorizStdDeviation())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"MeanzenithAngle")
    {
        if (pObject->hasValue_MeanzenithAngle())
        {
            strValue = (DoubleObjectImpl(pObject->getMeanzenithAngle())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"VertStdDeviation")
    {
        if (pObject->hasValue_VertStdDeviation())
        {
            strValue = (DoubleObjectImpl(pObject->getVertStdDeviation())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"MeanSlopeDistance")
    {
        if (pObject->hasValue_MeanSlopeDistance())
        {
            strValue = (DoubleObjectImpl(pObject->getMeanSlopeDistance())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"SlopeDistanceStdDeviation")
    {
        if (pObject->hasValue_SlopeDistanceStdDeviation())
        {
            strValue = (DoubleObjectImpl(pObject->getSlopeDistanceStdDeviation())).toString();
            bValueSet = true;
        }
    }
    return bValueSet;
}

String PointResultsNode::nodeName() const
{
    return L"PointResults";
}

TurnRestrictionNode::TurnRestrictionNode (Object* pObj)
    : ObjectNode (pObj)
{
    ILxNode* pVariant = NULL;
    m_pLxObj = dynamic_cast<TurnRestriction*>(pObj);
    if (m_pLxObj == NULL)
        throw new Exception(Exception::Code::kFail, L"TurnRestrictionNode :: Invalid Object.");
    int nNumChildren = 3;
    m_arrChildren.reserve(nNumChildren);
    m_nNumChildren = 0;
    m_arrChildren.push_back(new ValueNode(this, L"Station", L"Station"));
    m_arrChildren.push_back(new ValueNode(this, L"LegNumber", L"LegNumber"));
    m_arrChildren.push_back(new ValueNode(this, L"Type", L"Type"));
}

bool TurnRestrictionNode::setValue (const String& strMemberName, const String* pstrValue)
{
    bool bValueSet = false;
    TurnRestriction* pObject = dynamic_cast<TurnRestriction*>(m_pObject);
    if (strMemberName == L"Station")
    {
        if (!pstrValue)
        {
            pObject->resetValue_Station();
        }
        else
        {
            pObject->setStation(DoubleObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"LegNumber")
    {
        if (!pstrValue)
        {
            pObject->resetValue_LegNumber();
        }
        else
        {
            pObject->setLegNumber(IntegerObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"Type")
    {
        if (!pstrValue)
        {
            pObject->resetValue_Type();
        }
        else
        {
            pObject->setType(EnumTrafficTurnRestrictionImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    return bValueSet;
}

bool TurnRestrictionNode::getValue (const String& strMemberName, String& strValue)
{
    bool bValueSet = false;
    TurnRestriction* pObject = dynamic_cast<TurnRestriction*>(m_pObject);
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
    else if (strMemberName == L"Station")
    {
        if (pObject->hasValue_Station())
        {
            strValue = (DoubleObjectImpl(pObject->getStation())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"LegNumber")
    {
        if (pObject->hasValue_LegNumber())
        {
            strValue = (IntegerObjectImpl(pObject->getLegNumber())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"Type")
    {
        if (pObject->hasValue_Type())
        {
            strValue = (EnumTrafficTurnRestrictionImpl(pObject->getType())).toString();
            bValueSet = true;
        }
    }
    return bValueSet;
}

String TurnRestrictionNode::nodeName() const
{
    return L"TurnRestriction";
}

OffsetLaneNode::OffsetLaneNode (Object* pObj)
    : ObjectNode (pObj)
{
    ILxNode* pVariant = NULL;
    m_pLxObj = dynamic_cast<OffsetLane*>(pObj);
    if (m_pLxObj == NULL)
        throw new Exception(Exception::Code::kFail, L"OffsetLaneNode :: Invalid Object.");
    int nNumChildren = 7;
    m_arrChildren.reserve(nNumChildren);
    m_nNumChildren = 0;
    m_arrChildren.push_back(new ValueNode(this, L"StaStart", L"StaStart"));
    m_arrChildren.push_back(new ValueNode(this, L"StaEnd", L"StaEnd"));
    m_arrChildren.push_back(new ValueNode(this, L"BeginFullWidthSta", L"BeginFullWidthSta"));
    m_arrChildren.push_back(new ValueNode(this, L"EndFullWidthSta", L"EndFullWidthSta"));
    m_arrChildren.push_back(new ValueNode(this, L"FullOffset", L"FullOffset"));
    m_arrChildren.push_back(new ValueNode(this, L"Width", L"Width"));
    m_arrChildren.push_back(new ValueNode(this, L"SideofRoad", L"SideofRoad"));
}

bool OffsetLaneNode::setValue (const String& strMemberName, const String* pstrValue)
{
    bool bValueSet = false;
    OffsetLane* pObject = dynamic_cast<OffsetLane*>(m_pObject);
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
    if (strMemberName == L"FullOffset")
    {
        if (!pstrValue)
        {
            pObject->resetValue_FullOffset();
        }
        else
        {
            pObject->setFullOffset(DoubleObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
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

bool OffsetLaneNode::getValue (const String& strMemberName, String& strValue)
{
    bool bValueSet = false;
    OffsetLane* pObject = dynamic_cast<OffsetLane*>(m_pObject);
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
    else if (strMemberName == L"FullOffset")
    {
        if (pObject->hasValue_FullOffset())
        {
            strValue = (DoubleObjectImpl(pObject->getFullOffset())).toString();
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

String OffsetLaneNode::nodeName() const
{
    return L"OffsetLane";
}

}; // namespace : LX
