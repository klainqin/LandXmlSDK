#include "stdafx.h"
#include "ObjectNode.h"
#include "CollectionNode.h"
#include "ValueNode.h"
#include "Exception.h"
#include "ValueTypeObjects.h"
#include "LXTypesImpl.h"
#include "LXNodes.h"
#include "GradeModelCollection.h"
#include "DocFileRefCollection.h"
#include "CrashHistory.h"
#include "TwoWayLeftTurnLaneCollection.h"
#include "SourceData.h"
#include "ChainCollection.h"
#include "PointFiles.h"
#include "Boundaries.h"
#include "Breaklines.h"
#include "Contours.h"
#include "DataPointsCollection.h"
#include "FeatureCollection.h"

namespace LX
{

GradeModelCollectionNode::GradeModelCollectionNode (Object& obj)
    : CollectionNode(&obj) 
{
    initialize(&obj);
}

GradeModelCollectionNode::GradeModelCollectionNode (Object* pObj)
    : CollectionNode (pObj) 
{
    initialize(pObj);
}

void GradeModelCollectionNode::initialize (Object* pObj)
{
    ILxNode* pVariant = NULL;
    m_pLxObj = dynamic_cast<GradeModelCollection*>(pObj);
    if (m_pLxObj == NULL)
        throw new Exception(Exception::Code::kFail, L"GradeModelCollectionNode :: Invalid Object.");
    int nNumChildren = m_pLxObj->count();
    m_arrChildren.reserve(nNumChildren);
    GradeModelCollectionIterator* pIterator = m_pLxObj->iterator();
    m_nNumChildren = 0;
    while (!pIterator->atEnd())
    {
        m_arrChildren.push_back(new GradeModelNode(pIterator->current()));
        pIterator->next();
    }
    pIterator->release();
}

String GradeModelCollectionNode::nodeName() const
{
    return L"GradeModelCollection";
}

ILxNode* GradeModelCollectionNode::findChild(const String& strChildId) const
{
    // Grab string from child
    StringObjectImpl::Type idValue;
    ILxNode* pFoundNode = NULL;
    if (StringObjectImpl::parseString(strChildId.c_str(), strChildId.size(), idValue))
    {
        GradeModelCollectionIterator* pFoundIter = m_pLxObj->find(idValue);
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
DocFileRefCollectionNode::DocFileRefCollectionNode (Object& obj)
    : CollectionNode(&obj) 
{
    initialize(&obj);
}

DocFileRefCollectionNode::DocFileRefCollectionNode (Object* pObj)
    : CollectionNode (pObj) 
{
    initialize(pObj);
}

void DocFileRefCollectionNode::initialize (Object* pObj)
{
    ILxNode* pVariant = NULL;
    m_pLxObj = dynamic_cast<DocFileRefCollection*>(pObj);
    if (m_pLxObj == NULL)
        throw new Exception(Exception::Code::kFail, L"DocFileRefCollectionNode :: Invalid Object.");
    int nNumChildren = m_pLxObj->count();
    m_arrChildren.reserve(nNumChildren);
    DocFileRefCollectionIterator* pIterator = m_pLxObj->iterator();
    m_nNumChildren = 0;
    while (!pIterator->atEnd())
    {
        m_arrChildren.push_back(new DocFileRefNode(pIterator->current()));
        pIterator->next();
    }
    pIterator->release();
}

String DocFileRefCollectionNode::nodeName() const
{
    return L"DocFileRefCollection";
}

ILxNode* DocFileRefCollectionNode::findChild(const String& strChildId) const
{
    // Grab string from child
    StringObjectImpl::Type idValue;
    ILxNode* pFoundNode = NULL;
    if (StringObjectImpl::parseString(strChildId.c_str(), strChildId.size(), idValue))
    {
        DocFileRefCollectionIterator* pFoundIter = m_pLxObj->find(idValue);
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
CrashHistoryNode::CrashHistoryNode (Object* pObj)
    : ObjectNode (pObj)
{
    ILxNode* pVariant = NULL;
    m_pLxObj = dynamic_cast<CrashHistory*>(pObj);
    if (m_pLxObj == NULL)
        throw new Exception(Exception::Code::kFail, L"CrashHistoryNode :: Invalid Object.");
    int nNumChildren = 6;
    m_arrChildren.reserve(nNumChildren);
    m_nNumChildren = 0;
    m_arrChildren.push_back(new ValueNode(this, L"Year", L"Year"));
    m_arrChildren.push_back(new ValueNode(this, L"Location_1", L"Location_1"));
    m_arrChildren.push_back(new ValueNode(this, L"Location_2", L"Location_2"));
    m_arrChildren.push_back(new ValueNode(this, L"Severity", L"Severity"));
    m_arrChildren.push_back(new ValueNode(this, L"IntersectionRelation", L"IntersectionRelation"));
    m_arrChildren.push_back(new ValueNode(this, L"IntersectionLocation", L"IntersectionLocation"));
}

bool CrashHistoryNode::setValue (const String& strMemberName, const String* pstrValue)
{
    bool bValueSet = false;
    CrashHistory* pObject = dynamic_cast<CrashHistory*>(m_pObject);
    if (strMemberName == L"Year")
    {
        if (!pstrValue)
        {
            pObject->resetValue_Year();
        }
        else
        {
            pObject->setYear(StringObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"Location_1")
    {
        if (!pstrValue)
        {
            pObject->resetValue_Location_1();
        }
        else
        {
            pObject->setLocation_1(DoubleObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"Location_2")
    {
        if (!pstrValue)
        {
            pObject->resetValue_Location_2();
        }
        else
        {
            pObject->setLocation_2(DoubleObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"Severity")
    {
        if (!pstrValue)
        {
            pObject->resetValue_Severity();
        }
        else
        {
            pObject->setSeverity(EnumCrashSeverityTypeImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"IntersectionRelation")
    {
        if (!pstrValue)
        {
            pObject->resetValue_IntersectionRelation();
        }
        else
        {
            pObject->setIntersectionRelation(EnumCrashIntersectionRelationImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"IntersectionLocation")
    {
        if (!pstrValue)
        {
            pObject->resetValue_IntersectionLocation();
        }
        else
        {
            pObject->setIntersectionLocation(DoubleObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    return bValueSet;
}

bool CrashHistoryNode::getValue (const String& strMemberName, String& strValue)
{
    bool bValueSet = false;
    CrashHistory* pObject = dynamic_cast<CrashHistory*>(m_pObject);
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
    else if (strMemberName == L"Year")
    {
        if (pObject->hasValue_Year())
        {
            strValue = (StringObjectImpl(pObject->getYear())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"Location_1")
    {
        if (pObject->hasValue_Location_1())
        {
            strValue = (DoubleObjectImpl(pObject->getLocation_1())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"Location_2")
    {
        if (pObject->hasValue_Location_2())
        {
            strValue = (DoubleObjectImpl(pObject->getLocation_2())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"Severity")
    {
        if (pObject->hasValue_Severity())
        {
            strValue = (EnumCrashSeverityTypeImpl(pObject->getSeverity())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"IntersectionRelation")
    {
        if (pObject->hasValue_IntersectionRelation())
        {
            strValue = (EnumCrashIntersectionRelationImpl(pObject->getIntersectionRelation())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"IntersectionLocation")
    {
        if (pObject->hasValue_IntersectionLocation())
        {
            strValue = (DoubleObjectImpl(pObject->getIntersectionLocation())).toString();
            bValueSet = true;
        }
    }
    return bValueSet;
}

String CrashHistoryNode::nodeName() const
{
    return L"CrashHistory";
}

TwoWayLeftTurnLaneCollectionNode::TwoWayLeftTurnLaneCollectionNode (Object& obj)
    : CollectionNode(&obj) 
{
    initialize(&obj);
}

TwoWayLeftTurnLaneCollectionNode::TwoWayLeftTurnLaneCollectionNode (Object* pObj)
    : CollectionNode (pObj) 
{
    initialize(pObj);
}

void TwoWayLeftTurnLaneCollectionNode::initialize (Object* pObj)
{
    ILxNode* pVariant = NULL;
    m_pLxObj = dynamic_cast<TwoWayLeftTurnLaneCollection*>(pObj);
    if (m_pLxObj == NULL)
        throw new Exception(Exception::Code::kFail, L"TwoWayLeftTurnLaneCollectionNode :: Invalid Object.");
    int nNumChildren = m_pLxObj->count();
    m_arrChildren.reserve(nNumChildren);
    TwoWayLeftTurnLaneCollectionIterator* pIterator = m_pLxObj->iterator();
    m_nNumChildren = 0;
    while (!pIterator->atEnd())
    {
        m_arrChildren.push_back(new TwoWayLeftTurnLaneNode(pIterator->current()));
        pIterator->next();
    }
    pIterator->release();
}

String TwoWayLeftTurnLaneCollectionNode::nodeName() const
{
    return L"TwoWayLeftTurnLaneCollection";
}

ILxNode* TwoWayLeftTurnLaneCollectionNode::findChild(const String& strChildId) const
{
    return NULL;
}
SourceDataNode::SourceDataNode (Object* pObj)
    : ObjectNode (pObj)
{
    ILxNode* pVariant = NULL;
    m_pLxObj = dynamic_cast<SourceData*>(pObj);
    if (m_pLxObj == NULL)
        throw new Exception(Exception::Code::kFail, L"SourceDataNode :: Invalid Object.");
    int nNumChildren = 7;
    m_arrChildren.reserve(nNumChildren);
    m_nNumChildren = 0;
    m_arrChildren.push_back(new ChainCollectionNode(m_pLxObj->Chain()));
    if (m_pLxObj->getPointFiles())
        m_arrChildren.push_back(new PointFilesNode(m_pLxObj->getPointFiles()));
    if (m_pLxObj->getBoundaries())
        m_arrChildren.push_back(new BoundariesNode(m_pLxObj->getBoundaries()));
    if (m_pLxObj->getBreaklines())
        m_arrChildren.push_back(new BreaklinesNode(m_pLxObj->getBreaklines()));
    if (m_pLxObj->getContours())
        m_arrChildren.push_back(new ContoursNode(m_pLxObj->getContours()));
    m_arrChildren.push_back(new DataPointsCollectionNode(m_pLxObj->DataPoints()));
    m_arrChildren.push_back(new FeatureCollectionNode(m_pLxObj->Feature()));
}

bool SourceDataNode::setValue (const String& strMemberName, const String* pstrValue)
{
    bool bValueSet = false;
    SourceData* pObject = dynamic_cast<SourceData*>(m_pObject);
    return bValueSet;
}

bool SourceDataNode::getValue (const String& strMemberName, String& strValue)
{
    bool bValueSet = false;
    SourceData* pObject = dynamic_cast<SourceData*>(m_pObject);
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

String SourceDataNode::nodeName() const
{
    return L"SourceData";
}

}; // namespace : LX
