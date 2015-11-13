#include "stdafx.h"
#include "ObjectNode.h"
#include "CollectionNode.h"
#include "ValueNode.h"
#include "Exception.h"
#include "ValueTypeObjects.h"
#include "LXTypesImpl.h"
#include "LXNodes.h"
#include "PlanFeatureCollection.h"
#include "Invert.h"
#include "Contours.h"
#include "ContourCollection.h"
#include "FeatureCollection.h"
#include "RoadwaysCollection.h"
#include "Lanes.h"
#include "ThruLaneCollection.h"
#include "PassingLaneCollection.h"
#include "TurnLaneCollection.h"
#include "TwoWayLeftTurnLaneCollection.h"
#include "ClimbLaneCollection.h"
#include "OffsetLaneCollection.h"
#include "WideningLaneCollection.h"

namespace LX
{

PlanFeatureCollectionNode::PlanFeatureCollectionNode (Object& obj)
    : CollectionNode(&obj) 
{
    initialize(&obj);
}

PlanFeatureCollectionNode::PlanFeatureCollectionNode (Object* pObj)
    : CollectionNode (pObj) 
{
    initialize(pObj);
}

void PlanFeatureCollectionNode::initialize (Object* pObj)
{
    ILxNode* pVariant = NULL;
    m_pLxObj = dynamic_cast<PlanFeatureCollection*>(pObj);
    if (m_pLxObj == NULL)
        throw new Exception(Exception::Code::kFail, L"PlanFeatureCollectionNode :: Invalid Object.");
    int nNumChildren = m_pLxObj->count();
    m_arrChildren.reserve(nNumChildren);
    PlanFeatureCollectionIterator* pIterator = m_pLxObj->iterator();
    m_nNumChildren = 0;
    while (!pIterator->atEnd())
    {
        m_arrChildren.push_back(new PlanFeatureNode(pIterator->current()));
        pIterator->next();
    }
    pIterator->release();
}

String PlanFeatureCollectionNode::nodeName() const
{
    return L"PlanFeatureCollection";
}

ILxNode* PlanFeatureCollectionNode::findChild(const String& strChildId) const
{
    // Grab string from child
    StringObjectImpl::Type idValue;
    ILxNode* pFoundNode = NULL;
    if (StringObjectImpl::parseString(strChildId.c_str(), strChildId.size(), idValue))
    {
        PlanFeatureCollectionIterator* pFoundIter = m_pLxObj->find(idValue);
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
InvertNode::InvertNode (Object* pObj)
    : ObjectNode (pObj)
{
    ILxNode* pVariant = NULL;
    m_pLxObj = dynamic_cast<Invert*>(pObj);
    if (m_pLxObj == NULL)
        throw new Exception(Exception::Code::kFail, L"InvertNode :: Invalid Object.");
    int nNumChildren = 4;
    m_arrChildren.reserve(nNumChildren);
    m_nNumChildren = 0;
    m_arrChildren.push_back(new ValueNode(this, L"Desc", L"Desc"));
    m_arrChildren.push_back(new ValueNode(this, L"Elev", L"Elev"));
    m_arrChildren.push_back(new ValueNode(this, L"FlowDir", L"FlowDir"));
    m_arrChildren.push_back(new ValueNode(this, L"RefPipe", L"RefPipe"));
}

bool InvertNode::setValue (const String& strMemberName, const String* pstrValue)
{
    bool bValueSet = false;
    Invert* pObject = dynamic_cast<Invert*>(m_pObject);
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
    if (strMemberName == L"Elev")
    {
        if (!pstrValue)
        {
            pObject->resetValue_Elev();
        }
        else
        {
            pObject->setElev(DoubleObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"FlowDir")
    {
        if (!pstrValue)
        {
            pObject->resetValue_FlowDir();
        }
        else
        {
            pObject->setFlowDir(EnumInOutImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"RefPipe")
    {
        if (!pstrValue)
        {
            pObject->resetValue_RefPipe();
        }
        else
        {
            pObject->setRefPipe(StringObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    return bValueSet;
}

bool InvertNode::getValue (const String& strMemberName, String& strValue)
{
    bool bValueSet = false;
    Invert* pObject = dynamic_cast<Invert*>(m_pObject);
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
    else if (strMemberName == L"Elev")
    {
        if (pObject->hasValue_Elev())
        {
            strValue = (DoubleObjectImpl(pObject->getElev())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"FlowDir")
    {
        if (pObject->hasValue_FlowDir())
        {
            strValue = (EnumInOutImpl(pObject->getFlowDir())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"RefPipe")
    {
        if (pObject->hasValue_RefPipe())
        {
            strValue = (StringObjectImpl(pObject->getRefPipe())).toString();
            bValueSet = true;
        }
    }
    return bValueSet;
}

String InvertNode::nodeName() const
{
    return L"Invert";
}

ContoursNode::ContoursNode (Object* pObj)
    : ObjectNode (pObj)
{
    ILxNode* pVariant = NULL;
    m_pLxObj = dynamic_cast<Contours*>(pObj);
    if (m_pLxObj == NULL)
        throw new Exception(Exception::Code::kFail, L"ContoursNode :: Invalid Object.");
    int nNumChildren = 2;
    m_arrChildren.reserve(nNumChildren);
    m_nNumChildren = 0;
    m_arrChildren.push_back(new ContourCollectionNode(m_pLxObj->Contour()));
    m_arrChildren.push_back(new FeatureCollectionNode(m_pLxObj->Feature()));
}

bool ContoursNode::setValue (const String& strMemberName, const String* pstrValue)
{
    bool bValueSet = false;
    Contours* pObject = dynamic_cast<Contours*>(m_pObject);
    return bValueSet;
}

bool ContoursNode::getValue (const String& strMemberName, String& strValue)
{
    bool bValueSet = false;
    Contours* pObject = dynamic_cast<Contours*>(m_pObject);
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
    return bValueSet;
}

String ContoursNode::nodeName() const
{
    return L"Contours";
}

RoadwaysCollectionNode::RoadwaysCollectionNode (Object& obj)
    : CollectionNode(&obj) 
{
    initialize(&obj);
}

RoadwaysCollectionNode::RoadwaysCollectionNode (Object* pObj)
    : CollectionNode (pObj) 
{
    initialize(pObj);
}

void RoadwaysCollectionNode::initialize (Object* pObj)
{
    ILxNode* pVariant = NULL;
    m_pLxObj = dynamic_cast<RoadwaysCollection*>(pObj);
    if (m_pLxObj == NULL)
        throw new Exception(Exception::Code::kFail, L"RoadwaysCollectionNode :: Invalid Object.");
    int nNumChildren = m_pLxObj->count();
    m_arrChildren.reserve(nNumChildren);
    RoadwaysCollectionIterator* pIterator = m_pLxObj->iterator();
    m_nNumChildren = 0;
    while (!pIterator->atEnd())
    {
        m_arrChildren.push_back(new RoadwaysNode(pIterator->current()));
        pIterator->next();
    }
    pIterator->release();
}

String RoadwaysCollectionNode::nodeName() const
{
    return L"RoadwaysCollection";
}

ILxNode* RoadwaysCollectionNode::findChild(const String& strChildId) const
{
    // Grab string from child
    StringObjectImpl::Type idValue;
    ILxNode* pFoundNode = NULL;
    if (StringObjectImpl::parseString(strChildId.c_str(), strChildId.size(), idValue))
    {
        RoadwaysCollectionIterator* pFoundIter = m_pLxObj->find(idValue);
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
LanesNode::LanesNode (Object* pObj)
    : ObjectNode (pObj)
{
    ILxNode* pVariant = NULL;
    m_pLxObj = dynamic_cast<Lanes*>(pObj);
    if (m_pLxObj == NULL)
        throw new Exception(Exception::Code::kFail, L"LanesNode :: Invalid Object.");
    int nNumChildren = 8;
    m_arrChildren.reserve(nNumChildren);
    m_nNumChildren = 0;
    m_arrChildren.push_back(new ThruLaneCollectionNode(m_pLxObj->ThruLane()));
    m_arrChildren.push_back(new PassingLaneCollectionNode(m_pLxObj->PassingLane()));
    m_arrChildren.push_back(new TurnLaneCollectionNode(m_pLxObj->TurnLane()));
    m_arrChildren.push_back(new TwoWayLeftTurnLaneCollectionNode(m_pLxObj->TwoWayLeftTurnLane()));
    m_arrChildren.push_back(new ClimbLaneCollectionNode(m_pLxObj->ClimbLane()));
    m_arrChildren.push_back(new OffsetLaneCollectionNode(m_pLxObj->OffsetLane()));
    m_arrChildren.push_back(new WideningLaneCollectionNode(m_pLxObj->WideningLane()));
    m_arrChildren.push_back(new FeatureCollectionNode(m_pLxObj->Feature()));
}

bool LanesNode::setValue (const String& strMemberName, const String* pstrValue)
{
    bool bValueSet = false;
    Lanes* pObject = dynamic_cast<Lanes*>(m_pObject);
    return bValueSet;
}

bool LanesNode::getValue (const String& strMemberName, String& strValue)
{
    bool bValueSet = false;
    Lanes* pObject = dynamic_cast<Lanes*>(m_pObject);
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
    return bValueSet;
}

String LanesNode::nodeName() const
{
    return L"Lanes";
}

}; // namespace : LX
