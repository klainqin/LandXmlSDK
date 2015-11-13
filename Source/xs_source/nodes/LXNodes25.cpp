#include "stdafx.h"
#include "ObjectNode.h"
#include "CollectionNode.h"
#include "ValueNode.h"
#include "Exception.h"
#include "ValueTypeObjects.h"
#include "LXTypesImpl.h"
#include "LXNodes.h"
#include "ProfAlign.h"
#include "PVI.h"
#include "ParaCurve.h"
#include "UnsymParaCurve.h"
#include "CircCurve.h"
#include "FeatureCollection.h"
#include "BikeFacilities.h"
#include "CgPoint.h"
#include "FacesCollection.h"
#include "DrivewayDensity.h"

namespace LX
{

ProfAlign_INNER_COLLECTION_1_73Node::ProfAlign_INNER_COLLECTION_1_73Node (Object& obj)
    : CollectionNode(&obj) 
{
    initialize(&obj);
}

ProfAlign_INNER_COLLECTION_1_73Node::ProfAlign_INNER_COLLECTION_1_73Node (Object* pObj)
    : CollectionNode (pObj) 
{
    initialize(pObj);
}

void ProfAlign_INNER_COLLECTION_1_73Node::initialize (Object* pObj)
{
    ILxNode* pVariant = NULL;
    m_pLxObj = dynamic_cast<ObjectCollection*>(pObj);
    if (m_pLxObj == NULL)
        throw new Exception(Exception::Code::kFail, L"ProfAlign_INNER_COLLECTION_1_73Node :: Invalid Object.");
    int nNumChildren = m_pLxObj->count();
    m_arrChildren.reserve(nNumChildren);
    ObjectCollectionIterator* pIterator = m_pLxObj->iterator();
    m_nNumChildren = 0;
    while (!pIterator->atEnd())
    {
        if (dynamic_cast<PVI*>(pIterator->current()))
            m_arrChildren.push_back(new PVINode(pIterator->current()));
        if (dynamic_cast<ParaCurve*>(pIterator->current()))
            m_arrChildren.push_back(new ParaCurveNode(pIterator->current()));
        if (dynamic_cast<UnsymParaCurve*>(pIterator->current()))
            m_arrChildren.push_back(new UnsymParaCurveNode(pIterator->current()));
        if (dynamic_cast<CircCurve*>(pIterator->current()))
            m_arrChildren.push_back(new CircCurveNode(pIterator->current()));
        if (dynamic_cast<FeatureCollection*>(pIterator->current()))
            m_arrChildren.push_back(new FeatureCollectionNode(pIterator->current()));
        pIterator->next();
    }
    pIterator->release();
}

String ProfAlign_INNER_COLLECTION_1_73Node::nodeName() const
{
    return L"ProfAlign_INNER_COLLECTION_1_73";
}

ILxNode* ProfAlign_INNER_COLLECTION_1_73Node::findChild(const String& strChildId) const
{
    return NULL;
}
ProfAlignNode::ProfAlignNode (Object* pObj)
    : ObjectNode (pObj)
{
    ILxNode* pVariant = NULL;
    m_pLxObj = dynamic_cast<ProfAlign*>(pObj);
    if (m_pLxObj == NULL)
        throw new Exception(Exception::Code::kFail, L"ProfAlignNode :: Invalid Object.");
    int nNumChildren = 4;
    m_arrChildren.reserve(nNumChildren);
    m_nNumChildren = 0;
    m_arrChildren.push_back(new ProfAlign_INNER_COLLECTION_1_73Node(m_pLxObj->VertGeomList()));
    m_arrChildren.push_back(new ValueNode(this, L"Name", L"Name"));
    m_arrChildren.push_back(new ValueNode(this, L"Desc", L"Desc"));
    m_arrChildren.push_back(new ValueNode(this, L"State", L"State"));
}

bool ProfAlignNode::setValue (const String& strMemberName, const String* pstrValue)
{
    bool bValueSet = false;
    ProfAlign* pObject = dynamic_cast<ProfAlign*>(m_pObject);
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

bool ProfAlignNode::getValue (const String& strMemberName, String& strValue)
{
    bool bValueSet = false;
    ProfAlign* pObject = dynamic_cast<ProfAlign*>(m_pObject);
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

String ProfAlignNode::nodeName() const
{
    return L"ProfAlign";
}

BikeFacilitiesNode::BikeFacilitiesNode (Object* pObj)
    : ObjectNode (pObj)
{
    ILxNode* pVariant = NULL;
    m_pLxObj = dynamic_cast<BikeFacilities*>(pObj);
    if (m_pLxObj == NULL)
        throw new Exception(Exception::Code::kFail, L"BikeFacilitiesNode :: Invalid Object.");
    int nNumChildren = 4;
    m_arrChildren.reserve(nNumChildren);
    m_nNumChildren = 0;
    m_arrChildren.push_back(new ValueNode(this, L"StaStart", L"StaStart"));
    m_arrChildren.push_back(new ValueNode(this, L"StaEnd", L"StaEnd"));
    m_arrChildren.push_back(new ValueNode(this, L"Width", L"Width"));
    m_arrChildren.push_back(new ValueNode(this, L"SideofRoad", L"SideofRoad"));
}

bool BikeFacilitiesNode::setValue (const String& strMemberName, const String* pstrValue)
{
    bool bValueSet = false;
    BikeFacilities* pObject = dynamic_cast<BikeFacilities*>(m_pObject);
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

bool BikeFacilitiesNode::getValue (const String& strMemberName, String& strValue)
{
    bool bValueSet = false;
    BikeFacilities* pObject = dynamic_cast<BikeFacilities*>(m_pObject);
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

String BikeFacilitiesNode::nodeName() const
{
    return L"BikeFacilities";
}

CgPointNode::CgPointNode (Object* pObj)
    : ObjectNode (pObj)
{
    ILxNode* pVariant = NULL;
    m_pLxObj = dynamic_cast<CgPoint*>(pObj);
    if (m_pLxObj == NULL)
        throw new Exception(Exception::Code::kFail, L"CgPointNode :: Invalid Object.");
    DoubleCollection* pValObj = dynamic_cast<DoubleCollection*>(m_pLxObj);
    int nNumChildren = 26;
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
    m_arrChildren.push_back(new ValueNode(this, L"OID", L"OID"));
    m_arrChildren.push_back(new ValueNode(this, L"SurveyOrder", L"SurveyOrder"));
    m_arrChildren.push_back(new ValueNode(this, L"PntSurv", L"PntSurv"));
    m_arrChildren.push_back(new ValueNode(this, L"ZoneNumber", L"ZoneNumber"));
    m_arrChildren.push_back(new ValueNode(this, L"SurveyHorizontalOrder", L"SurveyHorizontalOrder"));
    m_arrChildren.push_back(new ValueNode(this, L"SurveyVerticalOrder", L"SurveyVerticalOrder"));
    m_arrChildren.push_back(new ValueNode(this, L"LocalUncertainity", L"LocalUncertainity"));
    m_arrChildren.push_back(new ValueNode(this, L"PositionalUncertainity", L"PositionalUncertainity"));
}

bool CgPointNode::setValue (const String& strMemberName, const String* pstrValue)
{
    bool bValueSet = false;
    CgPoint* pObject = dynamic_cast<CgPoint*>(m_pObject);
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
    if (strMemberName == L"SurveyOrder")
    {
        if (!pstrValue)
        {
            pObject->resetValue_SurveyOrder();
        }
        else
        {
            pObject->setSurveyOrder(StringObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"PntSurv")
    {
        if (!pstrValue)
        {
            pObject->resetValue_PntSurv();
        }
        else
        {
            pObject->setPntSurv(EnumSurvPntTypeImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"ZoneNumber")
    {
        if (!pstrValue)
        {
            pObject->resetValue_ZoneNumber();
        }
        else
        {
            pObject->setZoneNumber(UIntegerObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"SurveyHorizontalOrder")
    {
        if (!pstrValue)
        {
            pObject->resetValue_SurveyHorizontalOrder();
        }
        else
        {
            pObject->setSurveyHorizontalOrder(StringObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"SurveyVerticalOrder")
    {
        if (!pstrValue)
        {
            pObject->resetValue_SurveyVerticalOrder();
        }
        else
        {
            pObject->setSurveyVerticalOrder(StringObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
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

bool CgPointNode::getValue (const String& strMemberName, String& strValue)
{
    bool bValueSet = false;
    CgPoint* pObject = dynamic_cast<CgPoint*>(m_pObject);
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
    else if (strMemberName == L"OID")
    {
        if (pObject->hasValue_OID())
        {
            strValue = (StringObjectImpl(pObject->getOID())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"SurveyOrder")
    {
        if (pObject->hasValue_SurveyOrder())
        {
            strValue = (StringObjectImpl(pObject->getSurveyOrder())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"PntSurv")
    {
        if (pObject->hasValue_PntSurv())
        {
            strValue = (EnumSurvPntTypeImpl(pObject->getPntSurv())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"ZoneNumber")
    {
        if (pObject->hasValue_ZoneNumber())
        {
            strValue = (UIntegerObjectImpl(pObject->getZoneNumber())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"SurveyHorizontalOrder")
    {
        if (pObject->hasValue_SurveyHorizontalOrder())
        {
            strValue = (StringObjectImpl(pObject->getSurveyHorizontalOrder())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"SurveyVerticalOrder")
    {
        if (pObject->hasValue_SurveyVerticalOrder())
        {
            strValue = (StringObjectImpl(pObject->getSurveyVerticalOrder())).toString();
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

String CgPointNode::nodeName() const
{
    return L"CgPoint";
}

FacesCollectionNode::FacesCollectionNode (Object& obj)
    : CollectionNode(&obj) 
{
    initialize(&obj);
}

FacesCollectionNode::FacesCollectionNode (Object* pObj)
    : CollectionNode (pObj) 
{
    initialize(pObj);
}

void FacesCollectionNode::initialize (Object* pObj)
{
    ILxNode* pVariant = NULL;
    m_pLxObj = dynamic_cast<FacesCollection*>(pObj);
    if (m_pLxObj == NULL)
        throw new Exception(Exception::Code::kFail, L"FacesCollectionNode :: Invalid Object.");
    int nNumChildren = m_pLxObj->count();
    m_arrChildren.reserve(nNumChildren);
    FacesCollectionIterator* pIterator = m_pLxObj->iterator();
    m_nNumChildren = 0;
    while (!pIterator->atEnd())
    {
        m_arrChildren.push_back(new FacesNode(pIterator->current()));
        pIterator->next();
    }
    pIterator->release();
}

String FacesCollectionNode::nodeName() const
{
    return L"FacesCollection";
}

ILxNode* FacesCollectionNode::findChild(const String& strChildId) const
{
    // Grab string from child
    StringObjectImpl::Type idValue;
    ILxNode* pFoundNode = NULL;
    if (StringObjectImpl::parseString(strChildId.c_str(), strChildId.size(), idValue))
    {
        FacesCollectionIterator* pFoundIter = m_pLxObj->find(idValue);
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
DrivewayDensityNode::DrivewayDensityNode (Object* pObj)
    : ObjectNode (pObj)
{
    ILxNode* pVariant = NULL;
    m_pLxObj = dynamic_cast<DrivewayDensity*>(pObj);
    if (m_pLxObj == NULL)
        throw new Exception(Exception::Code::kFail, L"DrivewayDensityNode :: Invalid Object.");
    int nNumChildren = 3;
    m_arrChildren.reserve(nNumChildren);
    m_nNumChildren = 0;
    m_arrChildren.push_back(new ValueNode(this, L"StaStart", L"StaStart"));
    m_arrChildren.push_back(new ValueNode(this, L"StaEnd", L"StaEnd"));
    m_arrChildren.push_back(new ValueNode(this, L"Density", L"Density"));
}

bool DrivewayDensityNode::setValue (const String& strMemberName, const String* pstrValue)
{
    bool bValueSet = false;
    DrivewayDensity* pObject = dynamic_cast<DrivewayDensity*>(m_pObject);
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
    if (strMemberName == L"Density")
    {
        if (!pstrValue)
        {
            pObject->resetValue_Density();
        }
        else
        {
            pObject->setDensity(IntegerObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    return bValueSet;
}

bool DrivewayDensityNode::getValue (const String& strMemberName, String& strValue)
{
    bool bValueSet = false;
    DrivewayDensity* pObject = dynamic_cast<DrivewayDensity*>(m_pObject);
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
    else if (strMemberName == L"Density")
    {
        if (pObject->hasValue_Density())
        {
            strValue = (IntegerObjectImpl(pObject->getDensity())).toString();
            bValueSet = true;
        }
    }
    return bValueSet;
}

String DrivewayDensityNode::nodeName() const
{
    return L"DrivewayDensity";
}

}; // namespace : LX
