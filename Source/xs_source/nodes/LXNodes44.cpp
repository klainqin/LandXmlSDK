#include "stdafx.h"
#include "ObjectNode.h"
#include "CollectionNode.h"
#include "ValueNode.h"
#include "Exception.h"
#include "ValueTypeObjects.h"
#include "LXTypesImpl.h"
#include "LXNodes.h"
#include "PlanFeature.h"
#include "CoordGeom.h"
#include "LocationCollection.h"
#include "FieldNoteCollection.h"
#include "FeatureCollection.h"
#include "ObstructionOffsetCollection.h"
#include "WatershedCollection.h"
#include "PntList2DCollection.h"
#include "Breaklines.h"
#include "BreaklineCollection.h"
#include "RetWallCollection.h"

namespace LX
{

PlanFeatureNode::PlanFeatureNode (Object* pObj)
    : ObjectNode (pObj)
{
    ILxNode* pVariant = NULL;
    m_pLxObj = dynamic_cast<PlanFeature*>(pObj);
    if (m_pLxObj == NULL)
        throw new Exception(Exception::Code::kFail, L"PlanFeatureNode :: Invalid Object.");
    int nNumChildren = 7;
    m_arrChildren.reserve(nNumChildren);
    m_nNumChildren = 0;
    if (m_pLxObj->getCoordGeom())
        m_arrChildren.push_back(new CoordGeomNode(m_pLxObj->getCoordGeom()));
    m_arrChildren.push_back(new LocationCollectionNode(m_pLxObj->Location()));
    m_arrChildren.push_back(new FieldNoteCollectionNode(m_pLxObj->FieldNote()));
    m_arrChildren.push_back(new FeatureCollectionNode(m_pLxObj->Feature()));
    m_arrChildren.push_back(new ValueNode(this, L"Desc", L"Desc"));
    m_arrChildren.push_back(new ValueNode(this, L"Name", L"Name"));
    m_arrChildren.push_back(new ValueNode(this, L"State", L"State"));
}

bool PlanFeatureNode::setValue (const String& strMemberName, const String* pstrValue)
{
    bool bValueSet = false;
    PlanFeature* pObject = dynamic_cast<PlanFeature*>(m_pObject);
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

bool PlanFeatureNode::getValue (const String& strMemberName, String& strValue)
{
    bool bValueSet = false;
    PlanFeature* pObject = dynamic_cast<PlanFeature*>(m_pObject);
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

String PlanFeatureNode::nodeName() const
{
    return L"PlanFeature";
}

ObstructionOffsetCollectionNode::ObstructionOffsetCollectionNode (Object& obj)
    : CollectionNode(&obj) 
{
    initialize(&obj);
}

ObstructionOffsetCollectionNode::ObstructionOffsetCollectionNode (Object* pObj)
    : CollectionNode (pObj) 
{
    initialize(pObj);
}

void ObstructionOffsetCollectionNode::initialize (Object* pObj)
{
    ILxNode* pVariant = NULL;
    m_pLxObj = dynamic_cast<ObstructionOffsetCollection*>(pObj);
    if (m_pLxObj == NULL)
        throw new Exception(Exception::Code::kFail, L"ObstructionOffsetCollectionNode :: Invalid Object.");
    int nNumChildren = m_pLxObj->count();
    m_arrChildren.reserve(nNumChildren);
    ObstructionOffsetCollectionIterator* pIterator = m_pLxObj->iterator();
    m_nNumChildren = 0;
    while (!pIterator->atEnd())
    {
        m_arrChildren.push_back(new ObstructionOffsetNode(pIterator->current()));
        pIterator->next();
    }
    pIterator->release();
}

String ObstructionOffsetCollectionNode::nodeName() const
{
    return L"ObstructionOffsetCollection";
}

ILxNode* ObstructionOffsetCollectionNode::findChild(const String& strChildId) const
{
    return NULL;
}
WatershedCollectionNode::WatershedCollectionNode (Object& obj)
    : CollectionNode(&obj) 
{
    initialize(&obj);
}

WatershedCollectionNode::WatershedCollectionNode (Object* pObj)
    : CollectionNode (pObj) 
{
    initialize(pObj);
}

void WatershedCollectionNode::initialize (Object* pObj)
{
    ILxNode* pVariant = NULL;
    m_pLxObj = dynamic_cast<WatershedCollection*>(pObj);
    if (m_pLxObj == NULL)
        throw new Exception(Exception::Code::kFail, L"WatershedCollectionNode :: Invalid Object.");
    int nNumChildren = m_pLxObj->count();
    m_arrChildren.reserve(nNumChildren);
    WatershedCollectionIterator* pIterator = m_pLxObj->iterator();
    m_nNumChildren = 0;
    while (!pIterator->atEnd())
    {
        m_arrChildren.push_back(new WatershedNode(pIterator->current()));
        pIterator->next();
    }
    pIterator->release();
}

String WatershedCollectionNode::nodeName() const
{
    return L"WatershedCollection";
}

ILxNode* WatershedCollectionNode::findChild(const String& strChildId) const
{
    // Grab string from child
    StringObjectImpl::Type idValue;
    ILxNode* pFoundNode = NULL;
    if (StringObjectImpl::parseString(strChildId.c_str(), strChildId.size(), idValue))
    {
        WatershedCollectionIterator* pFoundIter = m_pLxObj->find(idValue);
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
PntList2DCollectionNode::PntList2DCollectionNode (Object& obj)
    : CollectionNode(&obj) 
{
    initialize(&obj);
}

PntList2DCollectionNode::PntList2DCollectionNode (Object* pObj)
    : CollectionNode (pObj) 
{
    initialize(pObj);
}

void PntList2DCollectionNode::initialize (Object* pObj)
{
    ILxNode* pVariant = NULL;
    m_pLxObj = dynamic_cast<PntList2DCollection*>(pObj);
    if (m_pLxObj == NULL)
        throw new Exception(Exception::Code::kFail, L"PntList2DCollectionNode :: Invalid Object.");
    int nNumChildren = m_pLxObj->count();
    m_arrChildren.reserve(nNumChildren);
    PntList2DCollectionIterator* pIterator = m_pLxObj->iterator();
    m_nNumChildren = 0;
    while (!pIterator->atEnd())
    {
        m_arrChildren.push_back(new PntList2DNode(pIterator->current()));
        pIterator->next();
    }
    pIterator->release();
}

String PntList2DCollectionNode::nodeName() const
{
    return L"PntList2DCollection";
}

ILxNode* PntList2DCollectionNode::findChild(const String& strChildId) const
{
    return NULL;
}
BreaklinesNode::BreaklinesNode (Object* pObj)
    : ObjectNode (pObj)
{
    ILxNode* pVariant = NULL;
    m_pLxObj = dynamic_cast<Breaklines*>(pObj);
    if (m_pLxObj == NULL)
        throw new Exception(Exception::Code::kFail, L"BreaklinesNode :: Invalid Object.");
    int nNumChildren = 3;
    m_arrChildren.reserve(nNumChildren);
    m_nNumChildren = 0;
    m_arrChildren.push_back(new BreaklineCollectionNode(m_pLxObj->Breakline()));
    m_arrChildren.push_back(new RetWallCollectionNode(m_pLxObj->RetWall()));
    m_arrChildren.push_back(new FeatureCollectionNode(m_pLxObj->Feature()));
}

bool BreaklinesNode::setValue (const String& strMemberName, const String* pstrValue)
{
    bool bValueSet = false;
    Breaklines* pObject = dynamic_cast<Breaklines*>(m_pObject);
    return bValueSet;
}

bool BreaklinesNode::getValue (const String& strMemberName, String& strValue)
{
    bool bValueSet = false;
    Breaklines* pObject = dynamic_cast<Breaklines*>(m_pObject);
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

String BreaklinesNode::nodeName() const
{
    return L"Breaklines";
}

}; // namespace : LX
