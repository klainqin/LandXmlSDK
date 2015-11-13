#include "stdafx.h"
#include "ObjectNode.h"
#include "CollectionNode.h"
#include "ValueNode.h"
#include "Exception.h"
#include "ValueTypeObjects.h"
#include "LXTypesImpl.h"
#include "LXNodes.h"
#include "InstrumentPoint.h"
#include "PipeNetworks.h"
#include "PipeNetworkCollection.h"
#include "FeatureCollection.h"
#include "RectPipe.h"
#include "ThruLane.h"
#include "ProfSurf.h"
#include "PntList2DCollection.h"

namespace LX
{

InstrumentPointNode::InstrumentPointNode (Object* pObj)
    : ObjectNode (pObj)
{
    ILxNode* pVariant = NULL;
    m_pLxObj = dynamic_cast<InstrumentPoint*>(pObj);
    if (m_pLxObj == NULL)
        throw new Exception(Exception::Code::kFail, L"InstrumentPointNode :: Invalid Object.");
    DoubleCollection* pValObj = dynamic_cast<DoubleCollection*>(m_pLxObj);
    int nNumChildren = 18;
    if (pValObj)
        nNumChildren += 1;
    m_arrChildren.reserve(nNumChildren);
    m_nNumChildren = 0;
    if (pValObj)
    {
        m_arrChildren.push_back(new ValueNode(this, L"value", L"value"));
    }
    m_arrChildren.push_back(new ValueNode(this, L"Name", L"Name"));
    m_arrChildren.push_back(new ValueNode(this, L"Desc", L"Desc"));
    m_arrChildren.push_back(new ValueNode(this, L"Code", L"Code"));
    m_arrChildren.push_back(new ValueNode(this, L"State", L"State"));
    m_arrChildren.push_back(new ValueNode(this, L"PntRef", L"PntRef"));
    m_arrChildren.push_back(new ValueNode(this, L"FeatureRef", L"FeatureRef"));
    m_arrChildren.push_back(new ValueNode(this, L"PointGeometry", L"PointGeometry"));
    m_arrChildren.push_back(new ValueNode(this, L"DTMAttribute", L"DTMAttribute"));
    m_arrChildren.push_back(new ValueNode(this, L"TimeStamp", L"TimeStamp"));
    m_arrChildren.push_back(new ValueNode(this, L"Role", L"Role"));
    m_arrChildren.push_back(new ValueNode(this, L"DeterminedTimeStamp", L"DeterminedTimeStamp"));
    m_arrChildren.push_back(new ValueNode(this, L"EllipsoidHeight", L"EllipsoidHeight"));
    m_arrChildren.push_back(new ValueNode(this, L"Latitude", L"Latitude"));
    m_arrChildren.push_back(new ValueNode(this, L"Longitude", L"Longitude"));
    m_arrChildren.push_back(new ValueNode(this, L"Zone", L"Zone"));
    m_arrChildren.push_back(new ValueNode(this, L"NorthingStdError", L"NorthingStdError"));
    m_arrChildren.push_back(new ValueNode(this, L"EastingStdError", L"EastingStdError"));
    m_arrChildren.push_back(new ValueNode(this, L"ElevationStdError", L"ElevationStdError"));
}

bool InstrumentPointNode::setValue (const String& strMemberName, const String* pstrValue)
{
    bool bValueSet = false;
    InstrumentPoint* pObject = dynamic_cast<InstrumentPoint*>(m_pObject);
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
    if (strMemberName == L"Code")
    {
        if (!pstrValue)
        {
            pObject->resetValue_Code();
        }
        else
        {
            pObject->setCode(StringObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
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
    if (strMemberName == L"PntRef")
    {
        if (!pstrValue)
        {
            pObject->resetValue_PntRef();
        }
        else
        {
            pObject->setPntRef(StringObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"FeatureRef")
    {
        if (!pstrValue)
        {
            pObject->resetValue_FeatureRef();
        }
        else
        {
            pObject->setFeatureRef(StringObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"PointGeometry")
    {
        if (!pstrValue)
        {
            pObject->resetValue_PointGeometry();
        }
        else
        {
            pObject->setPointGeometry(EnumPointGeometryTypeImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"DTMAttribute")
    {
        if (!pstrValue)
        {
            pObject->resetValue_DTMAttribute();
        }
        else
        {
            pObject->setDTMAttribute(EnumDTMAttributeTypeImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"TimeStamp")
    {
        if (!pstrValue)
        {
            pObject->resetValue_TimeStamp();
        }
        else
        {
            pObject->setTimeStamp(StringObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"Role")
    {
        if (!pstrValue)
        {
            pObject->resetValue_Role();
        }
        else
        {
            pObject->setRole(EnumSurveyRoleTypeImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"DeterminedTimeStamp")
    {
        if (!pstrValue)
        {
            pObject->resetValue_DeterminedTimeStamp();
        }
        else
        {
            pObject->setDeterminedTimeStamp(StringObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"EllipsoidHeight")
    {
        if (!pstrValue)
        {
            pObject->resetValue_EllipsoidHeight();
        }
        else
        {
            pObject->setEllipsoidHeight(DoubleObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
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
    if (strMemberName == L"Zone")
    {
        if (!pstrValue)
        {
            pObject->resetValue_Zone();
        }
        else
        {
            pObject->setZone(StringObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"NorthingStdError")
    {
        if (!pstrValue)
        {
            pObject->resetValue_NorthingStdError();
        }
        else
        {
            pObject->setNorthingStdError(DoubleObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"EastingStdError")
    {
        if (!pstrValue)
        {
            pObject->resetValue_EastingStdError();
        }
        else
        {
            pObject->setEastingStdError(DoubleObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"ElevationStdError")
    {
        if (!pstrValue)
        {
            pObject->resetValue_ElevationStdError();
        }
        else
        {
            pObject->setElevationStdError(DoubleObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    return bValueSet;
}

bool InstrumentPointNode::getValue (const String& strMemberName, String& strValue)
{
    bool bValueSet = false;
    InstrumentPoint* pObject = dynamic_cast<InstrumentPoint*>(m_pObject);
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
    else if (strMemberName == L"Code")
    {
        if (pObject->hasValue_Code())
        {
            strValue = (StringObjectImpl(pObject->getCode())).toString();
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
    else if (strMemberName == L"PntRef")
    {
        if (pObject->hasValue_PntRef())
        {
            strValue = (StringObjectImpl(pObject->getPntRef())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"FeatureRef")
    {
        if (pObject->hasValue_FeatureRef())
        {
            strValue = (StringObjectImpl(pObject->getFeatureRef())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"PointGeometry")
    {
        if (pObject->hasValue_PointGeometry())
        {
            strValue = (EnumPointGeometryTypeImpl(pObject->getPointGeometry())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"DTMAttribute")
    {
        if (pObject->hasValue_DTMAttribute())
        {
            strValue = (EnumDTMAttributeTypeImpl(pObject->getDTMAttribute())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"TimeStamp")
    {
        if (pObject->hasValue_TimeStamp())
        {
            strValue = (StringObjectImpl(pObject->getTimeStamp())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"Role")
    {
        if (pObject->hasValue_Role())
        {
            strValue = (EnumSurveyRoleTypeImpl(pObject->getRole())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"DeterminedTimeStamp")
    {
        if (pObject->hasValue_DeterminedTimeStamp())
        {
            strValue = (StringObjectImpl(pObject->getDeterminedTimeStamp())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"EllipsoidHeight")
    {
        if (pObject->hasValue_EllipsoidHeight())
        {
            strValue = (DoubleObjectImpl(pObject->getEllipsoidHeight())).toString();
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
    else if (strMemberName == L"Zone")
    {
        if (pObject->hasValue_Zone())
        {
            strValue = (StringObjectImpl(pObject->getZone())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"NorthingStdError")
    {
        if (pObject->hasValue_NorthingStdError())
        {
            strValue = (DoubleObjectImpl(pObject->getNorthingStdError())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"EastingStdError")
    {
        if (pObject->hasValue_EastingStdError())
        {
            strValue = (DoubleObjectImpl(pObject->getEastingStdError())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"ElevationStdError")
    {
        if (pObject->hasValue_ElevationStdError())
        {
            strValue = (DoubleObjectImpl(pObject->getElevationStdError())).toString();
            bValueSet = true;
        }
    }
    return bValueSet;
}

String InstrumentPointNode::nodeName() const
{
    return L"InstrumentPoint";
}

PipeNetworksNode::PipeNetworksNode (Object* pObj)
    : ObjectNode (pObj)
{
    ILxNode* pVariant = NULL;
    m_pLxObj = dynamic_cast<PipeNetworks*>(pObj);
    if (m_pLxObj == NULL)
        throw new Exception(Exception::Code::kFail, L"PipeNetworksNode :: Invalid Object.");
    int nNumChildren = 5;
    m_arrChildren.reserve(nNumChildren);
    m_nNumChildren = 0;
    m_arrChildren.push_back(new PipeNetworkCollectionNode(m_pLxObj->PipeNetwork()));
    m_arrChildren.push_back(new FeatureCollectionNode(m_pLxObj->Feature()));
    m_arrChildren.push_back(new ValueNode(this, L"Desc", L"Desc"));
    m_arrChildren.push_back(new ValueNode(this, L"Name", L"Name"));
    m_arrChildren.push_back(new ValueNode(this, L"State", L"State"));
}

bool PipeNetworksNode::setValue (const String& strMemberName, const String* pstrValue)
{
    bool bValueSet = false;
    PipeNetworks* pObject = dynamic_cast<PipeNetworks*>(m_pObject);
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

bool PipeNetworksNode::getValue (const String& strMemberName, String& strValue)
{
    bool bValueSet = false;
    PipeNetworks* pObject = dynamic_cast<PipeNetworks*>(m_pObject);
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

String PipeNetworksNode::nodeName() const
{
    return L"PipeNetworks";
}

RectPipeNode::RectPipeNode (Object* pObj)
    : ObjectNode (pObj)
{
    ILxNode* pVariant = NULL;
    m_pLxObj = dynamic_cast<RectPipe*>(pObj);
    if (m_pLxObj == NULL)
        throw new Exception(Exception::Code::kFail, L"RectPipeNode :: Invalid Object.");
    int nNumChildren = 8;
    m_arrChildren.reserve(nNumChildren);
    m_nNumChildren = 0;
    m_arrChildren.push_back(new FeatureCollectionNode(m_pLxObj->Feature()));
    m_arrChildren.push_back(new ValueNode(this, L"Height", L"Height"));
    m_arrChildren.push_back(new ValueNode(this, L"Width", L"Width"));
    m_arrChildren.push_back(new ValueNode(this, L"Desc", L"Desc"));
    m_arrChildren.push_back(new ValueNode(this, L"HazenWilliams", L"HazenWilliams"));
    m_arrChildren.push_back(new ValueNode(this, L"Mannings", L"Mannings"));
    m_arrChildren.push_back(new ValueNode(this, L"Material", L"Material"));
    m_arrChildren.push_back(new ValueNode(this, L"Thickness", L"Thickness"));
}

bool RectPipeNode::setValue (const String& strMemberName, const String* pstrValue)
{
    bool bValueSet = false;
    RectPipe* pObject = dynamic_cast<RectPipe*>(m_pObject);
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
    if (strMemberName == L"Width")
    {
        if (!pstrValue)
        {
            pObject->resetValue_Width();
        }
        else
        {
            pObject->setWidth(DoubleObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
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
    if (strMemberName == L"HazenWilliams")
    {
        if (!pstrValue)
        {
            pObject->resetValue_HazenWilliams();
        }
        else
        {
            pObject->setHazenWilliams(DoubleObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"Mannings")
    {
        if (!pstrValue)
        {
            pObject->resetValue_Mannings();
        }
        else
        {
            pObject->setMannings(DoubleObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
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
    if (strMemberName == L"Thickness")
    {
        if (!pstrValue)
        {
            pObject->resetValue_Thickness();
        }
        else
        {
            pObject->setThickness(DoubleObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    return bValueSet;
}

bool RectPipeNode::getValue (const String& strMemberName, String& strValue)
{
    bool bValueSet = false;
    RectPipe* pObject = dynamic_cast<RectPipe*>(m_pObject);
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
    else if (strMemberName == L"Height")
    {
        if (pObject->hasValue_Height())
        {
            strValue = (DoubleObjectImpl(pObject->getHeight())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"Width")
    {
        if (pObject->hasValue_Width())
        {
            strValue = (DoubleObjectImpl(pObject->getWidth())).toString();
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
    else if (strMemberName == L"HazenWilliams")
    {
        if (pObject->hasValue_HazenWilliams())
        {
            strValue = (DoubleObjectImpl(pObject->getHazenWilliams())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"Mannings")
    {
        if (pObject->hasValue_Mannings())
        {
            strValue = (DoubleObjectImpl(pObject->getMannings())).toString();
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
    else if (strMemberName == L"Thickness")
    {
        if (pObject->hasValue_Thickness())
        {
            strValue = (DoubleObjectImpl(pObject->getThickness())).toString();
            bValueSet = true;
        }
    }
    return bValueSet;
}

String RectPipeNode::nodeName() const
{
    return L"RectPipe";
}

ThruLaneNode::ThruLaneNode (Object* pObj)
    : ObjectNode (pObj)
{
    ILxNode* pVariant = NULL;
    m_pLxObj = dynamic_cast<ThruLane*>(pObj);
    if (m_pLxObj == NULL)
        throw new Exception(Exception::Code::kFail, L"ThruLaneNode :: Invalid Object.");
    int nNumChildren = 5;
    m_arrChildren.reserve(nNumChildren);
    m_nNumChildren = 0;
    m_arrChildren.push_back(new FeatureCollectionNode(m_pLxObj->Feature()));
    m_arrChildren.push_back(new ValueNode(this, L"StaStart", L"StaStart"));
    m_arrChildren.push_back(new ValueNode(this, L"StaEnd", L"StaEnd"));
    m_arrChildren.push_back(new ValueNode(this, L"Width", L"Width"));
    m_arrChildren.push_back(new ValueNode(this, L"SideofRoad", L"SideofRoad"));
}

bool ThruLaneNode::setValue (const String& strMemberName, const String* pstrValue)
{
    bool bValueSet = false;
    ThruLane* pObject = dynamic_cast<ThruLane*>(m_pObject);
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
    if (strMemberName == L"Width")
    {
        if (!pstrValue)
        {
            pObject->resetValue_Width();
        }
        else
        {
            pObject->setWidth(DoubleObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
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

bool ThruLaneNode::getValue (const String& strMemberName, String& strValue)
{
    bool bValueSet = false;
    ThruLane* pObject = dynamic_cast<ThruLane*>(m_pObject);
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
    else if (strMemberName == L"Width")
    {
        if (pObject->hasValue_Width())
        {
            strValue = (DoubleObjectImpl(pObject->getWidth())).toString();
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

String ThruLaneNode::nodeName() const
{
    return L"ThruLane";
}

ProfSurfNode::ProfSurfNode (Object* pObj)
    : ObjectNode (pObj)
{
    ILxNode* pVariant = NULL;
    m_pLxObj = dynamic_cast<ProfSurf*>(pObj);
    if (m_pLxObj == NULL)
        throw new Exception(Exception::Code::kFail, L"ProfSurfNode :: Invalid Object.");
    int nNumChildren = 5;
    m_arrChildren.reserve(nNumChildren);
    m_nNumChildren = 0;
    m_arrChildren.push_back(new PntList2DCollectionNode(m_pLxObj->PntList2D()));
    m_arrChildren.push_back(new FeatureCollectionNode(m_pLxObj->Feature()));
    m_arrChildren.push_back(new ValueNode(this, L"Name", L"Name"));
    m_arrChildren.push_back(new ValueNode(this, L"Desc", L"Desc"));
    m_arrChildren.push_back(new ValueNode(this, L"State", L"State"));
}

bool ProfSurfNode::setValue (const String& strMemberName, const String* pstrValue)
{
    bool bValueSet = false;
    ProfSurf* pObject = dynamic_cast<ProfSurf*>(m_pObject);
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

bool ProfSurfNode::getValue (const String& strMemberName, String& strValue)
{
    bool bValueSet = false;
    ProfSurf* pObject = dynamic_cast<ProfSurf*>(m_pObject);
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

String ProfSurfNode::nodeName() const
{
    return L"ProfSurf";
}

}; // namespace : LX
