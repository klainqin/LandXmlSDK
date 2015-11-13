#include "stdafx.h"
#include "ObjectNode.h"
#include "CollectionNode.h"
#include "ValueNode.h"
#include "Exception.h"
#include "ValueTypeObjects.h"
#include "LXTypesImpl.h"
#include "LXNodes.h"
#include "Author.h"
#include "CrossSectSurf.h"
#include "PntList2D.h"
#include "FeatureCollection.h"
#include "HazardRatingCollection.h"
#include "FullSuperelev.h"
#include "Roadway.h"
#include "ClassificationCollection.h"
#include "LanesCollection.h"
#include "RoadsideCollection.h"
#include "SpeedsCollection.h"
#include "NoPassingZoneCollection.h"
#include "TrafficVolumeCollection.h"
#include "CrashDataCollection.h"
#include "DecisionSightDistanceCollection.h"
#include "BridgeElementCollection.h"
#include "PlanFeatureCollection.h"

namespace LX
{

AuthorNode::AuthorNode (Object* pObj)
    : ObjectNode (pObj)
{
    ILxNode* pVariant = NULL;
    m_pLxObj = dynamic_cast<Author*>(pObj);
    if (m_pLxObj == NULL)
        throw new Exception(Exception::Code::kFail, L"AuthorNode :: Invalid Object.");
    int nNumChildren = 5;
    m_arrChildren.reserve(nNumChildren);
    m_nNumChildren = 0;
    m_arrChildren.push_back(new ValueNode(this, L"CreatedBy", L"CreatedBy"));
    m_arrChildren.push_back(new ValueNode(this, L"CreatedByEmail", L"CreatedByEmail"));
    m_arrChildren.push_back(new ValueNode(this, L"Company", L"Company"));
    m_arrChildren.push_back(new ValueNode(this, L"CompanyURL", L"CompanyURL"));
    m_arrChildren.push_back(new ValueNode(this, L"TimeStamp", L"TimeStamp"));
}

bool AuthorNode::setValue (const String& strMemberName, const String* pstrValue)
{
    bool bValueSet = false;
    Author* pObject = dynamic_cast<Author*>(m_pObject);
    if (strMemberName == L"CreatedBy")
    {
        if (!pstrValue)
        {
            pObject->resetValue_CreatedBy();
        }
        else
        {
            pObject->setCreatedBy(StringObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"CreatedByEmail")
    {
        if (!pstrValue)
        {
            pObject->resetValue_CreatedByEmail();
        }
        else
        {
            pObject->setCreatedByEmail(StringObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"Company")
    {
        if (!pstrValue)
        {
            pObject->resetValue_Company();
        }
        else
        {
            pObject->setCompany(StringObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"CompanyURL")
    {
        if (!pstrValue)
        {
            pObject->resetValue_CompanyURL();
        }
        else
        {
            pObject->setCompanyURL(StringObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
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
    return bValueSet;
}

bool AuthorNode::getValue (const String& strMemberName, String& strValue)
{
    bool bValueSet = false;
    Author* pObject = dynamic_cast<Author*>(m_pObject);
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
    else if (strMemberName == L"CreatedBy")
    {
        if (pObject->hasValue_CreatedBy())
        {
            strValue = (StringObjectImpl(pObject->getCreatedBy())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"CreatedByEmail")
    {
        if (pObject->hasValue_CreatedByEmail())
        {
            strValue = (StringObjectImpl(pObject->getCreatedByEmail())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"Company")
    {
        if (pObject->hasValue_Company())
        {
            strValue = (StringObjectImpl(pObject->getCompany())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"CompanyURL")
    {
        if (pObject->hasValue_CompanyURL())
        {
            strValue = (StringObjectImpl(pObject->getCompanyURL())).toString();
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
    return bValueSet;
}

String AuthorNode::nodeName() const
{
    return L"Author";
}

CrossSectSurfNode::CrossSectSurfNode (Object* pObj)
    : ObjectNode (pObj)
{
    ILxNode* pVariant = NULL;
    m_pLxObj = dynamic_cast<CrossSectSurf*>(pObj);
    if (m_pLxObj == NULL)
        throw new Exception(Exception::Code::kFail, L"CrossSectSurfNode :: Invalid Object.");
    int nNumChildren = 5;
    m_arrChildren.reserve(nNumChildren);
    m_nNumChildren = 0;
    if (m_pLxObj->getPntList2D())
        m_arrChildren.push_back(new PntList2DNode(m_pLxObj->getPntList2D()));
    m_arrChildren.push_back(new FeatureCollectionNode(m_pLxObj->Feature()));
    m_arrChildren.push_back(new ValueNode(this, L"Name", L"Name"));
    m_arrChildren.push_back(new ValueNode(this, L"Desc", L"Desc"));
    m_arrChildren.push_back(new ValueNode(this, L"State", L"State"));
}

bool CrossSectSurfNode::setValue (const String& strMemberName, const String* pstrValue)
{
    bool bValueSet = false;
    CrossSectSurf* pObject = dynamic_cast<CrossSectSurf*>(m_pObject);
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

bool CrossSectSurfNode::getValue (const String& strMemberName, String& strValue)
{
    bool bValueSet = false;
    CrossSectSurf* pObject = dynamic_cast<CrossSectSurf*>(m_pObject);
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

String CrossSectSurfNode::nodeName() const
{
    return L"CrossSectSurf";
}

HazardRatingCollectionNode::HazardRatingCollectionNode (Object& obj)
    : CollectionNode(&obj) 
{
    initialize(&obj);
}

HazardRatingCollectionNode::HazardRatingCollectionNode (Object* pObj)
    : CollectionNode (pObj) 
{
    initialize(pObj);
}

void HazardRatingCollectionNode::initialize (Object* pObj)
{
    ILxNode* pVariant = NULL;
    m_pLxObj = dynamic_cast<HazardRatingCollection*>(pObj);
    if (m_pLxObj == NULL)
        throw new Exception(Exception::Code::kFail, L"HazardRatingCollectionNode :: Invalid Object.");
    int nNumChildren = m_pLxObj->count();
    m_arrChildren.reserve(nNumChildren);
    HazardRatingCollectionIterator* pIterator = m_pLxObj->iterator();
    m_nNumChildren = 0;
    while (!pIterator->atEnd())
    {
        m_arrChildren.push_back(new HazardRatingNode(pIterator->current()));
        pIterator->next();
    }
    pIterator->release();
}

String HazardRatingCollectionNode::nodeName() const
{
    return L"HazardRatingCollection";
}

ILxNode* HazardRatingCollectionNode::findChild(const String& strChildId) const
{
    return NULL;
}
FullSuperelevNode::FullSuperelevNode (Object* pObj)
    : ObjectNode (pObj)
{
    ILxNode* pVariant = NULL;
    m_pLxObj = dynamic_cast<FullSuperelev*>(pObj);
    if (m_pLxObj == NULL)
        throw new Exception(Exception::Code::kFail, L"FullSuperelevNode :: Invalid Object.");
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

bool FullSuperelevNode::setValue (const String& strMemberName, const String* pstrValue)
{
    bool bValueSet = false;
    FullSuperelev* pObject = dynamic_cast<FullSuperelev*>(m_pObject);
    return bValueSet;
}

bool FullSuperelevNode::getValue (const String& strMemberName, String& strValue)
{
    bool bValueSet = false;
    FullSuperelev* pObject = dynamic_cast<FullSuperelev*>(m_pObject);
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

String FullSuperelevNode::nodeName() const
{
    return L"FullSuperelev";
}

RoadwayNode::RoadwayNode (Object* pObj)
    : ObjectNode (pObj)
{
    ILxNode* pVariant = NULL;
    m_pLxObj = dynamic_cast<Roadway*>(pObj);
    if (m_pLxObj == NULL)
        throw new Exception(Exception::Code::kFail, L"RoadwayNode :: Invalid Object.");
    int nNumChildren = 20;
    m_arrChildren.reserve(nNumChildren);
    m_nNumChildren = 0;
    m_arrChildren.push_back(new ClassificationCollectionNode(m_pLxObj->Classification()));
    m_arrChildren.push_back(new LanesCollectionNode(m_pLxObj->Lanes()));
    m_arrChildren.push_back(new RoadsideCollectionNode(m_pLxObj->Roadside()));
    m_arrChildren.push_back(new SpeedsCollectionNode(m_pLxObj->Speeds()));
    m_arrChildren.push_back(new NoPassingZoneCollectionNode(m_pLxObj->NoPassingZone()));
    m_arrChildren.push_back(new TrafficVolumeCollectionNode(m_pLxObj->TrafficVolume()));
    m_arrChildren.push_back(new CrashDataCollectionNode(m_pLxObj->CrashData()));
    m_arrChildren.push_back(new DecisionSightDistanceCollectionNode(m_pLxObj->DecisionSightDistance()));
    m_arrChildren.push_back(new BridgeElementCollectionNode(m_pLxObj->BridgeElement()));
    m_arrChildren.push_back(new PlanFeatureCollectionNode(m_pLxObj->PlanFeature()));
    m_arrChildren.push_back(new FeatureCollectionNode(m_pLxObj->Feature()));
    m_arrChildren.push_back(new ValueNode(this, L"Name", L"Name"));
    m_arrChildren.push_back(new ValueNode(this, L"AlignmentRefs", L"AlignmentRefs"));
    m_arrChildren.push_back(new ValueNode(this, L"SurfaceRefs", L"SurfaceRefs"));
    m_arrChildren.push_back(new ValueNode(this, L"GradeModelRefs", L"GradeModelRefs"));
    m_arrChildren.push_back(new ValueNode(this, L"StaStart", L"StaStart"));
    m_arrChildren.push_back(new ValueNode(this, L"StaEnd", L"StaEnd"));
    m_arrChildren.push_back(new ValueNode(this, L"Desc", L"Desc"));
    m_arrChildren.push_back(new ValueNode(this, L"RoadTerrain", L"RoadTerrain"));
    m_arrChildren.push_back(new ValueNode(this, L"State", L"State"));
}

bool RoadwayNode::setValue (const String& strMemberName, const String* pstrValue)
{
    bool bValueSet = false;
    Roadway* pObject = dynamic_cast<Roadway*>(m_pObject);
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
    if (strMemberName == L"AlignmentRefs")
    {
        if (!pstrValue)
        {
            pObject->setAlignmentRefs(NULL);
        }
        else
        {
            pObject->setAlignmentRefs(StringCollectionImpl::parseString(pstrValue->c_str(), pstrValue->length()));
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
    if (strMemberName == L"GradeModelRefs")
    {
        if (!pstrValue)
        {
            pObject->setGradeModelRefs(NULL);
        }
        else
        {
            pObject->setGradeModelRefs(StringCollectionImpl::parseString(pstrValue->c_str(), pstrValue->length()));
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
    if (strMemberName == L"RoadTerrain")
    {
        if (!pstrValue)
        {
            pObject->resetValue_RoadTerrain();
        }
        else
        {
            pObject->setRoadTerrain(EnumRoadTerrainTypeImpl::parseString(pstrValue->c_str(), pstrValue->length()));
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

bool RoadwayNode::getValue (const String& strMemberName, String& strValue)
{
    bool bValueSet = false;
    Roadway* pObject = dynamic_cast<Roadway*>(m_pObject);
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
    else if (strMemberName == L"AlignmentRefs")
    {
        if (pObject->getAlignmentRefs())
        {
            strValue = pObject->getAlignmentRefs()->toString();
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
    else if (strMemberName == L"GradeModelRefs")
    {
        if (pObject->getGradeModelRefs())
        {
            strValue = pObject->getGradeModelRefs()->toString();
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
    else if (strMemberName == L"Desc")
    {
        if (pObject->hasValue_Desc())
        {
            strValue = (StringObjectImpl(pObject->getDesc())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"RoadTerrain")
    {
        if (pObject->hasValue_RoadTerrain())
        {
            strValue = (EnumRoadTerrainTypeImpl(pObject->getRoadTerrain())).toString();
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

String RoadwayNode::nodeName() const
{
    return L"Roadway";
}

}; // namespace : LX
