#include "stdafx.h"
#include "ObjectNode.h"
#include "CollectionNode.h"
#include "ValueNode.h"
#include "Exception.h"
#include "ValueTypeObjects.h"
#include "LXTypesImpl.h"
#include "LXNodes.h"
#include "Channel.h"
#include "FeatureCollection.h"
#include "PipeFlow.h"
#include "ComplexNameCollection.h"
#include "RetWallPnt.h"
#include "RawObservationCollection.h"

namespace LX
{

ChannelNode::ChannelNode (Object* pObj)
    : ObjectNode (pObj)
{
    ILxNode* pVariant = NULL;
    m_pLxObj = dynamic_cast<Channel*>(pObj);
    if (m_pLxObj == NULL)
        throw new Exception(Exception::Code::kFail, L"ChannelNode :: Invalid Object.");
    int nNumChildren = 9;
    m_arrChildren.reserve(nNumChildren);
    m_nNumChildren = 0;
    m_arrChildren.push_back(new FeatureCollectionNode(m_pLxObj->Feature()));
    m_arrChildren.push_back(new ValueNode(this, L"Height", L"Height"));
    m_arrChildren.push_back(new ValueNode(this, L"WidthTop", L"WidthTop"));
    m_arrChildren.push_back(new ValueNode(this, L"WidthBottom", L"WidthBottom"));
    m_arrChildren.push_back(new ValueNode(this, L"Desc", L"Desc"));
    m_arrChildren.push_back(new ValueNode(this, L"HazenWilliams", L"HazenWilliams"));
    m_arrChildren.push_back(new ValueNode(this, L"Mannings", L"Mannings"));
    m_arrChildren.push_back(new ValueNode(this, L"Material", L"Material"));
    m_arrChildren.push_back(new ValueNode(this, L"Thickness", L"Thickness"));
}

bool ChannelNode::setValue (const String& strMemberName, const String* pstrValue)
{
    bool bValueSet = false;
    Channel* pObject = dynamic_cast<Channel*>(m_pObject);
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
    if (strMemberName == L"WidthTop")
    {
        if (!pstrValue)
        {
            pObject->resetValue_WidthTop();
        }
        else
        {
            pObject->setWidthTop(DoubleObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"WidthBottom")
    {
        if (!pstrValue)
        {
            pObject->resetValue_WidthBottom();
        }
        else
        {
            pObject->setWidthBottom(DoubleObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
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
    if (strMemberName == L"HazenWilliams")
    {
        if (!pstrValue)
        {
            pObject->resetValue_HazenWilliams();
        }
        else
        {
            pObject->setHazenWilliams(DoubleObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"Mannings")
    {
        if (!pstrValue)
        {
            pObject->resetValue_Mannings();
        }
        else
        {
            pObject->setMannings(DoubleObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
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

bool ChannelNode::getValue (const String& strMemberName, String& strValue)
{
    bool bValueSet = false;
    Channel* pObject = dynamic_cast<Channel*>(m_pObject);
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
    else if (strMemberName == L"Height")
    {
        if (pObject->hasValue_Height())
        {
            strValue = (DoubleObjectImpl(pObject->getHeight())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"WidthTop")
    {
        if (pObject->hasValue_WidthTop())
        {
            strValue = (DoubleObjectImpl(pObject->getWidthTop())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"WidthBottom")
    {
        if (pObject->hasValue_WidthBottom())
        {
            strValue = (DoubleObjectImpl(pObject->getWidthBottom())).toString();
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
    else if (strMemberName == L"HazenWilliams")
    {
        if (pObject->hasValue_HazenWilliams())
        {
            strValue = (DoubleObjectImpl(pObject->getHazenWilliams())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"Mannings")
    {
        if (pObject->hasValue_Mannings())
        {
            strValue = (DoubleObjectImpl(pObject->getMannings())).toString();
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

String ChannelNode::nodeName() const
{
    return L"Channel";
}

PipeFlowNode::PipeFlowNode (Object* pObj)
    : ObjectNode (pObj)
{
    ILxNode* pVariant = NULL;
    m_pLxObj = dynamic_cast<PipeFlow*>(pObj);
    if (m_pLxObj == NULL)
        throw new Exception(Exception::Code::kFail, L"PipeFlowNode :: Invalid Object.");
    int nNumChildren = 12;
    m_arrChildren.reserve(nNumChildren);
    m_nNumChildren = 0;
    m_arrChildren.push_back(new FeatureCollectionNode(m_pLxObj->Feature()));
    m_arrChildren.push_back(new ValueNode(this, L"FlowIn", L"FlowIn"));
    m_arrChildren.push_back(new ValueNode(this, L"AreaCatchment", L"AreaCatchment"));
    m_arrChildren.push_back(new ValueNode(this, L"Desc", L"Desc"));
    m_arrChildren.push_back(new ValueNode(this, L"DepthCritical", L"DepthCritical"));
    m_arrChildren.push_back(new ValueNode(this, L"HglDown", L"HglDown"));
    m_arrChildren.push_back(new ValueNode(this, L"HglUp", L"HglUp"));
    m_arrChildren.push_back(new ValueNode(this, L"Intensity", L"Intensity"));
    m_arrChildren.push_back(new ValueNode(this, L"RunoffCoeff", L"RunoffCoeff"));
    m_arrChildren.push_back(new ValueNode(this, L"SlopeCritical", L"SlopeCritical"));
    m_arrChildren.push_back(new ValueNode(this, L"TimeInlet", L"TimeInlet"));
    m_arrChildren.push_back(new ValueNode(this, L"VelocityCritical", L"VelocityCritical"));
}

bool PipeFlowNode::setValue (const String& strMemberName, const String* pstrValue)
{
    bool bValueSet = false;
    PipeFlow* pObject = dynamic_cast<PipeFlow*>(m_pObject);
    if (strMemberName == L"FlowIn")
    {
        if (!pstrValue)
        {
            pObject->resetValue_FlowIn();
        }
        else
        {
            pObject->setFlowIn(DoubleObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"AreaCatchment")
    {
        if (!pstrValue)
        {
            pObject->resetValue_AreaCatchment();
        }
        else
        {
            pObject->setAreaCatchment(DoubleObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
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
    if (strMemberName == L"DepthCritical")
    {
        if (!pstrValue)
        {
            pObject->resetValue_DepthCritical();
        }
        else
        {
            pObject->setDepthCritical(DoubleObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"HglDown")
    {
        if (!pstrValue)
        {
            pObject->resetValue_HglDown();
        }
        else
        {
            pObject->setHglDown(DoubleObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"HglUp")
    {
        if (!pstrValue)
        {
            pObject->resetValue_HglUp();
        }
        else
        {
            pObject->setHglUp(DoubleObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"Intensity")
    {
        if (!pstrValue)
        {
            pObject->resetValue_Intensity();
        }
        else
        {
            pObject->setIntensity(DoubleObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"RunoffCoeff")
    {
        if (!pstrValue)
        {
            pObject->resetValue_RunoffCoeff();
        }
        else
        {
            pObject->setRunoffCoeff(DoubleObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"SlopeCritical")
    {
        if (!pstrValue)
        {
            pObject->resetValue_SlopeCritical();
        }
        else
        {
            pObject->setSlopeCritical(DoubleObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"TimeInlet")
    {
        if (!pstrValue)
        {
            pObject->resetValue_TimeInlet();
        }
        else
        {
            pObject->setTimeInlet(DoubleObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"VelocityCritical")
    {
        if (!pstrValue)
        {
            pObject->resetValue_VelocityCritical();
        }
        else
        {
            pObject->setVelocityCritical(DoubleObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    return bValueSet;
}

bool PipeFlowNode::getValue (const String& strMemberName, String& strValue)
{
    bool bValueSet = false;
    PipeFlow* pObject = dynamic_cast<PipeFlow*>(m_pObject);
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
    else if (strMemberName == L"FlowIn")
    {
        if (pObject->hasValue_FlowIn())
        {
            strValue = (DoubleObjectImpl(pObject->getFlowIn())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"AreaCatchment")
    {
        if (pObject->hasValue_AreaCatchment())
        {
            strValue = (DoubleObjectImpl(pObject->getAreaCatchment())).toString();
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
    else if (strMemberName == L"DepthCritical")
    {
        if (pObject->hasValue_DepthCritical())
        {
            strValue = (DoubleObjectImpl(pObject->getDepthCritical())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"HglDown")
    {
        if (pObject->hasValue_HglDown())
        {
            strValue = (DoubleObjectImpl(pObject->getHglDown())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"HglUp")
    {
        if (pObject->hasValue_HglUp())
        {
            strValue = (DoubleObjectImpl(pObject->getHglUp())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"Intensity")
    {
        if (pObject->hasValue_Intensity())
        {
            strValue = (DoubleObjectImpl(pObject->getIntensity())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"RunoffCoeff")
    {
        if (pObject->hasValue_RunoffCoeff())
        {
            strValue = (DoubleObjectImpl(pObject->getRunoffCoeff())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"SlopeCritical")
    {
        if (pObject->hasValue_SlopeCritical())
        {
            strValue = (DoubleObjectImpl(pObject->getSlopeCritical())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"TimeInlet")
    {
        if (pObject->hasValue_TimeInlet())
        {
            strValue = (DoubleObjectImpl(pObject->getTimeInlet())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"VelocityCritical")
    {
        if (pObject->hasValue_VelocityCritical())
        {
            strValue = (DoubleObjectImpl(pObject->getVelocityCritical())).toString();
            bValueSet = true;
        }
    }
    return bValueSet;
}

String PipeFlowNode::nodeName() const
{
    return L"PipeFlow";
}

ComplexNameCollectionNode::ComplexNameCollectionNode (Object& obj)
    : CollectionNode(&obj) 
{
    initialize(&obj);
}

ComplexNameCollectionNode::ComplexNameCollectionNode (Object* pObj)
    : CollectionNode (pObj) 
{
    initialize(pObj);
}

void ComplexNameCollectionNode::initialize (Object* pObj)
{
    ILxNode* pVariant = NULL;
    m_pLxObj = dynamic_cast<ComplexNameCollection*>(pObj);
    if (m_pLxObj == NULL)
        throw new Exception(Exception::Code::kFail, L"ComplexNameCollectionNode :: Invalid Object.");
    int nNumChildren = m_pLxObj->count();
    m_arrChildren.reserve(nNumChildren);
    ComplexNameCollectionIterator* pIterator = m_pLxObj->iterator();
    m_nNumChildren = 0;
    while (!pIterator->atEnd())
    {
        m_arrChildren.push_back(new ComplexNameNode(pIterator->current()));
        pIterator->next();
    }
    pIterator->release();
}

String ComplexNameCollectionNode::nodeName() const
{
    return L"ComplexNameCollection";
}

ILxNode* ComplexNameCollectionNode::findChild(const String& strChildId) const
{
    return NULL;
}
RetWallPntNode::RetWallPntNode (Object* pObj)
    : ObjectNode (pObj)
{
    ILxNode* pVariant = NULL;
    m_pLxObj = dynamic_cast<RetWallPnt*>(pObj);
    if (m_pLxObj == NULL)
        throw new Exception(Exception::Code::kFail, L"RetWallPntNode :: Invalid Object.");
    DoubleCollection* pValObj = dynamic_cast<DoubleCollection*>(m_pLxObj);
    int nNumChildren = 12;
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
    m_arrChildren.push_back(new ValueNode(this, L"Height", L"Height"));
    m_arrChildren.push_back(new ValueNode(this, L"Offset", L"Offset"));
}

bool RetWallPntNode::setValue (const String& strMemberName, const String* pstrValue)
{
    bool bValueSet = false;
    RetWallPnt* pObject = dynamic_cast<RetWallPnt*>(m_pObject);
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
    return bValueSet;
}

bool RetWallPntNode::getValue (const String& strMemberName, String& strValue)
{
    bool bValueSet = false;
    RetWallPnt* pObject = dynamic_cast<RetWallPnt*>(m_pObject);
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
    else if (strMemberName == L"Height")
    {
        if (pObject->hasValue_Height())
        {
            strValue = (DoubleObjectImpl(pObject->getHeight())).toString();
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
    return bValueSet;
}

String RetWallPntNode::nodeName() const
{
    return L"RetWallPnt";
}

RawObservationCollectionNode::RawObservationCollectionNode (Object& obj)
    : CollectionNode(&obj) 
{
    initialize(&obj);
}

RawObservationCollectionNode::RawObservationCollectionNode (Object* pObj)
    : CollectionNode (pObj) 
{
    initialize(pObj);
}

void RawObservationCollectionNode::initialize (Object* pObj)
{
    ILxNode* pVariant = NULL;
    m_pLxObj = dynamic_cast<RawObservationCollection*>(pObj);
    if (m_pLxObj == NULL)
        throw new Exception(Exception::Code::kFail, L"RawObservationCollectionNode :: Invalid Object.");
    int nNumChildren = m_pLxObj->count();
    m_arrChildren.reserve(nNumChildren);
    RawObservationCollectionIterator* pIterator = m_pLxObj->iterator();
    m_nNumChildren = 0;
    while (!pIterator->atEnd())
    {
        m_arrChildren.push_back(new RawObservationNode(pIterator->current()));
        pIterator->next();
    }
    pIterator->release();
}

String RawObservationCollectionNode::nodeName() const
{
    return L"RawObservationCollection";
}

ILxNode* RawObservationCollectionNode::findChild(const String& strChildId) const
{
    return NULL;
}
}; // namespace : LX
