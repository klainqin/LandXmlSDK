#include "stdafx.h"
#include "ObjectNode.h"
#include "CollectionNode.h"
#include "ValueNode.h"
#include "Exception.h"
#include "ValueTypeObjects.h"
#include "LXTypesImpl.h"
#include "LXNodes.h"
#include "ZoneCutFillCollection.h"
#include "ZoneCrossSectStructureCollection.h"
#include "TurnSpeed.h"
#include "TurnLane.h"
#include "ZoneCollection.h"

namespace LX
{

ZoneCutFillCollectionNode::ZoneCutFillCollectionNode (Object& obj)
    : CollectionNode(&obj) 
{
    initialize(&obj);
}

ZoneCutFillCollectionNode::ZoneCutFillCollectionNode (Object* pObj)
    : CollectionNode (pObj) 
{
    initialize(pObj);
}

void ZoneCutFillCollectionNode::initialize (Object* pObj)
{
    ILxNode* pVariant = NULL;
    m_pLxObj = dynamic_cast<ZoneCutFillCollection*>(pObj);
    if (m_pLxObj == NULL)
        throw new Exception(Exception::Code::kFail, L"ZoneCutFillCollectionNode :: Invalid Object.");
    int nNumChildren = m_pLxObj->count();
    m_arrChildren.reserve(nNumChildren);
    ZoneCutFillCollectionIterator* pIterator = m_pLxObj->iterator();
    m_nNumChildren = 0;
    while (!pIterator->atEnd())
    {
        m_arrChildren.push_back(new ZoneCutFillNode(pIterator->current()));
        pIterator->next();
    }
    pIterator->release();
}

String ZoneCutFillCollectionNode::nodeName() const
{
    return L"ZoneCutFillCollection";
}

ILxNode* ZoneCutFillCollectionNode::findChild(const String& strChildId) const
{
    return NULL;
}
ZoneCrossSectStructureCollectionNode::ZoneCrossSectStructureCollectionNode (Object& obj)
    : CollectionNode(&obj) 
{
    initialize(&obj);
}

ZoneCrossSectStructureCollectionNode::ZoneCrossSectStructureCollectionNode (Object* pObj)
    : CollectionNode (pObj) 
{
    initialize(pObj);
}

void ZoneCrossSectStructureCollectionNode::initialize (Object* pObj)
{
    ILxNode* pVariant = NULL;
    m_pLxObj = dynamic_cast<ZoneCrossSectStructureCollection*>(pObj);
    if (m_pLxObj == NULL)
        throw new Exception(Exception::Code::kFail, L"ZoneCrossSectStructureCollectionNode :: Invalid Object.");
    int nNumChildren = m_pLxObj->count();
    m_arrChildren.reserve(nNumChildren);
    ZoneCrossSectStructureCollectionIterator* pIterator = m_pLxObj->iterator();
    m_nNumChildren = 0;
    while (!pIterator->atEnd())
    {
        m_arrChildren.push_back(new ZoneCrossSectStructureNode(pIterator->current()));
        pIterator->next();
    }
    pIterator->release();
}

String ZoneCrossSectStructureCollectionNode::nodeName() const
{
    return L"ZoneCrossSectStructureCollection";
}

ILxNode* ZoneCrossSectStructureCollectionNode::findChild(const String& strChildId) const
{
    // Grab string from child
    StringObjectImpl::Type idValue;
    ILxNode* pFoundNode = NULL;
    if (StringObjectImpl::parseString(strChildId.c_str(), strChildId.size(), idValue))
    {
        ZoneCrossSectStructureCollectionIterator* pFoundIter = m_pLxObj->find(idValue);
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
TurnSpeedNode::TurnSpeedNode (Object* pObj)
    : ObjectNode (pObj)
{
    ILxNode* pVariant = NULL;
    m_pLxObj = dynamic_cast<TurnSpeed*>(pObj);
    if (m_pLxObj == NULL)
        throw new Exception(Exception::Code::kFail, L"TurnSpeedNode :: Invalid Object.");
    int nNumChildren = 3;
    m_arrChildren.reserve(nNumChildren);
    m_nNumChildren = 0;
    m_arrChildren.push_back(new ValueNode(this, L"Station", L"Station"));
    m_arrChildren.push_back(new ValueNode(this, L"LegNumber", L"LegNumber"));
    m_arrChildren.push_back(new ValueNode(this, L"Speed", L"Speed"));
}

bool TurnSpeedNode::setValue (const String& strMemberName, const String* pstrValue)
{
    bool bValueSet = false;
    TurnSpeed* pObject = dynamic_cast<TurnSpeed*>(m_pObject);
    if (strMemberName == L"Station")
    {
        if (!pstrValue)
        {
            pObject->resetValue_Station();
        }
        else
        {
            pObject->setStation(DoubleObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"LegNumber")
    {
        if (!pstrValue)
        {
            pObject->resetValue_LegNumber();
        }
        else
        {
            pObject->setLegNumber(IntegerObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
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

bool TurnSpeedNode::getValue (const String& strMemberName, String& strValue)
{
    bool bValueSet = false;
    TurnSpeed* pObject = dynamic_cast<TurnSpeed*>(m_pObject);
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
    else if (strMemberName == L"Station")
    {
        if (pObject->hasValue_Station())
        {
            strValue = (DoubleObjectImpl(pObject->getStation())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"LegNumber")
    {
        if (pObject->hasValue_LegNumber())
        {
            strValue = (IntegerObjectImpl(pObject->getLegNumber())).toString();
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

String TurnSpeedNode::nodeName() const
{
    return L"TurnSpeed";
}

TurnLaneNode::TurnLaneNode (Object* pObj)
    : ObjectNode (pObj)
{
    ILxNode* pVariant = NULL;
    m_pLxObj = dynamic_cast<TurnLane*>(pObj);
    if (m_pLxObj == NULL)
        throw new Exception(Exception::Code::kFail, L"TurnLaneNode :: Invalid Object.");
    int nNumChildren = 8;
    m_arrChildren.reserve(nNumChildren);
    m_nNumChildren = 0;
    m_arrChildren.push_back(new ValueNode(this, L"StaStart", L"StaStart"));
    m_arrChildren.push_back(new ValueNode(this, L"StaEnd", L"StaEnd"));
    m_arrChildren.push_back(new ValueNode(this, L"BeginFullWidthSta", L"BeginFullWidthSta"));
    m_arrChildren.push_back(new ValueNode(this, L"Width", L"Width"));
    m_arrChildren.push_back(new ValueNode(this, L"SideofRoad", L"SideofRoad"));
    m_arrChildren.push_back(new ValueNode(this, L"Type", L"Type"));
    m_arrChildren.push_back(new ValueNode(this, L"TaperType", L"TaperType"));
    m_arrChildren.push_back(new ValueNode(this, L"TaperTangentLength", L"TaperTangentLength"));
}

bool TurnLaneNode::setValue (const String& strMemberName, const String* pstrValue)
{
    bool bValueSet = false;
    TurnLane* pObject = dynamic_cast<TurnLane*>(m_pObject);
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
    if (strMemberName == L"BeginFullWidthSta")
    {
        if (!pstrValue)
        {
            pObject->resetValue_BeginFullWidthSta();
        }
        else
        {
            pObject->setBeginFullWidthSta(DoubleObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
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
    if (strMemberName == L"SideofRoad")
    {
        if (!pstrValue)
        {
            pObject->resetValue_SideofRoad();
        }
        else
        {
            pObject->setSideofRoad(EnumSideofRoadTypeImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"Type")
    {
        if (!pstrValue)
        {
            pObject->resetValue_Type();
        }
        else
        {
            pObject->setType(EnumTurnLaneTypeImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"TaperType")
    {
        if (!pstrValue)
        {
            pObject->resetValue_TaperType();
        }
        else
        {
            pObject->setTaperType(EnumLaneTaperTypeImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"TaperTangentLength")
    {
        if (!pstrValue)
        {
            pObject->resetValue_TaperTangentLength();
        }
        else
        {
            pObject->setTaperTangentLength(DoubleObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    return bValueSet;
}

bool TurnLaneNode::getValue (const String& strMemberName, String& strValue)
{
    bool bValueSet = false;
    TurnLane* pObject = dynamic_cast<TurnLane*>(m_pObject);
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
    else if (strMemberName == L"BeginFullWidthSta")
    {
        if (pObject->hasValue_BeginFullWidthSta())
        {
            strValue = (DoubleObjectImpl(pObject->getBeginFullWidthSta())).toString();
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
    else if (strMemberName == L"SideofRoad")
    {
        if (pObject->hasValue_SideofRoad())
        {
            strValue = (EnumSideofRoadTypeImpl(pObject->getSideofRoad())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"Type")
    {
        if (pObject->hasValue_Type())
        {
            strValue = (EnumTurnLaneTypeImpl(pObject->getType())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"TaperType")
    {
        if (pObject->hasValue_TaperType())
        {
            strValue = (EnumLaneTaperTypeImpl(pObject->getTaperType())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"TaperTangentLength")
    {
        if (pObject->hasValue_TaperTangentLength())
        {
            strValue = (DoubleObjectImpl(pObject->getTaperTangentLength())).toString();
            bValueSet = true;
        }
    }
    return bValueSet;
}

String TurnLaneNode::nodeName() const
{
    return L"TurnLane";
}

ZoneCollectionNode::ZoneCollectionNode (Object& obj)
    : CollectionNode(&obj) 
{
    initialize(&obj);
}

ZoneCollectionNode::ZoneCollectionNode (Object* pObj)
    : CollectionNode (pObj) 
{
    initialize(pObj);
}

void ZoneCollectionNode::initialize (Object* pObj)
{
    ILxNode* pVariant = NULL;
    m_pLxObj = dynamic_cast<ZoneCollection*>(pObj);
    if (m_pLxObj == NULL)
        throw new Exception(Exception::Code::kFail, L"ZoneCollectionNode :: Invalid Object.");
    int nNumChildren = m_pLxObj->count();
    m_arrChildren.reserve(nNumChildren);
    ZoneCollectionIterator* pIterator = m_pLxObj->iterator();
    m_nNumChildren = 0;
    while (!pIterator->atEnd())
    {
        m_arrChildren.push_back(new ZoneNode(pIterator->current()));
        pIterator->next();
    }
    pIterator->release();
}

String ZoneCollectionNode::nodeName() const
{
    return L"ZoneCollection";
}

ILxNode* ZoneCollectionNode::findChild(const String& strChildId) const
{
    // Grab string from child
    StringObjectImpl::Type idValue;
    ILxNode* pFoundNode = NULL;
    if (StringObjectImpl::parseString(strChildId.c_str(), strChildId.size(), idValue))
    {
        ZoneCollectionIterator* pFoundIter = m_pLxObj->find(idValue);
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
