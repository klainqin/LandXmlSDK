#include "stdafx.h"
#include "ObjectNode.h"
#include "CollectionNode.h"
#include "ValueNode.h"
#include "Exception.h"
#include "ValueTypeObjects.h"
#include "LXTypesImpl.h"
#include "LXNodes.h"
#include "ZoneCutFill.h"
#include "Station.h"
#include "DesignCrossSectSurfCollection.h"
#include "DailyTrafficVolume.h"
#include "FeatureCollection.h"
#include "LanesCollection.h"

namespace LX
{

ZoneCutFillNode::ZoneCutFillNode (Object* pObj)
    : ObjectNode (pObj)
{
    ILxNode* pVariant = NULL;
    m_pLxObj = dynamic_cast<ZoneCutFill*>(pObj);
    if (m_pLxObj == NULL)
        throw new Exception(Exception::Code::kFail, L"ZoneCutFillNode :: Invalid Object.");
    int nNumChildren = 4;
    m_arrChildren.reserve(nNumChildren);
    m_nNumChildren = 0;
    m_arrChildren.push_back(new ValueNode(this, L"StaStart", L"StaStart"));
    m_arrChildren.push_back(new ValueNode(this, L"StaEnd", L"StaEnd"));
    m_arrChildren.push_back(new ValueNode(this, L"CutSlope", L"CutSlope"));
    m_arrChildren.push_back(new ValueNode(this, L"FillSlope", L"FillSlope"));
}

bool ZoneCutFillNode::setValue (const String& strMemberName, const String* pstrValue)
{
    bool bValueSet = false;
    ZoneCutFill* pObject = dynamic_cast<ZoneCutFill*>(m_pObject);
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
    if (strMemberName == L"CutSlope")
    {
        if (!pstrValue)
        {
            pObject->resetValue_CutSlope();
        }
        else
        {
            pObject->setCutSlope(DoubleObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"FillSlope")
    {
        if (!pstrValue)
        {
            pObject->resetValue_FillSlope();
        }
        else
        {
            pObject->setFillSlope(DoubleObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    return bValueSet;
}

bool ZoneCutFillNode::getValue (const String& strMemberName, String& strValue)
{
    bool bValueSet = false;
    ZoneCutFill* pObject = dynamic_cast<ZoneCutFill*>(m_pObject);
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
    else if (strMemberName == L"CutSlope")
    {
        if (pObject->hasValue_CutSlope())
        {
            strValue = (DoubleObjectImpl(pObject->getCutSlope())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"FillSlope")
    {
        if (pObject->hasValue_FillSlope())
        {
            strValue = (DoubleObjectImpl(pObject->getFillSlope())).toString();
            bValueSet = true;
        }
    }
    return bValueSet;
}

String ZoneCutFillNode::nodeName() const
{
    return L"ZoneCutFill";
}

StationNode::StationNode (Object* pObj)
    : ObjectNode (pObj)
{
    ILxNode* pVariant = NULL;
    m_pLxObj = dynamic_cast<Station*>(pObj);
    if (m_pLxObj == NULL)
        throw new Exception(Exception::Code::kFail, L"StationNode :: Invalid Object.");
    DoubleObject* pValObj = dynamic_cast<DoubleObject*>(m_pLxObj);
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

bool StationNode::setValue (const String& strMemberName, const String* pstrValue)
{
    bool bValueSet = false;
    Station* pObject = dynamic_cast<Station*>(m_pObject);
    return bValueSet;
}

bool StationNode::getValue (const String& strMemberName, String& strValue)
{
    bool bValueSet = false;
    Station* pObject = dynamic_cast<Station*>(m_pObject);
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

String StationNode::nodeName() const
{
    return L"Station";
}

DesignCrossSectSurfCollectionNode::DesignCrossSectSurfCollectionNode (Object& obj)
    : CollectionNode(&obj) 
{
    initialize(&obj);
}

DesignCrossSectSurfCollectionNode::DesignCrossSectSurfCollectionNode (Object* pObj)
    : CollectionNode (pObj) 
{
    initialize(pObj);
}

void DesignCrossSectSurfCollectionNode::initialize (Object* pObj)
{
    ILxNode* pVariant = NULL;
    m_pLxObj = dynamic_cast<DesignCrossSectSurfCollection*>(pObj);
    if (m_pLxObj == NULL)
        throw new Exception(Exception::Code::kFail, L"DesignCrossSectSurfCollectionNode :: Invalid Object.");
    int nNumChildren = m_pLxObj->count();
    m_arrChildren.reserve(nNumChildren);
    DesignCrossSectSurfCollectionIterator* pIterator = m_pLxObj->iterator();
    m_nNumChildren = 0;
    while (!pIterator->atEnd())
    {
        m_arrChildren.push_back(new DesignCrossSectSurfNode(pIterator->current()));
        pIterator->next();
    }
    pIterator->release();
}

String DesignCrossSectSurfCollectionNode::nodeName() const
{
    return L"DesignCrossSectSurfCollection";
}

ILxNode* DesignCrossSectSurfCollectionNode::findChild(const String& strChildId) const
{
    // Grab string from child
    StringObjectImpl::Type idValue;
    ILxNode* pFoundNode = NULL;
    if (StringObjectImpl::parseString(strChildId.c_str(), strChildId.size(), idValue))
    {
        DesignCrossSectSurfCollectionIterator* pFoundIter = m_pLxObj->find(idValue);
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
DailyTrafficVolumeNode::DailyTrafficVolumeNode (Object* pObj)
    : ObjectNode (pObj)
{
    ILxNode* pVariant = NULL;
    m_pLxObj = dynamic_cast<DailyTrafficVolume*>(pObj);
    if (m_pLxObj == NULL)
        throw new Exception(Exception::Code::kFail, L"DailyTrafficVolumeNode :: Invalid Object.");
    int nNumChildren = 6;
    m_arrChildren.reserve(nNumChildren);
    m_nNumChildren = 0;
    m_arrChildren.push_back(new FeatureCollectionNode(m_pLxObj->Feature()));
    m_arrChildren.push_back(new ValueNode(this, L"StaStart", L"StaStart"));
    m_arrChildren.push_back(new ValueNode(this, L"StaEnd", L"StaEnd"));
    m_arrChildren.push_back(new ValueNode(this, L"ADT", L"ADT"));
    m_arrChildren.push_back(new ValueNode(this, L"Year", L"Year"));
    m_arrChildren.push_back(new ValueNode(this, L"EscFactor", L"EscFactor"));
}

bool DailyTrafficVolumeNode::setValue (const String& strMemberName, const String* pstrValue)
{
    bool bValueSet = false;
    DailyTrafficVolume* pObject = dynamic_cast<DailyTrafficVolume*>(m_pObject);
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
    if (strMemberName == L"ADT")
    {
        if (!pstrValue)
        {
            pObject->resetValue_ADT();
        }
        else
        {
            pObject->setADT(DoubleObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"Year")
    {
        if (!pstrValue)
        {
            pObject->resetValue_Year();
        }
        else
        {
            pObject->setYear(StringObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"EscFactor")
    {
        if (!pstrValue)
        {
            pObject->resetValue_EscFactor();
        }
        else
        {
            pObject->setEscFactor(DoubleObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    return bValueSet;
}

bool DailyTrafficVolumeNode::getValue (const String& strMemberName, String& strValue)
{
    bool bValueSet = false;
    DailyTrafficVolume* pObject = dynamic_cast<DailyTrafficVolume*>(m_pObject);
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
    else if (strMemberName == L"ADT")
    {
        if (pObject->hasValue_ADT())
        {
            strValue = (DoubleObjectImpl(pObject->getADT())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"Year")
    {
        if (pObject->hasValue_Year())
        {
            strValue = (StringObjectImpl(pObject->getYear())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"EscFactor")
    {
        if (pObject->hasValue_EscFactor())
        {
            strValue = (DoubleObjectImpl(pObject->getEscFactor())).toString();
            bValueSet = true;
        }
    }
    return bValueSet;
}

String DailyTrafficVolumeNode::nodeName() const
{
    return L"DailyTrafficVolume";
}

LanesCollectionNode::LanesCollectionNode (Object& obj)
    : CollectionNode(&obj) 
{
    initialize(&obj);
}

LanesCollectionNode::LanesCollectionNode (Object* pObj)
    : CollectionNode (pObj) 
{
    initialize(pObj);
}

void LanesCollectionNode::initialize (Object* pObj)
{
    ILxNode* pVariant = NULL;
    m_pLxObj = dynamic_cast<LanesCollection*>(pObj);
    if (m_pLxObj == NULL)
        throw new Exception(Exception::Code::kFail, L"LanesCollectionNode :: Invalid Object.");
    int nNumChildren = m_pLxObj->count();
    m_arrChildren.reserve(nNumChildren);
    LanesCollectionIterator* pIterator = m_pLxObj->iterator();
    m_nNumChildren = 0;
    while (!pIterator->atEnd())
    {
        m_arrChildren.push_back(new LanesNode(pIterator->current()));
        pIterator->next();
    }
    pIterator->release();
}

String LanesCollectionNode::nodeName() const
{
    return L"LanesCollection";
}

ILxNode* LanesCollectionNode::findChild(const String& strChildId) const
{
    return NULL;
}
}; // namespace : LX
