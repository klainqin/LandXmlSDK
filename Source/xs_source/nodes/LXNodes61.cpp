#include "stdafx.h"
#include "ObjectNode.h"
#include "CollectionNode.h"
#include "ValueNode.h"
#include "Exception.h"
#include "ValueTypeObjects.h"
#include "LXTypesImpl.h"
#include "LXNodes.h"
#include "PointFiles.h"
#include "PointFileCollection.h"
#include "FeatureCollection.h"
#include "AdministrativeDateCollection.h"
#include "DesignHour.h"
#include "CrashHistoryCollection.h"
#include "ConnSpiral.h"
#include "Spiral.h"

namespace LX
{

PointFilesNode::PointFilesNode (Object* pObj)
    : ObjectNode (pObj)
{
    ILxNode* pVariant = NULL;
    m_pLxObj = dynamic_cast<PointFiles*>(pObj);
    if (m_pLxObj == NULL)
        throw new Exception(Exception::Code::kFail, L"PointFilesNode :: Invalid Object.");
    int nNumChildren = 2;
    m_arrChildren.reserve(nNumChildren);
    m_nNumChildren = 0;
    m_arrChildren.push_back(new PointFileCollectionNode(m_pLxObj->PointFile()));
    m_arrChildren.push_back(new FeatureCollectionNode(m_pLxObj->Feature()));
}

bool PointFilesNode::setValue (const String& strMemberName, const String* pstrValue)
{
    bool bValueSet = false;
    PointFiles* pObject = dynamic_cast<PointFiles*>(m_pObject);
    return bValueSet;
}

bool PointFilesNode::getValue (const String& strMemberName, String& strValue)
{
    bool bValueSet = false;
    PointFiles* pObject = dynamic_cast<PointFiles*>(m_pObject);
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

String PointFilesNode::nodeName() const
{
    return L"PointFiles";
}

AdministrativeDateCollectionNode::AdministrativeDateCollectionNode (Object& obj)
    : CollectionNode(&obj) 
{
    initialize(&obj);
}

AdministrativeDateCollectionNode::AdministrativeDateCollectionNode (Object* pObj)
    : CollectionNode (pObj) 
{
    initialize(pObj);
}

void AdministrativeDateCollectionNode::initialize (Object* pObj)
{
    ILxNode* pVariant = NULL;
    m_pLxObj = dynamic_cast<AdministrativeDateCollection*>(pObj);
    if (m_pLxObj == NULL)
        throw new Exception(Exception::Code::kFail, L"AdministrativeDateCollectionNode :: Invalid Object.");
    int nNumChildren = m_pLxObj->count();
    m_arrChildren.reserve(nNumChildren);
    AdministrativeDateCollectionIterator* pIterator = m_pLxObj->iterator();
    m_nNumChildren = 0;
    while (!pIterator->atEnd())
    {
        m_arrChildren.push_back(new AdministrativeDateNode(pIterator->current()));
        pIterator->next();
    }
    pIterator->release();
}

String AdministrativeDateCollectionNode::nodeName() const
{
    return L"AdministrativeDateCollection";
}

ILxNode* AdministrativeDateCollectionNode::findChild(const String& strChildId) const
{
    return NULL;
}
DesignHourNode::DesignHourNode (Object* pObj)
    : ObjectNode (pObj)
{
    ILxNode* pVariant = NULL;
    m_pLxObj = dynamic_cast<DesignHour*>(pObj);
    if (m_pLxObj == NULL)
        throw new Exception(Exception::Code::kFail, L"DesignHourNode :: Invalid Object.");
    int nNumChildren = 4;
    m_arrChildren.reserve(nNumChildren);
    m_nNumChildren = 0;
    m_arrChildren.push_back(new FeatureCollectionNode(m_pLxObj->Feature()));
    m_arrChildren.push_back(new ValueNode(this, L"StaStart", L"StaStart"));
    m_arrChildren.push_back(new ValueNode(this, L"StaEnd", L"StaEnd"));
    m_arrChildren.push_back(new ValueNode(this, L"Volume", L"Volume"));
}

bool DesignHourNode::setValue (const String& strMemberName, const String* pstrValue)
{
    bool bValueSet = false;
    DesignHour* pObject = dynamic_cast<DesignHour*>(m_pObject);
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
    if (strMemberName == L"Volume")
    {
        if (!pstrValue)
        {
            pObject->resetValue_Volume();
        }
        else
        {
            pObject->setVolume(DoubleObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    return bValueSet;
}

bool DesignHourNode::getValue (const String& strMemberName, String& strValue)
{
    bool bValueSet = false;
    DesignHour* pObject = dynamic_cast<DesignHour*>(m_pObject);
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
    else if (strMemberName == L"Volume")
    {
        if (pObject->hasValue_Volume())
        {
            strValue = (DoubleObjectImpl(pObject->getVolume())).toString();
            bValueSet = true;
        }
    }
    return bValueSet;
}

String DesignHourNode::nodeName() const
{
    return L"DesignHour";
}

CrashHistoryCollectionNode::CrashHistoryCollectionNode (Object& obj)
    : CollectionNode(&obj) 
{
    initialize(&obj);
}

CrashHistoryCollectionNode::CrashHistoryCollectionNode (Object* pObj)
    : CollectionNode (pObj) 
{
    initialize(pObj);
}

void CrashHistoryCollectionNode::initialize (Object* pObj)
{
    ILxNode* pVariant = NULL;
    m_pLxObj = dynamic_cast<CrashHistoryCollection*>(pObj);
    if (m_pLxObj == NULL)
        throw new Exception(Exception::Code::kFail, L"CrashHistoryCollectionNode :: Invalid Object.");
    int nNumChildren = m_pLxObj->count();
    m_arrChildren.reserve(nNumChildren);
    CrashHistoryCollectionIterator* pIterator = m_pLxObj->iterator();
    m_nNumChildren = 0;
    while (!pIterator->atEnd())
    {
        m_arrChildren.push_back(new CrashHistoryNode(pIterator->current()));
        pIterator->next();
    }
    pIterator->release();
}

String CrashHistoryCollectionNode::nodeName() const
{
    return L"CrashHistoryCollection";
}

ILxNode* CrashHistoryCollectionNode::findChild(const String& strChildId) const
{
    return NULL;
}
ConnSpiralNode::ConnSpiralNode (Object* pObj)
    : ObjectNode (pObj)
{
    ILxNode* pVariant = NULL;
    m_pLxObj = dynamic_cast<ConnSpiral*>(pObj);
    if (m_pLxObj == NULL)
        throw new Exception(Exception::Code::kFail, L"ConnSpiralNode :: Invalid Object.");
    int nNumChildren = 1;
    m_arrChildren.reserve(nNumChildren);
    m_nNumChildren = 0;
    if (m_pLxObj->getSpiral())
        m_arrChildren.push_back(new SpiralNode(m_pLxObj->getSpiral()));
}

bool ConnSpiralNode::setValue (const String& strMemberName, const String* pstrValue)
{
    bool bValueSet = false;
    ConnSpiral* pObject = dynamic_cast<ConnSpiral*>(m_pObject);
    return bValueSet;
}

bool ConnSpiralNode::getValue (const String& strMemberName, String& strValue)
{
    bool bValueSet = false;
    ConnSpiral* pObject = dynamic_cast<ConnSpiral*>(m_pObject);
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

String ConnSpiralNode::nodeName() const
{
    return L"ConnSpiral";
}

}; // namespace : LX
