#include "stdafx.h"
#include "ObjectNode.h"
#include "CollectionNode.h"
#include "ValueNode.h"
#include "Exception.h"
#include "ValueTypeObjects.h"
#include "LXTypesImpl.h"
#include "LXNodes.h"
#include "PropertyCollection.h"
#include "ChainCollection.h"
#include "UnsymParaCurve.h"
#include "Equipment.h"
#include "InstrumentDetails.h"
#include "LaserDetails.h"
#include "GPSReceiverDetails.h"
#include "GPSAntennaDetails.h"
#include "ThruLaneCollection.h"

namespace LX
{

PropertyCollectionNode::PropertyCollectionNode (Object& obj)
    : CollectionNode(&obj) 
{
    initialize(&obj);
}

PropertyCollectionNode::PropertyCollectionNode (Object* pObj)
    : CollectionNode (pObj) 
{
    initialize(pObj);
}

void PropertyCollectionNode::initialize (Object* pObj)
{
    ILxNode* pVariant = NULL;
    m_pLxObj = dynamic_cast<PropertyCollection*>(pObj);
    if (m_pLxObj == NULL)
        throw new Exception(Exception::Code::kFail, L"PropertyCollectionNode :: Invalid Object.");
    int nNumChildren = m_pLxObj->count();
    m_arrChildren.reserve(nNumChildren);
    PropertyCollectionIterator* pIterator = m_pLxObj->iterator();
    m_nNumChildren = 0;
    while (!pIterator->atEnd())
    {
        m_arrChildren.push_back(new PropertyNode(pIterator->current()));
        pIterator->next();
    }
    pIterator->release();
}

String PropertyCollectionNode::nodeName() const
{
    return L"PropertyCollection";
}

ILxNode* PropertyCollectionNode::findChild(const String& strChildId) const
{
    return NULL;
}
ChainCollectionNode::ChainCollectionNode (Object& obj)
    : CollectionNode(&obj) 
{
    initialize(&obj);
}

ChainCollectionNode::ChainCollectionNode (Object* pObj)
    : CollectionNode (pObj) 
{
    initialize(pObj);
}

void ChainCollectionNode::initialize (Object* pObj)
{
    ILxNode* pVariant = NULL;
    m_pLxObj = dynamic_cast<ChainCollection*>(pObj);
    if (m_pLxObj == NULL)
        throw new Exception(Exception::Code::kFail, L"ChainCollectionNode :: Invalid Object.");
    int nNumChildren = m_pLxObj->count();
    m_arrChildren.reserve(nNumChildren);
    ChainCollectionIterator* pIterator = m_pLxObj->iterator();
    m_nNumChildren = 0;
    while (!pIterator->atEnd())
    {
        m_arrChildren.push_back(new ChainNode(pIterator->current()));
        pIterator->next();
    }
    pIterator->release();
}

String ChainCollectionNode::nodeName() const
{
    return L"ChainCollection";
}

ILxNode* ChainCollectionNode::findChild(const String& strChildId) const
{
    // Grab string from child
    StringObjectImpl::Type idValue;
    ILxNode* pFoundNode = NULL;
    if (StringObjectImpl::parseString(strChildId.c_str(), strChildId.size(), idValue))
    {
        ChainCollectionIterator* pFoundIter = m_pLxObj->find(idValue);
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
UnsymParaCurveNode::UnsymParaCurveNode (Object* pObj)
    : ObjectNode (pObj)
{
    ILxNode* pVariant = NULL;
    m_pLxObj = dynamic_cast<UnsymParaCurve*>(pObj);
    if (m_pLxObj == NULL)
        throw new Exception(Exception::Code::kFail, L"UnsymParaCurveNode :: Invalid Object.");
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
    m_arrChildren.push_back(new ValueNode(this, L"LengthIn", L"LengthIn"));
    m_arrChildren.push_back(new ValueNode(this, L"LengthOut", L"LengthOut"));
    m_arrChildren.push_back(new ValueNode(this, L"Desc", L"Desc"));
}

bool UnsymParaCurveNode::setValue (const String& strMemberName, const String* pstrValue)
{
    bool bValueSet = false;
    UnsymParaCurve* pObject = dynamic_cast<UnsymParaCurve*>(m_pObject);
    if (strMemberName == L"LengthIn")
    {
        if (!pstrValue)
        {
            pObject->resetValue_LengthIn();
        }
        else
        {
            pObject->setLengthIn(DoubleObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"LengthOut")
    {
        if (!pstrValue)
        {
            pObject->resetValue_LengthOut();
        }
        else
        {
            pObject->setLengthOut(DoubleObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
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

bool UnsymParaCurveNode::getValue (const String& strMemberName, String& strValue)
{
    bool bValueSet = false;
    UnsymParaCurve* pObject = dynamic_cast<UnsymParaCurve*>(m_pObject);
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
    else if (strMemberName == L"LengthIn")
    {
        if (pObject->hasValue_LengthIn())
        {
            strValue = (DoubleObjectImpl(pObject->getLengthIn())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"LengthOut")
    {
        if (pObject->hasValue_LengthOut())
        {
            strValue = (DoubleObjectImpl(pObject->getLengthOut())).toString();
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

String UnsymParaCurveNode::nodeName() const
{
    return L"UnsymParaCurve";
}

EquipmentNode::EquipmentNode (Object* pObj)
    : ObjectNode (pObj)
{
    ILxNode* pVariant = NULL;
    m_pLxObj = dynamic_cast<Equipment*>(pObj);
    if (m_pLxObj == NULL)
        throw new Exception(Exception::Code::kFail, L"EquipmentNode :: Invalid Object.");
    int nNumChildren = 1;
    m_arrChildren.reserve(nNumChildren);
    m_nNumChildren = 0;
    if (dynamic_cast<InstrumentDetails*>(m_pLxObj->getEquipmentDetails()))
        if (m_pLxObj->getEquipmentDetails())
            m_arrChildren.push_back(new InstrumentDetailsNode(m_pLxObj->getEquipmentDetails()));
    if (dynamic_cast<LaserDetails*>(m_pLxObj->getEquipmentDetails()))
        if (m_pLxObj->getEquipmentDetails())
            m_arrChildren.push_back(new LaserDetailsNode(m_pLxObj->getEquipmentDetails()));
    if (dynamic_cast<GPSReceiverDetails*>(m_pLxObj->getEquipmentDetails()))
        if (m_pLxObj->getEquipmentDetails())
            m_arrChildren.push_back(new GPSReceiverDetailsNode(m_pLxObj->getEquipmentDetails()));
    if (dynamic_cast<GPSAntennaDetails*>(m_pLxObj->getEquipmentDetails()))
        if (m_pLxObj->getEquipmentDetails())
            m_arrChildren.push_back(new GPSAntennaDetailsNode(m_pLxObj->getEquipmentDetails()));
}

bool EquipmentNode::setValue (const String& strMemberName, const String* pstrValue)
{
    bool bValueSet = false;
    Equipment* pObject = dynamic_cast<Equipment*>(m_pObject);
    return bValueSet;
}

bool EquipmentNode::getValue (const String& strMemberName, String& strValue)
{
    bool bValueSet = false;
    Equipment* pObject = dynamic_cast<Equipment*>(m_pObject);
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

String EquipmentNode::nodeName() const
{
    return L"Equipment";
}

ThruLaneCollectionNode::ThruLaneCollectionNode (Object& obj)
    : CollectionNode(&obj) 
{
    initialize(&obj);
}

ThruLaneCollectionNode::ThruLaneCollectionNode (Object* pObj)
    : CollectionNode (pObj) 
{
    initialize(pObj);
}

void ThruLaneCollectionNode::initialize (Object* pObj)
{
    ILxNode* pVariant = NULL;
    m_pLxObj = dynamic_cast<ThruLaneCollection*>(pObj);
    if (m_pLxObj == NULL)
        throw new Exception(Exception::Code::kFail, L"ThruLaneCollectionNode :: Invalid Object.");
    int nNumChildren = m_pLxObj->count();
    m_arrChildren.reserve(nNumChildren);
    ThruLaneCollectionIterator* pIterator = m_pLxObj->iterator();
    m_nNumChildren = 0;
    while (!pIterator->atEnd())
    {
        m_arrChildren.push_back(new ThruLaneNode(pIterator->current()));
        pIterator->next();
    }
    pIterator->release();
}

String ThruLaneCollectionNode::nodeName() const
{
    return L"ThruLaneCollection";
}

ILxNode* ThruLaneCollectionNode::findChild(const String& strChildId) const
{
    return NULL;
}
}; // namespace : LX
