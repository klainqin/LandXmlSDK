#include "stdafx.h"
#include "ObjectNode.h"
#include "CollectionNode.h"
#include "ValueNode.h"
#include "Exception.h"
#include "ValueTypeObjects.h"
#include "LXTypesImpl.h"
#include "LXNodes.h"
#include "Title.h"
#include "DesignCrossSectSurf.h"
#include "CrossSectPntCollection.h"
#include "FeatureCollection.h"
#include "RedVerticalObservation.h"
#include "CgPointCollection.h"
#include "GPSSetup.h"
#include "GPSPosition.h"
#include "TargetSetupCollection.h"
#include "FieldNoteCollection.h"

namespace LX
{

TitleNode::TitleNode (Object* pObj)
    : ObjectNode (pObj)
{
    ILxNode* pVariant = NULL;
    m_pLxObj = dynamic_cast<Title*>(pObj);
    if (m_pLxObj == NULL)
        throw new Exception(Exception::Code::kFail, L"TitleNode :: Invalid Object.");
    int nNumChildren = 2;
    m_arrChildren.reserve(nNumChildren);
    m_nNumChildren = 0;
    m_arrChildren.push_back(new ValueNode(this, L"Name", L"Name"));
    m_arrChildren.push_back(new ValueNode(this, L"TitleType", L"TitleType"));
}

bool TitleNode::setValue (const String& strMemberName, const String* pstrValue)
{
    bool bValueSet = false;
    Title* pObject = dynamic_cast<Title*>(m_pObject);
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
    if (strMemberName == L"TitleType")
    {
        if (!pstrValue)
        {
            pObject->resetValue_TitleType();
        }
        else
        {
            pObject->setTitleType(StringObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    return bValueSet;
}

bool TitleNode::getValue (const String& strMemberName, String& strValue)
{
    bool bValueSet = false;
    Title* pObject = dynamic_cast<Title*>(m_pObject);
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
    else if (strMemberName == L"TitleType")
    {
        if (pObject->hasValue_TitleType())
        {
            strValue = (StringObjectImpl(pObject->getTitleType())).toString();
            bValueSet = true;
        }
    }
    return bValueSet;
}

String TitleNode::nodeName() const
{
    return L"Title";
}

DesignCrossSectSurfNode::DesignCrossSectSurfNode (Object* pObj)
    : ObjectNode (pObj)
{
    ILxNode* pVariant = NULL;
    m_pLxObj = dynamic_cast<DesignCrossSectSurf*>(pObj);
    if (m_pLxObj == NULL)
        throw new Exception(Exception::Code::kFail, L"DesignCrossSectSurfNode :: Invalid Object.");
    int nNumChildren = 12;
    m_arrChildren.reserve(nNumChildren);
    m_nNumChildren = 0;
    m_arrChildren.push_back(new CrossSectPntCollectionNode(m_pLxObj->CrossSectPnt()));
    m_arrChildren.push_back(new FeatureCollectionNode(m_pLxObj->Feature()));
    m_arrChildren.push_back(new ValueNode(this, L"Name", L"Name"));
    m_arrChildren.push_back(new ValueNode(this, L"Desc", L"Desc"));
    m_arrChildren.push_back(new ValueNode(this, L"State", L"State"));
    m_arrChildren.push_back(new ValueNode(this, L"Side", L"Side"));
    m_arrChildren.push_back(new ValueNode(this, L"Material", L"Material"));
    m_arrChildren.push_back(new ValueNode(this, L"ClosedArea", L"ClosedArea"));
    m_arrChildren.push_back(new ValueNode(this, L"TypicalThickness", L"TypicalThickness"));
    m_arrChildren.push_back(new ValueNode(this, L"TypicalWidth", L"TypicalWidth"));
    m_arrChildren.push_back(new ValueNode(this, L"Area", L"Area"));
    m_arrChildren.push_back(new ValueNode(this, L"Volume", L"Volume"));
}

bool DesignCrossSectSurfNode::setValue (const String& strMemberName, const String* pstrValue)
{
    bool bValueSet = false;
    DesignCrossSectSurf* pObject = dynamic_cast<DesignCrossSectSurf*>(m_pObject);
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
    if (strMemberName == L"Side")
    {
        if (!pstrValue)
        {
            pObject->resetValue_Side();
        }
        else
        {
            pObject->setSide(EnumSideofRoadTypeImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"Material")
    {
        if (!pstrValue)
        {
            pObject->resetValue_Material();
        }
        else
        {
            pObject->setMaterial(StringObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"ClosedArea")
    {
        if (!pstrValue)
        {
            pObject->resetValue_ClosedArea();
        }
        else
        {
            pObject->setClosedArea(BooleanObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"TypicalThickness")
    {
        if (!pstrValue)
        {
            pObject->resetValue_TypicalThickness();
        }
        else
        {
            pObject->setTypicalThickness(DoubleObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"TypicalWidth")
    {
        if (!pstrValue)
        {
            pObject->resetValue_TypicalWidth();
        }
        else
        {
            pObject->setTypicalWidth(DoubleObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"Area")
    {
        if (!pstrValue)
        {
            pObject->resetValue_Area();
        }
        else
        {
            pObject->setArea(DoubleObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
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

bool DesignCrossSectSurfNode::getValue (const String& strMemberName, String& strValue)
{
    bool bValueSet = false;
    DesignCrossSectSurf* pObject = dynamic_cast<DesignCrossSectSurf*>(m_pObject);
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
    else if (strMemberName == L"Side")
    {
        if (pObject->hasValue_Side())
        {
            strValue = (EnumSideofRoadTypeImpl(pObject->getSide())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"Material")
    {
        if (pObject->hasValue_Material())
        {
            strValue = (StringObjectImpl(pObject->getMaterial())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"ClosedArea")
    {
        if (pObject->hasValue_ClosedArea())
        {
            strValue = (BooleanObjectImpl(pObject->getClosedArea())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"TypicalThickness")
    {
        if (pObject->hasValue_TypicalThickness())
        {
            strValue = (DoubleObjectImpl(pObject->getTypicalThickness())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"TypicalWidth")
    {
        if (pObject->hasValue_TypicalWidth())
        {
            strValue = (DoubleObjectImpl(pObject->getTypicalWidth())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"Area")
    {
        if (pObject->hasValue_Area())
        {
            strValue = (DoubleObjectImpl(pObject->getArea())).toString();
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

String DesignCrossSectSurfNode::nodeName() const
{
    return L"DesignCrossSectSurf";
}

RedVerticalObservationNode::RedVerticalObservationNode (Object* pObj)
    : ObjectNode (pObj)
{
    ILxNode* pVariant = NULL;
    m_pLxObj = dynamic_cast<RedVerticalObservation*>(pObj);
    if (m_pLxObj == NULL)
        throw new Exception(Exception::Code::kFail, L"RedVerticalObservationNode :: Invalid Object.");
    int nNumChildren = 21;
    m_arrChildren.reserve(nNumChildren);
    m_nNumChildren = 0;
    m_arrChildren.push_back(new ValueNode(this, L"Desc", L"Desc"));
    m_arrChildren.push_back(new ValueNode(this, L"Name", L"Name"));
    m_arrChildren.push_back(new ValueNode(this, L"State", L"State"));
    m_arrChildren.push_back(new ValueNode(this, L"OID", L"OID"));
    m_arrChildren.push_back(new ValueNode(this, L"Purpose", L"Purpose"));
    m_arrChildren.push_back(new ValueNode(this, L"SetupID", L"SetupID"));
    m_arrChildren.push_back(new ValueNode(this, L"Date", L"Date"));
    m_arrChildren.push_back(new ValueNode(this, L"EquipmentUsed", L"EquipmentUsed"));
    m_arrChildren.push_back(new ValueNode(this, L"Height", L"Height"));
    m_arrChildren.push_back(new ValueNode(this, L"VerticalAdjustment", L"VerticalAdjustment"));
    m_arrChildren.push_back(new ValueNode(this, L"VerticalFix", L"VerticalFix"));
    m_arrChildren.push_back(new ValueNode(this, L"Geosphoid", L"Geosphoid"));
    m_arrChildren.push_back(new ValueNode(this, L"GsDatum", L"GsDatum"));
    m_arrChildren.push_back(new ValueNode(this, L"GsModel", L"GsModel"));
    m_arrChildren.push_back(new ValueNode(this, L"GsMethod", L"GsMethod"));
    m_arrChildren.push_back(new ValueNode(this, L"OriginMark", L"OriginMark"));
    m_arrChildren.push_back(new ValueNode(this, L"VerticalDatum", L"VerticalDatum"));
    m_arrChildren.push_back(new ValueNode(this, L"LocalUncertainity", L"LocalUncertainity"));
    m_arrChildren.push_back(new ValueNode(this, L"Class", L"Class"));
    m_arrChildren.push_back(new ValueNode(this, L"Order", L"Order"));
    m_arrChildren.push_back(new ValueNode(this, L"PositionalUncertainity", L"PositionalUncertainity"));
}

bool RedVerticalObservationNode::setValue (const String& strMemberName, const String* pstrValue)
{
    bool bValueSet = false;
    RedVerticalObservation* pObject = dynamic_cast<RedVerticalObservation*>(m_pObject);
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
            pObject->setState(StringObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
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
    if (strMemberName == L"Purpose")
    {
        if (!pstrValue)
        {
            pObject->resetValue_Purpose();
        }
        else
        {
            pObject->setPurpose(EnumPurposeTypeImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"SetupID")
    {
        if (!pstrValue)
        {
            pObject->resetValue_SetupID();
        }
        else
        {
            pObject->setSetupID(StringObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"Date")
    {
        if (!pstrValue)
        {
            pObject->resetValue_Date();
        }
        else
        {
            pObject->setDate(StringObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"EquipmentUsed")
    {
        if (!pstrValue)
        {
            pObject->resetValue_EquipmentUsed();
        }
        else
        {
            pObject->setEquipmentUsed(StringObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"Height")
    {
        if (!pstrValue)
        {
            pObject->resetValue_Height();
        }
        else
        {
            pObject->setHeight(DoubleObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"VerticalAdjustment")
    {
        if (!pstrValue)
        {
            pObject->resetValue_VerticalAdjustment();
        }
        else
        {
            pObject->setVerticalAdjustment(StringObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"VerticalFix")
    {
        if (!pstrValue)
        {
            pObject->resetValue_VerticalFix();
        }
        else
        {
            pObject->setVerticalFix(StringObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"Geosphoid")
    {
        if (!pstrValue)
        {
            pObject->resetValue_Geosphoid();
        }
        else
        {
            pObject->setGeosphoid(DoubleObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"GsDatum")
    {
        if (!pstrValue)
        {
            pObject->resetValue_GsDatum();
        }
        else
        {
            pObject->setGsDatum(StringObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"GsModel")
    {
        if (!pstrValue)
        {
            pObject->resetValue_GsModel();
        }
        else
        {
            pObject->setGsModel(StringObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"GsMethod")
    {
        if (!pstrValue)
        {
            pObject->resetValue_GsMethod();
        }
        else
        {
            pObject->setGsMethod(StringObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"OriginMark")
    {
        if (!pstrValue)
        {
            pObject->resetValue_OriginMark();
        }
        else
        {
            pObject->setOriginMark(StringObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"VerticalDatum")
    {
        if (!pstrValue)
        {
            pObject->resetValue_VerticalDatum();
        }
        else
        {
            pObject->setVerticalDatum(StringObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"LocalUncertainity")
    {
        if (!pstrValue)
        {
            pObject->resetValue_LocalUncertainity();
        }
        else
        {
            pObject->setLocalUncertainity(DoubleObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"Class")
    {
        if (!pstrValue)
        {
            pObject->resetValue_Class();
        }
        else
        {
            pObject->setClass(StringObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"Order")
    {
        if (!pstrValue)
        {
            pObject->resetValue_Order();
        }
        else
        {
            pObject->setOrder(StringObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"PositionalUncertainity")
    {
        if (!pstrValue)
        {
            pObject->resetValue_PositionalUncertainity();
        }
        else
        {
            pObject->setPositionalUncertainity(DoubleObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    return bValueSet;
}

bool RedVerticalObservationNode::getValue (const String& strMemberName, String& strValue)
{
    bool bValueSet = false;
    RedVerticalObservation* pObject = dynamic_cast<RedVerticalObservation*>(m_pObject);
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
            strValue = (StringObjectImpl(pObject->getState())).toString();
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
    else if (strMemberName == L"Purpose")
    {
        if (pObject->hasValue_Purpose())
        {
            strValue = (EnumPurposeTypeImpl(pObject->getPurpose())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"SetupID")
    {
        if (pObject->hasValue_SetupID())
        {
            strValue = (StringObjectImpl(pObject->getSetupID())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"Date")
    {
        if (pObject->hasValue_Date())
        {
            strValue = (StringObjectImpl(pObject->getDate())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"EquipmentUsed")
    {
        if (pObject->hasValue_EquipmentUsed())
        {
            strValue = (StringObjectImpl(pObject->getEquipmentUsed())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"Height")
    {
        if (pObject->hasValue_Height())
        {
            strValue = (DoubleObjectImpl(pObject->getHeight())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"VerticalAdjustment")
    {
        if (pObject->hasValue_VerticalAdjustment())
        {
            strValue = (StringObjectImpl(pObject->getVerticalAdjustment())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"VerticalFix")
    {
        if (pObject->hasValue_VerticalFix())
        {
            strValue = (StringObjectImpl(pObject->getVerticalFix())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"Geosphoid")
    {
        if (pObject->hasValue_Geosphoid())
        {
            strValue = (DoubleObjectImpl(pObject->getGeosphoid())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"GsDatum")
    {
        if (pObject->hasValue_GsDatum())
        {
            strValue = (StringObjectImpl(pObject->getGsDatum())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"GsModel")
    {
        if (pObject->hasValue_GsModel())
        {
            strValue = (StringObjectImpl(pObject->getGsModel())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"GsMethod")
    {
        if (pObject->hasValue_GsMethod())
        {
            strValue = (StringObjectImpl(pObject->getGsMethod())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"OriginMark")
    {
        if (pObject->hasValue_OriginMark())
        {
            strValue = (StringObjectImpl(pObject->getOriginMark())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"VerticalDatum")
    {
        if (pObject->hasValue_VerticalDatum())
        {
            strValue = (StringObjectImpl(pObject->getVerticalDatum())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"LocalUncertainity")
    {
        if (pObject->hasValue_LocalUncertainity())
        {
            strValue = (DoubleObjectImpl(pObject->getLocalUncertainity())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"Class")
    {
        if (pObject->hasValue_Class())
        {
            strValue = (StringObjectImpl(pObject->getClass())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"Order")
    {
        if (pObject->hasValue_Order())
        {
            strValue = (StringObjectImpl(pObject->getOrder())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"PositionalUncertainity")
    {
        if (pObject->hasValue_PositionalUncertainity())
        {
            strValue = (DoubleObjectImpl(pObject->getPositionalUncertainity())).toString();
            bValueSet = true;
        }
    }
    return bValueSet;
}

String RedVerticalObservationNode::nodeName() const
{
    return L"RedVerticalObservation";
}

CgPointCollectionNode::CgPointCollectionNode (Object& obj)
    : CollectionNode(&obj) 
{
    initialize(&obj);
}

CgPointCollectionNode::CgPointCollectionNode (Object* pObj)
    : CollectionNode (pObj) 
{
    initialize(pObj);
}

void CgPointCollectionNode::initialize (Object* pObj)
{
    ILxNode* pVariant = NULL;
    m_pLxObj = dynamic_cast<CgPointCollection*>(pObj);
    if (m_pLxObj == NULL)
        throw new Exception(Exception::Code::kFail, L"CgPointCollectionNode :: Invalid Object.");
    int nNumChildren = m_pLxObj->count();
    m_arrChildren.reserve(nNumChildren);
    CgPointCollectionIterator* pIterator = m_pLxObj->iterator();
    m_nNumChildren = 0;
    while (!pIterator->atEnd())
    {
        m_arrChildren.push_back(new CgPointNode(pIterator->current()));
        pIterator->next();
    }
    pIterator->release();
}

String CgPointCollectionNode::nodeName() const
{
    return L"CgPointCollection";
}

ILxNode* CgPointCollectionNode::findChild(const String& strChildId) const
{
    // Grab string from child
    StringObjectImpl::Type idValue;
    ILxNode* pFoundNode = NULL;
    if (StringObjectImpl::parseString(strChildId.c_str(), strChildId.size(), idValue))
    {
        CgPointCollectionIterator* pFoundIter = m_pLxObj->find(idValue);
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
GPSSetupNode::GPSSetupNode (Object* pObj)
    : ObjectNode (pObj)
{
    ILxNode* pVariant = NULL;
    m_pLxObj = dynamic_cast<GPSSetup*>(pObj);
    if (m_pLxObj == NULL)
        throw new Exception(Exception::Code::kFail, L"GPSSetupNode :: Invalid Object.");
    int nNumChildren = 13;
    m_arrChildren.reserve(nNumChildren);
    m_nNumChildren = 0;
    if (m_pLxObj->getGPSPosition())
        m_arrChildren.push_back(new GPSPositionNode(m_pLxObj->getGPSPosition()));
    m_arrChildren.push_back(new TargetSetupCollectionNode(m_pLxObj->TargetSetup()));
    m_arrChildren.push_back(new FieldNoteCollectionNode(m_pLxObj->FieldNote()));
    m_arrChildren.push_back(new FeatureCollectionNode(m_pLxObj->Feature()));
    m_arrChildren.push_back(new ValueNode(this, L"Id", L"Id"));
    m_arrChildren.push_back(new ValueNode(this, L"AntennaHeight", L"AntennaHeight"));
    m_arrChildren.push_back(new ValueNode(this, L"StationName", L"StationName"));
    m_arrChildren.push_back(new ValueNode(this, L"GPSAntennaDetailsID", L"GPSAntennaDetailsID"));
    m_arrChildren.push_back(new ValueNode(this, L"GPSReceiverDetailsID", L"GPSReceiverDetailsID"));
    m_arrChildren.push_back(new ValueNode(this, L"ObservationDataLink", L"ObservationDataLink"));
    m_arrChildren.push_back(new ValueNode(this, L"StationDescription", L"StationDescription"));
    m_arrChildren.push_back(new ValueNode(this, L"StartTime", L"StartTime"));
    m_arrChildren.push_back(new ValueNode(this, L"StopTime", L"StopTime"));
}

bool GPSSetupNode::setValue (const String& strMemberName, const String* pstrValue)
{
    bool bValueSet = false;
    GPSSetup* pObject = dynamic_cast<GPSSetup*>(m_pObject);
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
    if (strMemberName == L"AntennaHeight")
    {
        if (!pstrValue)
        {
            pObject->resetValue_AntennaHeight();
        }
        else
        {
            pObject->setAntennaHeight(DoubleObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"StationName")
    {
        if (!pstrValue)
        {
            pObject->resetValue_StationName();
        }
        else
        {
            pObject->setStationName(StringObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"GPSAntennaDetailsID")
    {
        if (!pstrValue)
        {
            pObject->resetValue_GPSAntennaDetailsID();
        }
        else
        {
            pObject->setGPSAntennaDetailsID(StringObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"GPSReceiverDetailsID")
    {
        if (!pstrValue)
        {
            pObject->resetValue_GPSReceiverDetailsID();
        }
        else
        {
            pObject->setGPSReceiverDetailsID(StringObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"ObservationDataLink")
    {
        if (!pstrValue)
        {
            pObject->resetValue_ObservationDataLink();
        }
        else
        {
            pObject->setObservationDataLink(StringObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"StationDescription")
    {
        if (!pstrValue)
        {
            pObject->resetValue_StationDescription();
        }
        else
        {
            pObject->setStationDescription(StringObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"StartTime")
    {
        if (!pstrValue)
        {
            pObject->resetValue_StartTime();
        }
        else
        {
            pObject->setStartTime(DoubleObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"StopTime")
    {
        if (!pstrValue)
        {
            pObject->resetValue_StopTime();
        }
        else
        {
            pObject->setStopTime(DoubleObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    return bValueSet;
}

bool GPSSetupNode::getValue (const String& strMemberName, String& strValue)
{
    bool bValueSet = false;
    GPSSetup* pObject = dynamic_cast<GPSSetup*>(m_pObject);
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
    else if (strMemberName == L"AntennaHeight")
    {
        if (pObject->hasValue_AntennaHeight())
        {
            strValue = (DoubleObjectImpl(pObject->getAntennaHeight())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"StationName")
    {
        if (pObject->hasValue_StationName())
        {
            strValue = (StringObjectImpl(pObject->getStationName())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"GPSAntennaDetailsID")
    {
        if (pObject->hasValue_GPSAntennaDetailsID())
        {
            strValue = (StringObjectImpl(pObject->getGPSAntennaDetailsID())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"GPSReceiverDetailsID")
    {
        if (pObject->hasValue_GPSReceiverDetailsID())
        {
            strValue = (StringObjectImpl(pObject->getGPSReceiverDetailsID())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"ObservationDataLink")
    {
        if (pObject->hasValue_ObservationDataLink())
        {
            strValue = (StringObjectImpl(pObject->getObservationDataLink())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"StationDescription")
    {
        if (pObject->hasValue_StationDescription())
        {
            strValue = (StringObjectImpl(pObject->getStationDescription())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"StartTime")
    {
        if (pObject->hasValue_StartTime())
        {
            strValue = (DoubleObjectImpl(pObject->getStartTime())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"StopTime")
    {
        if (pObject->hasValue_StopTime())
        {
            strValue = (DoubleObjectImpl(pObject->getStopTime())).toString();
            bValueSet = true;
        }
    }
    return bValueSet;
}

String GPSSetupNode::nodeName() const
{
    return L"GPSSetup";
}

}; // namespace : LX
