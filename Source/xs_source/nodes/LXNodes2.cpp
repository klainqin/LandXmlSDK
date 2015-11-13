#include "stdafx.h"
#include "ObjectNode.h"
#include "CollectionNode.h"
#include "ValueNode.h"
#include "Exception.h"
#include "ValueTypeObjects.h"
#include "LXTypesImpl.h"
#include "LXNodes.h"
#include "RectStruct.h"
#include "FeatureCollection.h"
#include "Cant.h"
#include "CantStationCollection.h"
#include "SpeedStationCollection.h"
#include "RoadSign.h"
#include "GradeSurfaceCollection.h"
#include "CantStation.h"

namespace LX
{

RectStructNode::RectStructNode (Object* pObj)
    : ObjectNode (pObj)
{
    ILxNode* pVariant = NULL;
    m_pLxObj = dynamic_cast<RectStruct*>(pObj);
    if (m_pLxObj == NULL)
        throw new Exception(Exception::Code::kFail, L"RectStructNode :: Invalid Object.");
    int nNumChildren = 9;
    m_arrChildren.reserve(nNumChildren);
    m_nNumChildren = 0;
    m_arrChildren.push_back(new FeatureCollectionNode(m_pLxObj->Feature()));
    m_arrChildren.push_back(new ValueNode(this, L"Length", L"Length"));
    m_arrChildren.push_back(new ValueNode(this, L"LengthDir", L"LengthDir"));
    m_arrChildren.push_back(new ValueNode(this, L"Width", L"Width"));
    m_arrChildren.push_back(new ValueNode(this, L"Desc", L"Desc"));
    m_arrChildren.push_back(new ValueNode(this, L"InletCase", L"InletCase"));
    m_arrChildren.push_back(new ValueNode(this, L"LossCoeff", L"LossCoeff"));
    m_arrChildren.push_back(new ValueNode(this, L"Material", L"Material"));
    m_arrChildren.push_back(new ValueNode(this, L"Thickness", L"Thickness"));
}

bool RectStructNode::setValue (const String& strMemberName, const String* pstrValue)
{
    bool bValueSet = false;
    RectStruct* pObject = dynamic_cast<RectStruct*>(m_pObject);
    if (strMemberName == L"Length")
    {
        if (!pstrValue)
        {
            pObject->resetValue_Length();
        }
        else
        {
            pObject->setLength(DoubleObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"LengthDir")
    {
        if (!pstrValue)
        {
            pObject->resetValue_LengthDir();
        }
        else
        {
            pObject->setLengthDir(DoubleObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
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
    if (strMemberName == L"InletCase")
    {
        if (!pstrValue)
        {
            pObject->resetValue_InletCase();
        }
        else
        {
            pObject->setInletCase(StringObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"LossCoeff")
    {
        if (!pstrValue)
        {
            pObject->resetValue_LossCoeff();
        }
        else
        {
            pObject->setLossCoeff(DoubleObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"Material")
    {
        if (!pstrValue)
        {
            pObject->resetValue_Material();
        }
        else
        {
            pObject->setMaterial(StringObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"Thickness")
    {
        if (!pstrValue)
        {
            pObject->resetValue_Thickness();
        }
        else
        {
            pObject->setThickness(DoubleObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    return bValueSet;
}

bool RectStructNode::getValue (const String& strMemberName, String& strValue)
{
    bool bValueSet = false;
    RectStruct* pObject = dynamic_cast<RectStruct*>(m_pObject);
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
    else if (strMemberName == L"Length")
    {
        if (pObject->hasValue_Length())
        {
            strValue = (DoubleObjectImpl(pObject->getLength())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"LengthDir")
    {
        if (pObject->hasValue_LengthDir())
        {
            strValue = (DoubleObjectImpl(pObject->getLengthDir())).toString();
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
    else if (strMemberName == L"Desc")
    {
        if (pObject->hasValue_Desc())
        {
            strValue = (StringObjectImpl(pObject->getDesc())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"InletCase")
    {
        if (pObject->hasValue_InletCase())
        {
            strValue = (StringObjectImpl(pObject->getInletCase())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"LossCoeff")
    {
        if (pObject->hasValue_LossCoeff())
        {
            strValue = (DoubleObjectImpl(pObject->getLossCoeff())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"Material")
    {
        if (pObject->hasValue_Material())
        {
            strValue = (StringObjectImpl(pObject->getMaterial())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"Thickness")
    {
        if (pObject->hasValue_Thickness())
        {
            strValue = (DoubleObjectImpl(pObject->getThickness())).toString();
            bValueSet = true;
        }
    }
    return bValueSet;
}

String RectStructNode::nodeName() const
{
    return L"RectStruct";
}

CantNode::CantNode (Object* pObj)
    : ObjectNode (pObj)
{
    ILxNode* pVariant = NULL;
    m_pLxObj = dynamic_cast<Cant*>(pObj);
    if (m_pLxObj == NULL)
        throw new Exception(Exception::Code::kFail, L"CantNode :: Invalid Object.");
    int nNumChildren = 10;
    m_arrChildren.reserve(nNumChildren);
    m_nNumChildren = 0;
    m_arrChildren.push_back(new CantStationCollectionNode(m_pLxObj->CantStation()));
    m_arrChildren.push_back(new SpeedStationCollectionNode(m_pLxObj->SpeedStation()));
    m_arrChildren.push_back(new FeatureCollectionNode(m_pLxObj->Feature()));
    m_arrChildren.push_back(new ValueNode(this, L"Name", L"Name"));
    m_arrChildren.push_back(new ValueNode(this, L"Desc", L"Desc"));
    m_arrChildren.push_back(new ValueNode(this, L"State", L"State"));
    m_arrChildren.push_back(new ValueNode(this, L"EquilibriumConstant", L"EquilibriumConstant"));
    m_arrChildren.push_back(new ValueNode(this, L"AppliedCantConstant", L"AppliedCantConstant"));
    m_arrChildren.push_back(new ValueNode(this, L"Gauge", L"Gauge"));
    m_arrChildren.push_back(new ValueNode(this, L"RotationPoint", L"RotationPoint"));
}

bool CantNode::setValue (const String& strMemberName, const String* pstrValue)
{
    bool bValueSet = false;
    Cant* pObject = dynamic_cast<Cant*>(m_pObject);
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
    if (strMemberName == L"EquilibriumConstant")
    {
        if (!pstrValue)
        {
            pObject->resetValue_EquilibriumConstant();
        }
        else
        {
            pObject->setEquilibriumConstant(DoubleObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"AppliedCantConstant")
    {
        if (!pstrValue)
        {
            pObject->resetValue_AppliedCantConstant();
        }
        else
        {
            pObject->setAppliedCantConstant(DoubleObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"Gauge")
    {
        if (!pstrValue)
        {
            pObject->resetValue_Gauge();
        }
        else
        {
            pObject->setGauge(DoubleObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"RotationPoint")
    {
        if (!pstrValue)
        {
            pObject->resetValue_RotationPoint();
        }
        else
        {
            pObject->setRotationPoint(StringObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    return bValueSet;
}

bool CantNode::getValue (const String& strMemberName, String& strValue)
{
    bool bValueSet = false;
    Cant* pObject = dynamic_cast<Cant*>(m_pObject);
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
    else if (strMemberName == L"State")
    {
        if (pObject->hasValue_State())
        {
            strValue = (EnumStateTypeImpl(pObject->getState())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"EquilibriumConstant")
    {
        if (pObject->hasValue_EquilibriumConstant())
        {
            strValue = (DoubleObjectImpl(pObject->getEquilibriumConstant())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"AppliedCantConstant")
    {
        if (pObject->hasValue_AppliedCantConstant())
        {
            strValue = (DoubleObjectImpl(pObject->getAppliedCantConstant())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"Gauge")
    {
        if (pObject->hasValue_Gauge())
        {
            strValue = (DoubleObjectImpl(pObject->getGauge())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"RotationPoint")
    {
        if (pObject->hasValue_RotationPoint())
        {
            strValue = (StringObjectImpl(pObject->getRotationPoint())).toString();
            bValueSet = true;
        }
    }
    return bValueSet;
}

String CantNode::nodeName() const
{
    return L"Cant";
}

RoadSignNode::RoadSignNode (Object* pObj)
    : ObjectNode (pObj)
{
    ILxNode* pVariant = NULL;
    m_pLxObj = dynamic_cast<RoadSign*>(pObj);
    if (m_pLxObj == NULL)
        throw new Exception(Exception::Code::kFail, L"RoadSignNode :: Invalid Object.");
    int nNumChildren = 8;
    m_arrChildren.reserve(nNumChildren);
    m_nNumChildren = 0;
    m_arrChildren.push_back(new ValueNode(this, L"MUTCDCode", L"MUTCDCode"));
    m_arrChildren.push_back(new ValueNode(this, L"Station", L"Station"));
    m_arrChildren.push_back(new ValueNode(this, L"Offset", L"Offset"));
    m_arrChildren.push_back(new ValueNode(this, L"SideofRoad", L"SideofRoad"));
    m_arrChildren.push_back(new ValueNode(this, L"Type", L"Type"));
    m_arrChildren.push_back(new ValueNode(this, L"MountHeight", L"MountHeight"));
    m_arrChildren.push_back(new ValueNode(this, L"Width", L"Width"));
    m_arrChildren.push_back(new ValueNode(this, L"Height", L"Height"));
}

bool RoadSignNode::setValue (const String& strMemberName, const String* pstrValue)
{
    bool bValueSet = false;
    RoadSign* pObject = dynamic_cast<RoadSign*>(m_pObject);
    if (strMemberName == L"MUTCDCode")
    {
        if (!pstrValue)
        {
            pObject->resetValue_MUTCDCode();
        }
        else
        {
            pObject->setMUTCDCode(StringObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
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
    if (strMemberName == L"Type")
    {
        if (!pstrValue)
        {
            pObject->resetValue_Type();
        }
        else
        {
            pObject->setType(EnumRoadSignTypeImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"MountHeight")
    {
        if (!pstrValue)
        {
            pObject->resetValue_MountHeight();
        }
        else
        {
            pObject->setMountHeight(DoubleObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
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
    if (strMemberName == L"Height")
    {
        if (!pstrValue)
        {
            pObject->resetValue_Height();
        }
        else
        {
            pObject->setHeight(DoubleObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    return bValueSet;
}

bool RoadSignNode::getValue (const String& strMemberName, String& strValue)
{
    bool bValueSet = false;
    RoadSign* pObject = dynamic_cast<RoadSign*>(m_pObject);
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
    else if (strMemberName == L"MUTCDCode")
    {
        if (pObject->hasValue_MUTCDCode())
        {
            strValue = (StringObjectImpl(pObject->getMUTCDCode())).toString();
            bValueSet = true;
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
    else if (strMemberName == L"Offset")
    {
        if (pObject->hasValue_Offset())
        {
            strValue = (DoubleObjectImpl(pObject->getOffset())).toString();
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
    else if (strMemberName == L"Type")
    {
        if (pObject->hasValue_Type())
        {
            strValue = (EnumRoadSignTypeImpl(pObject->getType())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"MountHeight")
    {
        if (pObject->hasValue_MountHeight())
        {
            strValue = (DoubleObjectImpl(pObject->getMountHeight())).toString();
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
    else if (strMemberName == L"Height")
    {
        if (pObject->hasValue_Height())
        {
            strValue = (DoubleObjectImpl(pObject->getHeight())).toString();
            bValueSet = true;
        }
    }
    return bValueSet;
}

String RoadSignNode::nodeName() const
{
    return L"RoadSign";
}

GradeSurfaceCollectionNode::GradeSurfaceCollectionNode (Object& obj)
    : CollectionNode(&obj) 
{
    initialize(&obj);
}

GradeSurfaceCollectionNode::GradeSurfaceCollectionNode (Object* pObj)
    : CollectionNode (pObj) 
{
    initialize(pObj);
}

void GradeSurfaceCollectionNode::initialize (Object* pObj)
{
    ILxNode* pVariant = NULL;
    m_pLxObj = dynamic_cast<GradeSurfaceCollection*>(pObj);
    if (m_pLxObj == NULL)
        throw new Exception(Exception::Code::kFail, L"GradeSurfaceCollectionNode :: Invalid Object.");
    int nNumChildren = m_pLxObj->count();
    m_arrChildren.reserve(nNumChildren);
    GradeSurfaceCollectionIterator* pIterator = m_pLxObj->iterator();
    m_nNumChildren = 0;
    while (!pIterator->atEnd())
    {
        m_arrChildren.push_back(new GradeSurfaceNode(pIterator->current()));
        pIterator->next();
    }
    pIterator->release();
}

String GradeSurfaceCollectionNode::nodeName() const
{
    return L"GradeSurfaceCollection";
}

ILxNode* GradeSurfaceCollectionNode::findChild(const String& strChildId) const
{
    // Grab string from child
    StringObjectImpl::Type idValue;
    ILxNode* pFoundNode = NULL;
    if (StringObjectImpl::parseString(strChildId.c_str(), strChildId.size(), idValue))
    {
        GradeSurfaceCollectionIterator* pFoundIter = m_pLxObj->find(idValue);
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
CantStationNode::CantStationNode (Object* pObj)
    : ObjectNode (pObj)
{
    ILxNode* pVariant = NULL;
    m_pLxObj = dynamic_cast<CantStation*>(pObj);
    if (m_pLxObj == NULL)
        throw new Exception(Exception::Code::kFail, L"CantStationNode :: Invalid Object.");
    int nNumChildren = 13;
    m_arrChildren.reserve(nNumChildren);
    m_nNumChildren = 0;
    m_arrChildren.push_back(new ValueNode(this, L"Station", L"Station"));
    m_arrChildren.push_back(new ValueNode(this, L"EquilibriumCant", L"EquilibriumCant"));
    m_arrChildren.push_back(new ValueNode(this, L"AppliedCant", L"AppliedCant"));
    m_arrChildren.push_back(new ValueNode(this, L"CantDeficiency", L"CantDeficiency"));
    m_arrChildren.push_back(new ValueNode(this, L"CantExcess", L"CantExcess"));
    m_arrChildren.push_back(new ValueNode(this, L"RateOfChangeOfAppliedCantOverTime", L"RateOfChangeOfAppliedCantOverTime"));
    m_arrChildren.push_back(new ValueNode(this, L"RateOfChangeOfAppliedCantOverLength", L"RateOfChangeOfAppliedCantOverLength"));
    m_arrChildren.push_back(new ValueNode(this, L"RateOfChangeOfCantDeficiencyOverTime", L"RateOfChangeOfCantDeficiencyOverTime"));
    m_arrChildren.push_back(new ValueNode(this, L"CantGradient", L"CantGradient"));
    m_arrChildren.push_back(new ValueNode(this, L"Speed", L"Speed"));
    m_arrChildren.push_back(new ValueNode(this, L"TransitionType", L"TransitionType"));
    m_arrChildren.push_back(new ValueNode(this, L"Curvature", L"Curvature"));
    m_arrChildren.push_back(new ValueNode(this, L"Adverse", L"Adverse"));
}

bool CantStationNode::setValue (const String& strMemberName, const String* pstrValue)
{
    bool bValueSet = false;
    CantStation* pObject = dynamic_cast<CantStation*>(m_pObject);
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
    if (strMemberName == L"EquilibriumCant")
    {
        if (!pstrValue)
        {
            pObject->resetValue_EquilibriumCant();
        }
        else
        {
            pObject->setEquilibriumCant(DoubleObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"AppliedCant")
    {
        if (!pstrValue)
        {
            pObject->resetValue_AppliedCant();
        }
        else
        {
            pObject->setAppliedCant(DoubleObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"CantDeficiency")
    {
        if (!pstrValue)
        {
            pObject->resetValue_CantDeficiency();
        }
        else
        {
            pObject->setCantDeficiency(DoubleObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"CantExcess")
    {
        if (!pstrValue)
        {
            pObject->resetValue_CantExcess();
        }
        else
        {
            pObject->setCantExcess(DoubleObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"RateOfChangeOfAppliedCantOverTime")
    {
        if (!pstrValue)
        {
            pObject->resetValue_RateOfChangeOfAppliedCantOverTime();
        }
        else
        {
            pObject->setRateOfChangeOfAppliedCantOverTime(DoubleObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"RateOfChangeOfAppliedCantOverLength")
    {
        if (!pstrValue)
        {
            pObject->resetValue_RateOfChangeOfAppliedCantOverLength();
        }
        else
        {
            pObject->setRateOfChangeOfAppliedCantOverLength(DoubleObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"RateOfChangeOfCantDeficiencyOverTime")
    {
        if (!pstrValue)
        {
            pObject->resetValue_RateOfChangeOfCantDeficiencyOverTime();
        }
        else
        {
            pObject->setRateOfChangeOfCantDeficiencyOverTime(DoubleObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"CantGradient")
    {
        if (!pstrValue)
        {
            pObject->resetValue_CantGradient();
        }
        else
        {
            pObject->setCantGradient(DoubleObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
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
    if (strMemberName == L"TransitionType")
    {
        if (!pstrValue)
        {
            pObject->resetValue_TransitionType();
        }
        else
        {
            pObject->setTransitionType(EnumSpiralTypeImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"Curvature")
    {
        if (!pstrValue)
        {
            pObject->resetValue_Curvature();
        }
        else
        {
            pObject->setCurvature(EnumClockwiseImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"Adverse")
    {
        if (!pstrValue)
        {
            pObject->resetValue_Adverse();
        }
        else
        {
            pObject->setAdverse(BooleanObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    return bValueSet;
}

bool CantStationNode::getValue (const String& strMemberName, String& strValue)
{
    bool bValueSet = false;
    CantStation* pObject = dynamic_cast<CantStation*>(m_pObject);
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
    else if (strMemberName == L"EquilibriumCant")
    {
        if (pObject->hasValue_EquilibriumCant())
        {
            strValue = (DoubleObjectImpl(pObject->getEquilibriumCant())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"AppliedCant")
    {
        if (pObject->hasValue_AppliedCant())
        {
            strValue = (DoubleObjectImpl(pObject->getAppliedCant())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"CantDeficiency")
    {
        if (pObject->hasValue_CantDeficiency())
        {
            strValue = (DoubleObjectImpl(pObject->getCantDeficiency())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"CantExcess")
    {
        if (pObject->hasValue_CantExcess())
        {
            strValue = (DoubleObjectImpl(pObject->getCantExcess())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"RateOfChangeOfAppliedCantOverTime")
    {
        if (pObject->hasValue_RateOfChangeOfAppliedCantOverTime())
        {
            strValue = (DoubleObjectImpl(pObject->getRateOfChangeOfAppliedCantOverTime())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"RateOfChangeOfAppliedCantOverLength")
    {
        if (pObject->hasValue_RateOfChangeOfAppliedCantOverLength())
        {
            strValue = (DoubleObjectImpl(pObject->getRateOfChangeOfAppliedCantOverLength())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"RateOfChangeOfCantDeficiencyOverTime")
    {
        if (pObject->hasValue_RateOfChangeOfCantDeficiencyOverTime())
        {
            strValue = (DoubleObjectImpl(pObject->getRateOfChangeOfCantDeficiencyOverTime())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"CantGradient")
    {
        if (pObject->hasValue_CantGradient())
        {
            strValue = (DoubleObjectImpl(pObject->getCantGradient())).toString();
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
    else if (strMemberName == L"TransitionType")
    {
        if (pObject->hasValue_TransitionType())
        {
            strValue = (EnumSpiralTypeImpl(pObject->getTransitionType())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"Curvature")
    {
        if (pObject->hasValue_Curvature())
        {
            strValue = (EnumClockwiseImpl(pObject->getCurvature())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"Adverse")
    {
        if (pObject->hasValue_Adverse())
        {
            strValue = (BooleanObjectImpl(pObject->getAdverse())).toString();
            bValueSet = true;
        }
    }
    return bValueSet;
}

String CantStationNode::nodeName() const
{
    return L"CantStation";
}

}; // namespace : LX
