#include "stdafx.h"
#include "ObjectNode.h"
#include "CollectionNode.h"
#include "ValueNode.h"
#include "Exception.h"
#include "ValueTypeObjects.h"
#include "LXTypesImpl.h"
#include "LXNodes.h"
#include "LaserSetupCollection.h"
#include "DesignSpeed85thCollection.h"
#include "Ditch.h"
#include "Timing.h"
#include "GPSAntennaDetails.h"

namespace LX
{

LaserSetupCollectionNode::LaserSetupCollectionNode (Object& obj)
    : CollectionNode(&obj) 
{
    initialize(&obj);
}

LaserSetupCollectionNode::LaserSetupCollectionNode (Object* pObj)
    : CollectionNode (pObj) 
{
    initialize(pObj);
}

void LaserSetupCollectionNode::initialize (Object* pObj)
{
    ILxNode* pVariant = NULL;
    m_pLxObj = dynamic_cast<LaserSetupCollection*>(pObj);
    if (m_pLxObj == NULL)
        throw new Exception(Exception::Code::kFail, L"LaserSetupCollectionNode :: Invalid Object.");
    int nNumChildren = m_pLxObj->count();
    m_arrChildren.reserve(nNumChildren);
    LaserSetupCollectionIterator* pIterator = m_pLxObj->iterator();
    m_nNumChildren = 0;
    while (!pIterator->atEnd())
    {
        m_arrChildren.push_back(new LaserSetupNode(pIterator->current()));
        pIterator->next();
    }
    pIterator->release();
}

String LaserSetupCollectionNode::nodeName() const
{
    return L"LaserSetupCollection";
}

ILxNode* LaserSetupCollectionNode::findChild(const String& strChildId) const
{
    return NULL;
}
DesignSpeed85thCollectionNode::DesignSpeed85thCollectionNode (Object& obj)
    : CollectionNode(&obj) 
{
    initialize(&obj);
}

DesignSpeed85thCollectionNode::DesignSpeed85thCollectionNode (Object* pObj)
    : CollectionNode (pObj) 
{
    initialize(pObj);
}

void DesignSpeed85thCollectionNode::initialize (Object* pObj)
{
    ILxNode* pVariant = NULL;
    m_pLxObj = dynamic_cast<DesignSpeed85thCollection*>(pObj);
    if (m_pLxObj == NULL)
        throw new Exception(Exception::Code::kFail, L"DesignSpeed85thCollectionNode :: Invalid Object.");
    int nNumChildren = m_pLxObj->count();
    m_arrChildren.reserve(nNumChildren);
    DesignSpeed85thCollectionIterator* pIterator = m_pLxObj->iterator();
    m_nNumChildren = 0;
    while (!pIterator->atEnd())
    {
        m_arrChildren.push_back(new DesignSpeed85thNode(pIterator->current()));
        pIterator->next();
    }
    pIterator->release();
}

String DesignSpeed85thCollectionNode::nodeName() const
{
    return L"DesignSpeed85thCollection";
}

ILxNode* DesignSpeed85thCollectionNode::findChild(const String& strChildId) const
{
    return NULL;
}
DitchNode::DitchNode (Object* pObj)
    : ObjectNode (pObj)
{
    ILxNode* pVariant = NULL;
    m_pLxObj = dynamic_cast<Ditch*>(pObj);
    if (m_pLxObj == NULL)
        throw new Exception(Exception::Code::kFail, L"DitchNode :: Invalid Object.");
    int nNumChildren = 4;
    m_arrChildren.reserve(nNumChildren);
    m_nNumChildren = 0;
    m_arrChildren.push_back(new ValueNode(this, L"StaStart", L"StaStart"));
    m_arrChildren.push_back(new ValueNode(this, L"StaEnd", L"StaEnd"));
    m_arrChildren.push_back(new ValueNode(this, L"BottomWidth", L"BottomWidth"));
    m_arrChildren.push_back(new ValueNode(this, L"BottomShape", L"BottomShape"));
}

bool DitchNode::setValue (const String& strMemberName, const String* pstrValue)
{
    bool bValueSet = false;
    Ditch* pObject = dynamic_cast<Ditch*>(m_pObject);
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
    if (strMemberName == L"BottomWidth")
    {
        if (!pstrValue)
        {
            pObject->resetValue_BottomWidth();
        }
        else
        {
            pObject->setBottomWidth(DoubleObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"BottomShape")
    {
        if (!pstrValue)
        {
            pObject->resetValue_BottomShape();
        }
        else
        {
            pObject->setBottomShape(EnumDitchBottomShapeImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    return bValueSet;
}

bool DitchNode::getValue (const String& strMemberName, String& strValue)
{
    bool bValueSet = false;
    Ditch* pObject = dynamic_cast<Ditch*>(m_pObject);
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
    else if (strMemberName == L"BottomWidth")
    {
        if (pObject->hasValue_BottomWidth())
        {
            strValue = (DoubleObjectImpl(pObject->getBottomWidth())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"BottomShape")
    {
        if (pObject->hasValue_BottomShape())
        {
            strValue = (EnumDitchBottomShapeImpl(pObject->getBottomShape())).toString();
            bValueSet = true;
        }
    }
    return bValueSet;
}

String DitchNode::nodeName() const
{
    return L"Ditch";
}

TimingNode::TimingNode (Object* pObj)
    : ObjectNode (pObj)
{
    ILxNode* pVariant = NULL;
    m_pLxObj = dynamic_cast<Timing*>(pObj);
    if (m_pLxObj == NULL)
        throw new Exception(Exception::Code::kFail, L"TimingNode :: Invalid Object.");
    int nNumChildren = 4;
    m_arrChildren.reserve(nNumChildren);
    m_nNumChildren = 0;
    m_arrChildren.push_back(new ValueNode(this, L"Station", L"Station"));
    m_arrChildren.push_back(new ValueNode(this, L"LegNumber", L"LegNumber"));
    m_arrChildren.push_back(new ValueNode(this, L"ProtectedTurnPercent", L"ProtectedTurnPercent"));
    m_arrChildren.push_back(new ValueNode(this, L"UnprotectedTurnPercent", L"UnprotectedTurnPercent"));
}

bool TimingNode::setValue (const String& strMemberName, const String* pstrValue)
{
    bool bValueSet = false;
    Timing* pObject = dynamic_cast<Timing*>(m_pObject);
    if (strMemberName == L"Station")
    {
        if (!pstrValue)
        {
            pObject->resetValue_Station();
        }
        else
        {
            pObject->setStation(DoubleObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"LegNumber")
    {
        if (!pstrValue)
        {
            pObject->resetValue_LegNumber();
        }
        else
        {
            pObject->setLegNumber(IntegerObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"ProtectedTurnPercent")
    {
        if (!pstrValue)
        {
            pObject->resetValue_ProtectedTurnPercent();
        }
        else
        {
            pObject->setProtectedTurnPercent(DoubleObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"UnprotectedTurnPercent")
    {
        if (!pstrValue)
        {
            pObject->resetValue_UnprotectedTurnPercent();
        }
        else
        {
            pObject->setUnprotectedTurnPercent(DoubleObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    return bValueSet;
}

bool TimingNode::getValue (const String& strMemberName, String& strValue)
{
    bool bValueSet = false;
    Timing* pObject = dynamic_cast<Timing*>(m_pObject);
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
    else if (strMemberName == L"Station")
    {
        if (pObject->hasValue_Station())
        {
            strValue = (DoubleObjectImpl(pObject->getStation())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"LegNumber")
    {
        if (pObject->hasValue_LegNumber())
        {
            strValue = (IntegerObjectImpl(pObject->getLegNumber())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"ProtectedTurnPercent")
    {
        if (pObject->hasValue_ProtectedTurnPercent())
        {
            strValue = (DoubleObjectImpl(pObject->getProtectedTurnPercent())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"UnprotectedTurnPercent")
    {
        if (pObject->hasValue_UnprotectedTurnPercent())
        {
            strValue = (DoubleObjectImpl(pObject->getUnprotectedTurnPercent())).toString();
            bValueSet = true;
        }
    }
    return bValueSet;
}

String TimingNode::nodeName() const
{
    return L"Timing";
}

GPSAntennaDetailsNode::GPSAntennaDetailsNode (Object* pObj)
    : ObjectNode (pObj)
{
    ILxNode* pVariant = NULL;
    m_pLxObj = dynamic_cast<GPSAntennaDetails*>(pObj);
    if (m_pLxObj == NULL)
        throw new Exception(Exception::Code::kFail, L"GPSAntennaDetailsNode :: Invalid Object.");
    int nNumChildren = 9;
    m_arrChildren.reserve(nNumChildren);
    m_nNumChildren = 0;
    m_arrChildren.push_back(new ValueNode(this, L"Id", L"Id"));
    m_arrChildren.push_back(new ValueNode(this, L"Manufacturer", L"Manufacturer"));
    m_arrChildren.push_back(new ValueNode(this, L"Model", L"Model"));
    m_arrChildren.push_back(new ValueNode(this, L"SerialNumber", L"SerialNumber"));
    m_arrChildren.push_back(new ValueNode(this, L"Latitude", L"Latitude"));
    m_arrChildren.push_back(new ValueNode(this, L"Longitude", L"Longitude"));
    m_arrChildren.push_back(new ValueNode(this, L"Altitude", L"Altitude"));
    m_arrChildren.push_back(new ValueNode(this, L"EllipsiodalHeight", L"EllipsiodalHeight"));
    m_arrChildren.push_back(new ValueNode(this, L"OrthometricHeight", L"OrthometricHeight"));
}

bool GPSAntennaDetailsNode::setValue (const String& strMemberName, const String* pstrValue)
{
    bool bValueSet = false;
    GPSAntennaDetails* pObject = dynamic_cast<GPSAntennaDetails*>(m_pObject);
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
    if (strMemberName == L"Latitude")
    {
        if (!pstrValue)
        {
            pObject->resetValue_Latitude();
        }
        else
        {
            pObject->setLatitude(DoubleObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"Longitude")
    {
        if (!pstrValue)
        {
            pObject->resetValue_Longitude();
        }
        else
        {
            pObject->setLongitude(DoubleObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"Altitude")
    {
        if (!pstrValue)
        {
            pObject->resetValue_Altitude();
        }
        else
        {
            pObject->setAltitude(DoubleObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"EllipsiodalHeight")
    {
        if (!pstrValue)
        {
            pObject->resetValue_EllipsiodalHeight();
        }
        else
        {
            pObject->setEllipsiodalHeight(DoubleObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"OrthometricHeight")
    {
        if (!pstrValue)
        {
            pObject->resetValue_OrthometricHeight();
        }
        else
        {
            pObject->setOrthometricHeight(DoubleObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    return bValueSet;
}

bool GPSAntennaDetailsNode::getValue (const String& strMemberName, String& strValue)
{
    bool bValueSet = false;
    GPSAntennaDetails* pObject = dynamic_cast<GPSAntennaDetails*>(m_pObject);
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
    else if (strMemberName == L"Latitude")
    {
        if (pObject->hasValue_Latitude())
        {
            strValue = (DoubleObjectImpl(pObject->getLatitude())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"Longitude")
    {
        if (pObject->hasValue_Longitude())
        {
            strValue = (DoubleObjectImpl(pObject->getLongitude())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"Altitude")
    {
        if (pObject->hasValue_Altitude())
        {
            strValue = (DoubleObjectImpl(pObject->getAltitude())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"EllipsiodalHeight")
    {
        if (pObject->hasValue_EllipsiodalHeight())
        {
            strValue = (DoubleObjectImpl(pObject->getEllipsiodalHeight())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"OrthometricHeight")
    {
        if (pObject->hasValue_OrthometricHeight())
        {
            strValue = (DoubleObjectImpl(pObject->getOrthometricHeight())).toString();
            bValueSet = true;
        }
    }
    return bValueSet;
}

String GPSAntennaDetailsNode::nodeName() const
{
    return L"GPSAntennaDetails";
}

}; // namespace : LX
