#include "stdafx.h"
#include "ObjectNode.h"
#include "CollectionNode.h"
#include "ValueNode.h"
#include "Exception.h"
#include "ValueTypeObjects.h"
#include "LXTypesImpl.h"
#include "LXNodes.h"
#include "BridgeElementCollection.h"
#include "LaserDetails.h"
#include "RetWall.h"
#include "RetWallPntCollection.h"
#include "FeatureCollection.h"
#include "GPSQCInfoLevel1.h"
#include "Roadways.h"
#include "RoadwayCollection.h"
#include "IntersectionsCollection.h"

namespace LX
{

BridgeElementCollectionNode::BridgeElementCollectionNode (Object& obj)
    : CollectionNode(&obj) 
{
    initialize(&obj);
}

BridgeElementCollectionNode::BridgeElementCollectionNode (Object* pObj)
    : CollectionNode (pObj) 
{
    initialize(pObj);
}

void BridgeElementCollectionNode::initialize (Object* pObj)
{
    ILxNode* pVariant = NULL;
    m_pLxObj = dynamic_cast<BridgeElementCollection*>(pObj);
    if (m_pLxObj == NULL)
        throw new Exception(Exception::Code::kFail, L"BridgeElementCollectionNode :: Invalid Object.");
    int nNumChildren = m_pLxObj->count();
    m_arrChildren.reserve(nNumChildren);
    BridgeElementCollectionIterator* pIterator = m_pLxObj->iterator();
    m_nNumChildren = 0;
    while (!pIterator->atEnd())
    {
        m_arrChildren.push_back(new BridgeElementNode(pIterator->current()));
        pIterator->next();
    }
    pIterator->release();
}

String BridgeElementCollectionNode::nodeName() const
{
    return L"BridgeElementCollection";
}

ILxNode* BridgeElementCollectionNode::findChild(const String& strChildId) const
{
    return NULL;
}
LaserDetailsNode::LaserDetailsNode (Object* pObj)
    : ObjectNode (pObj)
{
    ILxNode* pVariant = NULL;
    m_pLxObj = dynamic_cast<LaserDetails*>(pObj);
    if (m_pLxObj == NULL)
        throw new Exception(Exception::Code::kFail, L"LaserDetailsNode :: Invalid Object.");
    int nNumChildren = 5;
    m_arrChildren.reserve(nNumChildren);
    m_nNumChildren = 0;
    m_arrChildren.push_back(new ValueNode(this, L"Id", L"Id"));
    m_arrChildren.push_back(new ValueNode(this, L"LaserVertOffset", L"LaserVertOffset"));
    m_arrChildren.push_back(new ValueNode(this, L"Manufacturer", L"Manufacturer"));
    m_arrChildren.push_back(new ValueNode(this, L"Model", L"Model"));
    m_arrChildren.push_back(new ValueNode(this, L"SerialNumber", L"SerialNumber"));
}

bool LaserDetailsNode::setValue (const String& strMemberName, const String* pstrValue)
{
    bool bValueSet = false;
    LaserDetails* pObject = dynamic_cast<LaserDetails*>(m_pObject);
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
    if (strMemberName == L"LaserVertOffset")
    {
        if (!pstrValue)
        {
            pObject->resetValue_LaserVertOffset();
        }
        else
        {
            pObject->setLaserVertOffset(DoubleObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
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

bool LaserDetailsNode::getValue (const String& strMemberName, String& strValue)
{
    bool bValueSet = false;
    LaserDetails* pObject = dynamic_cast<LaserDetails*>(m_pObject);
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
    else if (strMemberName == L"LaserVertOffset")
    {
        if (pObject->hasValue_LaserVertOffset())
        {
            strValue = (DoubleObjectImpl(pObject->getLaserVertOffset())).toString();
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

String LaserDetailsNode::nodeName() const
{
    return L"LaserDetails";
}

RetWallNode::RetWallNode (Object* pObj)
    : ObjectNode (pObj)
{
    ILxNode* pVariant = NULL;
    m_pLxObj = dynamic_cast<RetWall*>(pObj);
    if (m_pLxObj == NULL)
        throw new Exception(Exception::Code::kFail, L"RetWallNode :: Invalid Object.");
    int nNumChildren = 5;
    m_arrChildren.reserve(nNumChildren);
    m_nNumChildren = 0;
    m_arrChildren.push_back(new RetWallPntCollectionNode(m_pLxObj->RetWallPnt()));
    m_arrChildren.push_back(new FeatureCollectionNode(m_pLxObj->Feature()));
    m_arrChildren.push_back(new ValueNode(this, L"Desc", L"Desc"));
    m_arrChildren.push_back(new ValueNode(this, L"Name", L"Name"));
    m_arrChildren.push_back(new ValueNode(this, L"State", L"State"));
}

bool RetWallNode::setValue (const String& strMemberName, const String* pstrValue)
{
    bool bValueSet = false;
    RetWall* pObject = dynamic_cast<RetWall*>(m_pObject);
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
    if (strMemberName == L"State")
    {
        if (!pstrValue)
        {
            pObject->resetValue_State();
        }
        else
        {
            pObject->setState(EnumStateTypeImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    return bValueSet;
}

bool RetWallNode::getValue (const String& strMemberName, String& strValue)
{
    bool bValueSet = false;
    RetWall* pObject = dynamic_cast<RetWall*>(m_pObject);
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
    else if (strMemberName == L"Desc")
    {
        if (pObject->hasValue_Desc())
        {
            strValue = (StringObjectImpl(pObject->getDesc())).toString();
            bValueSet = true;
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
    else if (strMemberName == L"State")
    {
        if (pObject->hasValue_State())
        {
            strValue = (EnumStateTypeImpl(pObject->getState())).toString();
            bValueSet = true;
        }
    }
    return bValueSet;
}

String RetWallNode::nodeName() const
{
    return L"RetWall";
}

GPSQCInfoLevel1Node::GPSQCInfoLevel1Node (Object* pObj)
    : ObjectNode (pObj)
{
    ILxNode* pVariant = NULL;
    m_pLxObj = dynamic_cast<GPSQCInfoLevel1*>(pObj);
    if (m_pLxObj == NULL)
        throw new Exception(Exception::Code::kFail, L"GPSQCInfoLevel1Node :: Invalid Object.");
    int nNumChildren = 4;
    m_arrChildren.reserve(nNumChildren);
    m_nNumChildren = 0;
    m_arrChildren.push_back(new ValueNode(this, L"GPSSolnType", L"GPSSolnType"));
    m_arrChildren.push_back(new ValueNode(this, L"GPSSolnFreq", L"GPSSolnFreq"));
    m_arrChildren.push_back(new ValueNode(this, L"NbrSatellites", L"NbrSatellites"));
    m_arrChildren.push_back(new ValueNode(this, L"RDOP", L"RDOP"));
}

bool GPSQCInfoLevel1Node::setValue (const String& strMemberName, const String* pstrValue)
{
    bool bValueSet = false;
    GPSQCInfoLevel1* pObject = dynamic_cast<GPSQCInfoLevel1*>(m_pObject);
    if (strMemberName == L"GPSSolnType")
    {
        if (!pstrValue)
        {
            pObject->resetValue_GPSSolnType();
        }
        else
        {
            pObject->setGPSSolnType(EnumGPSSolutionTypeEnumImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"GPSSolnFreq")
    {
        if (!pstrValue)
        {
            pObject->resetValue_GPSSolnFreq();
        }
        else
        {
            pObject->setGPSSolnFreq(EnumGPSSolutionFrequencyEnumImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"NbrSatellites")
    {
        if (!pstrValue)
        {
            pObject->resetValue_NbrSatellites();
        }
        else
        {
            pObject->setNbrSatellites(IntegerObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"RDOP")
    {
        if (!pstrValue)
        {
            pObject->resetValue_RDOP();
        }
        else
        {
            pObject->setRDOP(DoubleObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    return bValueSet;
}

bool GPSQCInfoLevel1Node::getValue (const String& strMemberName, String& strValue)
{
    bool bValueSet = false;
    GPSQCInfoLevel1* pObject = dynamic_cast<GPSQCInfoLevel1*>(m_pObject);
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
    else if (strMemberName == L"GPSSolnType")
    {
        if (pObject->hasValue_GPSSolnType())
        {
            strValue = (EnumGPSSolutionTypeEnumImpl(pObject->getGPSSolnType())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"GPSSolnFreq")
    {
        if (pObject->hasValue_GPSSolnFreq())
        {
            strValue = (EnumGPSSolutionFrequencyEnumImpl(pObject->getGPSSolnFreq())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"NbrSatellites")
    {
        if (pObject->hasValue_NbrSatellites())
        {
            strValue = (IntegerObjectImpl(pObject->getNbrSatellites())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"RDOP")
    {
        if (pObject->hasValue_RDOP())
        {
            strValue = (DoubleObjectImpl(pObject->getRDOP())).toString();
            bValueSet = true;
        }
    }
    return bValueSet;
}

String GPSQCInfoLevel1Node::nodeName() const
{
    return L"GPSQCInfoLevel1";
}

RoadwaysNode::RoadwaysNode (Object* pObj)
    : ObjectNode (pObj)
{
    ILxNode* pVariant = NULL;
    m_pLxObj = dynamic_cast<Roadways*>(pObj);
    if (m_pLxObj == NULL)
        throw new Exception(Exception::Code::kFail, L"RoadwaysNode :: Invalid Object.");
    int nNumChildren = 6;
    m_arrChildren.reserve(nNumChildren);
    m_nNumChildren = 0;
    m_arrChildren.push_back(new RoadwayCollectionNode(m_pLxObj->Roadway()));
    m_arrChildren.push_back(new IntersectionsCollectionNode(m_pLxObj->Intersections()));
    m_arrChildren.push_back(new FeatureCollectionNode(m_pLxObj->Feature()));
    m_arrChildren.push_back(new ValueNode(this, L"Name", L"Name"));
    m_arrChildren.push_back(new ValueNode(this, L"Desc", L"Desc"));
    m_arrChildren.push_back(new ValueNode(this, L"State", L"State"));
}

bool RoadwaysNode::setValue (const String& strMemberName, const String* pstrValue)
{
    bool bValueSet = false;
    Roadways* pObject = dynamic_cast<Roadways*>(m_pObject);
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
    if (strMemberName == L"State")
    {
        if (!pstrValue)
        {
            pObject->resetValue_State();
        }
        else
        {
            pObject->setState(EnumStateTypeImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    return bValueSet;
}

bool RoadwaysNode::getValue (const String& strMemberName, String& strValue)
{
    bool bValueSet = false;
    Roadways* pObject = dynamic_cast<Roadways*>(m_pObject);
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
    else if (strMemberName == L"State")
    {
        if (pObject->hasValue_State())
        {
            strValue = (EnumStateTypeImpl(pObject->getState())).toString();
            bValueSet = true;
        }
    }
    return bValueSet;
}

String RoadwaysNode::nodeName() const
{
    return L"Roadways";
}

}; // namespace : LX
