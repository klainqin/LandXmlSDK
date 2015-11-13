#include "stdafx.h"
#include "ObjectNode.h"
#include "CollectionNode.h"
#include "ValueNode.h"
#include "Exception.h"
#include "ValueTypeObjects.h"
#include "LXTypesImpl.h"
#include "LXNodes.h"
#include "BoundaryCollection.h"
#include "Watershed.h"
#include "PntList2D.h"
#include "PntList3D.h"
#include "OutletCollection.h"
#include "FeatureCollection.h"
#include "GPSPosition.h"
#include "TargetPoint.h"
#include "GPSQCInfoLevel1.h"
#include "GPSQCInfoLevel2.h"
#include "FieldNoteCollection.h"
#include "CrossSectPnt.h"
#include "InletStruct.h"

namespace LX
{

BoundaryCollectionNode::BoundaryCollectionNode (Object& obj)
    : CollectionNode(&obj) 
{
    initialize(&obj);
}

BoundaryCollectionNode::BoundaryCollectionNode (Object* pObj)
    : CollectionNode (pObj) 
{
    initialize(pObj);
}

void BoundaryCollectionNode::initialize (Object* pObj)
{
    ILxNode* pVariant = NULL;
    m_pLxObj = dynamic_cast<BoundaryCollection*>(pObj);
    if (m_pLxObj == NULL)
        throw new Exception(Exception::Code::kFail, L"BoundaryCollectionNode :: Invalid Object.");
    int nNumChildren = m_pLxObj->count();
    m_arrChildren.reserve(nNumChildren);
    BoundaryCollectionIterator* pIterator = m_pLxObj->iterator();
    m_nNumChildren = 0;
    while (!pIterator->atEnd())
    {
        m_arrChildren.push_back(new BoundaryNode(pIterator->current()));
        pIterator->next();
    }
    pIterator->release();
}

String BoundaryCollectionNode::nodeName() const
{
    return L"BoundaryCollection";
}

ILxNode* BoundaryCollectionNode::findChild(const String& strChildId) const
{
    // Grab string from child
    StringObjectImpl::Type idValue;
    ILxNode* pFoundNode = NULL;
    if (StringObjectImpl::parseString(strChildId.c_str(), strChildId.size(), idValue))
    {
        BoundaryCollectionIterator* pFoundIter = m_pLxObj->find(idValue);
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
WatershedNode::WatershedNode (Object* pObj)
    : ObjectNode (pObj)
{
    ILxNode* pVariant = NULL;
    m_pLxObj = dynamic_cast<Watershed*>(pObj);
    if (m_pLxObj == NULL)
        throw new Exception(Exception::Code::kFail, L"WatershedNode :: Invalid Object.");
    int nNumChildren = 6;
    m_arrChildren.reserve(nNumChildren);
    m_nNumChildren = 0;
    if (dynamic_cast<PntList2D*>(m_pLxObj->getPntList()))
        if (m_pLxObj->getPntList())
            m_arrChildren.push_back(new PntList2DNode(m_pLxObj->getPntList()));
    if (dynamic_cast<PntList3D*>(m_pLxObj->getPntList()))
        if (m_pLxObj->getPntList())
            m_arrChildren.push_back(new PntList3DNode(m_pLxObj->getPntList()));
    m_arrChildren.push_back(new OutletCollectionNode(m_pLxObj->Outlet()));
    m_arrChildren.push_back(new FeatureCollectionNode(m_pLxObj->Feature()));
    m_arrChildren.push_back(new ValueNode(this, L"Name", L"Name"));
    m_arrChildren.push_back(new ValueNode(this, L"Area", L"Area"));
    m_arrChildren.push_back(new ValueNode(this, L"Desc", L"Desc"));
}

bool WatershedNode::setValue (const String& strMemberName, const String* pstrValue)
{
    bool bValueSet = false;
    Watershed* pObject = dynamic_cast<Watershed*>(m_pObject);
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

bool WatershedNode::getValue (const String& strMemberName, String& strValue)
{
    bool bValueSet = false;
    Watershed* pObject = dynamic_cast<Watershed*>(m_pObject);
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
    else if (strMemberName == L"Area")
    {
        if (pObject->hasValue_Area())
        {
            strValue = (DoubleObjectImpl(pObject->getArea())).toString();
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

String WatershedNode::nodeName() const
{
    return L"Watershed";
}

GPSPositionNode::GPSPositionNode (Object* pObj)
    : ObjectNode (pObj)
{
    ILxNode* pVariant = NULL;
    m_pLxObj = dynamic_cast<GPSPosition*>(pObj);
    if (m_pLxObj == NULL)
        throw new Exception(Exception::Code::kFail, L"GPSPositionNode :: Invalid Object.");
    int nNumChildren = 13;
    m_arrChildren.reserve(nNumChildren);
    m_nNumChildren = 0;
    if (m_pLxObj->getTargetPoint())
        m_arrChildren.push_back(new TargetPointNode(m_pLxObj->getTargetPoint()));
    if (m_pLxObj->getGPSQCInfoLevel1())
        m_arrChildren.push_back(new GPSQCInfoLevel1Node(m_pLxObj->getGPSQCInfoLevel1()));
    if (m_pLxObj->getGPSQCInfoLevel2())
        m_arrChildren.push_back(new GPSQCInfoLevel2Node(m_pLxObj->getGPSQCInfoLevel2()));
    m_arrChildren.push_back(new FieldNoteCollectionNode(m_pLxObj->FieldNote()));
    m_arrChildren.push_back(new FeatureCollectionNode(m_pLxObj->Feature()));
    m_arrChildren.push_back(new ValueNode(this, L"SetupID", L"SetupID"));
    m_arrChildren.push_back(new ValueNode(this, L"SetID", L"SetID"));
    m_arrChildren.push_back(new ValueNode(this, L"WgsHeight", L"WgsHeight"));
    m_arrChildren.push_back(new ValueNode(this, L"WgsLatitude", L"WgsLatitude"));
    m_arrChildren.push_back(new ValueNode(this, L"WgsLongitude", L"WgsLongitude"));
    m_arrChildren.push_back(new ValueNode(this, L"Purpose", L"Purpose"));
    m_arrChildren.push_back(new ValueNode(this, L"CoordGeomRefs", L"CoordGeomRefs"));
    m_arrChildren.push_back(new ValueNode(this, L"PntRef", L"PntRef"));
}

bool GPSPositionNode::setValue (const String& strMemberName, const String* pstrValue)
{
    bool bValueSet = false;
    GPSPosition* pObject = dynamic_cast<GPSPosition*>(m_pObject);
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
    if (strMemberName == L"SetID")
    {
        if (!pstrValue)
        {
            pObject->resetValue_SetID();
        }
        else
        {
            pObject->setSetID(StringObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"WgsHeight")
    {
        if (!pstrValue)
        {
            pObject->resetValue_WgsHeight();
        }
        else
        {
            pObject->setWgsHeight(DoubleObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"WgsLatitude")
    {
        if (!pstrValue)
        {
            pObject->resetValue_WgsLatitude();
        }
        else
        {
            pObject->setWgsLatitude(DoubleObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"WgsLongitude")
    {
        if (!pstrValue)
        {
            pObject->resetValue_WgsLongitude();
        }
        else
        {
            pObject->setWgsLongitude(DoubleObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
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
            pObject->setPurpose(StringObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"CoordGeomRefs")
    {
        if (!pstrValue)
        {
            pObject->setCoordGeomRefs(NULL);
        }
        else
        {
            pObject->setCoordGeomRefs(StringCollectionImpl::parseString(pstrValue->c_str(), pstrValue->length()));
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
    return bValueSet;
}

bool GPSPositionNode::getValue (const String& strMemberName, String& strValue)
{
    bool bValueSet = false;
    GPSPosition* pObject = dynamic_cast<GPSPosition*>(m_pObject);
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
    else if (strMemberName == L"SetupID")
    {
        if (pObject->hasValue_SetupID())
        {
            strValue = (StringObjectImpl(pObject->getSetupID())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"SetID")
    {
        if (pObject->hasValue_SetID())
        {
            strValue = (StringObjectImpl(pObject->getSetID())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"WgsHeight")
    {
        if (pObject->hasValue_WgsHeight())
        {
            strValue = (DoubleObjectImpl(pObject->getWgsHeight())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"WgsLatitude")
    {
        if (pObject->hasValue_WgsLatitude())
        {
            strValue = (DoubleObjectImpl(pObject->getWgsLatitude())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"WgsLongitude")
    {
        if (pObject->hasValue_WgsLongitude())
        {
            strValue = (DoubleObjectImpl(pObject->getWgsLongitude())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"Purpose")
    {
        if (pObject->hasValue_Purpose())
        {
            strValue = (StringObjectImpl(pObject->getPurpose())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"CoordGeomRefs")
    {
        if (pObject->getCoordGeomRefs())
        {
            strValue = pObject->getCoordGeomRefs()->toString();
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
    return bValueSet;
}

String GPSPositionNode::nodeName() const
{
    return L"GPSPosition";
}

CrossSectPntNode::CrossSectPntNode (Object* pObj)
    : ObjectNode (pObj)
{
    ILxNode* pVariant = NULL;
    m_pLxObj = dynamic_cast<CrossSectPnt*>(pObj);
    if (m_pLxObj == NULL)
        throw new Exception(Exception::Code::kFail, L"CrossSectPntNode :: Invalid Object.");
    DoubleCollection* pValObj = dynamic_cast<DoubleCollection*>(m_pLxObj);
    int nNumChildren = 25;
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
    m_arrChildren.push_back(new ValueNode(this, L"DataFormat", L"DataFormat"));
    m_arrChildren.push_back(new ValueNode(this, L"AlignRef", L"AlignRef"));
    m_arrChildren.push_back(new ValueNode(this, L"AlignRefStation", L"AlignRefStation"));
    m_arrChildren.push_back(new ValueNode(this, L"PlanFeatureRef", L"PlanFeatureRef"));
    m_arrChildren.push_back(new ValueNode(this, L"PlanFeatureRefStation", L"PlanFeatureRefStation"));
    m_arrChildren.push_back(new ValueNode(this, L"ParcelRef", L"ParcelRef"));
    m_arrChildren.push_back(new ValueNode(this, L"ParcelRefStation", L"ParcelRefStation"));
}

bool CrossSectPntNode::setValue (const String& strMemberName, const String* pstrValue)
{
    bool bValueSet = false;
    CrossSectPnt* pObject = dynamic_cast<CrossSectPnt*>(m_pObject);
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
    if (strMemberName == L"DataFormat")
    {
        if (!pstrValue)
        {
            pObject->resetValue_DataFormat();
        }
        else
        {
            pObject->setDataFormat(EnumDataFormatTypeImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"AlignRef")
    {
        if (!pstrValue)
        {
            pObject->resetValue_AlignRef();
        }
        else
        {
            pObject->setAlignRef(StringObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"AlignRefStation")
    {
        if (!pstrValue)
        {
            pObject->resetValue_AlignRefStation();
        }
        else
        {
            pObject->setAlignRefStation(DoubleObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"PlanFeatureRef")
    {
        if (!pstrValue)
        {
            pObject->resetValue_PlanFeatureRef();
        }
        else
        {
            pObject->setPlanFeatureRef(StringObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"PlanFeatureRefStation")
    {
        if (!pstrValue)
        {
            pObject->resetValue_PlanFeatureRefStation();
        }
        else
        {
            pObject->setPlanFeatureRefStation(DoubleObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"ParcelRef")
    {
        if (!pstrValue)
        {
            pObject->resetValue_ParcelRef();
        }
        else
        {
            pObject->setParcelRef(StringObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"ParcelRefStation")
    {
        if (!pstrValue)
        {
            pObject->resetValue_ParcelRefStation();
        }
        else
        {
            pObject->setParcelRefStation(DoubleObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    return bValueSet;
}

bool CrossSectPntNode::getValue (const String& strMemberName, String& strValue)
{
    bool bValueSet = false;
    CrossSectPnt* pObject = dynamic_cast<CrossSectPnt*>(m_pObject);
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
    else if (strMemberName == L"DataFormat")
    {
        if (pObject->hasValue_DataFormat())
        {
            strValue = (EnumDataFormatTypeImpl(pObject->getDataFormat())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"AlignRef")
    {
        if (pObject->hasValue_AlignRef())
        {
            strValue = (StringObjectImpl(pObject->getAlignRef())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"AlignRefStation")
    {
        if (pObject->hasValue_AlignRefStation())
        {
            strValue = (DoubleObjectImpl(pObject->getAlignRefStation())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"PlanFeatureRef")
    {
        if (pObject->hasValue_PlanFeatureRef())
        {
            strValue = (StringObjectImpl(pObject->getPlanFeatureRef())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"PlanFeatureRefStation")
    {
        if (pObject->hasValue_PlanFeatureRefStation())
        {
            strValue = (DoubleObjectImpl(pObject->getPlanFeatureRefStation())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"ParcelRef")
    {
        if (pObject->hasValue_ParcelRef())
        {
            strValue = (StringObjectImpl(pObject->getParcelRef())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"ParcelRefStation")
    {
        if (pObject->hasValue_ParcelRefStation())
        {
            strValue = (DoubleObjectImpl(pObject->getParcelRefStation())).toString();
            bValueSet = true;
        }
    }
    return bValueSet;
}

String CrossSectPntNode::nodeName() const
{
    return L"CrossSectPnt";
}

InletStructNode::InletStructNode (Object* pObj)
    : ObjectNode (pObj)
{
    ILxNode* pVariant = NULL;
    m_pLxObj = dynamic_cast<InletStruct*>(pObj);
    if (m_pLxObj == NULL)
        throw new Exception(Exception::Code::kFail, L"InletStructNode :: Invalid Object.");
    int nNumChildren = 1;
    m_arrChildren.reserve(nNumChildren);
    m_nNumChildren = 0;
    m_arrChildren.push_back(new FeatureCollectionNode(m_pLxObj->Feature()));
}

bool InletStructNode::setValue (const String& strMemberName, const String* pstrValue)
{
    bool bValueSet = false;
    InletStruct* pObject = dynamic_cast<InletStruct*>(m_pObject);
    return bValueSet;
}

bool InletStructNode::getValue (const String& strMemberName, String& strValue)
{
    bool bValueSet = false;
    InletStruct* pObject = dynamic_cast<InletStruct*>(m_pObject);
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

String InletStructNode::nodeName() const
{
    return L"InletStruct";
}

}; // namespace : LX
