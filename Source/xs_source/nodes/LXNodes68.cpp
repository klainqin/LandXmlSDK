#include "stdafx.h"
#include "ObjectNode.h"
#include "CollectionNode.h"
#include "ValueNode.h"
#include "Exception.h"
#include "ValueTypeObjects.h"
#include "LXTypesImpl.h"
#include "LXNodes.h"
#include "RoadsideCollection.h"
#include "StructCollection.h"
#include "GPSReceiverDetails.h"
#include "PurposeOfSurvey.h"
#include "ProfileCollection.h"

namespace LX
{

RoadsideCollectionNode::RoadsideCollectionNode (Object& obj)
    : CollectionNode(&obj) 
{
    initialize(&obj);
}

RoadsideCollectionNode::RoadsideCollectionNode (Object* pObj)
    : CollectionNode (pObj) 
{
    initialize(pObj);
}

void RoadsideCollectionNode::initialize (Object* pObj)
{
    ILxNode* pVariant = NULL;
    m_pLxObj = dynamic_cast<RoadsideCollection*>(pObj);
    if (m_pLxObj == NULL)
        throw new Exception(Exception::Code::kFail, L"RoadsideCollectionNode :: Invalid Object.");
    int nNumChildren = m_pLxObj->count();
    m_arrChildren.reserve(nNumChildren);
    RoadsideCollectionIterator* pIterator = m_pLxObj->iterator();
    m_nNumChildren = 0;
    while (!pIterator->atEnd())
    {
        m_arrChildren.push_back(new RoadsideNode(pIterator->current()));
        pIterator->next();
    }
    pIterator->release();
}

String RoadsideCollectionNode::nodeName() const
{
    return L"RoadsideCollection";
}

ILxNode* RoadsideCollectionNode::findChild(const String& strChildId) const
{
    return NULL;
}
StructCollectionNode::StructCollectionNode (Object& obj)
    : CollectionNode(&obj) 
{
    initialize(&obj);
}

StructCollectionNode::StructCollectionNode (Object* pObj)
    : CollectionNode (pObj) 
{
    initialize(pObj);
}

void StructCollectionNode::initialize (Object* pObj)
{
    ILxNode* pVariant = NULL;
    m_pLxObj = dynamic_cast<StructCollection*>(pObj);
    if (m_pLxObj == NULL)
        throw new Exception(Exception::Code::kFail, L"StructCollectionNode :: Invalid Object.");
    int nNumChildren = m_pLxObj->count();
    m_arrChildren.reserve(nNumChildren);
    StructCollectionIterator* pIterator = m_pLxObj->iterator();
    m_nNumChildren = 0;
    while (!pIterator->atEnd())
    {
        m_arrChildren.push_back(new StructNode(pIterator->current()));
        pIterator->next();
    }
    pIterator->release();
}

String StructCollectionNode::nodeName() const
{
    return L"StructCollection";
}

ILxNode* StructCollectionNode::findChild(const String& strChildId) const
{
    // Grab string from child
    StringObjectImpl::Type idValue;
    ILxNode* pFoundNode = NULL;
    if (StringObjectImpl::parseString(strChildId.c_str(), strChildId.size(), idValue))
    {
        StructCollectionIterator* pFoundIter = m_pLxObj->find(idValue);
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
GPSReceiverDetailsNode::GPSReceiverDetailsNode (Object* pObj)
    : ObjectNode (pObj)
{
    ILxNode* pVariant = NULL;
    m_pLxObj = dynamic_cast<GPSReceiverDetails*>(pObj);
    if (m_pLxObj == NULL)
        throw new Exception(Exception::Code::kFail, L"GPSReceiverDetailsNode :: Invalid Object.");
    int nNumChildren = 4;
    m_arrChildren.reserve(nNumChildren);
    m_nNumChildren = 0;
    m_arrChildren.push_back(new ValueNode(this, L"Id", L"Id"));
    m_arrChildren.push_back(new ValueNode(this, L"Manufacturer", L"Manufacturer"));
    m_arrChildren.push_back(new ValueNode(this, L"Model", L"Model"));
    m_arrChildren.push_back(new ValueNode(this, L"SerialNumber", L"SerialNumber"));
}

bool GPSReceiverDetailsNode::setValue (const String& strMemberName, const String* pstrValue)
{
    bool bValueSet = false;
    GPSReceiverDetails* pObject = dynamic_cast<GPSReceiverDetails*>(m_pObject);
    if (strMemberName == L"Id")
    {
        if (!pstrValue)
        {
            pObject->resetValue_Id();
        }
        else
        {
            pObject->setId(StringObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
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
    if (strMemberName == L"Model")
    {
        if (!pstrValue)
        {
            pObject->resetValue_Model();
        }
        else
        {
            pObject->setModel(StringObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"SerialNumber")
    {
        if (!pstrValue)
        {
            pObject->resetValue_SerialNumber();
        }
        else
        {
            pObject->setSerialNumber(StringObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    return bValueSet;
}

bool GPSReceiverDetailsNode::getValue (const String& strMemberName, String& strValue)
{
    bool bValueSet = false;
    GPSReceiverDetails* pObject = dynamic_cast<GPSReceiverDetails*>(m_pObject);
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
    else if (strMemberName == L"Id")
    {
        if (pObject->hasValue_Id())
        {
            strValue = (StringObjectImpl(pObject->getId())).toString();
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
    else if (strMemberName == L"Model")
    {
        if (pObject->hasValue_Model())
        {
            strValue = (StringObjectImpl(pObject->getModel())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"SerialNumber")
    {
        if (pObject->hasValue_SerialNumber())
        {
            strValue = (StringObjectImpl(pObject->getSerialNumber())).toString();
            bValueSet = true;
        }
    }
    return bValueSet;
}

String GPSReceiverDetailsNode::nodeName() const
{
    return L"GPSReceiverDetails";
}

PurposeOfSurveyNode::PurposeOfSurveyNode (Object* pObj)
    : ObjectNode (pObj)
{
    ILxNode* pVariant = NULL;
    m_pLxObj = dynamic_cast<PurposeOfSurvey*>(pObj);
    if (m_pLxObj == NULL)
        throw new Exception(Exception::Code::kFail, L"PurposeOfSurveyNode :: Invalid Object.");
    int nNumChildren = 1;
    m_arrChildren.reserve(nNumChildren);
    m_nNumChildren = 0;
    m_arrChildren.push_back(new ValueNode(this, L"Name", L"Name"));
}

bool PurposeOfSurveyNode::setValue (const String& strMemberName, const String* pstrValue)
{
    bool bValueSet = false;
    PurposeOfSurvey* pObject = dynamic_cast<PurposeOfSurvey*>(m_pObject);
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

bool PurposeOfSurveyNode::getValue (const String& strMemberName, String& strValue)
{
    bool bValueSet = false;
    PurposeOfSurvey* pObject = dynamic_cast<PurposeOfSurvey*>(m_pObject);
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

String PurposeOfSurveyNode::nodeName() const
{
    return L"PurposeOfSurvey";
}

ProfileCollectionNode::ProfileCollectionNode (Object& obj)
    : CollectionNode(&obj) 
{
    initialize(&obj);
}

ProfileCollectionNode::ProfileCollectionNode (Object* pObj)
    : CollectionNode (pObj) 
{
    initialize(pObj);
}

void ProfileCollectionNode::initialize (Object* pObj)
{
    ILxNode* pVariant = NULL;
    m_pLxObj = dynamic_cast<ProfileCollection*>(pObj);
    if (m_pLxObj == NULL)
        throw new Exception(Exception::Code::kFail, L"ProfileCollectionNode :: Invalid Object.");
    int nNumChildren = m_pLxObj->count();
    m_arrChildren.reserve(nNumChildren);
    ProfileCollectionIterator* pIterator = m_pLxObj->iterator();
    m_nNumChildren = 0;
    while (!pIterator->atEnd())
    {
        m_arrChildren.push_back(new ProfileNode(pIterator->current()));
        pIterator->next();
    }
    pIterator->release();
}

String ProfileCollectionNode::nodeName() const
{
    return L"ProfileCollection";
}

ILxNode* ProfileCollectionNode::findChild(const String& strChildId) const
{
    // Grab string from child
    StringObjectImpl::Type idValue;
    ILxNode* pFoundNode = NULL;
    if (StringObjectImpl::parseString(strChildId.c_str(), strChildId.size(), idValue))
    {
        ProfileCollectionIterator* pFoundIter = m_pLxObj->find(idValue);
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
