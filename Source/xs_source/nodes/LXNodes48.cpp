#include "stdafx.h"
#include "ObjectNode.h"
#include "CollectionNode.h"
#include "ValueNode.h"
#include "Exception.h"
#include "ValueTypeObjects.h"
#include "LXTypesImpl.h"
#include "LXNodes.h"
#include "AdministrativeDate.h"
#include "BacksightCollection.h"
#include "SurveyorCertificate.h"
#include "SurveyMonument.h"
#include "FeatureCollection.h"
#include "AdministrativeAreaCollection.h"

namespace LX
{

AdministrativeDateNode::AdministrativeDateNode (Object* pObj)
    : ObjectNode (pObj)
{
    ILxNode* pVariant = NULL;
    m_pLxObj = dynamic_cast<AdministrativeDate*>(pObj);
    if (m_pLxObj == NULL)
        throw new Exception(Exception::Code::kFail, L"AdministrativeDateNode :: Invalid Object.");
    int nNumChildren = 2;
    m_arrChildren.reserve(nNumChildren);
    m_nNumChildren = 0;
    m_arrChildren.push_back(new ValueNode(this, L"AdminDateType", L"AdminDateType"));
    m_arrChildren.push_back(new ValueNode(this, L"AdminDate", L"AdminDate"));
}

bool AdministrativeDateNode::setValue (const String& strMemberName, const String* pstrValue)
{
    bool bValueSet = false;
    AdministrativeDate* pObject = dynamic_cast<AdministrativeDate*>(m_pObject);
    if (strMemberName == L"AdminDateType")
    {
        if (!pstrValue)
        {
            pObject->resetValue_AdminDateType();
        }
        else
        {
            pObject->setAdminDateType(StringObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"AdminDate")
    {
        if (!pstrValue)
        {
            pObject->resetValue_AdminDate();
        }
        else
        {
            pObject->setAdminDate(StringObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    return bValueSet;
}

bool AdministrativeDateNode::getValue (const String& strMemberName, String& strValue)
{
    bool bValueSet = false;
    AdministrativeDate* pObject = dynamic_cast<AdministrativeDate*>(m_pObject);
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
    else if (strMemberName == L"AdminDateType")
    {
        if (pObject->hasValue_AdminDateType())
        {
            strValue = (StringObjectImpl(pObject->getAdminDateType())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"AdminDate")
    {
        if (pObject->hasValue_AdminDate())
        {
            strValue = (StringObjectImpl(pObject->getAdminDate())).toString();
            bValueSet = true;
        }
    }
    return bValueSet;
}

String AdministrativeDateNode::nodeName() const
{
    return L"AdministrativeDate";
}

BacksightCollectionNode::BacksightCollectionNode (Object& obj)
    : CollectionNode(&obj) 
{
    initialize(&obj);
}

BacksightCollectionNode::BacksightCollectionNode (Object* pObj)
    : CollectionNode (pObj) 
{
    initialize(pObj);
}

void BacksightCollectionNode::initialize (Object* pObj)
{
    ILxNode* pVariant = NULL;
    m_pLxObj = dynamic_cast<BacksightCollection*>(pObj);
    if (m_pLxObj == NULL)
        throw new Exception(Exception::Code::kFail, L"BacksightCollectionNode :: Invalid Object.");
    int nNumChildren = m_pLxObj->count();
    m_arrChildren.reserve(nNumChildren);
    BacksightCollectionIterator* pIterator = m_pLxObj->iterator();
    m_nNumChildren = 0;
    while (!pIterator->atEnd())
    {
        m_arrChildren.push_back(new BacksightNode(pIterator->current()));
        pIterator->next();
    }
    pIterator->release();
}

String BacksightCollectionNode::nodeName() const
{
    return L"BacksightCollection";
}

ILxNode* BacksightCollectionNode::findChild(const String& strChildId) const
{
    return NULL;
}
SurveyorCertificateNode::SurveyorCertificateNode (Object* pObj)
    : ObjectNode (pObj)
{
    ILxNode* pVariant = NULL;
    m_pLxObj = dynamic_cast<SurveyorCertificate*>(pObj);
    if (m_pLxObj == NULL)
        throw new Exception(Exception::Code::kFail, L"SurveyorCertificateNode :: Invalid Object.");
    int nNumChildren = 4;
    m_arrChildren.reserve(nNumChildren);
    m_nNumChildren = 0;
    m_arrChildren.push_back(new ValueNode(this, L"Name", L"Name"));
    m_arrChildren.push_back(new ValueNode(this, L"CertificateType", L"CertificateType"));
    m_arrChildren.push_back(new ValueNode(this, L"TextCertificate", L"TextCertificate"));
    m_arrChildren.push_back(new ValueNode(this, L"SurveyDate", L"SurveyDate"));
}

bool SurveyorCertificateNode::setValue (const String& strMemberName, const String* pstrValue)
{
    bool bValueSet = false;
    SurveyorCertificate* pObject = dynamic_cast<SurveyorCertificate*>(m_pObject);
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
    if (strMemberName == L"CertificateType")
    {
        if (!pstrValue)
        {
            pObject->resetValue_CertificateType();
        }
        else
        {
            pObject->setCertificateType(StringObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"TextCertificate")
    {
        if (!pstrValue)
        {
            pObject->resetValue_TextCertificate();
        }
        else
        {
            pObject->setTextCertificate(StringObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"SurveyDate")
    {
        if (!pstrValue)
        {
            pObject->resetValue_SurveyDate();
        }
        else
        {
            pObject->setSurveyDate(StringObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    return bValueSet;
}

bool SurveyorCertificateNode::getValue (const String& strMemberName, String& strValue)
{
    bool bValueSet = false;
    SurveyorCertificate* pObject = dynamic_cast<SurveyorCertificate*>(m_pObject);
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
    else if (strMemberName == L"CertificateType")
    {
        if (pObject->hasValue_CertificateType())
        {
            strValue = (StringObjectImpl(pObject->getCertificateType())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"TextCertificate")
    {
        if (pObject->hasValue_TextCertificate())
        {
            strValue = (StringObjectImpl(pObject->getTextCertificate())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"SurveyDate")
    {
        if (pObject->hasValue_SurveyDate())
        {
            strValue = (StringObjectImpl(pObject->getSurveyDate())).toString();
            bValueSet = true;
        }
    }
    return bValueSet;
}

String SurveyorCertificateNode::nodeName() const
{
    return L"SurveyorCertificate";
}

SurveyMonumentNode::SurveyMonumentNode (Object* pObj)
    : ObjectNode (pObj)
{
    ILxNode* pVariant = NULL;
    m_pLxObj = dynamic_cast<SurveyMonument*>(pObj);
    if (m_pLxObj == NULL)
        throw new Exception(Exception::Code::kFail, L"SurveyMonumentNode :: Invalid Object.");
    int nNumChildren = 11;
    m_arrChildren.reserve(nNumChildren);
    m_nNumChildren = 0;
    m_arrChildren.push_back(new FeatureCollectionNode(m_pLxObj->Feature()));
    m_arrChildren.push_back(new ValueNode(this, L"MntRef", L"MntRef"));
    m_arrChildren.push_back(new ValueNode(this, L"Purpose", L"Purpose"));
    m_arrChildren.push_back(new ValueNode(this, L"State", L"State"));
    m_arrChildren.push_back(new ValueNode(this, L"AdoptedSurvey", L"AdoptedSurvey"));
    m_arrChildren.push_back(new ValueNode(this, L"DisturbedMonument", L"DisturbedMonument"));
    m_arrChildren.push_back(new ValueNode(this, L"DisturbedDate", L"DisturbedDate"));
    m_arrChildren.push_back(new ValueNode(this, L"DisturbedAnnotation", L"DisturbedAnnotation"));
    m_arrChildren.push_back(new ValueNode(this, L"ReplacedMonument", L"ReplacedMonument"));
    m_arrChildren.push_back(new ValueNode(this, L"ReplacedDate", L"ReplacedDate"));
    m_arrChildren.push_back(new ValueNode(this, L"ReplacedAnnotation", L"ReplacedAnnotation"));
}

bool SurveyMonumentNode::setValue (const String& strMemberName, const String* pstrValue)
{
    bool bValueSet = false;
    SurveyMonument* pObject = dynamic_cast<SurveyMonument*>(m_pObject);
    if (strMemberName == L"MntRef")
    {
        if (!pstrValue)
        {
            pObject->resetValue_MntRef();
        }
        else
        {
            pObject->setMntRef(StringObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"Purpose")
    {
        if (!pstrValue)
        {
            pObject->resetValue_Purpose();
        }
        else
        {
            pObject->setPurpose(StringObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
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
    if (strMemberName == L"AdoptedSurvey")
    {
        if (!pstrValue)
        {
            pObject->resetValue_AdoptedSurvey();
        }
        else
        {
            pObject->setAdoptedSurvey(StringObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"DisturbedMonument")
    {
        if (!pstrValue)
        {
            pObject->resetValue_DisturbedMonument();
        }
        else
        {
            pObject->setDisturbedMonument(StringObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"DisturbedDate")
    {
        if (!pstrValue)
        {
            pObject->resetValue_DisturbedDate();
        }
        else
        {
            pObject->setDisturbedDate(StringObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"DisturbedAnnotation")
    {
        if (!pstrValue)
        {
            pObject->resetValue_DisturbedAnnotation();
        }
        else
        {
            pObject->setDisturbedAnnotation(StringObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"ReplacedMonument")
    {
        if (!pstrValue)
        {
            pObject->resetValue_ReplacedMonument();
        }
        else
        {
            pObject->setReplacedMonument(StringObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"ReplacedDate")
    {
        if (!pstrValue)
        {
            pObject->resetValue_ReplacedDate();
        }
        else
        {
            pObject->setReplacedDate(StringObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"ReplacedAnnotation")
    {
        if (!pstrValue)
        {
            pObject->resetValue_ReplacedAnnotation();
        }
        else
        {
            pObject->setReplacedAnnotation(StringObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    return bValueSet;
}

bool SurveyMonumentNode::getValue (const String& strMemberName, String& strValue)
{
    bool bValueSet = false;
    SurveyMonument* pObject = dynamic_cast<SurveyMonument*>(m_pObject);
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
    else if (strMemberName == L"MntRef")
    {
        if (pObject->hasValue_MntRef())
        {
            strValue = (StringObjectImpl(pObject->getMntRef())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"Purpose")
    {
        if (pObject->hasValue_Purpose())
        {
            strValue = (StringObjectImpl(pObject->getPurpose())).toString();
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
    else if (strMemberName == L"AdoptedSurvey")
    {
        if (pObject->hasValue_AdoptedSurvey())
        {
            strValue = (StringObjectImpl(pObject->getAdoptedSurvey())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"DisturbedMonument")
    {
        if (pObject->hasValue_DisturbedMonument())
        {
            strValue = (StringObjectImpl(pObject->getDisturbedMonument())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"DisturbedDate")
    {
        if (pObject->hasValue_DisturbedDate())
        {
            strValue = (StringObjectImpl(pObject->getDisturbedDate())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"DisturbedAnnotation")
    {
        if (pObject->hasValue_DisturbedAnnotation())
        {
            strValue = (StringObjectImpl(pObject->getDisturbedAnnotation())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"ReplacedMonument")
    {
        if (pObject->hasValue_ReplacedMonument())
        {
            strValue = (StringObjectImpl(pObject->getReplacedMonument())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"ReplacedDate")
    {
        if (pObject->hasValue_ReplacedDate())
        {
            strValue = (StringObjectImpl(pObject->getReplacedDate())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"ReplacedAnnotation")
    {
        if (pObject->hasValue_ReplacedAnnotation())
        {
            strValue = (StringObjectImpl(pObject->getReplacedAnnotation())).toString();
            bValueSet = true;
        }
    }
    return bValueSet;
}

String SurveyMonumentNode::nodeName() const
{
    return L"SurveyMonument";
}

AdministrativeAreaCollectionNode::AdministrativeAreaCollectionNode (Object& obj)
    : CollectionNode(&obj) 
{
    initialize(&obj);
}

AdministrativeAreaCollectionNode::AdministrativeAreaCollectionNode (Object* pObj)
    : CollectionNode (pObj) 
{
    initialize(pObj);
}

void AdministrativeAreaCollectionNode::initialize (Object* pObj)
{
    ILxNode* pVariant = NULL;
    m_pLxObj = dynamic_cast<AdministrativeAreaCollection*>(pObj);
    if (m_pLxObj == NULL)
        throw new Exception(Exception::Code::kFail, L"AdministrativeAreaCollectionNode :: Invalid Object.");
    int nNumChildren = m_pLxObj->count();
    m_arrChildren.reserve(nNumChildren);
    AdministrativeAreaCollectionIterator* pIterator = m_pLxObj->iterator();
    m_nNumChildren = 0;
    while (!pIterator->atEnd())
    {
        m_arrChildren.push_back(new AdministrativeAreaNode(pIterator->current()));
        pIterator->next();
    }
    pIterator->release();
}

String AdministrativeAreaCollectionNode::nodeName() const
{
    return L"AdministrativeAreaCollection";
}

ILxNode* AdministrativeAreaCollectionNode::findChild(const String& strChildId) const
{
    return NULL;
}
}; // namespace : LX
