#include "stdafx.h"
#include "ObjectNode.h"
#include "CollectionNode.h"
#include "ValueNode.h"
#include "Exception.h"
#include "ValueTypeObjects.h"
#include "LXTypesImpl.h"
#include "LXNodes.h"
#include "Monuments.h"
#include "MonumentCollection.h"
#include "FeatureCollection.h"
#include "StartofRunoutStaCollection.h"
#include "DesignSpeedCollection.h"
#include "TargetSetupCollection.h"
#include "CircCurve.h"

namespace LX
{

MonumentsNode::MonumentsNode (Object* pObj)
    : ObjectNode (pObj)
{
    ILxNode* pVariant = NULL;
    m_pLxObj = dynamic_cast<Monuments*>(pObj);
    if (m_pLxObj == NULL)
        throw new Exception(Exception::Code::kFail, L"MonumentsNode :: Invalid Object.");
    int nNumChildren = 5;
    m_arrChildren.reserve(nNumChildren);
    m_nNumChildren = 0;
    m_arrChildren.push_back(new MonumentCollectionNode(m_pLxObj->Monument()));
    m_arrChildren.push_back(new FeatureCollectionNode(m_pLxObj->Feature()));
    m_arrChildren.push_back(new ValueNode(this, L"Desc", L"Desc"));
    m_arrChildren.push_back(new ValueNode(this, L"Name", L"Name"));
    m_arrChildren.push_back(new ValueNode(this, L"State", L"State"));
}

bool MonumentsNode::setValue (const String& strMemberName, const String* pstrValue)
{
    bool bValueSet = false;
    Monuments* pObject = dynamic_cast<Monuments*>(m_pObject);
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

bool MonumentsNode::getValue (const String& strMemberName, String& strValue)
{
    bool bValueSet = false;
    Monuments* pObject = dynamic_cast<Monuments*>(m_pObject);
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

String MonumentsNode::nodeName() const
{
    return L"Monuments";
}

StartofRunoutStaCollectionNode::StartofRunoutStaCollectionNode (Object& obj)
    : CollectionNode(&obj) 
{
    initialize(&obj);
}

StartofRunoutStaCollectionNode::StartofRunoutStaCollectionNode (Object* pObj)
    : CollectionNode (pObj) 
{
    initialize(pObj);
}

void StartofRunoutStaCollectionNode::initialize (Object* pObj)
{
    ILxNode* pVariant = NULL;
    m_pLxObj = dynamic_cast<StartofRunoutStaCollection*>(pObj);
    if (m_pLxObj == NULL)
        throw new Exception(Exception::Code::kFail, L"StartofRunoutStaCollectionNode :: Invalid Object.");
    int nNumChildren = m_pLxObj->count();
    m_arrChildren.reserve(nNumChildren);
    StartofRunoutStaCollectionIterator* pIterator = m_pLxObj->iterator();
    m_nNumChildren = 0;
    while (!pIterator->atEnd())
    {
        m_arrChildren.push_back(new StartofRunoutStaNode(pIterator->current()));
        pIterator->next();
    }
    pIterator->release();
}

String StartofRunoutStaCollectionNode::nodeName() const
{
    return L"StartofRunoutStaCollection";
}

ILxNode* StartofRunoutStaCollectionNode::findChild(const String& strChildId) const
{
    return NULL;
}
DesignSpeedCollectionNode::DesignSpeedCollectionNode (Object& obj)
    : CollectionNode(&obj) 
{
    initialize(&obj);
}

DesignSpeedCollectionNode::DesignSpeedCollectionNode (Object* pObj)
    : CollectionNode (pObj) 
{
    initialize(pObj);
}

void DesignSpeedCollectionNode::initialize (Object* pObj)
{
    ILxNode* pVariant = NULL;
    m_pLxObj = dynamic_cast<DesignSpeedCollection*>(pObj);
    if (m_pLxObj == NULL)
        throw new Exception(Exception::Code::kFail, L"DesignSpeedCollectionNode :: Invalid Object.");
    int nNumChildren = m_pLxObj->count();
    m_arrChildren.reserve(nNumChildren);
    DesignSpeedCollectionIterator* pIterator = m_pLxObj->iterator();
    m_nNumChildren = 0;
    while (!pIterator->atEnd())
    {
        m_arrChildren.push_back(new DesignSpeedNode(pIterator->current()));
        pIterator->next();
    }
    pIterator->release();
}

String DesignSpeedCollectionNode::nodeName() const
{
    return L"DesignSpeedCollection";
}

ILxNode* DesignSpeedCollectionNode::findChild(const String& strChildId) const
{
    return NULL;
}
TargetSetupCollectionNode::TargetSetupCollectionNode (Object& obj)
    : CollectionNode(&obj) 
{
    initialize(&obj);
}

TargetSetupCollectionNode::TargetSetupCollectionNode (Object* pObj)
    : CollectionNode (pObj) 
{
    initialize(pObj);
}

void TargetSetupCollectionNode::initialize (Object* pObj)
{
    ILxNode* pVariant = NULL;
    m_pLxObj = dynamic_cast<TargetSetupCollection*>(pObj);
    if (m_pLxObj == NULL)
        throw new Exception(Exception::Code::kFail, L"TargetSetupCollectionNode :: Invalid Object.");
    int nNumChildren = m_pLxObj->count();
    m_arrChildren.reserve(nNumChildren);
    TargetSetupCollectionIterator* pIterator = m_pLxObj->iterator();
    m_nNumChildren = 0;
    while (!pIterator->atEnd())
    {
        m_arrChildren.push_back(new TargetSetupNode(pIterator->current()));
        pIterator->next();
    }
    pIterator->release();
}

String TargetSetupCollectionNode::nodeName() const
{
    return L"TargetSetupCollection";
}

ILxNode* TargetSetupCollectionNode::findChild(const String& strChildId) const
{
    return NULL;
}
CircCurveNode::CircCurveNode (Object* pObj)
    : ObjectNode (pObj)
{
    ILxNode* pVariant = NULL;
    m_pLxObj = dynamic_cast<CircCurve*>(pObj);
    if (m_pLxObj == NULL)
        throw new Exception(Exception::Code::kFail, L"CircCurveNode :: Invalid Object.");
    DoubleCollection* pValObj = dynamic_cast<DoubleCollection*>(m_pLxObj);
    int nNumChildren = 3;
    if (pValObj)
        nNumChildren += 1;
    m_arrChildren.reserve(nNumChildren);
    m_nNumChildren = 0;
    if (pValObj)
    {
        m_arrChildren.push_back(new ValueNode(this, L"value", L"value"));
    }
    m_arrChildren.push_back(new ValueNode(this, L"Length", L"Length"));
    m_arrChildren.push_back(new ValueNode(this, L"Radius", L"Radius"));
    m_arrChildren.push_back(new ValueNode(this, L"Desc", L"Desc"));
}

bool CircCurveNode::setValue (const String& strMemberName, const String* pstrValue)
{
    bool bValueSet = false;
    CircCurve* pObject = dynamic_cast<CircCurve*>(m_pObject);
    if (strMemberName == L"Length")
    {
        if (!pstrValue)
        {
            pObject->resetValue_Length();
        }
        else
        {
            pObject->setLength(DoubleObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"Radius")
    {
        if (!pstrValue)
        {
            pObject->resetValue_Radius();
        }
        else
        {
            pObject->setRadius(DoubleObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
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
    return bValueSet;
}

bool CircCurveNode::getValue (const String& strMemberName, String& strValue)
{
    bool bValueSet = false;
    CircCurve* pObject = dynamic_cast<CircCurve*>(m_pObject);
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
    else if (strMemberName == L"Length")
    {
        if (pObject->hasValue_Length())
        {
            strValue = (DoubleObjectImpl(pObject->getLength())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"Radius")
    {
        if (pObject->hasValue_Radius())
        {
            strValue = (DoubleObjectImpl(pObject->getRadius())).toString();
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
    return bValueSet;
}

String CircCurveNode::nodeName() const
{
    return L"CircCurve";
}

}; // namespace : LX
