#include "stdafx.h"
#include "ObjectNode.h"
#include "CollectionNode.h"
#include "ValueNode.h"
#include "Exception.h"
#include "ValueTypeObjects.h"
#include "LXTypesImpl.h"
#include "LXNodes.h"
#include "PlanFeatures.h"
#include "PlanFeatureCollection.h"
#include "FeatureCollection.h"
#include "BeginRunoffStaCollection.h"
#include "ProfSurfCollection.h"
#include "RoadNameCollection.h"
#include "IntersectionCollection.h"

namespace LX
{

PlanFeaturesNode::PlanFeaturesNode (Object* pObj)
    : ObjectNode (pObj)
{
    ILxNode* pVariant = NULL;
    m_pLxObj = dynamic_cast<PlanFeatures*>(pObj);
    if (m_pLxObj == NULL)
        throw new Exception(Exception::Code::kFail, L"PlanFeaturesNode :: Invalid Object.");
    int nNumChildren = 5;
    m_arrChildren.reserve(nNumChildren);
    m_nNumChildren = 0;
    m_arrChildren.push_back(new PlanFeatureCollectionNode(m_pLxObj->PlanFeature()));
    m_arrChildren.push_back(new FeatureCollectionNode(m_pLxObj->Feature()));
    m_arrChildren.push_back(new ValueNode(this, L"Desc", L"Desc"));
    m_arrChildren.push_back(new ValueNode(this, L"Name", L"Name"));
    m_arrChildren.push_back(new ValueNode(this, L"State", L"State"));
}

bool PlanFeaturesNode::setValue (const String& strMemberName, const String* pstrValue)
{
    bool bValueSet = false;
    PlanFeatures* pObject = dynamic_cast<PlanFeatures*>(m_pObject);
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
    return bValueSet;
}

bool PlanFeaturesNode::getValue (const String& strMemberName, String& strValue)
{
    bool bValueSet = false;
    PlanFeatures* pObject = dynamic_cast<PlanFeatures*>(m_pObject);
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
    else if (strMemberName == L"State")
    {
        if (pObject->hasValue_State())
        {
            strValue = (EnumStateTypeImpl(pObject->getState())).toString();
            bValueSet = true;
        }
    }
    return bValueSet;
}

String PlanFeaturesNode::nodeName() const
{
    return L"PlanFeatures";
}

BeginRunoffStaCollectionNode::BeginRunoffStaCollectionNode (Object& obj)
    : CollectionNode(&obj) 
{
    initialize(&obj);
}

BeginRunoffStaCollectionNode::BeginRunoffStaCollectionNode (Object* pObj)
    : CollectionNode (pObj) 
{
    initialize(pObj);
}

void BeginRunoffStaCollectionNode::initialize (Object* pObj)
{
    ILxNode* pVariant = NULL;
    m_pLxObj = dynamic_cast<BeginRunoffStaCollection*>(pObj);
    if (m_pLxObj == NULL)
        throw new Exception(Exception::Code::kFail, L"BeginRunoffStaCollectionNode :: Invalid Object.");
    int nNumChildren = m_pLxObj->count();
    m_arrChildren.reserve(nNumChildren);
    BeginRunoffStaCollectionIterator* pIterator = m_pLxObj->iterator();
    m_nNumChildren = 0;
    while (!pIterator->atEnd())
    {
        m_arrChildren.push_back(new BeginRunoffStaNode(pIterator->current()));
        pIterator->next();
    }
    pIterator->release();
}

String BeginRunoffStaCollectionNode::nodeName() const
{
    return L"BeginRunoffStaCollection";
}

ILxNode* BeginRunoffStaCollectionNode::findChild(const String& strChildId) const
{
    return NULL;
}
ProfSurfCollectionNode::ProfSurfCollectionNode (Object& obj)
    : CollectionNode(&obj) 
{
    initialize(&obj);
}

ProfSurfCollectionNode::ProfSurfCollectionNode (Object* pObj)
    : CollectionNode (pObj) 
{
    initialize(pObj);
}

void ProfSurfCollectionNode::initialize (Object* pObj)
{
    ILxNode* pVariant = NULL;
    m_pLxObj = dynamic_cast<ProfSurfCollection*>(pObj);
    if (m_pLxObj == NULL)
        throw new Exception(Exception::Code::kFail, L"ProfSurfCollectionNode :: Invalid Object.");
    int nNumChildren = m_pLxObj->count();
    m_arrChildren.reserve(nNumChildren);
    ProfSurfCollectionIterator* pIterator = m_pLxObj->iterator();
    m_nNumChildren = 0;
    while (!pIterator->atEnd())
    {
        m_arrChildren.push_back(new ProfSurfNode(pIterator->current()));
        pIterator->next();
    }
    pIterator->release();
}

String ProfSurfCollectionNode::nodeName() const
{
    return L"ProfSurfCollection";
}

ILxNode* ProfSurfCollectionNode::findChild(const String& strChildId) const
{
    // Grab string from child
    StringObjectImpl::Type idValue;
    ILxNode* pFoundNode = NULL;
    if (StringObjectImpl::parseString(strChildId.c_str(), strChildId.size(), idValue))
    {
        ProfSurfCollectionIterator* pFoundIter = m_pLxObj->find(idValue);
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
RoadNameCollectionNode::RoadNameCollectionNode (Object& obj)
    : CollectionNode(&obj) 
{
    initialize(&obj);
}

RoadNameCollectionNode::RoadNameCollectionNode (Object* pObj)
    : CollectionNode (pObj) 
{
    initialize(pObj);
}

void RoadNameCollectionNode::initialize (Object* pObj)
{
    ILxNode* pVariant = NULL;
    m_pLxObj = dynamic_cast<RoadNameCollection*>(pObj);
    if (m_pLxObj == NULL)
        throw new Exception(Exception::Code::kFail, L"RoadNameCollectionNode :: Invalid Object.");
    int nNumChildren = m_pLxObj->count();
    m_arrChildren.reserve(nNumChildren);
    RoadNameCollectionIterator* pIterator = m_pLxObj->iterator();
    m_nNumChildren = 0;
    while (!pIterator->atEnd())
    {
        m_arrChildren.push_back(new RoadNameNode(pIterator->current()));
        pIterator->next();
    }
    pIterator->release();
}

String RoadNameCollectionNode::nodeName() const
{
    return L"RoadNameCollection";
}

ILxNode* RoadNameCollectionNode::findChild(const String& strChildId) const
{
    return NULL;
}
IntersectionCollectionNode::IntersectionCollectionNode (Object& obj)
    : CollectionNode(&obj) 
{
    initialize(&obj);
}

IntersectionCollectionNode::IntersectionCollectionNode (Object* pObj)
    : CollectionNode (pObj) 
{
    initialize(pObj);
}

void IntersectionCollectionNode::initialize (Object* pObj)
{
    ILxNode* pVariant = NULL;
    m_pLxObj = dynamic_cast<IntersectionCollection*>(pObj);
    if (m_pLxObj == NULL)
        throw new Exception(Exception::Code::kFail, L"IntersectionCollectionNode :: Invalid Object.");
    int nNumChildren = m_pLxObj->count();
    m_arrChildren.reserve(nNumChildren);
    IntersectionCollectionIterator* pIterator = m_pLxObj->iterator();
    m_nNumChildren = 0;
    while (!pIterator->atEnd())
    {
        m_arrChildren.push_back(new IntersectionNode(pIterator->current()));
        pIterator->next();
    }
    pIterator->release();
}

String IntersectionCollectionNode::nodeName() const
{
    return L"IntersectionCollection";
}

ILxNode* IntersectionCollectionNode::findChild(const String& strChildId) const
{
    return NULL;
}
}; // namespace : LX
