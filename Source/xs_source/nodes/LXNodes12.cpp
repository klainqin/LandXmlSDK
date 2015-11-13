#include "stdafx.h"
#include "ObjectNode.h"
#include "CollectionNode.h"
#include "ValueNode.h"
#include "Exception.h"
#include "ValueTypeObjects.h"
#include "LXTypesImpl.h"
#include "LXNodes.h"
#include "ParcelCollection.h"
#include "MonumentsCollection.h"
#include "PipeNetworksCollection.h"
#include "SurveyCollection.h"
#include "Boundary.h"
#include "PntList2D.h"
#include "PntList3D.h"
#include "FeatureCollection.h"

namespace LX
{

ParcelCollectionNode::ParcelCollectionNode (Object& obj)
    : CollectionNode(&obj) 
{
    initialize(&obj);
}

ParcelCollectionNode::ParcelCollectionNode (Object* pObj)
    : CollectionNode (pObj) 
{
    initialize(pObj);
}

void ParcelCollectionNode::initialize (Object* pObj)
{
    ILxNode* pVariant = NULL;
    m_pLxObj = dynamic_cast<ParcelCollection*>(pObj);
    if (m_pLxObj == NULL)
        throw new Exception(Exception::Code::kFail, L"ParcelCollectionNode :: Invalid Object.");
    int nNumChildren = m_pLxObj->count();
    m_arrChildren.reserve(nNumChildren);
    ParcelCollectionIterator* pIterator = m_pLxObj->iterator();
    m_nNumChildren = 0;
    while (!pIterator->atEnd())
    {
        m_arrChildren.push_back(new ParcelNode(pIterator->current()));
        pIterator->next();
    }
    pIterator->release();
}

String ParcelCollectionNode::nodeName() const
{
    return L"ParcelCollection";
}

ILxNode* ParcelCollectionNode::findChild(const String& strChildId) const
{
    // Grab string from child
    StringObjectImpl::Type idValue;
    ILxNode* pFoundNode = NULL;
    if (StringObjectImpl::parseString(strChildId.c_str(), strChildId.size(), idValue))
    {
        ParcelCollectionIterator* pFoundIter = m_pLxObj->find(idValue);
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
MonumentsCollectionNode::MonumentsCollectionNode (Object& obj)
    : CollectionNode(&obj) 
{
    initialize(&obj);
}

MonumentsCollectionNode::MonumentsCollectionNode (Object* pObj)
    : CollectionNode (pObj) 
{
    initialize(pObj);
}

void MonumentsCollectionNode::initialize (Object* pObj)
{
    ILxNode* pVariant = NULL;
    m_pLxObj = dynamic_cast<MonumentsCollection*>(pObj);
    if (m_pLxObj == NULL)
        throw new Exception(Exception::Code::kFail, L"MonumentsCollectionNode :: Invalid Object.");
    int nNumChildren = m_pLxObj->count();
    m_arrChildren.reserve(nNumChildren);
    MonumentsCollectionIterator* pIterator = m_pLxObj->iterator();
    m_nNumChildren = 0;
    while (!pIterator->atEnd())
    {
        m_arrChildren.push_back(new MonumentsNode(pIterator->current()));
        pIterator->next();
    }
    pIterator->release();
}

String MonumentsCollectionNode::nodeName() const
{
    return L"MonumentsCollection";
}

ILxNode* MonumentsCollectionNode::findChild(const String& strChildId) const
{
    // Grab string from child
    StringObjectImpl::Type idValue;
    ILxNode* pFoundNode = NULL;
    if (StringObjectImpl::parseString(strChildId.c_str(), strChildId.size(), idValue))
    {
        MonumentsCollectionIterator* pFoundIter = m_pLxObj->find(idValue);
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
PipeNetworksCollectionNode::PipeNetworksCollectionNode (Object& obj)
    : CollectionNode(&obj) 
{
    initialize(&obj);
}

PipeNetworksCollectionNode::PipeNetworksCollectionNode (Object* pObj)
    : CollectionNode (pObj) 
{
    initialize(pObj);
}

void PipeNetworksCollectionNode::initialize (Object* pObj)
{
    ILxNode* pVariant = NULL;
    m_pLxObj = dynamic_cast<PipeNetworksCollection*>(pObj);
    if (m_pLxObj == NULL)
        throw new Exception(Exception::Code::kFail, L"PipeNetworksCollectionNode :: Invalid Object.");
    int nNumChildren = m_pLxObj->count();
    m_arrChildren.reserve(nNumChildren);
    PipeNetworksCollectionIterator* pIterator = m_pLxObj->iterator();
    m_nNumChildren = 0;
    while (!pIterator->atEnd())
    {
        m_arrChildren.push_back(new PipeNetworksNode(pIterator->current()));
        pIterator->next();
    }
    pIterator->release();
}

String PipeNetworksCollectionNode::nodeName() const
{
    return L"PipeNetworksCollection";
}

ILxNode* PipeNetworksCollectionNode::findChild(const String& strChildId) const
{
    // Grab string from child
    StringObjectImpl::Type idValue;
    ILxNode* pFoundNode = NULL;
    if (StringObjectImpl::parseString(strChildId.c_str(), strChildId.size(), idValue))
    {
        PipeNetworksCollectionIterator* pFoundIter = m_pLxObj->find(idValue);
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
SurveyCollectionNode::SurveyCollectionNode (Object& obj)
    : CollectionNode(&obj) 
{
    initialize(&obj);
}

SurveyCollectionNode::SurveyCollectionNode (Object* pObj)
    : CollectionNode (pObj) 
{
    initialize(pObj);
}

void SurveyCollectionNode::initialize (Object* pObj)
{
    ILxNode* pVariant = NULL;
    m_pLxObj = dynamic_cast<SurveyCollection*>(pObj);
    if (m_pLxObj == NULL)
        throw new Exception(Exception::Code::kFail, L"SurveyCollectionNode :: Invalid Object.");
    int nNumChildren = m_pLxObj->count();
    m_arrChildren.reserve(nNumChildren);
    SurveyCollectionIterator* pIterator = m_pLxObj->iterator();
    m_nNumChildren = 0;
    while (!pIterator->atEnd())
    {
        m_arrChildren.push_back(new SurveyNode(pIterator->current()));
        pIterator->next();
    }
    pIterator->release();
}

String SurveyCollectionNode::nodeName() const
{
    return L"SurveyCollection";
}

ILxNode* SurveyCollectionNode::findChild(const String& strChildId) const
{
    return NULL;
}
BoundaryNode::BoundaryNode (Object* pObj)
    : ObjectNode (pObj)
{
    ILxNode* pVariant = NULL;
    m_pLxObj = dynamic_cast<Boundary*>(pObj);
    if (m_pLxObj == NULL)
        throw new Exception(Exception::Code::kFail, L"BoundaryNode :: Invalid Object.");
    int nNumChildren = 8;
    m_arrChildren.reserve(nNumChildren);
    m_nNumChildren = 0;
    if (dynamic_cast<PntList2D*>(m_pLxObj->getPntList()))
        if (m_pLxObj->getPntList())
            m_arrChildren.push_back(new PntList2DNode(m_pLxObj->getPntList()));
    if (dynamic_cast<PntList3D*>(m_pLxObj->getPntList()))
        if (m_pLxObj->getPntList())
            m_arrChildren.push_back(new PntList3DNode(m_pLxObj->getPntList()));
    m_arrChildren.push_back(new FeatureCollectionNode(m_pLxObj->Feature()));
    m_arrChildren.push_back(new ValueNode(this, L"BndType", L"BndType"));
    m_arrChildren.push_back(new ValueNode(this, L"EdgeTrim", L"EdgeTrim"));
    m_arrChildren.push_back(new ValueNode(this, L"Area", L"Area"));
    m_arrChildren.push_back(new ValueNode(this, L"Desc", L"Desc"));
    m_arrChildren.push_back(new ValueNode(this, L"Name", L"Name"));
    m_arrChildren.push_back(new ValueNode(this, L"State", L"State"));
}

bool BoundaryNode::setValue (const String& strMemberName, const String* pstrValue)
{
    bool bValueSet = false;
    Boundary* pObject = dynamic_cast<Boundary*>(m_pObject);
    if (strMemberName == L"BndType")
    {
        if (!pstrValue)
        {
            pObject->resetValue_BndType();
        }
        else
        {
            pObject->setBndType(EnumSurfBndTypeImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"EdgeTrim")
    {
        if (!pstrValue)
        {
            pObject->resetValue_EdgeTrim();
        }
        else
        {
            pObject->setEdgeTrim(BooleanObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"Area")
    {
        if (!pstrValue)
        {
            pObject->resetValue_Area();
        }
        else
        {
            pObject->setArea(DoubleObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
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

bool BoundaryNode::getValue (const String& strMemberName, String& strValue)
{
    bool bValueSet = false;
    Boundary* pObject = dynamic_cast<Boundary*>(m_pObject);
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
    else if (strMemberName == L"BndType")
    {
        if (pObject->hasValue_BndType())
        {
            strValue = (EnumSurfBndTypeImpl(pObject->getBndType())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"EdgeTrim")
    {
        if (pObject->hasValue_EdgeTrim())
        {
            strValue = (BooleanObjectImpl(pObject->getEdgeTrim())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"Area")
    {
        if (pObject->hasValue_Area())
        {
            strValue = (DoubleObjectImpl(pObject->getArea())).toString();
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

String BoundaryNode::nodeName() const
{
    return L"Boundary";
}

}; // namespace : LX
