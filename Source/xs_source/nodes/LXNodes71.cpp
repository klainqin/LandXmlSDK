#include "stdafx.h"
#include "ObjectNode.h"
#include "CollectionNode.h"
#include "ValueNode.h"
#include "Exception.h"
#include "ValueTypeObjects.h"
#include "LXTypesImpl.h"
#include "LXNodes.h"
#include "ControlChecksCollection.h"
#include "DesignSpeed.h"
#include "FeatureCollection.h"
#include "RetWallPntCollection.h"

namespace LX
{

ControlChecksCollectionNode::ControlChecksCollectionNode (Object& obj)
    : CollectionNode(&obj) 
{
    initialize(&obj);
}

ControlChecksCollectionNode::ControlChecksCollectionNode (Object* pObj)
    : CollectionNode (pObj) 
{
    initialize(pObj);
}

void ControlChecksCollectionNode::initialize (Object* pObj)
{
    ILxNode* pVariant = NULL;
    m_pLxObj = dynamic_cast<ControlChecksCollection*>(pObj);
    if (m_pLxObj == NULL)
        throw new Exception(Exception::Code::kFail, L"ControlChecksCollectionNode :: Invalid Object.");
    int nNumChildren = m_pLxObj->count();
    m_arrChildren.reserve(nNumChildren);
    ControlChecksCollectionIterator* pIterator = m_pLxObj->iterator();
    m_nNumChildren = 0;
    while (!pIterator->atEnd())
    {
        m_arrChildren.push_back(new ControlChecksNode(pIterator->current()));
        pIterator->next();
    }
    pIterator->release();
}

String ControlChecksCollectionNode::nodeName() const
{
    return L"ControlChecksCollection";
}

ILxNode* ControlChecksCollectionNode::findChild(const String& strChildId) const
{
    return NULL;
}
DesignSpeedNode::DesignSpeedNode (Object* pObj)
    : ObjectNode (pObj)
{
    ILxNode* pVariant = NULL;
    m_pLxObj = dynamic_cast<DesignSpeed*>(pObj);
    if (m_pLxObj == NULL)
        throw new Exception(Exception::Code::kFail, L"DesignSpeedNode :: Invalid Object.");
    int nNumChildren = 4;
    m_arrChildren.reserve(nNumChildren);
    m_nNumChildren = 0;
    m_arrChildren.push_back(new FeatureCollectionNode(m_pLxObj->Feature()));
    m_arrChildren.push_back(new ValueNode(this, L"StaStart", L"StaStart"));
    m_arrChildren.push_back(new ValueNode(this, L"StaEnd", L"StaEnd"));
    m_arrChildren.push_back(new ValueNode(this, L"Speed", L"Speed"));
}

bool DesignSpeedNode::setValue (const String& strMemberName, const String* pstrValue)
{
    bool bValueSet = false;
    DesignSpeed* pObject = dynamic_cast<DesignSpeed*>(m_pObject);
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

bool DesignSpeedNode::getValue (const String& strMemberName, String& strValue)
{
    bool bValueSet = false;
    DesignSpeed* pObject = dynamic_cast<DesignSpeed*>(m_pObject);
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

String DesignSpeedNode::nodeName() const
{
    return L"DesignSpeed";
}

RetWallPntCollectionNode::RetWallPntCollectionNode (Object& obj)
    : CollectionNode(&obj) 
{
    initialize(&obj);
}

RetWallPntCollectionNode::RetWallPntCollectionNode (Object* pObj)
    : CollectionNode (pObj) 
{
    initialize(pObj);
}

void RetWallPntCollectionNode::initialize (Object* pObj)
{
    ILxNode* pVariant = NULL;
    m_pLxObj = dynamic_cast<RetWallPntCollection*>(pObj);
    if (m_pLxObj == NULL)
        throw new Exception(Exception::Code::kFail, L"RetWallPntCollectionNode :: Invalid Object.");
    int nNumChildren = m_pLxObj->count();
    m_arrChildren.reserve(nNumChildren);
    RetWallPntCollectionIterator* pIterator = m_pLxObj->iterator();
    m_nNumChildren = 0;
    while (!pIterator->atEnd())
    {
        m_arrChildren.push_back(new RetWallPntNode(pIterator->current()));
        pIterator->next();
    }
    pIterator->release();
}

String RetWallPntCollectionNode::nodeName() const
{
    return L"RetWallPntCollection";
}

ILxNode* RetWallPntCollectionNode::findChild(const String& strChildId) const
{
    // Grab string from child
    StringObjectImpl::Type idValue;
    ILxNode* pFoundNode = NULL;
    if (StringObjectImpl::parseString(strChildId.c_str(), strChildId.size(), idValue))
    {
        RetWallPntCollectionIterator* pFoundIter = m_pLxObj->find(idValue);
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
}; // namespace : LX
