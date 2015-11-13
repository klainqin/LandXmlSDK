#include "stdafx.h"
#include "ObjectNode.h"
#include "CollectionNode.h"
#include "ValueNode.h"
#include "Exception.h"
#include "ValueTypeObjects.h"
#include "LXTypesImpl.h"
#include "LXNodes.h"
#include "GPSPositionCollection.h"
#include "Units.h"
#include "Metric.h"
#include "Imperial.h"
#include "VolumeCollection.h"
#include "SurfaceCollection.h"
#include "NoPassingZone.h"

namespace LX
{

GPSPositionCollectionNode::GPSPositionCollectionNode (Object& obj)
    : CollectionNode(&obj) 
{
    initialize(&obj);
}

GPSPositionCollectionNode::GPSPositionCollectionNode (Object* pObj)
    : CollectionNode (pObj) 
{
    initialize(pObj);
}

void GPSPositionCollectionNode::initialize (Object* pObj)
{
    ILxNode* pVariant = NULL;
    m_pLxObj = dynamic_cast<GPSPositionCollection*>(pObj);
    if (m_pLxObj == NULL)
        throw new Exception(Exception::Code::kFail, L"GPSPositionCollectionNode :: Invalid Object.");
    int nNumChildren = m_pLxObj->count();
    m_arrChildren.reserve(nNumChildren);
    GPSPositionCollectionIterator* pIterator = m_pLxObj->iterator();
    m_nNumChildren = 0;
    while (!pIterator->atEnd())
    {
        m_arrChildren.push_back(new GPSPositionNode(pIterator->current()));
        pIterator->next();
    }
    pIterator->release();
}

String GPSPositionCollectionNode::nodeName() const
{
    return L"GPSPositionCollection";
}

ILxNode* GPSPositionCollectionNode::findChild(const String& strChildId) const
{
    return NULL;
}
UnitsNode::UnitsNode (Object* pObj)
    : ObjectNode (pObj)
{
    ILxNode* pVariant = NULL;
    m_pLxObj = dynamic_cast<Units*>(pObj);
    if (m_pLxObj == NULL)
        throw new Exception(Exception::Code::kFail, L"UnitsNode :: Invalid Object.");
    int nNumChildren = 1;
    m_arrChildren.reserve(nNumChildren);
    m_nNumChildren = 0;
    if (dynamic_cast<Metric*>(m_pLxObj->getSelectedUnits()))
        if (m_pLxObj->getSelectedUnits())
            m_arrChildren.push_back(new MetricNode(m_pLxObj->getSelectedUnits()));
    if (dynamic_cast<Imperial*>(m_pLxObj->getSelectedUnits()))
        if (m_pLxObj->getSelectedUnits())
            m_arrChildren.push_back(new ImperialNode(m_pLxObj->getSelectedUnits()));
}

bool UnitsNode::setValue (const String& strMemberName, const String* pstrValue)
{
    bool bValueSet = false;
    Units* pObject = dynamic_cast<Units*>(m_pObject);
    return bValueSet;
}

bool UnitsNode::getValue (const String& strMemberName, String& strValue)
{
    bool bValueSet = false;
    Units* pObject = dynamic_cast<Units*>(m_pObject);
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

String UnitsNode::nodeName() const
{
    return L"Units";
}

VolumeCollectionNode::VolumeCollectionNode (Object& obj)
    : CollectionNode(&obj) 
{
    initialize(&obj);
}

VolumeCollectionNode::VolumeCollectionNode (Object* pObj)
    : CollectionNode (pObj) 
{
    initialize(pObj);
}

void VolumeCollectionNode::initialize (Object* pObj)
{
    ILxNode* pVariant = NULL;
    m_pLxObj = dynamic_cast<VolumeCollection*>(pObj);
    if (m_pLxObj == NULL)
        throw new Exception(Exception::Code::kFail, L"VolumeCollectionNode :: Invalid Object.");
    int nNumChildren = m_pLxObj->count();
    m_arrChildren.reserve(nNumChildren);
    VolumeCollectionIterator* pIterator = m_pLxObj->iterator();
    m_nNumChildren = 0;
    while (!pIterator->atEnd())
    {
        m_arrChildren.push_back(new VolumeNode(pIterator->current()));
        pIterator->next();
    }
    pIterator->release();
}

String VolumeCollectionNode::nodeName() const
{
    return L"VolumeCollection";
}

ILxNode* VolumeCollectionNode::findChild(const String& strChildId) const
{
    return NULL;
}
SurfaceCollectionNode::SurfaceCollectionNode (Object& obj)
    : CollectionNode(&obj) 
{
    initialize(&obj);
}

SurfaceCollectionNode::SurfaceCollectionNode (Object* pObj)
    : CollectionNode (pObj) 
{
    initialize(pObj);
}

void SurfaceCollectionNode::initialize (Object* pObj)
{
    ILxNode* pVariant = NULL;
    m_pLxObj = dynamic_cast<SurfaceCollection*>(pObj);
    if (m_pLxObj == NULL)
        throw new Exception(Exception::Code::kFail, L"SurfaceCollectionNode :: Invalid Object.");
    int nNumChildren = m_pLxObj->count();
    m_arrChildren.reserve(nNumChildren);
    SurfaceCollectionIterator* pIterator = m_pLxObj->iterator();
    m_nNumChildren = 0;
    while (!pIterator->atEnd())
    {
        m_arrChildren.push_back(new SurfaceNode(pIterator->current()));
        pIterator->next();
    }
    pIterator->release();
}

String SurfaceCollectionNode::nodeName() const
{
    return L"SurfaceCollection";
}

ILxNode* SurfaceCollectionNode::findChild(const String& strChildId) const
{
    // Grab string from child
    StringObjectImpl::Type idValue;
    ILxNode* pFoundNode = NULL;
    if (StringObjectImpl::parseString(strChildId.c_str(), strChildId.size(), idValue))
    {
        SurfaceCollectionIterator* pFoundIter = m_pLxObj->find(idValue);
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
NoPassingZoneNode::NoPassingZoneNode (Object* pObj)
    : ObjectNode (pObj)
{
    ILxNode* pVariant = NULL;
    m_pLxObj = dynamic_cast<NoPassingZone*>(pObj);
    if (m_pLxObj == NULL)
        throw new Exception(Exception::Code::kFail, L"NoPassingZoneNode :: Invalid Object.");
    int nNumChildren = 3;
    m_arrChildren.reserve(nNumChildren);
    m_nNumChildren = 0;
    m_arrChildren.push_back(new ValueNode(this, L"StaStart", L"StaStart"));
    m_arrChildren.push_back(new ValueNode(this, L"StaEnd", L"StaEnd"));
    m_arrChildren.push_back(new ValueNode(this, L"SideofRoad", L"SideofRoad"));
}

bool NoPassingZoneNode::setValue (const String& strMemberName, const String* pstrValue)
{
    bool bValueSet = false;
    NoPassingZone* pObject = dynamic_cast<NoPassingZone*>(m_pObject);
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
    return bValueSet;
}

bool NoPassingZoneNode::getValue (const String& strMemberName, String& strValue)
{
    bool bValueSet = false;
    NoPassingZone* pObject = dynamic_cast<NoPassingZone*>(m_pObject);
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
    return bValueSet;
}

String NoPassingZoneNode::nodeName() const
{
    return L"NoPassingZone";
}

}; // namespace : LX
