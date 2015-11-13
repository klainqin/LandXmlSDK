#include "stdafx.h"
#include "ObjectNode.h"
#include "CollectionNode.h"
#include "ValueNode.h"
#include "Exception.h"
#include "ValueTypeObjects.h"
#include "LXTypesImpl.h"
#include "LXNodes.h"
#include "RoadName.h"
#include "Zone.h"
#include "ZoneWidthCollection.h"
#include "ZoneSlopeCollection.h"
#include "ZoneCutFillCollection.h"
#include "ZoneMaterialCollection.h"
#include "ZoneCrossSectStructureCollection.h"
#include "FeatureCollection.h"
#include "Backsight.h"
#include "BacksightPoint.h"
#include "FieldNoteCollection.h"
#include "SurveyorCertificateCollection.h"
#include "GradeSurface.h"
#include "Start.h"
#include "ZonesCollection.h"

namespace LX
{

RoadNameNode::RoadNameNode (Object* pObj)
    : ObjectNode (pObj)
{
    ILxNode* pVariant = NULL;
    m_pLxObj = dynamic_cast<RoadName*>(pObj);
    if (m_pLxObj == NULL)
        throw new Exception(Exception::Code::kFail, L"RoadNameNode :: Invalid Object.");
    int nNumChildren = 5;
    m_arrChildren.reserve(nNumChildren);
    m_nNumChildren = 0;
    m_arrChildren.push_back(new ValueNode(this, L"RoadNameType", L"RoadNameType"));
    m_arrChildren.push_back(new ValueNode(this, L"RoadName", L"RoadName"));
    m_arrChildren.push_back(new ValueNode(this, L"RoadNameSuffix", L"RoadNameSuffix"));
    m_arrChildren.push_back(new ValueNode(this, L"RoadType", L"RoadType"));
    m_arrChildren.push_back(new ValueNode(this, L"PclRef", L"PclRef"));
}

bool RoadNameNode::setValue (const String& strMemberName, const String* pstrValue)
{
    bool bValueSet = false;
    RoadName* pObject = dynamic_cast<RoadName*>(m_pObject);
    if (strMemberName == L"RoadNameType")
    {
        if (!pstrValue)
        {
            pObject->resetValue_RoadNameType();
        }
        else
        {
            pObject->setRoadNameType(StringObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"RoadName")
    {
        if (!pstrValue)
        {
            pObject->resetValue_RoadName();
        }
        else
        {
            pObject->setRoadName(StringObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"RoadNameSuffix")
    {
        if (!pstrValue)
        {
            pObject->resetValue_RoadNameSuffix();
        }
        else
        {
            pObject->setRoadNameSuffix(StringObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"RoadType")
    {
        if (!pstrValue)
        {
            pObject->resetValue_RoadType();
        }
        else
        {
            pObject->setRoadType(StringObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"PclRef")
    {
        if (!pstrValue)
        {
            pObject->setPclRef(NULL);
        }
        else
        {
            pObject->setPclRef(StringCollectionImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    return bValueSet;
}

bool RoadNameNode::getValue (const String& strMemberName, String& strValue)
{
    bool bValueSet = false;
    RoadName* pObject = dynamic_cast<RoadName*>(m_pObject);
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
    else if (strMemberName == L"RoadNameType")
    {
        if (pObject->hasValue_RoadNameType())
        {
            strValue = (StringObjectImpl(pObject->getRoadNameType())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"RoadName")
    {
        if (pObject->hasValue_RoadName())
        {
            strValue = (StringObjectImpl(pObject->getRoadName())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"RoadNameSuffix")
    {
        if (pObject->hasValue_RoadNameSuffix())
        {
            strValue = (StringObjectImpl(pObject->getRoadNameSuffix())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"RoadType")
    {
        if (pObject->hasValue_RoadType())
        {
            strValue = (StringObjectImpl(pObject->getRoadType())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"PclRef")
    {
        if (pObject->getPclRef())
        {
            strValue = pObject->getPclRef()->toString();
            bValueSet = true;
        }
    }
    return bValueSet;
}

String RoadNameNode::nodeName() const
{
    return L"RoadName";
}

ZoneNode::ZoneNode (Object* pObj)
    : ObjectNode (pObj)
{
    ILxNode* pVariant = NULL;
    m_pLxObj = dynamic_cast<Zone*>(pObj);
    if (m_pLxObj == NULL)
        throw new Exception(Exception::Code::kFail, L"ZoneNode :: Invalid Object.");
    int nNumChildren = 19;
    m_arrChildren.reserve(nNumChildren);
    m_nNumChildren = 0;
    m_arrChildren.push_back(new ZoneWidthCollectionNode(m_pLxObj->ZoneWidth()));
    m_arrChildren.push_back(new ZoneSlopeCollectionNode(m_pLxObj->ZoneSlope()));
    m_arrChildren.push_back(new ZoneCutFillCollectionNode(m_pLxObj->ZoneCutFill()));
    m_arrChildren.push_back(new ZoneMaterialCollectionNode(m_pLxObj->ZoneMaterial()));
    m_arrChildren.push_back(new ZoneCrossSectStructureCollectionNode(m_pLxObj->ZoneCrossSectStructure()));
    m_arrChildren.push_back(new FeatureCollectionNode(m_pLxObj->Feature()));
    m_arrChildren.push_back(new ValueNode(this, L"Desc", L"Desc"));
    m_arrChildren.push_back(new ValueNode(this, L"Name", L"Name"));
    m_arrChildren.push_back(new ValueNode(this, L"State", L"State"));
    m_arrChildren.push_back(new ValueNode(this, L"Priority", L"Priority"));
    m_arrChildren.push_back(new ValueNode(this, L"Category", L"Category"));
    m_arrChildren.push_back(new ValueNode(this, L"StaStart", L"StaStart"));
    m_arrChildren.push_back(new ValueNode(this, L"StaEnd", L"StaEnd"));
    m_arrChildren.push_back(new ValueNode(this, L"StartWidth", L"StartWidth"));
    m_arrChildren.push_back(new ValueNode(this, L"StartVertValue", L"StartVertValue"));
    m_arrChildren.push_back(new ValueNode(this, L"StartVertType", L"StartVertType"));
    m_arrChildren.push_back(new ValueNode(this, L"EndWidth", L"EndWidth"));
    m_arrChildren.push_back(new ValueNode(this, L"EndVertValue", L"EndVertValue"));
    m_arrChildren.push_back(new ValueNode(this, L"EndVertType", L"EndVertType"));
}

bool ZoneNode::setValue (const String& strMemberName, const String* pstrValue)
{
    bool bValueSet = false;
    Zone* pObject = dynamic_cast<Zone*>(m_pObject);
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
    if (strMemberName == L"Priority")
    {
        if (!pstrValue)
        {
            pObject->resetValue_Priority();
        }
        else
        {
            pObject->setPriority(IntegerObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"Category")
    {
        if (!pstrValue)
        {
            pObject->resetValue_Category();
        }
        else
        {
            pObject->setCategory(EnumZoneCategoryTypeImpl::parseString(pstrValue->c_str(), pstrValue->length()));
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
    if (strMemberName == L"StartWidth")
    {
        if (!pstrValue)
        {
            pObject->resetValue_StartWidth();
        }
        else
        {
            pObject->setStartWidth(DoubleObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"StartVertValue")
    {
        if (!pstrValue)
        {
            pObject->resetValue_StartVertValue();
        }
        else
        {
            pObject->setStartVertValue(DoubleObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"StartVertType")
    {
        if (!pstrValue)
        {
            pObject->resetValue_StartVertType();
        }
        else
        {
            pObject->setStartVertType(EnumZoneVertTypeImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"EndWidth")
    {
        if (!pstrValue)
        {
            pObject->resetValue_EndWidth();
        }
        else
        {
            pObject->setEndWidth(DoubleObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"EndVertValue")
    {
        if (!pstrValue)
        {
            pObject->resetValue_EndVertValue();
        }
        else
        {
            pObject->setEndVertValue(DoubleObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"EndVertType")
    {
        if (!pstrValue)
        {
            pObject->resetValue_EndVertType();
        }
        else
        {
            pObject->setEndVertType(EnumZoneVertTypeImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    return bValueSet;
}

bool ZoneNode::getValue (const String& strMemberName, String& strValue)
{
    bool bValueSet = false;
    Zone* pObject = dynamic_cast<Zone*>(m_pObject);
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
    else if (strMemberName == L"Priority")
    {
        if (pObject->hasValue_Priority())
        {
            strValue = (IntegerObjectImpl(pObject->getPriority())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"Category")
    {
        if (pObject->hasValue_Category())
        {
            strValue = (EnumZoneCategoryTypeImpl(pObject->getCategory())).toString();
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
    else if (strMemberName == L"StaEnd")
    {
        if (pObject->hasValue_StaEnd())
        {
            strValue = (DoubleObjectImpl(pObject->getStaEnd())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"StartWidth")
    {
        if (pObject->hasValue_StartWidth())
        {
            strValue = (DoubleObjectImpl(pObject->getStartWidth())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"StartVertValue")
    {
        if (pObject->hasValue_StartVertValue())
        {
            strValue = (DoubleObjectImpl(pObject->getStartVertValue())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"StartVertType")
    {
        if (pObject->hasValue_StartVertType())
        {
            strValue = (EnumZoneVertTypeImpl(pObject->getStartVertType())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"EndWidth")
    {
        if (pObject->hasValue_EndWidth())
        {
            strValue = (DoubleObjectImpl(pObject->getEndWidth())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"EndVertValue")
    {
        if (pObject->hasValue_EndVertValue())
        {
            strValue = (DoubleObjectImpl(pObject->getEndVertValue())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"EndVertType")
    {
        if (pObject->hasValue_EndVertType())
        {
            strValue = (EnumZoneVertTypeImpl(pObject->getEndVertType())).toString();
            bValueSet = true;
        }
    }
    return bValueSet;
}

String ZoneNode::nodeName() const
{
    return L"Zone";
}

BacksightNode::BacksightNode (Object* pObj)
    : ObjectNode (pObj)
{
    ILxNode* pVariant = NULL;
    m_pLxObj = dynamic_cast<Backsight*>(pObj);
    if (m_pLxObj == NULL)
        throw new Exception(Exception::Code::kFail, L"BacksightNode :: Invalid Object.");
    int nNumChildren = 8;
    m_arrChildren.reserve(nNumChildren);
    m_nNumChildren = 0;
    if (m_pLxObj->getBacksightPoint())
        m_arrChildren.push_back(new BacksightPointNode(m_pLxObj->getBacksightPoint()));
    m_arrChildren.push_back(new FieldNoteCollectionNode(m_pLxObj->FieldNote()));
    m_arrChildren.push_back(new FeatureCollectionNode(m_pLxObj->Feature()));
    m_arrChildren.push_back(new ValueNode(this, L"Id", L"Id"));
    m_arrChildren.push_back(new ValueNode(this, L"Azimuth", L"Azimuth"));
    m_arrChildren.push_back(new ValueNode(this, L"TargetHeight", L"TargetHeight"));
    m_arrChildren.push_back(new ValueNode(this, L"Circle", L"Circle"));
    m_arrChildren.push_back(new ValueNode(this, L"SetupID", L"SetupID"));
}

bool BacksightNode::setValue (const String& strMemberName, const String* pstrValue)
{
    bool bValueSet = false;
    Backsight* pObject = dynamic_cast<Backsight*>(m_pObject);
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
    if (strMemberName == L"Azimuth")
    {
        if (!pstrValue)
        {
            pObject->resetValue_Azimuth();
        }
        else
        {
            pObject->setAzimuth(DoubleObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"TargetHeight")
    {
        if (!pstrValue)
        {
            pObject->resetValue_TargetHeight();
        }
        else
        {
            pObject->setTargetHeight(DoubleObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"Circle")
    {
        if (!pstrValue)
        {
            pObject->resetValue_Circle();
        }
        else
        {
            pObject->setCircle(DoubleObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
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
    return bValueSet;
}

bool BacksightNode::getValue (const String& strMemberName, String& strValue)
{
    bool bValueSet = false;
    Backsight* pObject = dynamic_cast<Backsight*>(m_pObject);
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
    else if (strMemberName == L"Azimuth")
    {
        if (pObject->hasValue_Azimuth())
        {
            strValue = (DoubleObjectImpl(pObject->getAzimuth())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"TargetHeight")
    {
        if (pObject->hasValue_TargetHeight())
        {
            strValue = (DoubleObjectImpl(pObject->getTargetHeight())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"Circle")
    {
        if (pObject->hasValue_Circle())
        {
            strValue = (DoubleObjectImpl(pObject->getCircle())).toString();
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
    return bValueSet;
}

String BacksightNode::nodeName() const
{
    return L"Backsight";
}

SurveyorCertificateCollectionNode::SurveyorCertificateCollectionNode (Object& obj)
    : CollectionNode(&obj) 
{
    initialize(&obj);
}

SurveyorCertificateCollectionNode::SurveyorCertificateCollectionNode (Object* pObj)
    : CollectionNode (pObj) 
{
    initialize(pObj);
}

void SurveyorCertificateCollectionNode::initialize (Object* pObj)
{
    ILxNode* pVariant = NULL;
    m_pLxObj = dynamic_cast<SurveyorCertificateCollection*>(pObj);
    if (m_pLxObj == NULL)
        throw new Exception(Exception::Code::kFail, L"SurveyorCertificateCollectionNode :: Invalid Object.");
    int nNumChildren = m_pLxObj->count();
    m_arrChildren.reserve(nNumChildren);
    SurveyorCertificateCollectionIterator* pIterator = m_pLxObj->iterator();
    m_nNumChildren = 0;
    while (!pIterator->atEnd())
    {
        m_arrChildren.push_back(new SurveyorCertificateNode(pIterator->current()));
        pIterator->next();
    }
    pIterator->release();
}

String SurveyorCertificateCollectionNode::nodeName() const
{
    return L"SurveyorCertificateCollection";
}

ILxNode* SurveyorCertificateCollectionNode::findChild(const String& strChildId) const
{
    // Grab string from child
    StringObjectImpl::Type idValue;
    ILxNode* pFoundNode = NULL;
    if (StringObjectImpl::parseString(strChildId.c_str(), strChildId.size(), idValue))
    {
        SurveyorCertificateCollectionIterator* pFoundIter = m_pLxObj->find(idValue);
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
GradeSurfaceNode::GradeSurfaceNode (Object* pObj)
    : ObjectNode (pObj)
{
    ILxNode* pVariant = NULL;
    m_pLxObj = dynamic_cast<GradeSurface*>(pObj);
    if (m_pLxObj == NULL)
        throw new Exception(Exception::Code::kFail, L"GradeSurfaceNode :: Invalid Object.");
    int nNumChildren = 12;
    m_arrChildren.reserve(nNumChildren);
    m_nNumChildren = 0;
    if (m_pLxObj->getStart())
        m_arrChildren.push_back(new StartNode(m_pLxObj->getStart()));
    m_arrChildren.push_back(new ZonesCollectionNode(m_pLxObj->Zones()));
    m_arrChildren.push_back(new FeatureCollectionNode(m_pLxObj->Feature()));
    m_arrChildren.push_back(new ValueNode(this, L"AlignmentRef", L"AlignmentRef"));
    m_arrChildren.push_back(new ValueNode(this, L"StationAlignmentRef", L"StationAlignmentRef"));
    m_arrChildren.push_back(new ValueNode(this, L"SurfaceType", L"SurfaceType"));
    m_arrChildren.push_back(new ValueNode(this, L"SurfaceRef", L"SurfaceRef"));
    m_arrChildren.push_back(new ValueNode(this, L"SurfaceRefs", L"SurfaceRefs"));
    m_arrChildren.push_back(new ValueNode(this, L"CgPointRefs", L"CgPointRefs"));
    m_arrChildren.push_back(new ValueNode(this, L"Name", L"Name"));
    m_arrChildren.push_back(new ValueNode(this, L"Desc", L"Desc"));
    m_arrChildren.push_back(new ValueNode(this, L"State", L"State"));
}

bool GradeSurfaceNode::setValue (const String& strMemberName, const String* pstrValue)
{
    bool bValueSet = false;
    GradeSurface* pObject = dynamic_cast<GradeSurface*>(m_pObject);
    if (strMemberName == L"AlignmentRef")
    {
        if (!pstrValue)
        {
            pObject->resetValue_AlignmentRef();
        }
        else
        {
            pObject->setAlignmentRef(StringObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"StationAlignmentRef")
    {
        if (!pstrValue)
        {
            pObject->resetValue_StationAlignmentRef();
        }
        else
        {
            pObject->setStationAlignmentRef(StringObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"SurfaceType")
    {
        if (!pstrValue)
        {
            pObject->resetValue_SurfaceType();
        }
        else
        {
            pObject->setSurfaceType(EnumZoneSurfaceTypeImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"SurfaceRef")
    {
        if (!pstrValue)
        {
            pObject->resetValue_SurfaceRef();
        }
        else
        {
            pObject->setSurfaceRef(StringObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"SurfaceRefs")
    {
        if (!pstrValue)
        {
            pObject->setSurfaceRefs(NULL);
        }
        else
        {
            pObject->setSurfaceRefs(StringCollectionImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"CgPointRefs")
    {
        if (!pstrValue)
        {
            pObject->setCgPointRefs(NULL);
        }
        else
        {
            pObject->setCgPointRefs(StringCollectionImpl::parseString(pstrValue->c_str(), pstrValue->length()));
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

bool GradeSurfaceNode::getValue (const String& strMemberName, String& strValue)
{
    bool bValueSet = false;
    GradeSurface* pObject = dynamic_cast<GradeSurface*>(m_pObject);
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
    else if (strMemberName == L"AlignmentRef")
    {
        if (pObject->hasValue_AlignmentRef())
        {
            strValue = (StringObjectImpl(pObject->getAlignmentRef())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"StationAlignmentRef")
    {
        if (pObject->hasValue_StationAlignmentRef())
        {
            strValue = (StringObjectImpl(pObject->getStationAlignmentRef())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"SurfaceType")
    {
        if (pObject->hasValue_SurfaceType())
        {
            strValue = (EnumZoneSurfaceTypeImpl(pObject->getSurfaceType())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"SurfaceRef")
    {
        if (pObject->hasValue_SurfaceRef())
        {
            strValue = (StringObjectImpl(pObject->getSurfaceRef())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"SurfaceRefs")
    {
        if (pObject->getSurfaceRefs())
        {
            strValue = pObject->getSurfaceRefs()->toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"CgPointRefs")
    {
        if (pObject->getCgPointRefs())
        {
            strValue = pObject->getCgPointRefs()->toString();
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

String GradeSurfaceNode::nodeName() const
{
    return L"GradeSurface";
}

}; // namespace : LX
