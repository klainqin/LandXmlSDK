#include "stdafx.h"
#include "ObjectNode.h"
#include "CollectionNode.h"
#include "ValueNode.h"
#include "Exception.h"
#include "ValueTypeObjects.h"
#include "LXTypesImpl.h"
#include "LXNodes.h"
#include "LandXML.h"
#include "Units.h"
#include "CoordinateSystem.h"
#include "Project.h"
#include "Application.h"
#include "CgPointsCollection.h"
#include "AlignmentsCollection.h"
#include "AmendmentCollection.h"
#include "GradeModelCollection.h"
#include "MonumentsCollection.h"
#include "ParcelsCollection.h"
#include "PlanFeaturesCollection.h"
#include "PipeNetworksCollection.h"
#include "RoadwaysCollection.h"
#include "SurfacesCollection.h"
#include "SurveyCollection.h"
#include "FeatureDictionaryCollection.h"
#include "AmendmentItemCollection.h"
#include "BikeFacilitiesCollection.h"
#include "Faces.h"
#include "FCollection.h"
#include "FeatureCollection.h"
#include "DecisionSightDistance.h"

namespace LX
{

LandXMLNode::LandXMLNode (Object* pObj)
    : ObjectNode (pObj)
{
    ILxNode* pVariant = NULL;
    m_pLxObj = dynamic_cast<LandXML*>(pObj);
    if (m_pLxObj == NULL)
        throw new Exception(Exception::Code::kFail, L"LandXMLNode :: Invalid Object.");
    int nNumChildren = 24;
    m_arrChildren.reserve(nNumChildren);
    m_nNumChildren = 0;
    if (m_pLxObj->getUnits())
        m_arrChildren.push_back(new UnitsNode(m_pLxObj->getUnits()));
    if (m_pLxObj->getCoordinateSystem())
        m_arrChildren.push_back(new CoordinateSystemNode(m_pLxObj->getCoordinateSystem()));
    if (m_pLxObj->getProject())
        m_arrChildren.push_back(new ProjectNode(m_pLxObj->getProject()));
    if (m_pLxObj->getApplication())
        m_arrChildren.push_back(new ApplicationNode(m_pLxObj->getApplication()));
    m_arrChildren.push_back(new CgPointsCollectionNode(m_pLxObj->CgPoints()));
    m_arrChildren.push_back(new AlignmentsCollectionNode(m_pLxObj->Alignments()));
    m_arrChildren.push_back(new AmendmentCollectionNode(m_pLxObj->Amendment()));
    m_arrChildren.push_back(new GradeModelCollectionNode(m_pLxObj->GradeModel()));
    m_arrChildren.push_back(new MonumentsCollectionNode(m_pLxObj->Monuments()));
    m_arrChildren.push_back(new ParcelsCollectionNode(m_pLxObj->Parcels()));
    m_arrChildren.push_back(new PlanFeaturesCollectionNode(m_pLxObj->PlanFeatures()));
    m_arrChildren.push_back(new PipeNetworksCollectionNode(m_pLxObj->PipeNetworks()));
    m_arrChildren.push_back(new RoadwaysCollectionNode(m_pLxObj->Roadways()));
    m_arrChildren.push_back(new SurfacesCollectionNode(m_pLxObj->Surfaces()));
    m_arrChildren.push_back(new SurveyCollectionNode(m_pLxObj->Survey()));
    m_arrChildren.push_back(new FeatureDictionaryCollectionNode(m_pLxObj->FeatureDictionary()));
    m_arrChildren.push_back(new ValueNode(this, L"Date", L"Date"));
    m_arrChildren.push_back(new ValueNode(this, L"Time", L"Time"));
    m_arrChildren.push_back(new ValueNode(this, L"Version", L"Version"));
    m_arrChildren.push_back(new ValueNode(this, L"Language", L"Language"));
    m_arrChildren.push_back(new ValueNode(this, L"ReadOnly", L"ReadOnly"));
    m_arrChildren.push_back(new ValueNode(this, L"LandXMLId", L"LandXMLId"));
    m_arrChildren.push_back(new ValueNode(this, L"Crc", L"Crc"));
}

bool LandXMLNode::setValue (const String& strMemberName, const String* pstrValue)
{
    bool bValueSet = false;
    LandXML* pObject = dynamic_cast<LandXML*>(m_pObject);
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
    if (strMemberName == L"Time")
    {
        if (!pstrValue)
        {
            pObject->resetValue_Time();
        }
        else
        {
            pObject->setTime(StringObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"Version")
    {
        if (!pstrValue)
        {
            pObject->resetValue_Version();
        }
        else
        {
            pObject->setVersion(StringObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"Language")
    {
        if (!pstrValue)
        {
            pObject->resetValue_Language();
        }
        else
        {
            pObject->setLanguage(StringObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"ReadOnly")
    {
        if (!pstrValue)
        {
            pObject->resetValue_ReadOnly();
        }
        else
        {
            pObject->setReadOnly(BooleanObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"LandXMLId")
    {
        if (!pstrValue)
        {
            pObject->resetValue_LandXMLId();
        }
        else
        {
            pObject->setLandXMLId(IntegerObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"Crc")
    {
        if (!pstrValue)
        {
            pObject->resetValue_Crc();
        }
        else
        {
            pObject->setCrc(IntegerObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    return bValueSet;
}

bool LandXMLNode::getValue (const String& strMemberName, String& strValue)
{
    bool bValueSet = false;
    LandXML* pObject = dynamic_cast<LandXML*>(m_pObject);
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
    else if (strMemberName == L"Date")
    {
        if (pObject->hasValue_Date())
        {
            strValue = (StringObjectImpl(pObject->getDate())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"Time")
    {
        if (pObject->hasValue_Time())
        {
            strValue = (StringObjectImpl(pObject->getTime())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"Version")
    {
        if (pObject->hasValue_Version())
        {
            strValue = (StringObjectImpl(pObject->getVersion())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"Language")
    {
        if (pObject->hasValue_Language())
        {
            strValue = (StringObjectImpl(pObject->getLanguage())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"ReadOnly")
    {
        if (pObject->hasValue_ReadOnly())
        {
            strValue = (BooleanObjectImpl(pObject->getReadOnly())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"LandXMLId")
    {
        if (pObject->hasValue_LandXMLId())
        {
            strValue = (IntegerObjectImpl(pObject->getLandXMLId())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"Crc")
    {
        if (pObject->hasValue_Crc())
        {
            strValue = (IntegerObjectImpl(pObject->getCrc())).toString();
            bValueSet = true;
        }
    }
    return bValueSet;
}

String LandXMLNode::nodeName() const
{
    return L"LandXML";
}

AmendmentItemCollectionNode::AmendmentItemCollectionNode (Object& obj)
    : CollectionNode(&obj) 
{
    initialize(&obj);
}

AmendmentItemCollectionNode::AmendmentItemCollectionNode (Object* pObj)
    : CollectionNode (pObj) 
{
    initialize(pObj);
}

void AmendmentItemCollectionNode::initialize (Object* pObj)
{
    ILxNode* pVariant = NULL;
    m_pLxObj = dynamic_cast<AmendmentItemCollection*>(pObj);
    if (m_pLxObj == NULL)
        throw new Exception(Exception::Code::kFail, L"AmendmentItemCollectionNode :: Invalid Object.");
    int nNumChildren = m_pLxObj->count();
    m_arrChildren.reserve(nNumChildren);
    AmendmentItemCollectionIterator* pIterator = m_pLxObj->iterator();
    m_nNumChildren = 0;
    while (!pIterator->atEnd())
    {
        m_arrChildren.push_back(new AmendmentItemNode(pIterator->current()));
        pIterator->next();
    }
    pIterator->release();
}

String AmendmentItemCollectionNode::nodeName() const
{
    return L"AmendmentItemCollection";
}

ILxNode* AmendmentItemCollectionNode::findChild(const String& strChildId) const
{
    return NULL;
}
BikeFacilitiesCollectionNode::BikeFacilitiesCollectionNode (Object& obj)
    : CollectionNode(&obj) 
{
    initialize(&obj);
}

BikeFacilitiesCollectionNode::BikeFacilitiesCollectionNode (Object* pObj)
    : CollectionNode (pObj) 
{
    initialize(pObj);
}

void BikeFacilitiesCollectionNode::initialize (Object* pObj)
{
    ILxNode* pVariant = NULL;
    m_pLxObj = dynamic_cast<BikeFacilitiesCollection*>(pObj);
    if (m_pLxObj == NULL)
        throw new Exception(Exception::Code::kFail, L"BikeFacilitiesCollectionNode :: Invalid Object.");
    int nNumChildren = m_pLxObj->count();
    m_arrChildren.reserve(nNumChildren);
    BikeFacilitiesCollectionIterator* pIterator = m_pLxObj->iterator();
    m_nNumChildren = 0;
    while (!pIterator->atEnd())
    {
        m_arrChildren.push_back(new BikeFacilitiesNode(pIterator->current()));
        pIterator->next();
    }
    pIterator->release();
}

String BikeFacilitiesCollectionNode::nodeName() const
{
    return L"BikeFacilitiesCollection";
}

ILxNode* BikeFacilitiesCollectionNode::findChild(const String& strChildId) const
{
    return NULL;
}
FacesNode::FacesNode (Object* pObj)
    : ObjectNode (pObj)
{
    ILxNode* pVariant = NULL;
    m_pLxObj = dynamic_cast<Faces*>(pObj);
    if (m_pLxObj == NULL)
        throw new Exception(Exception::Code::kFail, L"FacesNode :: Invalid Object.");
    int nNumChildren = 5;
    m_arrChildren.reserve(nNumChildren);
    m_nNumChildren = 0;
    m_arrChildren.push_back(new FCollectionNode(m_pLxObj->F()));
    m_arrChildren.push_back(new FeatureCollectionNode(m_pLxObj->Feature()));
    m_arrChildren.push_back(new ValueNode(this, L"Desc", L"Desc"));
    m_arrChildren.push_back(new ValueNode(this, L"Name", L"Name"));
    m_arrChildren.push_back(new ValueNode(this, L"State", L"State"));
}

bool FacesNode::setValue (const String& strMemberName, const String* pstrValue)
{
    bool bValueSet = false;
    Faces* pObject = dynamic_cast<Faces*>(m_pObject);
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

bool FacesNode::getValue (const String& strMemberName, String& strValue)
{
    bool bValueSet = false;
    Faces* pObject = dynamic_cast<Faces*>(m_pObject);
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

String FacesNode::nodeName() const
{
    return L"Faces";
}

DecisionSightDistanceNode::DecisionSightDistanceNode (Object* pObj)
    : ObjectNode (pObj)
{
    ILxNode* pVariant = NULL;
    m_pLxObj = dynamic_cast<DecisionSightDistance*>(pObj);
    if (m_pLxObj == NULL)
        throw new Exception(Exception::Code::kFail, L"DecisionSightDistanceNode :: Invalid Object.");
    int nNumChildren = 2;
    m_arrChildren.reserve(nNumChildren);
    m_nNumChildren = 0;
    m_arrChildren.push_back(new ValueNode(this, L"Station", L"Station"));
    m_arrChildren.push_back(new ValueNode(this, L"Maneuver", L"Maneuver"));
}

bool DecisionSightDistanceNode::setValue (const String& strMemberName, const String* pstrValue)
{
    bool bValueSet = false;
    DecisionSightDistance* pObject = dynamic_cast<DecisionSightDistance*>(m_pObject);
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
    if (strMemberName == L"Maneuver")
    {
        if (!pstrValue)
        {
            pObject->resetValue_Maneuver();
        }
        else
        {
            pObject->setManeuver(EnumManeuverTypeImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    return bValueSet;
}

bool DecisionSightDistanceNode::getValue (const String& strMemberName, String& strValue)
{
    bool bValueSet = false;
    DecisionSightDistance* pObject = dynamic_cast<DecisionSightDistance*>(m_pObject);
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
    else if (strMemberName == L"Maneuver")
    {
        if (pObject->hasValue_Maneuver())
        {
            strValue = (EnumManeuverTypeImpl(pObject->getManeuver())).toString();
            bValueSet = true;
        }
    }
    return bValueSet;
}

String DecisionSightDistanceNode::nodeName() const
{
    return L"DecisionSightDistance";
}

}; // namespace : LX
