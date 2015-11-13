#include "stdafx.h"
#include "ObjectNode.h"
#include "CollectionNode.h"
#include "ValueNode.h"
#include "Exception.h"
#include "ValueTypeObjects.h"
#include "LXTypesImpl.h"
#include "LXNodes.h"
#include "PipeNetworkCollection.h"
#include "Superelevation.h"
#include "BeginRunoutStaCollection.h"
#include "BeginRunoffStaCollection.h"
#include "FullSuperStaCollection.h"
#include "FullSuperelevCollection.h"
#include "RunoffStaCollection.h"
#include "StartofRunoutStaCollection.h"
#include "EndofRunoutStaCollection.h"
#include "AdverseSECollection.h"
#include "FeatureCollection.h"
#include "DocFileRef.h"
#include "AlignmentCollection.h"
#include "RoadwayCollection.h"

namespace LX
{

PipeNetworkCollectionNode::PipeNetworkCollectionNode (Object& obj)
    : CollectionNode(&obj) 
{
    initialize(&obj);
}

PipeNetworkCollectionNode::PipeNetworkCollectionNode (Object* pObj)
    : CollectionNode (pObj) 
{
    initialize(pObj);
}

void PipeNetworkCollectionNode::initialize (Object* pObj)
{
    ILxNode* pVariant = NULL;
    m_pLxObj = dynamic_cast<PipeNetworkCollection*>(pObj);
    if (m_pLxObj == NULL)
        throw new Exception(Exception::Code::kFail, L"PipeNetworkCollectionNode :: Invalid Object.");
    int nNumChildren = m_pLxObj->count();
    m_arrChildren.reserve(nNumChildren);
    PipeNetworkCollectionIterator* pIterator = m_pLxObj->iterator();
    m_nNumChildren = 0;
    while (!pIterator->atEnd())
    {
        m_arrChildren.push_back(new PipeNetworkNode(pIterator->current()));
        pIterator->next();
    }
    pIterator->release();
}

String PipeNetworkCollectionNode::nodeName() const
{
    return L"PipeNetworkCollection";
}

ILxNode* PipeNetworkCollectionNode::findChild(const String& strChildId) const
{
    // Grab string from child
    StringObjectImpl::Type idValue;
    ILxNode* pFoundNode = NULL;
    if (StringObjectImpl::parseString(strChildId.c_str(), strChildId.size(), idValue))
    {
        PipeNetworkCollectionIterator* pFoundIter = m_pLxObj->find(idValue);
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
SuperelevationNode::SuperelevationNode (Object* pObj)
    : ObjectNode (pObj)
{
    ILxNode* pVariant = NULL;
    m_pLxObj = dynamic_cast<Superelevation*>(pObj);
    if (m_pLxObj == NULL)
        throw new Exception(Exception::Code::kFail, L"SuperelevationNode :: Invalid Object.");
    int nNumChildren = 11;
    m_arrChildren.reserve(nNumChildren);
    m_nNumChildren = 0;
    m_arrChildren.push_back(new BeginRunoutStaCollectionNode(m_pLxObj->BeginRunoutSta()));
    m_arrChildren.push_back(new BeginRunoffStaCollectionNode(m_pLxObj->BeginRunoffSta()));
    m_arrChildren.push_back(new FullSuperStaCollectionNode(m_pLxObj->FullSuperSta()));
    m_arrChildren.push_back(new FullSuperelevCollectionNode(m_pLxObj->FullSuperelev()));
    m_arrChildren.push_back(new RunoffStaCollectionNode(m_pLxObj->RunoffSta()));
    m_arrChildren.push_back(new StartofRunoutStaCollectionNode(m_pLxObj->StartofRunoutSta()));
    m_arrChildren.push_back(new EndofRunoutStaCollectionNode(m_pLxObj->EndofRunoutSta()));
    m_arrChildren.push_back(new AdverseSECollectionNode(m_pLxObj->AdverseSE()));
    m_arrChildren.push_back(new FeatureCollectionNode(m_pLxObj->Feature()));
    m_arrChildren.push_back(new ValueNode(this, L"StaStart", L"StaStart"));
    m_arrChildren.push_back(new ValueNode(this, L"StaEnd", L"StaEnd"));
}

bool SuperelevationNode::setValue (const String& strMemberName, const String* pstrValue)
{
    bool bValueSet = false;
    Superelevation* pObject = dynamic_cast<Superelevation*>(m_pObject);
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
    return bValueSet;
}

bool SuperelevationNode::getValue (const String& strMemberName, String& strValue)
{
    bool bValueSet = false;
    Superelevation* pObject = dynamic_cast<Superelevation*>(m_pObject);
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
    return bValueSet;
}

String SuperelevationNode::nodeName() const
{
    return L"Superelevation";
}

DocFileRefNode::DocFileRefNode (Object* pObj)
    : ObjectNode (pObj)
{
    ILxNode* pVariant = NULL;
    m_pLxObj = dynamic_cast<DocFileRef*>(pObj);
    if (m_pLxObj == NULL)
        throw new Exception(Exception::Code::kFail, L"DocFileRefNode :: Invalid Object.");
    int nNumChildren = 4;
    m_arrChildren.reserve(nNumChildren);
    m_nNumChildren = 0;
    m_arrChildren.push_back(new ValueNode(this, L"Name", L"Name"));
    m_arrChildren.push_back(new ValueNode(this, L"Location", L"Location"));
    m_arrChildren.push_back(new ValueNode(this, L"FileType", L"FileType"));
    m_arrChildren.push_back(new ValueNode(this, L"FileFormat", L"FileFormat"));
}

bool DocFileRefNode::setValue (const String& strMemberName, const String* pstrValue)
{
    bool bValueSet = false;
    DocFileRef* pObject = dynamic_cast<DocFileRef*>(m_pObject);
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
    if (strMemberName == L"Location")
    {
        if (!pstrValue)
        {
            pObject->resetValue_Location();
        }
        else
        {
            pObject->setLocation(StringObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"FileType")
    {
        if (!pstrValue)
        {
            pObject->resetValue_FileType();
        }
        else
        {
            pObject->setFileType(StringObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"FileFormat")
    {
        if (!pstrValue)
        {
            pObject->resetValue_FileFormat();
        }
        else
        {
            pObject->setFileFormat(StringObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    return bValueSet;
}

bool DocFileRefNode::getValue (const String& strMemberName, String& strValue)
{
    bool bValueSet = false;
    DocFileRef* pObject = dynamic_cast<DocFileRef*>(m_pObject);
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
    else if (strMemberName == L"Location")
    {
        if (pObject->hasValue_Location())
        {
            strValue = (StringObjectImpl(pObject->getLocation())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"FileType")
    {
        if (pObject->hasValue_FileType())
        {
            strValue = (StringObjectImpl(pObject->getFileType())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"FileFormat")
    {
        if (pObject->hasValue_FileFormat())
        {
            strValue = (StringObjectImpl(pObject->getFileFormat())).toString();
            bValueSet = true;
        }
    }
    return bValueSet;
}

String DocFileRefNode::nodeName() const
{
    return L"DocFileRef";
}

AlignmentCollectionNode::AlignmentCollectionNode (Object& obj)
    : CollectionNode(&obj) 
{
    initialize(&obj);
}

AlignmentCollectionNode::AlignmentCollectionNode (Object* pObj)
    : CollectionNode (pObj) 
{
    initialize(pObj);
}

void AlignmentCollectionNode::initialize (Object* pObj)
{
    ILxNode* pVariant = NULL;
    m_pLxObj = dynamic_cast<AlignmentCollection*>(pObj);
    if (m_pLxObj == NULL)
        throw new Exception(Exception::Code::kFail, L"AlignmentCollectionNode :: Invalid Object.");
    int nNumChildren = m_pLxObj->count();
    m_arrChildren.reserve(nNumChildren);
    AlignmentCollectionIterator* pIterator = m_pLxObj->iterator();
    m_nNumChildren = 0;
    while (!pIterator->atEnd())
    {
        m_arrChildren.push_back(new AlignmentNode(pIterator->current()));
        pIterator->next();
    }
    pIterator->release();
}

String AlignmentCollectionNode::nodeName() const
{
    return L"AlignmentCollection";
}

ILxNode* AlignmentCollectionNode::findChild(const String& strChildId) const
{
    // Grab string from child
    StringObjectImpl::Type idValue;
    ILxNode* pFoundNode = NULL;
    if (StringObjectImpl::parseString(strChildId.c_str(), strChildId.size(), idValue))
    {
        AlignmentCollectionIterator* pFoundIter = m_pLxObj->find(idValue);
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
RoadwayCollectionNode::RoadwayCollectionNode (Object& obj)
    : CollectionNode(&obj) 
{
    initialize(&obj);
}

RoadwayCollectionNode::RoadwayCollectionNode (Object* pObj)
    : CollectionNode (pObj) 
{
    initialize(pObj);
}

void RoadwayCollectionNode::initialize (Object* pObj)
{
    ILxNode* pVariant = NULL;
    m_pLxObj = dynamic_cast<RoadwayCollection*>(pObj);
    if (m_pLxObj == NULL)
        throw new Exception(Exception::Code::kFail, L"RoadwayCollectionNode :: Invalid Object.");
    int nNumChildren = m_pLxObj->count();
    m_arrChildren.reserve(nNumChildren);
    RoadwayCollectionIterator* pIterator = m_pLxObj->iterator();
    m_nNumChildren = 0;
    while (!pIterator->atEnd())
    {
        m_arrChildren.push_back(new RoadwayNode(pIterator->current()));
        pIterator->next();
    }
    pIterator->release();
}

String RoadwayCollectionNode::nodeName() const
{
    return L"RoadwayCollection";
}

ILxNode* RoadwayCollectionNode::findChild(const String& strChildId) const
{
    // Grab string from child
    StringObjectImpl::Type idValue;
    ILxNode* pFoundNode = NULL;
    if (StringObjectImpl::parseString(strChildId.c_str(), strChildId.size(), idValue))
    {
        RoadwayCollectionIterator* pFoundIter = m_pLxObj->find(idValue);
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
