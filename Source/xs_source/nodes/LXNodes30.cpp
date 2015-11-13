#include "stdafx.h"
#include "ObjectNode.h"
#include "CollectionNode.h"
#include "ValueNode.h"
#include "Exception.h"
#include "ValueTypeObjects.h"
#include "LXTypesImpl.h"
#include "LXNodes.h"
#include "Property.h"
#include "PurposeOfSurveyCollection.h"
#include "ZoneSlope.h"
#include "PointResultsCollection.h"
#include "SurveyMonumentCollection.h"

namespace LX
{

PropertyNode::PropertyNode (Object* pObj)
    : ObjectNode (pObj)
{
    ILxNode* pVariant = NULL;
    m_pLxObj = dynamic_cast<Property*>(pObj);
    if (m_pLxObj == NULL)
        throw new Exception(Exception::Code::kFail, L"PropertyNode :: Invalid Object.");
    int nNumChildren = 2;
    m_arrChildren.reserve(nNumChildren);
    m_nNumChildren = 0;
    m_arrChildren.push_back(new ValueNode(this, L"Label", L"Label"));
    m_arrChildren.push_back(new ValueNode(this, L"Value", L"Value"));
}

bool PropertyNode::setValue (const String& strMemberName, const String* pstrValue)
{
    bool bValueSet = false;
    Property* pObject = dynamic_cast<Property*>(m_pObject);
    if (strMemberName == L"Label")
    {
        if (!pstrValue)
        {
            pObject->resetValue_Label();
        }
        else
        {
            pObject->setLabel(StringObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"Value")
    {
        if (!pstrValue)
        {
            pObject->resetValue_Value();
        }
        else
        {
            pObject->setValue(StringObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    return bValueSet;
}

bool PropertyNode::getValue (const String& strMemberName, String& strValue)
{
    bool bValueSet = false;
    Property* pObject = dynamic_cast<Property*>(m_pObject);
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
    else if (strMemberName == L"Label")
    {
        if (pObject->hasValue_Label())
        {
            strValue = (StringObjectImpl(pObject->getLabel())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"Value")
    {
        if (pObject->hasValue_Value())
        {
            strValue = (StringObjectImpl(pObject->getValue())).toString();
            bValueSet = true;
        }
    }
    return bValueSet;
}

String PropertyNode::nodeName() const
{
    return L"Property";
}

PurposeOfSurveyCollectionNode::PurposeOfSurveyCollectionNode (Object& obj)
    : CollectionNode(&obj) 
{
    initialize(&obj);
}

PurposeOfSurveyCollectionNode::PurposeOfSurveyCollectionNode (Object* pObj)
    : CollectionNode (pObj) 
{
    initialize(pObj);
}

void PurposeOfSurveyCollectionNode::initialize (Object* pObj)
{
    ILxNode* pVariant = NULL;
    m_pLxObj = dynamic_cast<PurposeOfSurveyCollection*>(pObj);
    if (m_pLxObj == NULL)
        throw new Exception(Exception::Code::kFail, L"PurposeOfSurveyCollectionNode :: Invalid Object.");
    int nNumChildren = m_pLxObj->count();
    m_arrChildren.reserve(nNumChildren);
    PurposeOfSurveyCollectionIterator* pIterator = m_pLxObj->iterator();
    m_nNumChildren = 0;
    while (!pIterator->atEnd())
    {
        m_arrChildren.push_back(new PurposeOfSurveyNode(pIterator->current()));
        pIterator->next();
    }
    pIterator->release();
}

String PurposeOfSurveyCollectionNode::nodeName() const
{
    return L"PurposeOfSurveyCollection";
}

ILxNode* PurposeOfSurveyCollectionNode::findChild(const String& strChildId) const
{
    // Grab string from child
    StringObjectImpl::Type idValue;
    ILxNode* pFoundNode = NULL;
    if (StringObjectImpl::parseString(strChildId.c_str(), strChildId.size(), idValue))
    {
        PurposeOfSurveyCollectionIterator* pFoundIter = m_pLxObj->find(idValue);
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
ZoneSlopeNode::ZoneSlopeNode (Object* pObj)
    : ObjectNode (pObj)
{
    ILxNode* pVariant = NULL;
    m_pLxObj = dynamic_cast<ZoneSlope*>(pObj);
    if (m_pLxObj == NULL)
        throw new Exception(Exception::Code::kFail, L"ZoneSlopeNode :: Invalid Object.");
    int nNumChildren = 8;
    m_arrChildren.reserve(nNumChildren);
    m_nNumChildren = 0;
    m_arrChildren.push_back(new ValueNode(this, L"StaStart", L"StaStart"));
    m_arrChildren.push_back(new ValueNode(this, L"StaEnd", L"StaEnd"));
    m_arrChildren.push_back(new ValueNode(this, L"StartVertValue", L"StartVertValue"));
    m_arrChildren.push_back(new ValueNode(this, L"StartVertType", L"StartVertType"));
    m_arrChildren.push_back(new ValueNode(this, L"EndVertValue", L"EndVertValue"));
    m_arrChildren.push_back(new ValueNode(this, L"EndVertType", L"EndVertType"));
    m_arrChildren.push_back(new ValueNode(this, L"ParabolicStartStation", L"ParabolicStartStation"));
    m_arrChildren.push_back(new ValueNode(this, L"ParabolicEndStation", L"ParabolicEndStation"));
}

bool ZoneSlopeNode::setValue (const String& strMemberName, const String* pstrValue)
{
    bool bValueSet = false;
    ZoneSlope* pObject = dynamic_cast<ZoneSlope*>(m_pObject);
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
    if (strMemberName == L"StartVertValue")
    {
        if (!pstrValue)
        {
            pObject->resetValue_StartVertValue();
        }
        else
        {
            pObject->setStartVertValue(DoubleObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"StartVertType")
    {
        if (!pstrValue)
        {
            pObject->resetValue_StartVertType();
        }
        else
        {
            pObject->setStartVertType(EnumZoneVertTypeImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"EndVertValue")
    {
        if (!pstrValue)
        {
            pObject->resetValue_EndVertValue();
        }
        else
        {
            pObject->setEndVertValue(DoubleObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"EndVertType")
    {
        if (!pstrValue)
        {
            pObject->resetValue_EndVertType();
        }
        else
        {
            pObject->setEndVertType(EnumZoneVertTypeImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"ParabolicStartStation")
    {
        if (!pstrValue)
        {
            pObject->resetValue_ParabolicStartStation();
        }
        else
        {
            pObject->setParabolicStartStation(DoubleObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"ParabolicEndStation")
    {
        if (!pstrValue)
        {
            pObject->resetValue_ParabolicEndStation();
        }
        else
        {
            pObject->setParabolicEndStation(DoubleObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    return bValueSet;
}

bool ZoneSlopeNode::getValue (const String& strMemberName, String& strValue)
{
    bool bValueSet = false;
    ZoneSlope* pObject = dynamic_cast<ZoneSlope*>(m_pObject);
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
    else if (strMemberName == L"StartVertValue")
    {
        if (pObject->hasValue_StartVertValue())
        {
            strValue = (DoubleObjectImpl(pObject->getStartVertValue())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"StartVertType")
    {
        if (pObject->hasValue_StartVertType())
        {
            strValue = (EnumZoneVertTypeImpl(pObject->getStartVertType())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"EndVertValue")
    {
        if (pObject->hasValue_EndVertValue())
        {
            strValue = (DoubleObjectImpl(pObject->getEndVertValue())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"EndVertType")
    {
        if (pObject->hasValue_EndVertType())
        {
            strValue = (EnumZoneVertTypeImpl(pObject->getEndVertType())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"ParabolicStartStation")
    {
        if (pObject->hasValue_ParabolicStartStation())
        {
            strValue = (DoubleObjectImpl(pObject->getParabolicStartStation())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"ParabolicEndStation")
    {
        if (pObject->hasValue_ParabolicEndStation())
        {
            strValue = (DoubleObjectImpl(pObject->getParabolicEndStation())).toString();
            bValueSet = true;
        }
    }
    return bValueSet;
}

String ZoneSlopeNode::nodeName() const
{
    return L"ZoneSlope";
}

PointResultsCollectionNode::PointResultsCollectionNode (Object& obj)
    : CollectionNode(&obj) 
{
    initialize(&obj);
}

PointResultsCollectionNode::PointResultsCollectionNode (Object* pObj)
    : CollectionNode (pObj) 
{
    initialize(pObj);
}

void PointResultsCollectionNode::initialize (Object* pObj)
{
    ILxNode* pVariant = NULL;
    m_pLxObj = dynamic_cast<PointResultsCollection*>(pObj);
    if (m_pLxObj == NULL)
        throw new Exception(Exception::Code::kFail, L"PointResultsCollectionNode :: Invalid Object.");
    int nNumChildren = m_pLxObj->count();
    m_arrChildren.reserve(nNumChildren);
    PointResultsCollectionIterator* pIterator = m_pLxObj->iterator();
    m_nNumChildren = 0;
    while (!pIterator->atEnd())
    {
        m_arrChildren.push_back(new PointResultsNode(pIterator->current()));
        pIterator->next();
    }
    pIterator->release();
}

String PointResultsCollectionNode::nodeName() const
{
    return L"PointResultsCollection";
}

ILxNode* PointResultsCollectionNode::findChild(const String& strChildId) const
{
    return NULL;
}
SurveyMonumentCollectionNode::SurveyMonumentCollectionNode (Object& obj)
    : CollectionNode(&obj) 
{
    initialize(&obj);
}

SurveyMonumentCollectionNode::SurveyMonumentCollectionNode (Object* pObj)
    : CollectionNode (pObj) 
{
    initialize(pObj);
}

void SurveyMonumentCollectionNode::initialize (Object* pObj)
{
    ILxNode* pVariant = NULL;
    m_pLxObj = dynamic_cast<SurveyMonumentCollection*>(pObj);
    if (m_pLxObj == NULL)
        throw new Exception(Exception::Code::kFail, L"SurveyMonumentCollectionNode :: Invalid Object.");
    int nNumChildren = m_pLxObj->count();
    m_arrChildren.reserve(nNumChildren);
    SurveyMonumentCollectionIterator* pIterator = m_pLxObj->iterator();
    m_nNumChildren = 0;
    while (!pIterator->atEnd())
    {
        m_arrChildren.push_back(new SurveyMonumentNode(pIterator->current()));
        pIterator->next();
    }
    pIterator->release();
}

String SurveyMonumentCollectionNode::nodeName() const
{
    return L"SurveyMonumentCollection";
}

ILxNode* SurveyMonumentCollectionNode::findChild(const String& strChildId) const
{
    return NULL;
}
}; // namespace : LX
