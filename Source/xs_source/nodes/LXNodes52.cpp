#include "stdafx.h"
#include "ObjectNode.h"
#include "CollectionNode.h"
#include "ValueNode.h"
#include "Exception.h"
#include "ValueTypeObjects.h"
#include "LXTypesImpl.h"
#include "LXNodes.h"
#include "IrregularLine.h"
#include "Start.h"
#include "End.h"
#include "PntList2D.h"
#include "PntList3D.h"
#include "FeatureCollection.h"
#include "Boundaries.h"
#include "BoundaryCollection.h"
#include "Metric.h"
#include "TrafficControlCollection.h"
#include "AdverseSECollection.h"

namespace LX
{

IrregularLineNode::IrregularLineNode (Object* pObj)
    : ObjectNode (pObj)
{
    ILxNode* pVariant = NULL;
    m_pLxObj = dynamic_cast<IrregularLine*>(pObj);
    if (m_pLxObj == NULL)
        throw new Exception(Exception::Code::kFail, L"IrregularLineNode :: Invalid Object.");
    int nNumChildren = 13;
    m_arrChildren.reserve(nNumChildren);
    m_nNumChildren = 0;
    if (m_pLxObj->getStart())
        m_arrChildren.push_back(new StartNode(m_pLxObj->getStart()));
    if (m_pLxObj->getEnd())
        m_arrChildren.push_back(new EndNode(m_pLxObj->getEnd()));
    if (dynamic_cast<PntList2D*>(m_pLxObj->getPntList()))
        if (m_pLxObj->getPntList())
            m_arrChildren.push_back(new PntList2DNode(m_pLxObj->getPntList()));
    if (dynamic_cast<PntList3D*>(m_pLxObj->getPntList()))
        if (m_pLxObj->getPntList())
            m_arrChildren.push_back(new PntList3DNode(m_pLxObj->getPntList()));
    m_arrChildren.push_back(new FeatureCollectionNode(m_pLxObj->Feature()));
    m_arrChildren.push_back(new ValueNode(this, L"Desc", L"Desc"));
    m_arrChildren.push_back(new ValueNode(this, L"Dir", L"Dir"));
    m_arrChildren.push_back(new ValueNode(this, L"Length", L"Length"));
    m_arrChildren.push_back(new ValueNode(this, L"Name", L"Name"));
    m_arrChildren.push_back(new ValueNode(this, L"StaStart", L"StaStart"));
    m_arrChildren.push_back(new ValueNode(this, L"State", L"State"));
    m_arrChildren.push_back(new ValueNode(this, L"OID", L"OID"));
    m_arrChildren.push_back(new ValueNode(this, L"Source", L"Source"));
    m_arrChildren.push_back(new ValueNode(this, L"Note", L"Note"));
}

bool IrregularLineNode::setValue (const String& strMemberName, const String* pstrValue)
{
    bool bValueSet = false;
    IrregularLine* pObject = dynamic_cast<IrregularLine*>(m_pObject);
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
    if (strMemberName == L"Dir")
    {
        if (!pstrValue)
        {
            pObject->resetValue_Dir();
        }
        else
        {
            pObject->setDir(DoubleObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"Length")
    {
        if (!pstrValue)
        {
            pObject->resetValue_Length();
        }
        else
        {
            pObject->setLength(DoubleObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
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
    if (strMemberName == L"Source")
    {
        if (!pstrValue)
        {
            pObject->resetValue_Source();
        }
        else
        {
            pObject->setSource(StringObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"Note")
    {
        if (!pstrValue)
        {
            pObject->resetValue_Note();
        }
        else
        {
            pObject->setNote(StringObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    return bValueSet;
}

bool IrregularLineNode::getValue (const String& strMemberName, String& strValue)
{
    bool bValueSet = false;
    IrregularLine* pObject = dynamic_cast<IrregularLine*>(m_pObject);
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
    else if (strMemberName == L"Dir")
    {
        if (pObject->hasValue_Dir())
        {
            strValue = (DoubleObjectImpl(pObject->getDir())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"Length")
    {
        if (pObject->hasValue_Length())
        {
            strValue = (DoubleObjectImpl(pObject->getLength())).toString();
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
    else if (strMemberName == L"StaStart")
    {
        if (pObject->hasValue_StaStart())
        {
            strValue = (DoubleObjectImpl(pObject->getStaStart())).toString();
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
    else if (strMemberName == L"OID")
    {
        if (pObject->hasValue_OID())
        {
            strValue = (StringObjectImpl(pObject->getOID())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"Source")
    {
        if (pObject->hasValue_Source())
        {
            strValue = (StringObjectImpl(pObject->getSource())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"Note")
    {
        if (pObject->hasValue_Note())
        {
            strValue = (StringObjectImpl(pObject->getNote())).toString();
            bValueSet = true;
        }
    }
    return bValueSet;
}

String IrregularLineNode::nodeName() const
{
    return L"IrregularLine";
}

BoundariesNode::BoundariesNode (Object* pObj)
    : ObjectNode (pObj)
{
    ILxNode* pVariant = NULL;
    m_pLxObj = dynamic_cast<Boundaries*>(pObj);
    if (m_pLxObj == NULL)
        throw new Exception(Exception::Code::kFail, L"BoundariesNode :: Invalid Object.");
    int nNumChildren = 2;
    m_arrChildren.reserve(nNumChildren);
    m_nNumChildren = 0;
    m_arrChildren.push_back(new BoundaryCollectionNode(m_pLxObj->Boundary()));
    m_arrChildren.push_back(new FeatureCollectionNode(m_pLxObj->Feature()));
}

bool BoundariesNode::setValue (const String& strMemberName, const String* pstrValue)
{
    bool bValueSet = false;
    Boundaries* pObject = dynamic_cast<Boundaries*>(m_pObject);
    return bValueSet;
}

bool BoundariesNode::getValue (const String& strMemberName, String& strValue)
{
    bool bValueSet = false;
    Boundaries* pObject = dynamic_cast<Boundaries*>(m_pObject);
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

String BoundariesNode::nodeName() const
{
    return L"Boundaries";
}

MetricNode::MetricNode (Object* pObj)
    : ObjectNode (pObj)
{
    ILxNode* pVariant = NULL;
    m_pLxObj = dynamic_cast<Metric*>(pObj);
    if (m_pLxObj == NULL)
        throw new Exception(Exception::Code::kFail, L"MetricNode :: Invalid Object.");
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

bool MetricNode::setValue (const String& strMemberName, const String* pstrValue)
{
    bool bValueSet = false;
    Metric* pObject = dynamic_cast<Metric*>(m_pObject);
    if (strMemberName == L"AreaUnit")
    {
        if (!pstrValue)
        {
            pObject->resetValue_AreaUnit();
        }
        else
        {
            pObject->setAreaUnit(EnumMetAreaImpl::parseString(pstrValue->c_str(), pstrValue->length()));
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
            pObject->setLinearUnit(EnumMetLinearImpl::parseString(pstrValue->c_str(), pstrValue->length()));
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
            pObject->setVolumeUnit(EnumMetVolumeImpl::parseString(pstrValue->c_str(), pstrValue->length()));
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
            pObject->setTemperatureUnit(EnumMetTemperatureImpl::parseString(pstrValue->c_str(), pstrValue->length()));
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
            pObject->setPressureUnit(EnumMetPressureImpl::parseString(pstrValue->c_str(), pstrValue->length()));
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
            pObject->setDiameterUnit(EnumMetDiameterImpl::parseString(pstrValue->c_str(), pstrValue->length()));
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
            pObject->setWidthUnit(EnumMetWidthImpl::parseString(pstrValue->c_str(), pstrValue->length()));
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
            pObject->setHeightUnit(EnumMetHeightImpl::parseString(pstrValue->c_str(), pstrValue->length()));
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
            pObject->setVelocityUnit(EnumMetVelocityImpl::parseString(pstrValue->c_str(), pstrValue->length()));
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
            pObject->setFlowUnit(EnumMetFlowImpl::parseString(pstrValue->c_str(), pstrValue->length()));
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

bool MetricNode::getValue (const String& strMemberName, String& strValue)
{
    bool bValueSet = false;
    Metric* pObject = dynamic_cast<Metric*>(m_pObject);
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
            strValue = (EnumMetAreaImpl(pObject->getAreaUnit())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"LinearUnit")
    {
        if (pObject->hasValue_LinearUnit())
        {
            strValue = (EnumMetLinearImpl(pObject->getLinearUnit())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"VolumeUnit")
    {
        if (pObject->hasValue_VolumeUnit())
        {
            strValue = (EnumMetVolumeImpl(pObject->getVolumeUnit())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"TemperatureUnit")
    {
        if (pObject->hasValue_TemperatureUnit())
        {
            strValue = (EnumMetTemperatureImpl(pObject->getTemperatureUnit())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"PressureUnit")
    {
        if (pObject->hasValue_PressureUnit())
        {
            strValue = (EnumMetPressureImpl(pObject->getPressureUnit())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"DiameterUnit")
    {
        if (pObject->hasValue_DiameterUnit())
        {
            strValue = (EnumMetDiameterImpl(pObject->getDiameterUnit())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"WidthUnit")
    {
        if (pObject->hasValue_WidthUnit())
        {
            strValue = (EnumMetWidthImpl(pObject->getWidthUnit())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"HeightUnit")
    {
        if (pObject->hasValue_HeightUnit())
        {
            strValue = (EnumMetHeightImpl(pObject->getHeightUnit())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"VelocityUnit")
    {
        if (pObject->hasValue_VelocityUnit())
        {
            strValue = (EnumMetVelocityImpl(pObject->getVelocityUnit())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"FlowUnit")
    {
        if (pObject->hasValue_FlowUnit())
        {
            strValue = (EnumMetFlowImpl(pObject->getFlowUnit())).toString();
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

String MetricNode::nodeName() const
{
    return L"Metric";
}

TrafficControlCollectionNode::TrafficControlCollectionNode (Object& obj)
    : CollectionNode(&obj) 
{
    initialize(&obj);
}

TrafficControlCollectionNode::TrafficControlCollectionNode (Object* pObj)
    : CollectionNode (pObj) 
{
    initialize(pObj);
}

void TrafficControlCollectionNode::initialize (Object* pObj)
{
    ILxNode* pVariant = NULL;
    m_pLxObj = dynamic_cast<TrafficControlCollection*>(pObj);
    if (m_pLxObj == NULL)
        throw new Exception(Exception::Code::kFail, L"TrafficControlCollectionNode :: Invalid Object.");
    int nNumChildren = m_pLxObj->count();
    m_arrChildren.reserve(nNumChildren);
    TrafficControlCollectionIterator* pIterator = m_pLxObj->iterator();
    m_nNumChildren = 0;
    while (!pIterator->atEnd())
    {
        m_arrChildren.push_back(new TrafficControlNode(pIterator->current()));
        pIterator->next();
    }
    pIterator->release();
}

String TrafficControlCollectionNode::nodeName() const
{
    return L"TrafficControlCollection";
}

ILxNode* TrafficControlCollectionNode::findChild(const String& strChildId) const
{
    return NULL;
}
AdverseSECollectionNode::AdverseSECollectionNode (Object& obj)
    : CollectionNode(&obj) 
{
    initialize(&obj);
}

AdverseSECollectionNode::AdverseSECollectionNode (Object* pObj)
    : CollectionNode (pObj) 
{
    initialize(pObj);
}

void AdverseSECollectionNode::initialize (Object* pObj)
{
    ILxNode* pVariant = NULL;
    m_pLxObj = dynamic_cast<AdverseSECollection*>(pObj);
    if (m_pLxObj == NULL)
        throw new Exception(Exception::Code::kFail, L"AdverseSECollectionNode :: Invalid Object.");
    int nNumChildren = m_pLxObj->count();
    m_arrChildren.reserve(nNumChildren);
    AdverseSECollectionIterator* pIterator = m_pLxObj->iterator();
    m_nNumChildren = 0;
    while (!pIterator->atEnd())
    {
        m_arrChildren.push_back(new AdverseSENode(pIterator->current()));
        pIterator->next();
    }
    pIterator->release();
}

String AdverseSECollectionNode::nodeName() const
{
    return L"AdverseSECollection";
}

ILxNode* AdverseSECollectionNode::findChild(const String& strChildId) const
{
    return NULL;
}
}; // namespace : LX
