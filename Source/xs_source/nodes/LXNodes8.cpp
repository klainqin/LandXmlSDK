#include "stdafx.h"
#include "ObjectNode.h"
#include "CollectionNode.h"
#include "ValueNode.h"
#include "Exception.h"
#include "ValueTypeObjects.h"
#include "LXTypesImpl.h"
#include "LXNodes.h"
#include "SuperelevationCollection.h"
#include "Application.h"
#include "AuthorCollection.h"
#include "AdverseSE.h"
#include "HeadOfPower.h"
#include "DecisionSightDistanceCollection.h"

namespace LX
{

SuperelevationCollectionNode::SuperelevationCollectionNode (Object& obj)
    : CollectionNode(&obj) 
{
    initialize(&obj);
}

SuperelevationCollectionNode::SuperelevationCollectionNode (Object* pObj)
    : CollectionNode (pObj) 
{
    initialize(pObj);
}

void SuperelevationCollectionNode::initialize (Object* pObj)
{
    ILxNode* pVariant = NULL;
    m_pLxObj = dynamic_cast<SuperelevationCollection*>(pObj);
    if (m_pLxObj == NULL)
        throw new Exception(Exception::Code::kFail, L"SuperelevationCollectionNode :: Invalid Object.");
    int nNumChildren = m_pLxObj->count();
    m_arrChildren.reserve(nNumChildren);
    SuperelevationCollectionIterator* pIterator = m_pLxObj->iterator();
    m_nNumChildren = 0;
    while (!pIterator->atEnd())
    {
        m_arrChildren.push_back(new SuperelevationNode(pIterator->current()));
        pIterator->next();
    }
    pIterator->release();
}

String SuperelevationCollectionNode::nodeName() const
{
    return L"SuperelevationCollection";
}

ILxNode* SuperelevationCollectionNode::findChild(const String& strChildId) const
{
    return NULL;
}
ApplicationNode::ApplicationNode (Object* pObj)
    : ObjectNode (pObj)
{
    ILxNode* pVariant = NULL;
    m_pLxObj = dynamic_cast<Application*>(pObj);
    if (m_pLxObj == NULL)
        throw new Exception(Exception::Code::kFail, L"ApplicationNode :: Invalid Object.");
    int nNumChildren = 7;
    m_arrChildren.reserve(nNumChildren);
    m_nNumChildren = 0;
    m_arrChildren.push_back(new AuthorCollectionNode(m_pLxObj->Author()));
    m_arrChildren.push_back(new ValueNode(this, L"Name", L"Name"));
    m_arrChildren.push_back(new ValueNode(this, L"Desc", L"Desc"));
    m_arrChildren.push_back(new ValueNode(this, L"Manufacturer", L"Manufacturer"));
    m_arrChildren.push_back(new ValueNode(this, L"Version", L"Version"));
    m_arrChildren.push_back(new ValueNode(this, L"ManufacturerURL", L"ManufacturerURL"));
    m_arrChildren.push_back(new ValueNode(this, L"TimeStamp", L"TimeStamp"));
}

bool ApplicationNode::setValue (const String& strMemberName, const String* pstrValue)
{
    bool bValueSet = false;
    Application* pObject = dynamic_cast<Application*>(m_pObject);
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
    if (strMemberName == L"Manufacturer")
    {
        if (!pstrValue)
        {
            pObject->resetValue_Manufacturer();
        }
        else
        {
            pObject->setManufacturer(StringObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"Version")
    {
        if (!pstrValue)
        {
            pObject->resetValue_Version();
        }
        else
        {
            pObject->setVersion(StringObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"ManufacturerURL")
    {
        if (!pstrValue)
        {
            pObject->resetValue_ManufacturerURL();
        }
        else
        {
            pObject->setManufacturerURL(StringObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"TimeStamp")
    {
        if (!pstrValue)
        {
            pObject->resetValue_TimeStamp();
        }
        else
        {
            pObject->setTimeStamp(StringObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    return bValueSet;
}

bool ApplicationNode::getValue (const String& strMemberName, String& strValue)
{
    bool bValueSet = false;
    Application* pObject = dynamic_cast<Application*>(m_pObject);
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
    else if (strMemberName == L"Desc")
    {
        if (pObject->hasValue_Desc())
        {
            strValue = (StringObjectImpl(pObject->getDesc())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"Manufacturer")
    {
        if (pObject->hasValue_Manufacturer())
        {
            strValue = (StringObjectImpl(pObject->getManufacturer())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"Version")
    {
        if (pObject->hasValue_Version())
        {
            strValue = (StringObjectImpl(pObject->getVersion())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"ManufacturerURL")
    {
        if (pObject->hasValue_ManufacturerURL())
        {
            strValue = (StringObjectImpl(pObject->getManufacturerURL())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"TimeStamp")
    {
        if (pObject->hasValue_TimeStamp())
        {
            strValue = (StringObjectImpl(pObject->getTimeStamp())).toString();
            bValueSet = true;
        }
    }
    return bValueSet;
}

String ApplicationNode::nodeName() const
{
    return L"Application";
}

AdverseSENode::AdverseSENode (Object* pObj)
    : ObjectNode (pObj)
{
    ILxNode* pVariant = NULL;
    m_pLxObj = dynamic_cast<AdverseSE*>(pObj);
    if (m_pLxObj == NULL)
        throw new Exception(Exception::Code::kFail, L"AdverseSENode :: Invalid Object.");
    EnumAdverseSEType* pValObj = dynamic_cast<EnumAdverseSEType*>(m_pLxObj);
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

bool AdverseSENode::setValue (const String& strMemberName, const String* pstrValue)
{
    bool bValueSet = false;
    AdverseSE* pObject = dynamic_cast<AdverseSE*>(m_pObject);
    return bValueSet;
}

bool AdverseSENode::getValue (const String& strMemberName, String& strValue)
{
    bool bValueSet = false;
    AdverseSE* pObject = dynamic_cast<AdverseSE*>(m_pObject);
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

String AdverseSENode::nodeName() const
{
    return L"AdverseSE";
}

HeadOfPowerNode::HeadOfPowerNode (Object* pObj)
    : ObjectNode (pObj)
{
    ILxNode* pVariant = NULL;
    m_pLxObj = dynamic_cast<HeadOfPower*>(pObj);
    if (m_pLxObj == NULL)
        throw new Exception(Exception::Code::kFail, L"HeadOfPowerNode :: Invalid Object.");
    int nNumChildren = 1;
    m_arrChildren.reserve(nNumChildren);
    m_nNumChildren = 0;
    m_arrChildren.push_back(new ValueNode(this, L"Name", L"Name"));
}

bool HeadOfPowerNode::setValue (const String& strMemberName, const String* pstrValue)
{
    bool bValueSet = false;
    HeadOfPower* pObject = dynamic_cast<HeadOfPower*>(m_pObject);
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
    return bValueSet;
}

bool HeadOfPowerNode::getValue (const String& strMemberName, String& strValue)
{
    bool bValueSet = false;
    HeadOfPower* pObject = dynamic_cast<HeadOfPower*>(m_pObject);
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
    return bValueSet;
}

String HeadOfPowerNode::nodeName() const
{
    return L"HeadOfPower";
}

DecisionSightDistanceCollectionNode::DecisionSightDistanceCollectionNode (Object& obj)
    : CollectionNode(&obj) 
{
    initialize(&obj);
}

DecisionSightDistanceCollectionNode::DecisionSightDistanceCollectionNode (Object* pObj)
    : CollectionNode (pObj) 
{
    initialize(pObj);
}

void DecisionSightDistanceCollectionNode::initialize (Object* pObj)
{
    ILxNode* pVariant = NULL;
    m_pLxObj = dynamic_cast<DecisionSightDistanceCollection*>(pObj);
    if (m_pLxObj == NULL)
        throw new Exception(Exception::Code::kFail, L"DecisionSightDistanceCollectionNode :: Invalid Object.");
    int nNumChildren = m_pLxObj->count();
    m_arrChildren.reserve(nNumChildren);
    DecisionSightDistanceCollectionIterator* pIterator = m_pLxObj->iterator();
    m_nNumChildren = 0;
    while (!pIterator->atEnd())
    {
        m_arrChildren.push_back(new DecisionSightDistanceNode(pIterator->current()));
        pIterator->next();
    }
    pIterator->release();
}

String DecisionSightDistanceCollectionNode::nodeName() const
{
    return L"DecisionSightDistanceCollection";
}

ILxNode* DecisionSightDistanceCollectionNode::findChild(const String& strChildId) const
{
    return NULL;
}
}; // namespace : LX
