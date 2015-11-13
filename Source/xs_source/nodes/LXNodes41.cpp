#include "stdafx.h"
#include "ObjectNode.h"
#include "CollectionNode.h"
#include "ValueNode.h"
#include "Exception.h"
#include "ValueTypeObjects.h"
#include "LXTypesImpl.h"
#include "LXNodes.h"
#include "DrivewayDensityCollection.h"
#include "BeginRunoutStaCollection.h"
#include "Curve2.h"
#include "Curve.h"
#include "DesignSpeed85th.h"
#include "FeatureCollection.h"
#include "PntList2D.h"

namespace LX
{

DrivewayDensityCollectionNode::DrivewayDensityCollectionNode (Object& obj)
    : CollectionNode(&obj) 
{
    initialize(&obj);
}

DrivewayDensityCollectionNode::DrivewayDensityCollectionNode (Object* pObj)
    : CollectionNode (pObj) 
{
    initialize(pObj);
}

void DrivewayDensityCollectionNode::initialize (Object* pObj)
{
    ILxNode* pVariant = NULL;
    m_pLxObj = dynamic_cast<DrivewayDensityCollection*>(pObj);
    if (m_pLxObj == NULL)
        throw new Exception(Exception::Code::kFail, L"DrivewayDensityCollectionNode :: Invalid Object.");
    int nNumChildren = m_pLxObj->count();
    m_arrChildren.reserve(nNumChildren);
    DrivewayDensityCollectionIterator* pIterator = m_pLxObj->iterator();
    m_nNumChildren = 0;
    while (!pIterator->atEnd())
    {
        m_arrChildren.push_back(new DrivewayDensityNode(pIterator->current()));
        pIterator->next();
    }
    pIterator->release();
}

String DrivewayDensityCollectionNode::nodeName() const
{
    return L"DrivewayDensityCollection";
}

ILxNode* DrivewayDensityCollectionNode::findChild(const String& strChildId) const
{
    return NULL;
}
BeginRunoutStaCollectionNode::BeginRunoutStaCollectionNode (Object& obj)
    : CollectionNode(&obj) 
{
    initialize(&obj);
}

BeginRunoutStaCollectionNode::BeginRunoutStaCollectionNode (Object* pObj)
    : CollectionNode (pObj) 
{
    initialize(pObj);
}

void BeginRunoutStaCollectionNode::initialize (Object* pObj)
{
    ILxNode* pVariant = NULL;
    m_pLxObj = dynamic_cast<BeginRunoutStaCollection*>(pObj);
    if (m_pLxObj == NULL)
        throw new Exception(Exception::Code::kFail, L"BeginRunoutStaCollectionNode :: Invalid Object.");
    int nNumChildren = m_pLxObj->count();
    m_arrChildren.reserve(nNumChildren);
    BeginRunoutStaCollectionIterator* pIterator = m_pLxObj->iterator();
    m_nNumChildren = 0;
    while (!pIterator->atEnd())
    {
        m_arrChildren.push_back(new BeginRunoutStaNode(pIterator->current()));
        pIterator->next();
    }
    pIterator->release();
}

String BeginRunoutStaCollectionNode::nodeName() const
{
    return L"BeginRunoutStaCollection";
}

ILxNode* BeginRunoutStaCollectionNode::findChild(const String& strChildId) const
{
    return NULL;
}
Curve2Node::Curve2Node (Object* pObj)
    : ObjectNode (pObj)
{
    ILxNode* pVariant = NULL;
    m_pLxObj = dynamic_cast<Curve2*>(pObj);
    if (m_pLxObj == NULL)
        throw new Exception(Exception::Code::kFail, L"Curve2Node :: Invalid Object.");
    int nNumChildren = 1;
    m_arrChildren.reserve(nNumChildren);
    m_nNumChildren = 0;
    if (m_pLxObj->getCurve())
        m_arrChildren.push_back(new CurveNode(m_pLxObj->getCurve()));
}

bool Curve2Node::setValue (const String& strMemberName, const String* pstrValue)
{
    bool bValueSet = false;
    Curve2* pObject = dynamic_cast<Curve2*>(m_pObject);
    return bValueSet;
}

bool Curve2Node::getValue (const String& strMemberName, String& strValue)
{
    bool bValueSet = false;
    Curve2* pObject = dynamic_cast<Curve2*>(m_pObject);
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

String Curve2Node::nodeName() const
{
    return L"Curve2";
}

DesignSpeed85thNode::DesignSpeed85thNode (Object* pObj)
    : ObjectNode (pObj)
{
    ILxNode* pVariant = NULL;
    m_pLxObj = dynamic_cast<DesignSpeed85th*>(pObj);
    if (m_pLxObj == NULL)
        throw new Exception(Exception::Code::kFail, L"DesignSpeed85thNode :: Invalid Object.");
    int nNumChildren = 5;
    m_arrChildren.reserve(nNumChildren);
    m_nNumChildren = 0;
    m_arrChildren.push_back(new FeatureCollectionNode(m_pLxObj->Feature()));
    m_arrChildren.push_back(new ValueNode(this, L"StaStart", L"StaStart"));
    m_arrChildren.push_back(new ValueNode(this, L"StaEnd", L"StaEnd"));
    m_arrChildren.push_back(new ValueNode(this, L"SideofRoad", L"SideofRoad"));
    m_arrChildren.push_back(new ValueNode(this, L"Speed", L"Speed"));
}

bool DesignSpeed85thNode::setValue (const String& strMemberName, const String* pstrValue)
{
    bool bValueSet = false;
    DesignSpeed85th* pObject = dynamic_cast<DesignSpeed85th*>(m_pObject);
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

bool DesignSpeed85thNode::getValue (const String& strMemberName, String& strValue)
{
    bool bValueSet = false;
    DesignSpeed85th* pObject = dynamic_cast<DesignSpeed85th*>(m_pObject);
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
    else if (strMemberName == L"SideofRoad")
    {
        if (pObject->hasValue_SideofRoad())
        {
            strValue = (EnumSideofRoadTypeImpl(pObject->getSideofRoad())).toString();
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

String DesignSpeed85thNode::nodeName() const
{
    return L"DesignSpeed85th";
}

PntList2DNode::PntList2DNode (Object* pObj)
    : ObjectNode (pObj)
{
    ILxNode* pVariant = NULL;
    m_pLxObj = dynamic_cast<PntList2D*>(pObj);
    if (m_pLxObj == NULL)
        throw new Exception(Exception::Code::kFail, L"PntList2DNode :: Invalid Object.");
    DoubleCollection* pValObj = dynamic_cast<DoubleCollection*>(m_pLxObj);
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

bool PntList2DNode::setValue (const String& strMemberName, const String* pstrValue)
{
    bool bValueSet = false;
    PntList2D* pObject = dynamic_cast<PntList2D*>(m_pObject);
    return bValueSet;
}

bool PntList2DNode::getValue (const String& strMemberName, String& strValue)
{
    bool bValueSet = false;
    PntList2D* pObject = dynamic_cast<PntList2D*>(m_pObject);
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

String PntList2DNode::nodeName() const
{
    return L"PntList2D";
}

}; // namespace : LX
