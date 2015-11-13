#include "stdafx.h"
#include "ObjectNode.h"
#include "CollectionNode.h"
#include "ValueNode.h"
#include "Exception.h"
#include "ValueTypeObjects.h"
#include "LXTypesImpl.h"
#include "LXNodes.h"
#include "SpeedStationCollection.h"
#include "Intersection.h"
#include "FieldNote.h"
#include "RoadSignCollection.h"
#include "AuthorCollection.h"

namespace LX
{

SpeedStationCollectionNode::SpeedStationCollectionNode (Object& obj)
    : CollectionNode(&obj) 
{
    initialize(&obj);
}

SpeedStationCollectionNode::SpeedStationCollectionNode (Object* pObj)
    : CollectionNode (pObj) 
{
    initialize(pObj);
}

void SpeedStationCollectionNode::initialize (Object* pObj)
{
    ILxNode* pVariant = NULL;
    m_pLxObj = dynamic_cast<SpeedStationCollection*>(pObj);
    if (m_pLxObj == NULL)
        throw new Exception(Exception::Code::kFail, L"SpeedStationCollectionNode :: Invalid Object.");
    int nNumChildren = m_pLxObj->count();
    m_arrChildren.reserve(nNumChildren);
    SpeedStationCollectionIterator* pIterator = m_pLxObj->iterator();
    m_nNumChildren = 0;
    while (!pIterator->atEnd())
    {
        m_arrChildren.push_back(new SpeedStationNode(pIterator->current()));
        pIterator->next();
    }
    pIterator->release();
}

String SpeedStationCollectionNode::nodeName() const
{
    return L"SpeedStationCollection";
}

ILxNode* SpeedStationCollectionNode::findChild(const String& strChildId) const
{
    return NULL;
}
IntersectionNode::IntersectionNode (Object* pObj)
    : ObjectNode (pObj)
{
    ILxNode* pVariant = NULL;
    m_pLxObj = dynamic_cast<Intersection*>(pObj);
    if (m_pLxObj == NULL)
        throw new Exception(Exception::Code::kFail, L"IntersectionNode :: Invalid Object.");
    int nNumChildren = 5;
    m_arrChildren.reserve(nNumChildren);
    m_nNumChildren = 0;
    m_arrChildren.push_back(new ValueNode(this, L"RoadwayRef", L"RoadwayRef"));
    m_arrChildren.push_back(new ValueNode(this, L"RoadwayPI", L"RoadwayPI"));
    m_arrChildren.push_back(new ValueNode(this, L"IntersectingRoadwayRef", L"IntersectingRoadwayRef"));
    m_arrChildren.push_back(new ValueNode(this, L"IntersectRoadwayPI", L"IntersectRoadwayPI"));
    m_arrChildren.push_back(new ValueNode(this, L"ContructionType", L"ContructionType"));
}

bool IntersectionNode::setValue (const String& strMemberName, const String* pstrValue)
{
    bool bValueSet = false;
    Intersection* pObject = dynamic_cast<Intersection*>(m_pObject);
    if (strMemberName == L"RoadwayRef")
    {
        if (!pstrValue)
        {
            pObject->resetValue_RoadwayRef();
        }
        else
        {
            pObject->setRoadwayRef(StringObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"RoadwayPI")
    {
        if (!pstrValue)
        {
            pObject->resetValue_RoadwayPI();
        }
        else
        {
            pObject->setRoadwayPI(DoubleObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"IntersectingRoadwayRef")
    {
        if (!pstrValue)
        {
            pObject->resetValue_IntersectingRoadwayRef();
        }
        else
        {
            pObject->setIntersectingRoadwayRef(StringObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"IntersectRoadwayPI")
    {
        if (!pstrValue)
        {
            pObject->resetValue_IntersectRoadwayPI();
        }
        else
        {
            pObject->setIntersectRoadwayPI(DoubleObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"ContructionType")
    {
        if (!pstrValue)
        {
            pObject->resetValue_ContructionType();
        }
        else
        {
            pObject->setContructionType(EnumIntersectionConstructionTypeImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    return bValueSet;
}

bool IntersectionNode::getValue (const String& strMemberName, String& strValue)
{
    bool bValueSet = false;
    Intersection* pObject = dynamic_cast<Intersection*>(m_pObject);
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
    else if (strMemberName == L"RoadwayRef")
    {
        if (pObject->hasValue_RoadwayRef())
        {
            strValue = (StringObjectImpl(pObject->getRoadwayRef())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"RoadwayPI")
    {
        if (pObject->hasValue_RoadwayPI())
        {
            strValue = (DoubleObjectImpl(pObject->getRoadwayPI())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"IntersectingRoadwayRef")
    {
        if (pObject->hasValue_IntersectingRoadwayRef())
        {
            strValue = (StringObjectImpl(pObject->getIntersectingRoadwayRef())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"IntersectRoadwayPI")
    {
        if (pObject->hasValue_IntersectRoadwayPI())
        {
            strValue = (DoubleObjectImpl(pObject->getIntersectRoadwayPI())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"ContructionType")
    {
        if (pObject->hasValue_ContructionType())
        {
            strValue = (EnumIntersectionConstructionTypeImpl(pObject->getContructionType())).toString();
            bValueSet = true;
        }
    }
    return bValueSet;
}

String IntersectionNode::nodeName() const
{
    return L"Intersection";
}

FieldNoteNode::FieldNoteNode (Object* pObj)
    : ObjectNode (pObj)
{
    ILxNode* pVariant = NULL;
    m_pLxObj = dynamic_cast<FieldNote*>(pObj);
    if (m_pLxObj == NULL)
        throw new Exception(Exception::Code::kFail, L"FieldNoteNode :: Invalid Object.");
    StringObject* pValObj = dynamic_cast<StringObject*>(m_pLxObj);
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

bool FieldNoteNode::setValue (const String& strMemberName, const String* pstrValue)
{
    bool bValueSet = false;
    FieldNote* pObject = dynamic_cast<FieldNote*>(m_pObject);
    return bValueSet;
}

bool FieldNoteNode::getValue (const String& strMemberName, String& strValue)
{
    bool bValueSet = false;
    FieldNote* pObject = dynamic_cast<FieldNote*>(m_pObject);
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

String FieldNoteNode::nodeName() const
{
    return L"FieldNote";
}

RoadSignCollectionNode::RoadSignCollectionNode (Object& obj)
    : CollectionNode(&obj) 
{
    initialize(&obj);
}

RoadSignCollectionNode::RoadSignCollectionNode (Object* pObj)
    : CollectionNode (pObj) 
{
    initialize(pObj);
}

void RoadSignCollectionNode::initialize (Object* pObj)
{
    ILxNode* pVariant = NULL;
    m_pLxObj = dynamic_cast<RoadSignCollection*>(pObj);
    if (m_pLxObj == NULL)
        throw new Exception(Exception::Code::kFail, L"RoadSignCollectionNode :: Invalid Object.");
    int nNumChildren = m_pLxObj->count();
    m_arrChildren.reserve(nNumChildren);
    RoadSignCollectionIterator* pIterator = m_pLxObj->iterator();
    m_nNumChildren = 0;
    while (!pIterator->atEnd())
    {
        m_arrChildren.push_back(new RoadSignNode(pIterator->current()));
        pIterator->next();
    }
    pIterator->release();
}

String RoadSignCollectionNode::nodeName() const
{
    return L"RoadSignCollection";
}

ILxNode* RoadSignCollectionNode::findChild(const String& strChildId) const
{
    return NULL;
}
AuthorCollectionNode::AuthorCollectionNode (Object& obj)
    : CollectionNode(&obj) 
{
    initialize(&obj);
}

AuthorCollectionNode::AuthorCollectionNode (Object* pObj)
    : CollectionNode (pObj) 
{
    initialize(pObj);
}

void AuthorCollectionNode::initialize (Object* pObj)
{
    ILxNode* pVariant = NULL;
    m_pLxObj = dynamic_cast<AuthorCollection*>(pObj);
    if (m_pLxObj == NULL)
        throw new Exception(Exception::Code::kFail, L"AuthorCollectionNode :: Invalid Object.");
    int nNumChildren = m_pLxObj->count();
    m_arrChildren.reserve(nNumChildren);
    AuthorCollectionIterator* pIterator = m_pLxObj->iterator();
    m_nNumChildren = 0;
    while (!pIterator->atEnd())
    {
        m_arrChildren.push_back(new AuthorNode(pIterator->current()));
        pIterator->next();
    }
    pIterator->release();
}

String AuthorCollectionNode::nodeName() const
{
    return L"AuthorCollection";
}

ILxNode* AuthorCollectionNode::findChild(const String& strChildId) const
{
    return NULL;
}
}; // namespace : LX
