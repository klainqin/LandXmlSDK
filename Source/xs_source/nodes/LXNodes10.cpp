#include "stdafx.h"
#include "ObjectNode.h"
#include "CollectionNode.h"
#include "ValueNode.h"
#include "Exception.h"
#include "ValueTypeObjects.h"
#include "LXTypesImpl.h"
#include "LXNodes.h"
#include "Center.h"
#include "ZoneWidthCollection.h"
#include "LocationAddress.h"
#include "ComplexNameCollection.h"
#include "RoadNameCollection.h"
#include "AdministrativeAreaCollection.h"
#include "AddressPointCollection.h"
#include "Intersections.h"
#include "Pipes.h"
#include "Units.h"
#include "PipeCollection.h"
#include "FeatureCollection.h"

namespace LX
{

CenterNode::CenterNode (Object* pObj)
    : ObjectNode (pObj)
{
    ILxNode* pVariant = NULL;
    m_pLxObj = dynamic_cast<Center*>(pObj);
    if (m_pLxObj == NULL)
        throw new Exception(Exception::Code::kFail, L"CenterNode :: Invalid Object.");
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

bool CenterNode::setValue (const String& strMemberName, const String* pstrValue)
{
    bool bValueSet = false;
    Center* pObject = dynamic_cast<Center*>(m_pObject);
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

bool CenterNode::getValue (const String& strMemberName, String& strValue)
{
    bool bValueSet = false;
    Center* pObject = dynamic_cast<Center*>(m_pObject);
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

String CenterNode::nodeName() const
{
    return L"Center";
}

ZoneWidthCollectionNode::ZoneWidthCollectionNode (Object& obj)
    : CollectionNode(&obj) 
{
    initialize(&obj);
}

ZoneWidthCollectionNode::ZoneWidthCollectionNode (Object* pObj)
    : CollectionNode (pObj) 
{
    initialize(pObj);
}

void ZoneWidthCollectionNode::initialize (Object* pObj)
{
    ILxNode* pVariant = NULL;
    m_pLxObj = dynamic_cast<ZoneWidthCollection*>(pObj);
    if (m_pLxObj == NULL)
        throw new Exception(Exception::Code::kFail, L"ZoneWidthCollectionNode :: Invalid Object.");
    int nNumChildren = m_pLxObj->count();
    m_arrChildren.reserve(nNumChildren);
    ZoneWidthCollectionIterator* pIterator = m_pLxObj->iterator();
    m_nNumChildren = 0;
    while (!pIterator->atEnd())
    {
        m_arrChildren.push_back(new ZoneWidthNode(pIterator->current()));
        pIterator->next();
    }
    pIterator->release();
}

String ZoneWidthCollectionNode::nodeName() const
{
    return L"ZoneWidthCollection";
}

ILxNode* ZoneWidthCollectionNode::findChild(const String& strChildId) const
{
    return NULL;
}
LocationAddressNode::LocationAddressNode (Object* pObj)
    : ObjectNode (pObj)
{
    ILxNode* pVariant = NULL;
    m_pLxObj = dynamic_cast<LocationAddress*>(pObj);
    if (m_pLxObj == NULL)
        throw new Exception(Exception::Code::kFail, L"LocationAddressNode :: Invalid Object.");
    int nNumChildren = 13;
    m_arrChildren.reserve(nNumChildren);
    m_nNumChildren = 0;
    m_arrChildren.push_back(new ComplexNameCollectionNode(m_pLxObj->ComplexName()));
    m_arrChildren.push_back(new RoadNameCollectionNode(m_pLxObj->RoadName()));
    m_arrChildren.push_back(new AdministrativeAreaCollectionNode(m_pLxObj->AdministrativeArea()));
    m_arrChildren.push_back(new AddressPointCollectionNode(m_pLxObj->AddressPoint()));
    m_arrChildren.push_back(new ValueNode(this, L"AddressType", L"AddressType"));
    m_arrChildren.push_back(new ValueNode(this, L"FlatType", L"FlatType"));
    m_arrChildren.push_back(new ValueNode(this, L"FlatNumber", L"FlatNumber"));
    m_arrChildren.push_back(new ValueNode(this, L"FloorLevelType", L"FloorLevelType"));
    m_arrChildren.push_back(new ValueNode(this, L"FloorLevelNumber", L"FloorLevelNumber"));
    m_arrChildren.push_back(new ValueNode(this, L"NumberFirst", L"NumberFirst"));
    m_arrChildren.push_back(new ValueNode(this, L"NumberSuffixFirst", L"NumberSuffixFirst"));
    m_arrChildren.push_back(new ValueNode(this, L"NumberLast", L"NumberLast"));
    m_arrChildren.push_back(new ValueNode(this, L"NumberSuffixLast", L"NumberSuffixLast"));
}

bool LocationAddressNode::setValue (const String& strMemberName, const String* pstrValue)
{
    bool bValueSet = false;
    LocationAddress* pObject = dynamic_cast<LocationAddress*>(m_pObject);
    if (strMemberName == L"AddressType")
    {
        if (!pstrValue)
        {
            pObject->resetValue_AddressType();
        }
        else
        {
            pObject->setAddressType(StringObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"FlatType")
    {
        if (!pstrValue)
        {
            pObject->resetValue_FlatType();
        }
        else
        {
            pObject->setFlatType(StringObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"FlatNumber")
    {
        if (!pstrValue)
        {
            pObject->resetValue_FlatNumber();
        }
        else
        {
            pObject->setFlatNumber(StringObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"FloorLevelType")
    {
        if (!pstrValue)
        {
            pObject->resetValue_FloorLevelType();
        }
        else
        {
            pObject->setFloorLevelType(StringObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"FloorLevelNumber")
    {
        if (!pstrValue)
        {
            pObject->resetValue_FloorLevelNumber();
        }
        else
        {
            pObject->setFloorLevelNumber(StringObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"NumberFirst")
    {
        if (!pstrValue)
        {
            pObject->resetValue_NumberFirst();
        }
        else
        {
            pObject->setNumberFirst(IntegerObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"NumberSuffixFirst")
    {
        if (!pstrValue)
        {
            pObject->resetValue_NumberSuffixFirst();
        }
        else
        {
            pObject->setNumberSuffixFirst(StringObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"NumberLast")
    {
        if (!pstrValue)
        {
            pObject->resetValue_NumberLast();
        }
        else
        {
            pObject->setNumberLast(IntegerObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"NumberSuffixLast")
    {
        if (!pstrValue)
        {
            pObject->resetValue_NumberSuffixLast();
        }
        else
        {
            pObject->setNumberSuffixLast(StringObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    return bValueSet;
}

bool LocationAddressNode::getValue (const String& strMemberName, String& strValue)
{
    bool bValueSet = false;
    LocationAddress* pObject = dynamic_cast<LocationAddress*>(m_pObject);
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
    else if (strMemberName == L"AddressType")
    {
        if (pObject->hasValue_AddressType())
        {
            strValue = (StringObjectImpl(pObject->getAddressType())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"FlatType")
    {
        if (pObject->hasValue_FlatType())
        {
            strValue = (StringObjectImpl(pObject->getFlatType())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"FlatNumber")
    {
        if (pObject->hasValue_FlatNumber())
        {
            strValue = (StringObjectImpl(pObject->getFlatNumber())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"FloorLevelType")
    {
        if (pObject->hasValue_FloorLevelType())
        {
            strValue = (StringObjectImpl(pObject->getFloorLevelType())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"FloorLevelNumber")
    {
        if (pObject->hasValue_FloorLevelNumber())
        {
            strValue = (StringObjectImpl(pObject->getFloorLevelNumber())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"NumberFirst")
    {
        if (pObject->hasValue_NumberFirst())
        {
            strValue = (IntegerObjectImpl(pObject->getNumberFirst())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"NumberSuffixFirst")
    {
        if (pObject->hasValue_NumberSuffixFirst())
        {
            strValue = (StringObjectImpl(pObject->getNumberSuffixFirst())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"NumberLast")
    {
        if (pObject->hasValue_NumberLast())
        {
            strValue = (IntegerObjectImpl(pObject->getNumberLast())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"NumberSuffixLast")
    {
        if (pObject->hasValue_NumberSuffixLast())
        {
            strValue = (StringObjectImpl(pObject->getNumberSuffixLast())).toString();
            bValueSet = true;
        }
    }
    return bValueSet;
}

String LocationAddressNode::nodeName() const
{
    return L"LocationAddress";
}

IntersectionsNode::IntersectionsNode (Object* pObj)
    : ObjectNode (pObj)
{
    ILxNode* pVariant = NULL;
    m_pLxObj = dynamic_cast<Intersections*>(pObj);
    if (m_pLxObj == NULL)
        throw new Exception(Exception::Code::kFail, L"IntersectionsNode :: Invalid Object.");
    int nNumChildren = 0;
    m_arrChildren.reserve(nNumChildren);
    m_nNumChildren = 0;
}

bool IntersectionsNode::setValue (const String& strMemberName, const String* pstrValue)
{
    bool bValueSet = false;
    Intersections* pObject = dynamic_cast<Intersections*>(m_pObject);
    return bValueSet;
}

bool IntersectionsNode::getValue (const String& strMemberName, String& strValue)
{
    bool bValueSet = false;
    Intersections* pObject = dynamic_cast<Intersections*>(m_pObject);
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

String IntersectionsNode::nodeName() const
{
    return L"Intersections";
}

PipesNode::PipesNode (Object* pObj)
    : ObjectNode (pObj)
{
    ILxNode* pVariant = NULL;
    m_pLxObj = dynamic_cast<Pipes*>(pObj);
    if (m_pLxObj == NULL)
        throw new Exception(Exception::Code::kFail, L"PipesNode :: Invalid Object.");
    int nNumChildren = 3;
    m_arrChildren.reserve(nNumChildren);
    m_nNumChildren = 0;
    if (m_pLxObj->getUnits())
        m_arrChildren.push_back(new UnitsNode(m_pLxObj->getUnits()));
    m_arrChildren.push_back(new PipeCollectionNode(m_pLxObj->Pipe()));
    m_arrChildren.push_back(new FeatureCollectionNode(m_pLxObj->Feature()));
}

bool PipesNode::setValue (const String& strMemberName, const String* pstrValue)
{
    bool bValueSet = false;
    Pipes* pObject = dynamic_cast<Pipes*>(m_pObject);
    return bValueSet;
}

bool PipesNode::getValue (const String& strMemberName, String& strValue)
{
    bool bValueSet = false;
    Pipes* pObject = dynamic_cast<Pipes*>(m_pObject);
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

String PipesNode::nodeName() const
{
    return L"Pipes";
}

}; // namespace : LX
