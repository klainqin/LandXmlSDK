#include "stdafx.h"
#include "ObjectNode.h"
#include "CollectionNode.h"
#include "ValueNode.h"
#include "Exception.h"
#include "ValueTypeObjects.h"
#include "LXTypesImpl.h"
#include "LXNodes.h"
#include "BridgeElement.h"
#include "Speeds.h"
#include "DesignSpeedCollection.h"
#include "DesignSpeed85thCollection.h"
#include "PostedSpeedCollection.h"
#include "FeatureCollection.h"
#include "OutletStruct.h"
#include "CrossSectsCollection.h"
#include "Breakline.h"
#include "PntList2D.h"
#include "PntList3D.h"

namespace LX
{

BridgeElementNode::BridgeElementNode (Object* pObj)
    : ObjectNode (pObj)
{
    ILxNode* pVariant = NULL;
    m_pLxObj = dynamic_cast<BridgeElement*>(pObj);
    if (m_pLxObj == NULL)
        throw new Exception(Exception::Code::kFail, L"BridgeElementNode :: Invalid Object.");
    int nNumChildren = 4;
    m_arrChildren.reserve(nNumChildren);
    m_nNumChildren = 0;
    m_arrChildren.push_back(new ValueNode(this, L"StaStart", L"StaStart"));
    m_arrChildren.push_back(new ValueNode(this, L"StaEnd", L"StaEnd"));
    m_arrChildren.push_back(new ValueNode(this, L"Width", L"Width"));
    m_arrChildren.push_back(new ValueNode(this, L"ProjectType", L"ProjectType"));
}

bool BridgeElementNode::setValue (const String& strMemberName, const String* pstrValue)
{
    bool bValueSet = false;
    BridgeElement* pObject = dynamic_cast<BridgeElement*>(m_pObject);
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
    if (strMemberName == L"ProjectType")
    {
        if (!pstrValue)
        {
            pObject->resetValue_ProjectType();
        }
        else
        {
            pObject->setProjectType(EnumBridgeProjectTypeImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    return bValueSet;
}

bool BridgeElementNode::getValue (const String& strMemberName, String& strValue)
{
    bool bValueSet = false;
    BridgeElement* pObject = dynamic_cast<BridgeElement*>(m_pObject);
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
    else if (strMemberName == L"Width")
    {
        if (pObject->hasValue_Width())
        {
            strValue = (DoubleObjectImpl(pObject->getWidth())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"ProjectType")
    {
        if (pObject->hasValue_ProjectType())
        {
            strValue = (EnumBridgeProjectTypeImpl(pObject->getProjectType())).toString();
            bValueSet = true;
        }
    }
    return bValueSet;
}

String BridgeElementNode::nodeName() const
{
    return L"BridgeElement";
}

SpeedsNode::SpeedsNode (Object* pObj)
    : ObjectNode (pObj)
{
    ILxNode* pVariant = NULL;
    m_pLxObj = dynamic_cast<Speeds*>(pObj);
    if (m_pLxObj == NULL)
        throw new Exception(Exception::Code::kFail, L"SpeedsNode :: Invalid Object.");
    int nNumChildren = 4;
    m_arrChildren.reserve(nNumChildren);
    m_nNumChildren = 0;
    m_arrChildren.push_back(new DesignSpeedCollectionNode(m_pLxObj->DesignSpeed()));
    m_arrChildren.push_back(new DesignSpeed85thCollectionNode(m_pLxObj->DesignSpeed85th()));
    m_arrChildren.push_back(new PostedSpeedCollectionNode(m_pLxObj->PostedSpeed()));
    m_arrChildren.push_back(new FeatureCollectionNode(m_pLxObj->Feature()));
}

bool SpeedsNode::setValue (const String& strMemberName, const String* pstrValue)
{
    bool bValueSet = false;
    Speeds* pObject = dynamic_cast<Speeds*>(m_pObject);
    return bValueSet;
}

bool SpeedsNode::getValue (const String& strMemberName, String& strValue)
{
    bool bValueSet = false;
    Speeds* pObject = dynamic_cast<Speeds*>(m_pObject);
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

String SpeedsNode::nodeName() const
{
    return L"Speeds";
}

OutletStructNode::OutletStructNode (Object* pObj)
    : ObjectNode (pObj)
{
    ILxNode* pVariant = NULL;
    m_pLxObj = dynamic_cast<OutletStruct*>(pObj);
    if (m_pLxObj == NULL)
        throw new Exception(Exception::Code::kFail, L"OutletStructNode :: Invalid Object.");
    int nNumChildren = 1;
    m_arrChildren.reserve(nNumChildren);
    m_nNumChildren = 0;
    m_arrChildren.push_back(new FeatureCollectionNode(m_pLxObj->Feature()));
}

bool OutletStructNode::setValue (const String& strMemberName, const String* pstrValue)
{
    bool bValueSet = false;
    OutletStruct* pObject = dynamic_cast<OutletStruct*>(m_pObject);
    return bValueSet;
}

bool OutletStructNode::getValue (const String& strMemberName, String& strValue)
{
    bool bValueSet = false;
    OutletStruct* pObject = dynamic_cast<OutletStruct*>(m_pObject);
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

String OutletStructNode::nodeName() const
{
    return L"OutletStruct";
}

CrossSectsCollectionNode::CrossSectsCollectionNode (Object& obj)
    : CollectionNode(&obj) 
{
    initialize(&obj);
}

CrossSectsCollectionNode::CrossSectsCollectionNode (Object* pObj)
    : CollectionNode (pObj) 
{
    initialize(pObj);
}

void CrossSectsCollectionNode::initialize (Object* pObj)
{
    ILxNode* pVariant = NULL;
    m_pLxObj = dynamic_cast<CrossSectsCollection*>(pObj);
    if (m_pLxObj == NULL)
        throw new Exception(Exception::Code::kFail, L"CrossSectsCollectionNode :: Invalid Object.");
    int nNumChildren = m_pLxObj->count();
    m_arrChildren.reserve(nNumChildren);
    CrossSectsCollectionIterator* pIterator = m_pLxObj->iterator();
    m_nNumChildren = 0;
    while (!pIterator->atEnd())
    {
        m_arrChildren.push_back(new CrossSectsNode(pIterator->current()));
        pIterator->next();
    }
    pIterator->release();
}

String CrossSectsCollectionNode::nodeName() const
{
    return L"CrossSectsCollection";
}

ILxNode* CrossSectsCollectionNode::findChild(const String& strChildId) const
{
    // Grab string from child
    StringObjectImpl::Type idValue;
    ILxNode* pFoundNode = NULL;
    if (StringObjectImpl::parseString(strChildId.c_str(), strChildId.size(), idValue))
    {
        CrossSectsCollectionIterator* pFoundIter = m_pLxObj->find(idValue);
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
BreaklineNode::BreaklineNode (Object* pObj)
    : ObjectNode (pObj)
{
    ILxNode* pVariant = NULL;
    m_pLxObj = dynamic_cast<Breakline*>(pObj);
    if (m_pLxObj == NULL)
        throw new Exception(Exception::Code::kFail, L"BreaklineNode :: Invalid Object.");
    int nNumChildren = 6;
    m_arrChildren.reserve(nNumChildren);
    m_nNumChildren = 0;
    if (dynamic_cast<PntList2D*>(m_pLxObj->getPntList()))
        if (m_pLxObj->getPntList())
            m_arrChildren.push_back(new PntList2DNode(m_pLxObj->getPntList()));
    if (dynamic_cast<PntList3D*>(m_pLxObj->getPntList()))
        if (m_pLxObj->getPntList())
            m_arrChildren.push_back(new PntList3DNode(m_pLxObj->getPntList()));
    m_arrChildren.push_back(new FeatureCollectionNode(m_pLxObj->Feature()));
    m_arrChildren.push_back(new ValueNode(this, L"BrkType", L"BrkType"));
    m_arrChildren.push_back(new ValueNode(this, L"Desc", L"Desc"));
    m_arrChildren.push_back(new ValueNode(this, L"Name", L"Name"));
    m_arrChildren.push_back(new ValueNode(this, L"State", L"State"));
}

bool BreaklineNode::setValue (const String& strMemberName, const String* pstrValue)
{
    bool bValueSet = false;
    Breakline* pObject = dynamic_cast<Breakline*>(m_pObject);
    if (strMemberName == L"BrkType")
    {
        if (!pstrValue)
        {
            pObject->resetValue_BrkType();
        }
        else
        {
            pObject->setBrkType(EnumBreakLineTypeImpl::parseString(pstrValue->c_str(), pstrValue->length()));
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

bool BreaklineNode::getValue (const String& strMemberName, String& strValue)
{
    bool bValueSet = false;
    Breakline* pObject = dynamic_cast<Breakline*>(m_pObject);
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
    else if (strMemberName == L"BrkType")
    {
        if (pObject->hasValue_BrkType())
        {
            strValue = (EnumBreakLineTypeImpl(pObject->getBrkType())).toString();
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

String BreaklineNode::nodeName() const
{
    return L"Breakline";
}

}; // namespace : LX
