#include "stdafx.h"
#include "ObjectNode.h"
#include "CollectionNode.h"
#include "ValueNode.h"
#include "Exception.h"
#include "ValueTypeObjects.h"
#include "LXTypesImpl.h"
#include "LXNodes.h"
#include "AnnotationCollection.h"
#include "CoordGeomCollection.h"
#include "RunoffSta.h"
#include "ContourCollection.h"
#include "EndofRunoutSta.h"

namespace LX
{

AnnotationCollectionNode::AnnotationCollectionNode (Object& obj)
    : CollectionNode(&obj) 
{
    initialize(&obj);
}

AnnotationCollectionNode::AnnotationCollectionNode (Object* pObj)
    : CollectionNode (pObj) 
{
    initialize(pObj);
}

void AnnotationCollectionNode::initialize (Object* pObj)
{
    ILxNode* pVariant = NULL;
    m_pLxObj = dynamic_cast<AnnotationCollection*>(pObj);
    if (m_pLxObj == NULL)
        throw new Exception(Exception::Code::kFail, L"AnnotationCollectionNode :: Invalid Object.");
    int nNumChildren = m_pLxObj->count();
    m_arrChildren.reserve(nNumChildren);
    AnnotationCollectionIterator* pIterator = m_pLxObj->iterator();
    m_nNumChildren = 0;
    while (!pIterator->atEnd())
    {
        m_arrChildren.push_back(new AnnotationNode(pIterator->current()));
        pIterator->next();
    }
    pIterator->release();
}

String AnnotationCollectionNode::nodeName() const
{
    return L"AnnotationCollection";
}

ILxNode* AnnotationCollectionNode::findChild(const String& strChildId) const
{
    // Grab string from child
    StringObjectImpl::Type idValue;
    ILxNode* pFoundNode = NULL;
    if (StringObjectImpl::parseString(strChildId.c_str(), strChildId.size(), idValue))
    {
        AnnotationCollectionIterator* pFoundIter = m_pLxObj->find(idValue);
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
CoordGeomCollectionNode::CoordGeomCollectionNode (Object& obj)
    : CollectionNode(&obj) 
{
    initialize(&obj);
}

CoordGeomCollectionNode::CoordGeomCollectionNode (Object* pObj)
    : CollectionNode (pObj) 
{
    initialize(pObj);
}

void CoordGeomCollectionNode::initialize (Object* pObj)
{
    ILxNode* pVariant = NULL;
    m_pLxObj = dynamic_cast<CoordGeomCollection*>(pObj);
    if (m_pLxObj == NULL)
        throw new Exception(Exception::Code::kFail, L"CoordGeomCollectionNode :: Invalid Object.");
    int nNumChildren = m_pLxObj->count();
    m_arrChildren.reserve(nNumChildren);
    CoordGeomCollectionIterator* pIterator = m_pLxObj->iterator();
    m_nNumChildren = 0;
    while (!pIterator->atEnd())
    {
        m_arrChildren.push_back(new CoordGeomNode(pIterator->current()));
        pIterator->next();
    }
    pIterator->release();
}

String CoordGeomCollectionNode::nodeName() const
{
    return L"CoordGeomCollection";
}

ILxNode* CoordGeomCollectionNode::findChild(const String& strChildId) const
{
    // Grab string from child
    StringObjectImpl::Type idValue;
    ILxNode* pFoundNode = NULL;
    if (StringObjectImpl::parseString(strChildId.c_str(), strChildId.size(), idValue))
    {
        CoordGeomCollectionIterator* pFoundIter = m_pLxObj->find(idValue);
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
RunoffStaNode::RunoffStaNode (Object* pObj)
    : ObjectNode (pObj)
{
    ILxNode* pVariant = NULL;
    m_pLxObj = dynamic_cast<RunoffSta*>(pObj);
    if (m_pLxObj == NULL)
        throw new Exception(Exception::Code::kFail, L"RunoffStaNode :: Invalid Object.");
    DoubleObject* pValObj = dynamic_cast<DoubleObject*>(m_pLxObj);
    int nNumChildren = 0;
    if (pValObj)
        nNumChildren += 1;
    m_arrChildren.reserve(nNumChildren);
    m_nNumChildren = 0;
    if (pValObj)
    {
        m_arrChildren.push_back(new ValueNode(this, L"value", L"value"));
    }
}

bool RunoffStaNode::setValue (const String& strMemberName, const String* pstrValue)
{
    bool bValueSet = false;
    RunoffSta* pObject = dynamic_cast<RunoffSta*>(m_pObject);
    return bValueSet;
}

bool RunoffStaNode::getValue (const String& strMemberName, String& strValue)
{
    bool bValueSet = false;
    RunoffSta* pObject = dynamic_cast<RunoffSta*>(m_pObject);
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

String RunoffStaNode::nodeName() const
{
    return L"RunoffSta";
}

ContourCollectionNode::ContourCollectionNode (Object& obj)
    : CollectionNode(&obj) 
{
    initialize(&obj);
}

ContourCollectionNode::ContourCollectionNode (Object* pObj)
    : CollectionNode (pObj) 
{
    initialize(pObj);
}

void ContourCollectionNode::initialize (Object* pObj)
{
    ILxNode* pVariant = NULL;
    m_pLxObj = dynamic_cast<ContourCollection*>(pObj);
    if (m_pLxObj == NULL)
        throw new Exception(Exception::Code::kFail, L"ContourCollectionNode :: Invalid Object.");
    int nNumChildren = m_pLxObj->count();
    m_arrChildren.reserve(nNumChildren);
    ContourCollectionIterator* pIterator = m_pLxObj->iterator();
    m_nNumChildren = 0;
    while (!pIterator->atEnd())
    {
        m_arrChildren.push_back(new ContourNode(pIterator->current()));
        pIterator->next();
    }
    pIterator->release();
}

String ContourCollectionNode::nodeName() const
{
    return L"ContourCollection";
}

ILxNode* ContourCollectionNode::findChild(const String& strChildId) const
{
    return NULL;
}
EndofRunoutStaNode::EndofRunoutStaNode (Object* pObj)
    : ObjectNode (pObj)
{
    ILxNode* pVariant = NULL;
    m_pLxObj = dynamic_cast<EndofRunoutSta*>(pObj);
    if (m_pLxObj == NULL)
        throw new Exception(Exception::Code::kFail, L"EndofRunoutStaNode :: Invalid Object.");
    DoubleObject* pValObj = dynamic_cast<DoubleObject*>(m_pLxObj);
    int nNumChildren = 0;
    if (pValObj)
        nNumChildren += 1;
    m_arrChildren.reserve(nNumChildren);
    m_nNumChildren = 0;
    if (pValObj)
    {
        m_arrChildren.push_back(new ValueNode(this, L"value", L"value"));
    }
}

bool EndofRunoutStaNode::setValue (const String& strMemberName, const String* pstrValue)
{
    bool bValueSet = false;
    EndofRunoutSta* pObject = dynamic_cast<EndofRunoutSta*>(m_pObject);
    return bValueSet;
}

bool EndofRunoutStaNode::getValue (const String& strMemberName, String& strValue)
{
    bool bValueSet = false;
    EndofRunoutSta* pObject = dynamic_cast<EndofRunoutSta*>(m_pObject);
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

String EndofRunoutStaNode::nodeName() const
{
    return L"EndofRunoutSta";
}

}; // namespace : LX
