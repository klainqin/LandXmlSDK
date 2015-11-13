#include "stdafx.h"
#include "ObjectNode.h"
#include "CollectionNode.h"
#include "ValueNode.h"
#include "Exception.h"
#include "ValueTypeObjects.h"
#include "LXTypesImpl.h"
#include "LXNodes.h"
#include "Exclusions.h"
#include "PVI.h"
#include "TrafficControl.h"
#include "Corrections.h"
#include "RedHorizontalPosition.h"

namespace LX
{

ExclusionsNode::ExclusionsNode (Object* pObj)
    : ObjectNode (pObj)
{
    ILxNode* pVariant = NULL;
    m_pLxObj = dynamic_cast<Exclusions*>(pObj);
    if (m_pLxObj == NULL)
        throw new Exception(Exception::Code::kFail, L"ExclusionsNode :: Invalid Object.");
    int nNumChildren = 2;
    m_arrChildren.reserve(nNumChildren);
    m_nNumChildren = 0;
    m_arrChildren.push_back(new ValueNode(this, L"ExclusionType", L"ExclusionType"));
    m_arrChildren.push_back(new ValueNode(this, L"Area", L"Area"));
}

bool ExclusionsNode::setValue (const String& strMemberName, const String* pstrValue)
{
    bool bValueSet = false;
    Exclusions* pObject = dynamic_cast<Exclusions*>(m_pObject);
    if (strMemberName == L"ExclusionType")
    {
        if (!pstrValue)
        {
            pObject->resetValue_ExclusionType();
        }
        else
        {
            pObject->setExclusionType(StringObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
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
    return bValueSet;
}

bool ExclusionsNode::getValue (const String& strMemberName, String& strValue)
{
    bool bValueSet = false;
    Exclusions* pObject = dynamic_cast<Exclusions*>(m_pObject);
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
    else if (strMemberName == L"ExclusionType")
    {
        if (pObject->hasValue_ExclusionType())
        {
            strValue = (StringObjectImpl(pObject->getExclusionType())).toString();
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
    return bValueSet;
}

String ExclusionsNode::nodeName() const
{
    return L"Exclusions";
}

PVINode::PVINode (Object* pObj)
    : ObjectNode (pObj)
{
    ILxNode* pVariant = NULL;
    m_pLxObj = dynamic_cast<PVI*>(pObj);
    if (m_pLxObj == NULL)
        throw new Exception(Exception::Code::kFail, L"PVINode :: Invalid Object.");
    DoubleCollection* pValObj = dynamic_cast<DoubleCollection*>(m_pLxObj);
    int nNumChildren = 1;
    if (pValObj)
        nNumChildren += 1;
    m_arrChildren.reserve(nNumChildren);
    m_nNumChildren = 0;
    if (pValObj)
    {
        m_arrChildren.push_back(new ValueNode(this, L"value", L"value"));
    }
    m_arrChildren.push_back(new ValueNode(this, L"Desc", L"Desc"));
}

bool PVINode::setValue (const String& strMemberName, const String* pstrValue)
{
    bool bValueSet = false;
    PVI* pObject = dynamic_cast<PVI*>(m_pObject);
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
    return bValueSet;
}

bool PVINode::getValue (const String& strMemberName, String& strValue)
{
    bool bValueSet = false;
    PVI* pObject = dynamic_cast<PVI*>(m_pObject);
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
    return bValueSet;
}

String PVINode::nodeName() const
{
    return L"PVI";
}

TrafficControlNode::TrafficControlNode (Object* pObj)
    : ObjectNode (pObj)
{
    ILxNode* pVariant = NULL;
    m_pLxObj = dynamic_cast<TrafficControl*>(pObj);
    if (m_pLxObj == NULL)
        throw new Exception(Exception::Code::kFail, L"TrafficControlNode :: Invalid Object.");
    int nNumChildren = 4;
    m_arrChildren.reserve(nNumChildren);
    m_nNumChildren = 0;
    m_arrChildren.push_back(new ValueNode(this, L"Station", L"Station"));
    m_arrChildren.push_back(new ValueNode(this, L"SignalPeriod", L"SignalPeriod"));
    m_arrChildren.push_back(new ValueNode(this, L"ControlPosition", L"ControlPosition"));
    m_arrChildren.push_back(new ValueNode(this, L"ControlType", L"ControlType"));
}

bool TrafficControlNode::setValue (const String& strMemberName, const String* pstrValue)
{
    bool bValueSet = false;
    TrafficControl* pObject = dynamic_cast<TrafficControl*>(m_pObject);
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
    if (strMemberName == L"SignalPeriod")
    {
        if (!pstrValue)
        {
            pObject->resetValue_SignalPeriod();
        }
        else
        {
            pObject->setSignalPeriod(DoubleObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"ControlPosition")
    {
        if (!pstrValue)
        {
            pObject->resetValue_ControlPosition();
        }
        else
        {
            pObject->setControlPosition(EnumTrafficControlPositionImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"ControlType")
    {
        if (!pstrValue)
        {
            pObject->resetValue_ControlType();
        }
        else
        {
            pObject->setControlType(EnumTrafficControlTypeImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    return bValueSet;
}

bool TrafficControlNode::getValue (const String& strMemberName, String& strValue)
{
    bool bValueSet = false;
    TrafficControl* pObject = dynamic_cast<TrafficControl*>(m_pObject);
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
    else if (strMemberName == L"SignalPeriod")
    {
        if (pObject->hasValue_SignalPeriod())
        {
            strValue = (DoubleObjectImpl(pObject->getSignalPeriod())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"ControlPosition")
    {
        if (pObject->hasValue_ControlPosition())
        {
            strValue = (EnumTrafficControlPositionImpl(pObject->getControlPosition())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"ControlType")
    {
        if (pObject->hasValue_ControlType())
        {
            strValue = (EnumTrafficControlTypeImpl(pObject->getControlType())).toString();
            bValueSet = true;
        }
    }
    return bValueSet;
}

String TrafficControlNode::nodeName() const
{
    return L"TrafficControl";
}

CorrectionsNode::CorrectionsNode (Object* pObj)
    : ObjectNode (pObj)
{
    ILxNode* pVariant = NULL;
    m_pLxObj = dynamic_cast<Corrections*>(pObj);
    if (m_pLxObj == NULL)
        throw new Exception(Exception::Code::kFail, L"CorrectionsNode :: Invalid Object.");
    int nNumChildren = 4;
    m_arrChildren.reserve(nNumChildren);
    m_nNumChildren = 0;
    m_arrChildren.push_back(new ValueNode(this, L"RefractionCoefficient", L"RefractionCoefficient"));
    m_arrChildren.push_back(new ValueNode(this, L"ApplyRefractionCoefficient", L"ApplyRefractionCoefficient"));
    m_arrChildren.push_back(new ValueNode(this, L"Sphericity", L"Sphericity"));
    m_arrChildren.push_back(new ValueNode(this, L"PrismEccentricity", L"PrismEccentricity"));
}

bool CorrectionsNode::setValue (const String& strMemberName, const String* pstrValue)
{
    bool bValueSet = false;
    Corrections* pObject = dynamic_cast<Corrections*>(m_pObject);
    if (strMemberName == L"RefractionCoefficient")
    {
        if (!pstrValue)
        {
            pObject->resetValue_RefractionCoefficient();
        }
        else
        {
            pObject->setRefractionCoefficient(DoubleObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"ApplyRefractionCoefficient")
    {
        if (!pstrValue)
        {
            pObject->resetValue_ApplyRefractionCoefficient();
        }
        else
        {
            pObject->setApplyRefractionCoefficient(BooleanObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"Sphericity")
    {
        if (!pstrValue)
        {
            pObject->resetValue_Sphericity();
        }
        else
        {
            pObject->setSphericity(DoubleObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"PrismEccentricity")
    {
        if (!pstrValue)
        {
            pObject->resetValue_PrismEccentricity();
        }
        else
        {
            pObject->setPrismEccentricity(DoubleObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    return bValueSet;
}

bool CorrectionsNode::getValue (const String& strMemberName, String& strValue)
{
    bool bValueSet = false;
    Corrections* pObject = dynamic_cast<Corrections*>(m_pObject);
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
    else if (strMemberName == L"RefractionCoefficient")
    {
        if (pObject->hasValue_RefractionCoefficient())
        {
            strValue = (DoubleObjectImpl(pObject->getRefractionCoefficient())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"ApplyRefractionCoefficient")
    {
        if (pObject->hasValue_ApplyRefractionCoefficient())
        {
            strValue = (BooleanObjectImpl(pObject->getApplyRefractionCoefficient())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"Sphericity")
    {
        if (pObject->hasValue_Sphericity())
        {
            strValue = (DoubleObjectImpl(pObject->getSphericity())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"PrismEccentricity")
    {
        if (pObject->hasValue_PrismEccentricity())
        {
            strValue = (DoubleObjectImpl(pObject->getPrismEccentricity())).toString();
            bValueSet = true;
        }
    }
    return bValueSet;
}

String CorrectionsNode::nodeName() const
{
    return L"Corrections";
}

RedHorizontalPositionNode::RedHorizontalPositionNode (Object* pObj)
    : ObjectNode (pObj)
{
    ILxNode* pVariant = NULL;
    m_pLxObj = dynamic_cast<RedHorizontalPosition*>(pObj);
    if (m_pLxObj == NULL)
        throw new Exception(Exception::Code::kFail, L"RedHorizontalPositionNode :: Invalid Object.");
    int nNumChildren = 18;
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
    m_arrChildren.push_back(new ValueNode(this, L"HorizontalDatum", L"HorizontalDatum"));
    m_arrChildren.push_back(new ValueNode(this, L"HorizontalAdjustment", L"HorizontalAdjustment"));
    m_arrChildren.push_back(new ValueNode(this, L"Latitude", L"Latitude"));
    m_arrChildren.push_back(new ValueNode(this, L"Longitude", L"Longitude"));
    m_arrChildren.push_back(new ValueNode(this, L"HorizontalFix", L"HorizontalFix"));
    m_arrChildren.push_back(new ValueNode(this, L"CurrencyDate", L"CurrencyDate"));
    m_arrChildren.push_back(new ValueNode(this, L"LocalUncertainity", L"LocalUncertainity"));
    m_arrChildren.push_back(new ValueNode(this, L"Class", L"Class"));
    m_arrChildren.push_back(new ValueNode(this, L"Order", L"Order"));
    m_arrChildren.push_back(new ValueNode(this, L"PositionalUncertainity", L"PositionalUncertainity"));
}

bool RedHorizontalPositionNode::setValue (const String& strMemberName, const String* pstrValue)
{
    bool bValueSet = false;
    RedHorizontalPosition* pObject = dynamic_cast<RedHorizontalPosition*>(m_pObject);
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
    if (strMemberName == L"HorizontalDatum")
    {
        if (!pstrValue)
        {
            pObject->resetValue_HorizontalDatum();
        }
        else
        {
            pObject->setHorizontalDatum(StringObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"HorizontalAdjustment")
    {
        if (!pstrValue)
        {
            pObject->resetValue_HorizontalAdjustment();
        }
        else
        {
            pObject->setHorizontalAdjustment(StringObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
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
            pObject->setLatitude(StringObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
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
            pObject->setLongitude(StringObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"HorizontalFix")
    {
        if (!pstrValue)
        {
            pObject->resetValue_HorizontalFix();
        }
        else
        {
            pObject->setHorizontalFix(StringObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"CurrencyDate")
    {
        if (!pstrValue)
        {
            pObject->resetValue_CurrencyDate();
        }
        else
        {
            pObject->setCurrencyDate(StringObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
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

bool RedHorizontalPositionNode::getValue (const String& strMemberName, String& strValue)
{
    bool bValueSet = false;
    RedHorizontalPosition* pObject = dynamic_cast<RedHorizontalPosition*>(m_pObject);
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
    else if (strMemberName == L"HorizontalDatum")
    {
        if (pObject->hasValue_HorizontalDatum())
        {
            strValue = (StringObjectImpl(pObject->getHorizontalDatum())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"HorizontalAdjustment")
    {
        if (pObject->hasValue_HorizontalAdjustment())
        {
            strValue = (StringObjectImpl(pObject->getHorizontalAdjustment())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"Latitude")
    {
        if (pObject->hasValue_Latitude())
        {
            strValue = (StringObjectImpl(pObject->getLatitude())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"Longitude")
    {
        if (pObject->hasValue_Longitude())
        {
            strValue = (StringObjectImpl(pObject->getLongitude())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"HorizontalFix")
    {
        if (pObject->hasValue_HorizontalFix())
        {
            strValue = (StringObjectImpl(pObject->getHorizontalFix())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"CurrencyDate")
    {
        if (pObject->hasValue_CurrencyDate())
        {
            strValue = (StringObjectImpl(pObject->getCurrencyDate())).toString();
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

String RedHorizontalPositionNode::nodeName() const
{
    return L"RedHorizontalPosition";
}

}; // namespace : LX
