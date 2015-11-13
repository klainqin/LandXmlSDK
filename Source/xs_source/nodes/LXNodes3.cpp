#include "stdafx.h"
#include "ObjectNode.h"
#include "CollectionNode.h"
#include "ValueNode.h"
#include "Exception.h"
#include "ValueTypeObjects.h"
#include "LXTypesImpl.h"
#include "LXNodes.h"
#include "ClimbLaneCollection.h"
#include "DataPointsCollection.h"
#include "FeatureDictionaryCollection.h"
#include "CrossSectCollection.h"
#include "ProfAlignCollection.h"

namespace LX
{

ClimbLaneCollectionNode::ClimbLaneCollectionNode (Object& obj)
    : CollectionNode(&obj) 
{
    initialize(&obj);
}

ClimbLaneCollectionNode::ClimbLaneCollectionNode (Object* pObj)
    : CollectionNode (pObj) 
{
    initialize(pObj);
}

void ClimbLaneCollectionNode::initialize (Object* pObj)
{
    ILxNode* pVariant = NULL;
    m_pLxObj = dynamic_cast<ClimbLaneCollection*>(pObj);
    if (m_pLxObj == NULL)
        throw new Exception(Exception::Code::kFail, L"ClimbLaneCollectionNode :: Invalid Object.");
    int nNumChildren = m_pLxObj->count();
    m_arrChildren.reserve(nNumChildren);
    ClimbLaneCollectionIterator* pIterator = m_pLxObj->iterator();
    m_nNumChildren = 0;
    while (!pIterator->atEnd())
    {
        m_arrChildren.push_back(new ClimbLaneNode(pIterator->current()));
        pIterator->next();
    }
    pIterator->release();
}

String ClimbLaneCollectionNode::nodeName() const
{
    return L"ClimbLaneCollection";
}

ILxNode* ClimbLaneCollectionNode::findChild(const String& strChildId) const
{
    return NULL;
}
DataPointsCollectionNode::DataPointsCollectionNode (Object& obj)
    : CollectionNode(&obj) 
{
    initialize(&obj);
}

DataPointsCollectionNode::DataPointsCollectionNode (Object* pObj)
    : CollectionNode (pObj) 
{
    initialize(pObj);
}

void DataPointsCollectionNode::initialize (Object* pObj)
{
    ILxNode* pVariant = NULL;
    m_pLxObj = dynamic_cast<DataPointsCollection*>(pObj);
    if (m_pLxObj == NULL)
        throw new Exception(Exception::Code::kFail, L"DataPointsCollectionNode :: Invalid Object.");
    int nNumChildren = m_pLxObj->count();
    m_arrChildren.reserve(nNumChildren);
    DataPointsCollectionIterator* pIterator = m_pLxObj->iterator();
    m_nNumChildren = 0;
    while (!pIterator->atEnd())
    {
        m_arrChildren.push_back(new DataPointsNode(pIterator->current()));
        pIterator->next();
    }
    pIterator->release();
}

String DataPointsCollectionNode::nodeName() const
{
    return L"DataPointsCollection";
}

ILxNode* DataPointsCollectionNode::findChild(const String& strChildId) const
{
    // Grab string from child
    StringObjectImpl::Type idValue;
    ILxNode* pFoundNode = NULL;
    if (StringObjectImpl::parseString(strChildId.c_str(), strChildId.size(), idValue))
    {
        DataPointsCollectionIterator* pFoundIter = m_pLxObj->find(idValue);
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
FeatureDictionaryCollectionNode::FeatureDictionaryCollectionNode (Object& obj)
    : CollectionNode(&obj) 
{
    initialize(&obj);
}

FeatureDictionaryCollectionNode::FeatureDictionaryCollectionNode (Object* pObj)
    : CollectionNode (pObj) 
{
    initialize(pObj);
}

void FeatureDictionaryCollectionNode::initialize (Object* pObj)
{
    ILxNode* pVariant = NULL;
    m_pLxObj = dynamic_cast<FeatureDictionaryCollection*>(pObj);
    if (m_pLxObj == NULL)
        throw new Exception(Exception::Code::kFail, L"FeatureDictionaryCollectionNode :: Invalid Object.");
    int nNumChildren = m_pLxObj->count();
    m_arrChildren.reserve(nNumChildren);
    FeatureDictionaryCollectionIterator* pIterator = m_pLxObj->iterator();
    m_nNumChildren = 0;
    while (!pIterator->atEnd())
    {
        m_arrChildren.push_back(new FeatureDictionaryNode(pIterator->current()));
        pIterator->next();
    }
    pIterator->release();
}

String FeatureDictionaryCollectionNode::nodeName() const
{
    return L"FeatureDictionaryCollection";
}

ILxNode* FeatureDictionaryCollectionNode::findChild(const String& strChildId) const
{
    // Grab string from child
    StringObjectImpl::Type idValue;
    ILxNode* pFoundNode = NULL;
    if (StringObjectImpl::parseString(strChildId.c_str(), strChildId.size(), idValue))
    {
        FeatureDictionaryCollectionIterator* pFoundIter = m_pLxObj->find(idValue);
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
CrossSectCollectionNode::CrossSectCollectionNode (Object& obj)
    : CollectionNode(&obj) 
{
    initialize(&obj);
}

CrossSectCollectionNode::CrossSectCollectionNode (Object* pObj)
    : CollectionNode (pObj) 
{
    initialize(pObj);
}

void CrossSectCollectionNode::initialize (Object* pObj)
{
    ILxNode* pVariant = NULL;
    m_pLxObj = dynamic_cast<CrossSectCollection*>(pObj);
    if (m_pLxObj == NULL)
        throw new Exception(Exception::Code::kFail, L"CrossSectCollectionNode :: Invalid Object.");
    int nNumChildren = m_pLxObj->count();
    m_arrChildren.reserve(nNumChildren);
    CrossSectCollectionIterator* pIterator = m_pLxObj->iterator();
    m_nNumChildren = 0;
    while (!pIterator->atEnd())
    {
        m_arrChildren.push_back(new CrossSectNode(pIterator->current()));
        pIterator->next();
    }
    pIterator->release();
}

String CrossSectCollectionNode::nodeName() const
{
    return L"CrossSectCollection";
}

ILxNode* CrossSectCollectionNode::findChild(const String& strChildId) const
{
    // Grab string from child
    StringObjectImpl::Type idValue;
    ILxNode* pFoundNode = NULL;
    if (StringObjectImpl::parseString(strChildId.c_str(), strChildId.size(), idValue))
    {
        CrossSectCollectionIterator* pFoundIter = m_pLxObj->find(idValue);
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
ProfAlignCollectionNode::ProfAlignCollectionNode (Object& obj)
    : CollectionNode(&obj) 
{
    initialize(&obj);
}

ProfAlignCollectionNode::ProfAlignCollectionNode (Object* pObj)
    : CollectionNode (pObj) 
{
    initialize(pObj);
}

void ProfAlignCollectionNode::initialize (Object* pObj)
{
    ILxNode* pVariant = NULL;
    m_pLxObj = dynamic_cast<ProfAlignCollection*>(pObj);
    if (m_pLxObj == NULL)
        throw new Exception(Exception::Code::kFail, L"ProfAlignCollectionNode :: Invalid Object.");
    int nNumChildren = m_pLxObj->count();
    m_arrChildren.reserve(nNumChildren);
    ProfAlignCollectionIterator* pIterator = m_pLxObj->iterator();
    m_nNumChildren = 0;
    while (!pIterator->atEnd())
    {
        m_arrChildren.push_back(new ProfAlignNode(pIterator->current()));
        pIterator->next();
    }
    pIterator->release();
}

String ProfAlignCollectionNode::nodeName() const
{
    return L"ProfAlignCollection";
}

ILxNode* ProfAlignCollectionNode::findChild(const String& strChildId) const
{
    // Grab string from child
    StringObjectImpl::Type idValue;
    ILxNode* pFoundNode = NULL;
    if (StringObjectImpl::parseString(strChildId.c_str(), strChildId.size(), idValue))
    {
        ProfAlignCollectionIterator* pFoundIter = m_pLxObj->find(idValue);
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
