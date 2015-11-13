#include "stdafx.h"
#include "ObjectNode.h"
#include "CollectionNode.h"
#include "ValueNode.h"
#include "Exception.h"
#include "ValueTypeObjects.h"
#include "LXTypesImpl.h"
#include "LXNodes.h"
#include "StaEquation.h"
#include "FeatureCollection.h"
#include "TrafficVolume.h"
#include "DailyTrafficVolume.h"
#include "DesignHour.h"
#include "PeakHour.h"
#include "Start.h"
#include "CircPipe.h"
#include "OutletCollection.h"

namespace LX
{

StaEquationNode::StaEquationNode (Object* pObj)
    : ObjectNode (pObj)
{
    ILxNode* pVariant = NULL;
    m_pLxObj = dynamic_cast<StaEquation*>(pObj);
    if (m_pLxObj == NULL)
        throw new Exception(Exception::Code::kFail, L"StaEquationNode :: Invalid Object.");
    int nNumChildren = 6;
    m_arrChildren.reserve(nNumChildren);
    m_nNumChildren = 0;
    m_arrChildren.push_back(new FeatureCollectionNode(m_pLxObj->Feature()));
    m_arrChildren.push_back(new ValueNode(this, L"StaAhead", L"StaAhead"));
    m_arrChildren.push_back(new ValueNode(this, L"StaBack", L"StaBack"));
    m_arrChildren.push_back(new ValueNode(this, L"StaInternal", L"StaInternal"));
    m_arrChildren.push_back(new ValueNode(this, L"StaIncrement", L"StaIncrement"));
    m_arrChildren.push_back(new ValueNode(this, L"Desc", L"Desc"));
}

bool StaEquationNode::setValue (const String& strMemberName, const String* pstrValue)
{
    bool bValueSet = false;
    StaEquation* pObject = dynamic_cast<StaEquation*>(m_pObject);
    if (strMemberName == L"StaAhead")
    {
        if (!pstrValue)
        {
            pObject->resetValue_StaAhead();
        }
        else
        {
            pObject->setStaAhead(DoubleObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"StaBack")
    {
        if (!pstrValue)
        {
            pObject->resetValue_StaBack();
        }
        else
        {
            pObject->setStaBack(DoubleObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"StaInternal")
    {
        if (!pstrValue)
        {
            pObject->resetValue_StaInternal();
        }
        else
        {
            pObject->setStaInternal(DoubleObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"StaIncrement")
    {
        if (!pstrValue)
        {
            pObject->resetValue_StaIncrement();
        }
        else
        {
            pObject->setStaIncrement(EnumStationIncrementDirectionTypeImpl::parseString(pstrValue->c_str(), pstrValue->length()));
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
    return bValueSet;
}

bool StaEquationNode::getValue (const String& strMemberName, String& strValue)
{
    bool bValueSet = false;
    StaEquation* pObject = dynamic_cast<StaEquation*>(m_pObject);
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
    else if (strMemberName == L"StaAhead")
    {
        if (pObject->hasValue_StaAhead())
        {
            strValue = (DoubleObjectImpl(pObject->getStaAhead())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"StaBack")
    {
        if (pObject->hasValue_StaBack())
        {
            strValue = (DoubleObjectImpl(pObject->getStaBack())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"StaInternal")
    {
        if (pObject->hasValue_StaInternal())
        {
            strValue = (DoubleObjectImpl(pObject->getStaInternal())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"StaIncrement")
    {
        if (pObject->hasValue_StaIncrement())
        {
            strValue = (EnumStationIncrementDirectionTypeImpl(pObject->getStaIncrement())).toString();
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
    return bValueSet;
}

String StaEquationNode::nodeName() const
{
    return L"StaEquation";
}

TrafficVolumeNode::TrafficVolumeNode (Object* pObj)
    : ObjectNode (pObj)
{
    ILxNode* pVariant = NULL;
    m_pLxObj = dynamic_cast<TrafficVolume*>(pObj);
    if (m_pLxObj == NULL)
        throw new Exception(Exception::Code::kFail, L"TrafficVolumeNode :: Invalid Object.");
    int nNumChildren = 4;
    m_arrChildren.reserve(nNumChildren);
    m_nNumChildren = 0;
    if (m_pLxObj->getDailyTrafficVolume())
        m_arrChildren.push_back(new DailyTrafficVolumeNode(m_pLxObj->getDailyTrafficVolume()));
    if (m_pLxObj->getDesignHour())
        m_arrChildren.push_back(new DesignHourNode(m_pLxObj->getDesignHour()));
    if (m_pLxObj->getPeakHour())
        m_arrChildren.push_back(new PeakHourNode(m_pLxObj->getPeakHour()));
    m_arrChildren.push_back(new FeatureCollectionNode(m_pLxObj->Feature()));
}

bool TrafficVolumeNode::setValue (const String& strMemberName, const String* pstrValue)
{
    bool bValueSet = false;
    TrafficVolume* pObject = dynamic_cast<TrafficVolume*>(m_pObject);
    return bValueSet;
}

bool TrafficVolumeNode::getValue (const String& strMemberName, String& strValue)
{
    bool bValueSet = false;
    TrafficVolume* pObject = dynamic_cast<TrafficVolume*>(m_pObject);
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

String TrafficVolumeNode::nodeName() const
{
    return L"TrafficVolume";
}

StartNode::StartNode (Object* pObj)
    : ObjectNode (pObj)
{
    ILxNode* pVariant = NULL;
    m_pLxObj = dynamic_cast<Start*>(pObj);
    if (m_pLxObj == NULL)
        throw new Exception(Exception::Code::kFail, L"StartNode :: Invalid Object.");
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

bool StartNode::setValue (const String& strMemberName, const String* pstrValue)
{
    bool bValueSet = false;
    Start* pObject = dynamic_cast<Start*>(m_pObject);
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

bool StartNode::getValue (const String& strMemberName, String& strValue)
{
    bool bValueSet = false;
    Start* pObject = dynamic_cast<Start*>(m_pObject);
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

String StartNode::nodeName() const
{
    return L"Start";
}

CircPipeNode::CircPipeNode (Object* pObj)
    : ObjectNode (pObj)
{
    ILxNode* pVariant = NULL;
    m_pLxObj = dynamic_cast<CircPipe*>(pObj);
    if (m_pLxObj == NULL)
        throw new Exception(Exception::Code::kFail, L"CircPipeNode :: Invalid Object.");
    int nNumChildren = 7;
    m_arrChildren.reserve(nNumChildren);
    m_nNumChildren = 0;
    m_arrChildren.push_back(new FeatureCollectionNode(m_pLxObj->Feature()));
    m_arrChildren.push_back(new ValueNode(this, L"Diameter", L"Diameter"));
    m_arrChildren.push_back(new ValueNode(this, L"Desc", L"Desc"));
    m_arrChildren.push_back(new ValueNode(this, L"HazenWilliams", L"HazenWilliams"));
    m_arrChildren.push_back(new ValueNode(this, L"Mannings", L"Mannings"));
    m_arrChildren.push_back(new ValueNode(this, L"Material", L"Material"));
    m_arrChildren.push_back(new ValueNode(this, L"Thickness", L"Thickness"));
}

bool CircPipeNode::setValue (const String& strMemberName, const String* pstrValue)
{
    bool bValueSet = false;
    CircPipe* pObject = dynamic_cast<CircPipe*>(m_pObject);
    if (strMemberName == L"Diameter")
    {
        if (!pstrValue)
        {
            pObject->resetValue_Diameter();
        }
        else
        {
            pObject->setDiameter(DoubleObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
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

bool CircPipeNode::getValue (const String& strMemberName, String& strValue)
{
    bool bValueSet = false;
    CircPipe* pObject = dynamic_cast<CircPipe*>(m_pObject);
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
    else if (strMemberName == L"Diameter")
    {
        if (pObject->hasValue_Diameter())
        {
            strValue = (DoubleObjectImpl(pObject->getDiameter())).toString();
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

String CircPipeNode::nodeName() const
{
    return L"CircPipe";
}

OutletCollectionNode::OutletCollectionNode (Object& obj)
    : CollectionNode(&obj) 
{
    initialize(&obj);
}

OutletCollectionNode::OutletCollectionNode (Object* pObj)
    : CollectionNode (pObj) 
{
    initialize(pObj);
}

void OutletCollectionNode::initialize (Object* pObj)
{
    ILxNode* pVariant = NULL;
    m_pLxObj = dynamic_cast<OutletCollection*>(pObj);
    if (m_pLxObj == NULL)
        throw new Exception(Exception::Code::kFail, L"OutletCollectionNode :: Invalid Object.");
    int nNumChildren = m_pLxObj->count();
    m_arrChildren.reserve(nNumChildren);
    OutletCollectionIterator* pIterator = m_pLxObj->iterator();
    m_nNumChildren = 0;
    while (!pIterator->atEnd())
    {
        m_arrChildren.push_back(new OutletNode(pIterator->current()));
        pIterator->next();
    }
    pIterator->release();
}

String OutletCollectionNode::nodeName() const
{
    return L"OutletCollection";
}

ILxNode* OutletCollectionNode::findChild(const String& strChildId) const
{
    // Grab string from child
    StringObjectImpl::Type idValue;
    ILxNode* pFoundNode = NULL;
    if (StringObjectImpl::parseString(strChildId.c_str(), strChildId.size(), idValue))
    {
        OutletCollectionIterator* pFoundIter = m_pLxObj->find(idValue);
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
