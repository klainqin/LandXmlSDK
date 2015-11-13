#include "stdafx.h"
#include "ObjectNode.h"
#include "CollectionNode.h"
#include "ValueNode.h"
#include "Exception.h"
#include "ValueTypeObjects.h"
#include "LXTypesImpl.h"
#include "LXNodes.h"
#include "PntList3DCollection.h"
#include "ExclusionsCollection.h"
#include "Personnel.h"
#include "Monument.h"
#include "PntList3D.h"

namespace LX
{

PntList3DCollectionNode::PntList3DCollectionNode (Object& obj)
    : CollectionNode(&obj) 
{
    initialize(&obj);
}

PntList3DCollectionNode::PntList3DCollectionNode (Object* pObj)
    : CollectionNode (pObj) 
{
    initialize(pObj);
}

void PntList3DCollectionNode::initialize (Object* pObj)
{
    ILxNode* pVariant = NULL;
    m_pLxObj = dynamic_cast<PntList3DCollection*>(pObj);
    if (m_pLxObj == NULL)
        throw new Exception(Exception::Code::kFail, L"PntList3DCollectionNode :: Invalid Object.");
    int nNumChildren = m_pLxObj->count();
    m_arrChildren.reserve(nNumChildren);
    PntList3DCollectionIterator* pIterator = m_pLxObj->iterator();
    m_nNumChildren = 0;
    while (!pIterator->atEnd())
    {
        m_arrChildren.push_back(new PntList3DNode(pIterator->current()));
        pIterator->next();
    }
    pIterator->release();
}

String PntList3DCollectionNode::nodeName() const
{
    return L"PntList3DCollection";
}

ILxNode* PntList3DCollectionNode::findChild(const String& strChildId) const
{
    return NULL;
}
ExclusionsCollectionNode::ExclusionsCollectionNode (Object& obj)
    : CollectionNode(&obj) 
{
    initialize(&obj);
}

ExclusionsCollectionNode::ExclusionsCollectionNode (Object* pObj)
    : CollectionNode (pObj) 
{
    initialize(pObj);
}

void ExclusionsCollectionNode::initialize (Object* pObj)
{
    ILxNode* pVariant = NULL;
    m_pLxObj = dynamic_cast<ExclusionsCollection*>(pObj);
    if (m_pLxObj == NULL)
        throw new Exception(Exception::Code::kFail, L"ExclusionsCollectionNode :: Invalid Object.");
    int nNumChildren = m_pLxObj->count();
    m_arrChildren.reserve(nNumChildren);
    ExclusionsCollectionIterator* pIterator = m_pLxObj->iterator();
    m_nNumChildren = 0;
    while (!pIterator->atEnd())
    {
        m_arrChildren.push_back(new ExclusionsNode(pIterator->current()));
        pIterator->next();
    }
    pIterator->release();
}

String ExclusionsCollectionNode::nodeName() const
{
    return L"ExclusionsCollection";
}

ILxNode* ExclusionsCollectionNode::findChild(const String& strChildId) const
{
    return NULL;
}
PersonnelNode::PersonnelNode (Object* pObj)
    : ObjectNode (pObj)
{
    ILxNode* pVariant = NULL;
    m_pLxObj = dynamic_cast<Personnel*>(pObj);
    if (m_pLxObj == NULL)
        throw new Exception(Exception::Code::kFail, L"PersonnelNode :: Invalid Object.");
    int nNumChildren = 4;
    m_arrChildren.reserve(nNumChildren);
    m_nNumChildren = 0;
    m_arrChildren.push_back(new ValueNode(this, L"Name", L"Name"));
    m_arrChildren.push_back(new ValueNode(this, L"Role", L"Role"));
    m_arrChildren.push_back(new ValueNode(this, L"RegType", L"RegType"));
    m_arrChildren.push_back(new ValueNode(this, L"RegNumber", L"RegNumber"));
}

bool PersonnelNode::setValue (const String& strMemberName, const String* pstrValue)
{
    bool bValueSet = false;
    Personnel* pObject = dynamic_cast<Personnel*>(m_pObject);
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
    if (strMemberName == L"Role")
    {
        if (!pstrValue)
        {
            pObject->resetValue_Role();
        }
        else
        {
            pObject->setRole(StringObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"RegType")
    {
        if (!pstrValue)
        {
            pObject->resetValue_RegType();
        }
        else
        {
            pObject->setRegType(StringObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"RegNumber")
    {
        if (!pstrValue)
        {
            pObject->resetValue_RegNumber();
        }
        else
        {
            pObject->setRegNumber(StringObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    return bValueSet;
}

bool PersonnelNode::getValue (const String& strMemberName, String& strValue)
{
    bool bValueSet = false;
    Personnel* pObject = dynamic_cast<Personnel*>(m_pObject);
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
    else if (strMemberName == L"Role")
    {
        if (pObject->hasValue_Role())
        {
            strValue = (StringObjectImpl(pObject->getRole())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"RegType")
    {
        if (pObject->hasValue_RegType())
        {
            strValue = (StringObjectImpl(pObject->getRegType())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"RegNumber")
    {
        if (pObject->hasValue_RegNumber())
        {
            strValue = (StringObjectImpl(pObject->getRegNumber())).toString();
            bValueSet = true;
        }
    }
    return bValueSet;
}

String PersonnelNode::nodeName() const
{
    return L"Personnel";
}

MonumentNode::MonumentNode (Object* pObj)
    : ObjectNode (pObj)
{
    ILxNode* pVariant = NULL;
    m_pLxObj = dynamic_cast<Monument*>(pObj);
    if (m_pLxObj == NULL)
        throw new Exception(Exception::Code::kFail, L"MonumentNode :: Invalid Object.");
    int nNumChildren = 13;
    m_arrChildren.reserve(nNumChildren);
    m_nNumChildren = 0;
    m_arrChildren.push_back(new ValueNode(this, L"Name", L"Name"));
    m_arrChildren.push_back(new ValueNode(this, L"PntRef", L"PntRef"));
    m_arrChildren.push_back(new ValueNode(this, L"FeatureRef", L"FeatureRef"));
    m_arrChildren.push_back(new ValueNode(this, L"Desc", L"Desc"));
    m_arrChildren.push_back(new ValueNode(this, L"State", L"State"));
    m_arrChildren.push_back(new ValueNode(this, L"Type", L"Type"));
    m_arrChildren.push_back(new ValueNode(this, L"Condition", L"Condition"));
    m_arrChildren.push_back(new ValueNode(this, L"Category", L"Category"));
    m_arrChildren.push_back(new ValueNode(this, L"Beacon", L"Beacon"));
    m_arrChildren.push_back(new ValueNode(this, L"BeaconProtection", L"BeaconProtection"));
    m_arrChildren.push_back(new ValueNode(this, L"OID", L"OID"));
    m_arrChildren.push_back(new ValueNode(this, L"Reference", L"Reference"));
    m_arrChildren.push_back(new ValueNode(this, L"OriginSurvey", L"OriginSurvey"));
}

bool MonumentNode::setValue (const String& strMemberName, const String* pstrValue)
{
    bool bValueSet = false;
    Monument* pObject = dynamic_cast<Monument*>(m_pObject);
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
    if (strMemberName == L"PntRef")
    {
        if (!pstrValue)
        {
            pObject->resetValue_PntRef();
        }
        else
        {
            pObject->setPntRef(StringObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"FeatureRef")
    {
        if (!pstrValue)
        {
            pObject->resetValue_FeatureRef();
        }
        else
        {
            pObject->setFeatureRef(StringObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
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
    if (strMemberName == L"State")
    {
        if (!pstrValue)
        {
            pObject->resetValue_State();
        }
        else
        {
            pObject->setState(StringObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
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
            pObject->setType(StringObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"Condition")
    {
        if (!pstrValue)
        {
            pObject->resetValue_Condition();
        }
        else
        {
            pObject->setCondition(StringObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"Category")
    {
        if (!pstrValue)
        {
            pObject->resetValue_Category();
        }
        else
        {
            pObject->setCategory(EnumMonumentCategoryImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"Beacon")
    {
        if (!pstrValue)
        {
            pObject->resetValue_Beacon();
        }
        else
        {
            pObject->setBeacon(EnumBeaconTypeImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"BeaconProtection")
    {
        if (!pstrValue)
        {
            pObject->resetValue_BeaconProtection();
        }
        else
        {
            pObject->setBeaconProtection(EnumBeaconProtectionTypeImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"OID")
    {
        if (!pstrValue)
        {
            pObject->resetValue_OID();
        }
        else
        {
            pObject->setOID(StringObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"Reference")
    {
        if (!pstrValue)
        {
            pObject->resetValue_Reference();
        }
        else
        {
            pObject->setReference(StringObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"OriginSurvey")
    {
        if (!pstrValue)
        {
            pObject->resetValue_OriginSurvey();
        }
        else
        {
            pObject->setOriginSurvey(StringObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    return bValueSet;
}

bool MonumentNode::getValue (const String& strMemberName, String& strValue)
{
    bool bValueSet = false;
    Monument* pObject = dynamic_cast<Monument*>(m_pObject);
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
    else if (strMemberName == L"PntRef")
    {
        if (pObject->hasValue_PntRef())
        {
            strValue = (StringObjectImpl(pObject->getPntRef())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"FeatureRef")
    {
        if (pObject->hasValue_FeatureRef())
        {
            strValue = (StringObjectImpl(pObject->getFeatureRef())).toString();
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
    else if (strMemberName == L"State")
    {
        if (pObject->hasValue_State())
        {
            strValue = (StringObjectImpl(pObject->getState())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"Type")
    {
        if (pObject->hasValue_Type())
        {
            strValue = (StringObjectImpl(pObject->getType())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"Condition")
    {
        if (pObject->hasValue_Condition())
        {
            strValue = (StringObjectImpl(pObject->getCondition())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"Category")
    {
        if (pObject->hasValue_Category())
        {
            strValue = (EnumMonumentCategoryImpl(pObject->getCategory())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"Beacon")
    {
        if (pObject->hasValue_Beacon())
        {
            strValue = (EnumBeaconTypeImpl(pObject->getBeacon())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"BeaconProtection")
    {
        if (pObject->hasValue_BeaconProtection())
        {
            strValue = (EnumBeaconProtectionTypeImpl(pObject->getBeaconProtection())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"OID")
    {
        if (pObject->hasValue_OID())
        {
            strValue = (StringObjectImpl(pObject->getOID())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"Reference")
    {
        if (pObject->hasValue_Reference())
        {
            strValue = (StringObjectImpl(pObject->getReference())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"OriginSurvey")
    {
        if (pObject->hasValue_OriginSurvey())
        {
            strValue = (StringObjectImpl(pObject->getOriginSurvey())).toString();
            bValueSet = true;
        }
    }
    return bValueSet;
}

String MonumentNode::nodeName() const
{
    return L"Monument";
}

PntList3DNode::PntList3DNode (Object* pObj)
    : ObjectNode (pObj)
{
    ILxNode* pVariant = NULL;
    m_pLxObj = dynamic_cast<PntList3D*>(pObj);
    if (m_pLxObj == NULL)
        throw new Exception(Exception::Code::kFail, L"PntList3DNode :: Invalid Object.");
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

bool PntList3DNode::setValue (const String& strMemberName, const String* pstrValue)
{
    bool bValueSet = false;
    PntList3D* pObject = dynamic_cast<PntList3D*>(m_pObject);
    return bValueSet;
}

bool PntList3DNode::getValue (const String& strMemberName, String& strValue)
{
    bool bValueSet = false;
    PntList3D* pObject = dynamic_cast<PntList3D*>(m_pObject);
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

String PntList3DNode::nodeName() const
{
    return L"PntList3D";
}

}; // namespace : LX
