#include "stdafx.h"
#include "ObjectNode.h"
#include "CollectionNode.h"
#include "ValueNode.h"
#include "Exception.h"
#include "ValueTypeObjects.h"
#include "LXTypesImpl.h"
#include "LXNodes.h"
#include "Survey.h"
#include "SurveyHeader.h"
#include "Equipment.h"
#include "SurveyMonumentCollection.h"
#include "CgPointsCollection.h"
#include "InstrumentSetupCollection.h"
#include "LaserSetupCollection.h"
#include "GPSSetupCollection.h"
#include "TargetSetupCollection.h"
#include "GPSVectorCollection.h"
#include "GPSPositionCollection.h"
#include "ObservationGroupCollection.h"
#include "ControlChecksCollection.h"
#include "FieldNoteCollection.h"
#include "FeatureCollection.h"
#include "Imperial.h"
#include "TestObservationCollection.h"
#include "BeginRunoutSta.h"

namespace LX
{

SurveyNode::SurveyNode (Object* pObj)
    : ObjectNode (pObj)
{
    ILxNode* pVariant = NULL;
    m_pLxObj = dynamic_cast<Survey*>(pObj);
    if (m_pLxObj == NULL)
        throw new Exception(Exception::Code::kFail, L"SurveyNode :: Invalid Object.");
    int nNumChildren = 21;
    m_arrChildren.reserve(nNumChildren);
    m_nNumChildren = 0;
    if (m_pLxObj->getSurveyHeader())
        m_arrChildren.push_back(new SurveyHeaderNode(m_pLxObj->getSurveyHeader()));
    if (m_pLxObj->getEquipment())
        m_arrChildren.push_back(new EquipmentNode(m_pLxObj->getEquipment()));
    m_arrChildren.push_back(new SurveyMonumentCollectionNode(m_pLxObj->SurveyMonument()));
    m_arrChildren.push_back(new CgPointsCollectionNode(m_pLxObj->CgPoints()));
    m_arrChildren.push_back(new InstrumentSetupCollectionNode(m_pLxObj->InstrumentSetup()));
    m_arrChildren.push_back(new LaserSetupCollectionNode(m_pLxObj->LaserSetup()));
    m_arrChildren.push_back(new GPSSetupCollectionNode(m_pLxObj->GPSSetup()));
    m_arrChildren.push_back(new TargetSetupCollectionNode(m_pLxObj->TargetSetup()));
    m_arrChildren.push_back(new GPSVectorCollectionNode(m_pLxObj->GPSVector()));
    m_arrChildren.push_back(new GPSPositionCollectionNode(m_pLxObj->GPSPosition()));
    m_arrChildren.push_back(new ObservationGroupCollectionNode(m_pLxObj->ObservationGroup()));
    m_arrChildren.push_back(new ControlChecksCollectionNode(m_pLxObj->ControlChecks()));
    m_arrChildren.push_back(new FieldNoteCollectionNode(m_pLxObj->FieldNote()));
    m_arrChildren.push_back(new FeatureCollectionNode(m_pLxObj->Feature()));
    m_arrChildren.push_back(new ValueNode(this, L"Desc", L"Desc"));
    m_arrChildren.push_back(new ValueNode(this, L"Date", L"Date"));
    m_arrChildren.push_back(new ValueNode(this, L"StartTime", L"StartTime"));
    m_arrChildren.push_back(new ValueNode(this, L"EndTime", L"EndTime"));
    m_arrChildren.push_back(new ValueNode(this, L"State", L"State"));
    m_arrChildren.push_back(new ValueNode(this, L"HorizontalAccuracy", L"HorizontalAccuracy"));
    m_arrChildren.push_back(new ValueNode(this, L"VerticalAccuracy", L"VerticalAccuracy"));
}

bool SurveyNode::setValue (const String& strMemberName, const String* pstrValue)
{
    bool bValueSet = false;
    Survey* pObject = dynamic_cast<Survey*>(m_pObject);
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
    if (strMemberName == L"StartTime")
    {
        if (!pstrValue)
        {
            pObject->resetValue_StartTime();
        }
        else
        {
            pObject->setStartTime(StringObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"EndTime")
    {
        if (!pstrValue)
        {
            pObject->resetValue_EndTime();
        }
        else
        {
            pObject->setEndTime(StringObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
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
    if (strMemberName == L"HorizontalAccuracy")
    {
        if (!pstrValue)
        {
            pObject->resetValue_HorizontalAccuracy();
        }
        else
        {
            pObject->setHorizontalAccuracy(StringObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"VerticalAccuracy")
    {
        if (!pstrValue)
        {
            pObject->resetValue_VerticalAccuracy();
        }
        else
        {
            pObject->setVerticalAccuracy(StringObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    return bValueSet;
}

bool SurveyNode::getValue (const String& strMemberName, String& strValue)
{
    bool bValueSet = false;
    Survey* pObject = dynamic_cast<Survey*>(m_pObject);
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
    else if (strMemberName == L"Date")
    {
        if (pObject->hasValue_Date())
        {
            strValue = (StringObjectImpl(pObject->getDate())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"StartTime")
    {
        if (pObject->hasValue_StartTime())
        {
            strValue = (StringObjectImpl(pObject->getStartTime())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"EndTime")
    {
        if (pObject->hasValue_EndTime())
        {
            strValue = (StringObjectImpl(pObject->getEndTime())).toString();
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
    else if (strMemberName == L"HorizontalAccuracy")
    {
        if (pObject->hasValue_HorizontalAccuracy())
        {
            strValue = (StringObjectImpl(pObject->getHorizontalAccuracy())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"VerticalAccuracy")
    {
        if (pObject->hasValue_VerticalAccuracy())
        {
            strValue = (StringObjectImpl(pObject->getVerticalAccuracy())).toString();
            bValueSet = true;
        }
    }
    return bValueSet;
}

String SurveyNode::nodeName() const
{
    return L"Survey";
}

ImperialNode::ImperialNode (Object* pObj)
    : ObjectNode (pObj)
{
    ILxNode* pVariant = NULL;
    m_pLxObj = dynamic_cast<Imperial*>(pObj);
    if (m_pLxObj == NULL)
        throw new Exception(Exception::Code::kFail, L"ImperialNode :: Invalid Object.");
    int nNumChildren = 14;
    m_arrChildren.reserve(nNumChildren);
    m_nNumChildren = 0;
    m_arrChildren.push_back(new ValueNode(this, L"AreaUnit", L"AreaUnit"));
    m_arrChildren.push_back(new ValueNode(this, L"LinearUnit", L"LinearUnit"));
    m_arrChildren.push_back(new ValueNode(this, L"VolumeUnit", L"VolumeUnit"));
    m_arrChildren.push_back(new ValueNode(this, L"TemperatureUnit", L"TemperatureUnit"));
    m_arrChildren.push_back(new ValueNode(this, L"PressureUnit", L"PressureUnit"));
    m_arrChildren.push_back(new ValueNode(this, L"DiameterUnit", L"DiameterUnit"));
    m_arrChildren.push_back(new ValueNode(this, L"WidthUnit", L"WidthUnit"));
    m_arrChildren.push_back(new ValueNode(this, L"HeightUnit", L"HeightUnit"));
    m_arrChildren.push_back(new ValueNode(this, L"VelocityUnit", L"VelocityUnit"));
    m_arrChildren.push_back(new ValueNode(this, L"FlowUnit", L"FlowUnit"));
    m_arrChildren.push_back(new ValueNode(this, L"AngularUnit", L"AngularUnit"));
    m_arrChildren.push_back(new ValueNode(this, L"DirectionUnit", L"DirectionUnit"));
    m_arrChildren.push_back(new ValueNode(this, L"LatLongAngularUnit", L"LatLongAngularUnit"));
    m_arrChildren.push_back(new ValueNode(this, L"ElevationUnit", L"ElevationUnit"));
}

bool ImperialNode::setValue (const String& strMemberName, const String* pstrValue)
{
    bool bValueSet = false;
    Imperial* pObject = dynamic_cast<Imperial*>(m_pObject);
    if (strMemberName == L"AreaUnit")
    {
        if (!pstrValue)
        {
            pObject->resetValue_AreaUnit();
        }
        else
        {
            pObject->setAreaUnit(EnumImpAreaImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"LinearUnit")
    {
        if (!pstrValue)
        {
            pObject->resetValue_LinearUnit();
        }
        else
        {
            pObject->setLinearUnit(EnumImpLinearImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"VolumeUnit")
    {
        if (!pstrValue)
        {
            pObject->resetValue_VolumeUnit();
        }
        else
        {
            pObject->setVolumeUnit(EnumImpVolumeImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"TemperatureUnit")
    {
        if (!pstrValue)
        {
            pObject->resetValue_TemperatureUnit();
        }
        else
        {
            pObject->setTemperatureUnit(EnumImpTemperatureImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"PressureUnit")
    {
        if (!pstrValue)
        {
            pObject->resetValue_PressureUnit();
        }
        else
        {
            pObject->setPressureUnit(EnumImpPressureImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"DiameterUnit")
    {
        if (!pstrValue)
        {
            pObject->resetValue_DiameterUnit();
        }
        else
        {
            pObject->setDiameterUnit(EnumImpDiameterImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"WidthUnit")
    {
        if (!pstrValue)
        {
            pObject->resetValue_WidthUnit();
        }
        else
        {
            pObject->setWidthUnit(EnumImpWidthImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"HeightUnit")
    {
        if (!pstrValue)
        {
            pObject->resetValue_HeightUnit();
        }
        else
        {
            pObject->setHeightUnit(EnumImpHeightImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"VelocityUnit")
    {
        if (!pstrValue)
        {
            pObject->resetValue_VelocityUnit();
        }
        else
        {
            pObject->setVelocityUnit(EnumImpVelocityImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"FlowUnit")
    {
        if (!pstrValue)
        {
            pObject->resetValue_FlowUnit();
        }
        else
        {
            pObject->setFlowUnit(EnumImpFlowImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"AngularUnit")
    {
        if (!pstrValue)
        {
            pObject->resetValue_AngularUnit();
        }
        else
        {
            pObject->setAngularUnit(EnumAngularTypeImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"DirectionUnit")
    {
        if (!pstrValue)
        {
            pObject->resetValue_DirectionUnit();
        }
        else
        {
            pObject->setDirectionUnit(EnumAngularTypeImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"LatLongAngularUnit")
    {
        if (!pstrValue)
        {
            pObject->resetValue_LatLongAngularUnit();
        }
        else
        {
            pObject->setLatLongAngularUnit(EnumLatLongAngularTypeImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"ElevationUnit")
    {
        if (!pstrValue)
        {
            pObject->resetValue_ElevationUnit();
        }
        else
        {
            pObject->setElevationUnit(EnumElevationTypeImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    return bValueSet;
}

bool ImperialNode::getValue (const String& strMemberName, String& strValue)
{
    bool bValueSet = false;
    Imperial* pObject = dynamic_cast<Imperial*>(m_pObject);
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
    else if (strMemberName == L"AreaUnit")
    {
        if (pObject->hasValue_AreaUnit())
        {
            strValue = (EnumImpAreaImpl(pObject->getAreaUnit())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"LinearUnit")
    {
        if (pObject->hasValue_LinearUnit())
        {
            strValue = (EnumImpLinearImpl(pObject->getLinearUnit())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"VolumeUnit")
    {
        if (pObject->hasValue_VolumeUnit())
        {
            strValue = (EnumImpVolumeImpl(pObject->getVolumeUnit())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"TemperatureUnit")
    {
        if (pObject->hasValue_TemperatureUnit())
        {
            strValue = (EnumImpTemperatureImpl(pObject->getTemperatureUnit())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"PressureUnit")
    {
        if (pObject->hasValue_PressureUnit())
        {
            strValue = (EnumImpPressureImpl(pObject->getPressureUnit())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"DiameterUnit")
    {
        if (pObject->hasValue_DiameterUnit())
        {
            strValue = (EnumImpDiameterImpl(pObject->getDiameterUnit())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"WidthUnit")
    {
        if (pObject->hasValue_WidthUnit())
        {
            strValue = (EnumImpWidthImpl(pObject->getWidthUnit())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"HeightUnit")
    {
        if (pObject->hasValue_HeightUnit())
        {
            strValue = (EnumImpHeightImpl(pObject->getHeightUnit())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"VelocityUnit")
    {
        if (pObject->hasValue_VelocityUnit())
        {
            strValue = (EnumImpVelocityImpl(pObject->getVelocityUnit())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"FlowUnit")
    {
        if (pObject->hasValue_FlowUnit())
        {
            strValue = (EnumImpFlowImpl(pObject->getFlowUnit())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"AngularUnit")
    {
        if (pObject->hasValue_AngularUnit())
        {
            strValue = (EnumAngularTypeImpl(pObject->getAngularUnit())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"DirectionUnit")
    {
        if (pObject->hasValue_DirectionUnit())
        {
            strValue = (EnumAngularTypeImpl(pObject->getDirectionUnit())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"LatLongAngularUnit")
    {
        if (pObject->hasValue_LatLongAngularUnit())
        {
            strValue = (EnumLatLongAngularTypeImpl(pObject->getLatLongAngularUnit())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"ElevationUnit")
    {
        if (pObject->hasValue_ElevationUnit())
        {
            strValue = (EnumElevationTypeImpl(pObject->getElevationUnit())).toString();
            bValueSet = true;
        }
    }
    return bValueSet;
}

String ImperialNode::nodeName() const
{
    return L"Imperial";
}

TestObservationCollectionNode::TestObservationCollectionNode (Object& obj)
    : CollectionNode(&obj) 
{
    initialize(&obj);
}

TestObservationCollectionNode::TestObservationCollectionNode (Object* pObj)
    : CollectionNode (pObj) 
{
    initialize(pObj);
}

void TestObservationCollectionNode::initialize (Object* pObj)
{
    ILxNode* pVariant = NULL;
    m_pLxObj = dynamic_cast<TestObservationCollection*>(pObj);
    if (m_pLxObj == NULL)
        throw new Exception(Exception::Code::kFail, L"TestObservationCollectionNode :: Invalid Object.");
    int nNumChildren = m_pLxObj->count();
    m_arrChildren.reserve(nNumChildren);
    TestObservationCollectionIterator* pIterator = m_pLxObj->iterator();
    m_nNumChildren = 0;
    while (!pIterator->atEnd())
    {
        m_arrChildren.push_back(new TestObservationNode(pIterator->current()));
        pIterator->next();
    }
    pIterator->release();
}

String TestObservationCollectionNode::nodeName() const
{
    return L"TestObservationCollection";
}

ILxNode* TestObservationCollectionNode::findChild(const String& strChildId) const
{
    return NULL;
}
BeginRunoutStaNode::BeginRunoutStaNode (Object* pObj)
    : ObjectNode (pObj)
{
    ILxNode* pVariant = NULL;
    m_pLxObj = dynamic_cast<BeginRunoutSta*>(pObj);
    if (m_pLxObj == NULL)
        throw new Exception(Exception::Code::kFail, L"BeginRunoutStaNode :: Invalid Object.");
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

bool BeginRunoutStaNode::setValue (const String& strMemberName, const String* pstrValue)
{
    bool bValueSet = false;
    BeginRunoutSta* pObject = dynamic_cast<BeginRunoutSta*>(m_pObject);
    return bValueSet;
}

bool BeginRunoutStaNode::getValue (const String& strMemberName, String& strValue)
{
    bool bValueSet = false;
    BeginRunoutSta* pObject = dynamic_cast<BeginRunoutSta*>(m_pObject);
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

String BeginRunoutStaNode::nodeName() const
{
    return L"BeginRunoutSta";
}

FieldNoteCollectionNode::FieldNoteCollectionNode (Object& obj)
    : CollectionNode(&obj) 
{
    initialize(&obj);
}

FieldNoteCollectionNode::FieldNoteCollectionNode (Object* pObj)
    : CollectionNode (pObj) 
{
    initialize(pObj);
}

void FieldNoteCollectionNode::initialize (Object* pObj)
{
    ILxNode* pVariant = NULL;
    m_pLxObj = dynamic_cast<FieldNoteCollection*>(pObj);
    if (m_pLxObj == NULL)
        throw new Exception(Exception::Code::kFail, L"FieldNoteCollectionNode :: Invalid Object.");
    int nNumChildren = m_pLxObj->count();
    m_arrChildren.reserve(nNumChildren);
    FieldNoteCollectionIterator* pIterator = m_pLxObj->iterator();
    m_nNumChildren = 0;
    while (!pIterator->atEnd())
    {
        m_arrChildren.push_back(new FieldNoteNode(pIterator->current()));
        pIterator->next();
    }
    pIterator->release();
}

String FieldNoteCollectionNode::nodeName() const
{
    return L"FieldNoteCollection";
}

ILxNode* FieldNoteCollectionNode::findChild(const String& strChildId) const
{
    return NULL;
}
}; // namespace : LX
