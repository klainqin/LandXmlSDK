#include "stdafx.h"
#include "ObjectNode.h"
#include "CollectionNode.h"
#include "ValueNode.h"
#include "Exception.h"
#include "ValueTypeObjects.h"
#include "LXTypesImpl.h"
#include "LXNodes.h"
#include "FullSuperStaCollection.h"
#include "TrafficVolumeCollection.h"
#include "FCollection.h"
#include "RawObservationType.h"
#include "TargetPoint.h"
#include "OffsetVals.h"
#include "FieldNoteCollection.h"
#include "FeatureCollection.h"
#include "AddressPointCollection.h"

namespace LX
{

FullSuperStaCollectionNode::FullSuperStaCollectionNode (Object& obj)
    : CollectionNode(&obj) 
{
    initialize(&obj);
}

FullSuperStaCollectionNode::FullSuperStaCollectionNode (Object* pObj)
    : CollectionNode (pObj) 
{
    initialize(pObj);
}

void FullSuperStaCollectionNode::initialize (Object* pObj)
{
    ILxNode* pVariant = NULL;
    m_pLxObj = dynamic_cast<FullSuperStaCollection*>(pObj);
    if (m_pLxObj == NULL)
        throw new Exception(Exception::Code::kFail, L"FullSuperStaCollectionNode :: Invalid Object.");
    int nNumChildren = m_pLxObj->count();
    m_arrChildren.reserve(nNumChildren);
    FullSuperStaCollectionIterator* pIterator = m_pLxObj->iterator();
    m_nNumChildren = 0;
    while (!pIterator->atEnd())
    {
        m_arrChildren.push_back(new FullSuperStaNode(pIterator->current()));
        pIterator->next();
    }
    pIterator->release();
}

String FullSuperStaCollectionNode::nodeName() const
{
    return L"FullSuperStaCollection";
}

ILxNode* FullSuperStaCollectionNode::findChild(const String& strChildId) const
{
    return NULL;
}
TrafficVolumeCollectionNode::TrafficVolumeCollectionNode (Object& obj)
    : CollectionNode(&obj) 
{
    initialize(&obj);
}

TrafficVolumeCollectionNode::TrafficVolumeCollectionNode (Object* pObj)
    : CollectionNode (pObj) 
{
    initialize(pObj);
}

void TrafficVolumeCollectionNode::initialize (Object* pObj)
{
    ILxNode* pVariant = NULL;
    m_pLxObj = dynamic_cast<TrafficVolumeCollection*>(pObj);
    if (m_pLxObj == NULL)
        throw new Exception(Exception::Code::kFail, L"TrafficVolumeCollectionNode :: Invalid Object.");
    int nNumChildren = m_pLxObj->count();
    m_arrChildren.reserve(nNumChildren);
    TrafficVolumeCollectionIterator* pIterator = m_pLxObj->iterator();
    m_nNumChildren = 0;
    while (!pIterator->atEnd())
    {
        m_arrChildren.push_back(new TrafficVolumeNode(pIterator->current()));
        pIterator->next();
    }
    pIterator->release();
}

String TrafficVolumeCollectionNode::nodeName() const
{
    return L"TrafficVolumeCollection";
}

ILxNode* TrafficVolumeCollectionNode::findChild(const String& strChildId) const
{
    return NULL;
}
FCollectionNode::FCollectionNode (Object& obj)
    : CollectionNode(&obj) 
{
    initialize(&obj);
}

FCollectionNode::FCollectionNode (Object* pObj)
    : CollectionNode (pObj) 
{
    initialize(pObj);
}

void FCollectionNode::initialize (Object* pObj)
{
    ILxNode* pVariant = NULL;
    m_pLxObj = dynamic_cast<FCollection*>(pObj);
    if (m_pLxObj == NULL)
        throw new Exception(Exception::Code::kFail, L"FCollectionNode :: Invalid Object.");
    int nNumChildren = m_pLxObj->count();
    m_arrChildren.reserve(nNumChildren);
    FCollectionIterator* pIterator = m_pLxObj->iterator();
    m_nNumChildren = 0;
    while (!pIterator->atEnd())
    {
        m_arrChildren.push_back(new FNode(pIterator->current()));
        pIterator->next();
    }
    pIterator->release();
}

String FCollectionNode::nodeName() const
{
    return L"FCollection";
}

ILxNode* FCollectionNode::findChild(const String& strChildId) const
{
    return NULL;
}
RawObservationTypeNode::RawObservationTypeNode (Object* pObj)
    : ObjectNode (pObj)
{
    ILxNode* pVariant = NULL;
    m_pLxObj = dynamic_cast<RawObservationType*>(pObj);
    if (m_pLxObj == NULL)
        throw new Exception(Exception::Code::kFail, L"RawObservationTypeNode :: Invalid Object.");
    int nNumChildren = 27;
    m_arrChildren.reserve(nNumChildren);
    m_nNumChildren = 0;
    if (m_pLxObj->getTargetPoint())
        m_arrChildren.push_back(new TargetPointNode(m_pLxObj->getTargetPoint()));
    if (m_pLxObj->getOffsetVals())
        m_arrChildren.push_back(new OffsetValsNode(m_pLxObj->getOffsetVals()));
    m_arrChildren.push_back(new FieldNoteCollectionNode(m_pLxObj->FieldNote()));
    m_arrChildren.push_back(new FeatureCollectionNode(m_pLxObj->Feature()));
    m_arrChildren.push_back(new ValueNode(this, L"SetupID", L"SetupID"));
    m_arrChildren.push_back(new ValueNode(this, L"TargetSetupID", L"TargetSetupID"));
    m_arrChildren.push_back(new ValueNode(this, L"SetID", L"SetID"));
    m_arrChildren.push_back(new ValueNode(this, L"Purpose", L"Purpose"));
    m_arrChildren.push_back(new ValueNode(this, L"TargetHeight", L"TargetHeight"));
    m_arrChildren.push_back(new ValueNode(this, L"HorizAngle", L"HorizAngle"));
    m_arrChildren.push_back(new ValueNode(this, L"SlopeDistance", L"SlopeDistance"));
    m_arrChildren.push_back(new ValueNode(this, L"ZenithAngle", L"ZenithAngle"));
    m_arrChildren.push_back(new ValueNode(this, L"HorizDistance", L"HorizDistance"));
    m_arrChildren.push_back(new ValueNode(this, L"VertDistance", L"VertDistance"));
    m_arrChildren.push_back(new ValueNode(this, L"Azimuth", L"Azimuth"));
    m_arrChildren.push_back(new ValueNode(this, L"Unused", L"Unused"));
    m_arrChildren.push_back(new ValueNode(this, L"DirectFace", L"DirectFace"));
    m_arrChildren.push_back(new ValueNode(this, L"CoordGeomRefs", L"CoordGeomRefs"));
    m_arrChildren.push_back(new ValueNode(this, L"TimeStamp", L"TimeStamp"));
    m_arrChildren.push_back(new ValueNode(this, L"AlignRef", L"AlignRef"));
    m_arrChildren.push_back(new ValueNode(this, L"AlignStationName", L"AlignStationName"));
    m_arrChildren.push_back(new ValueNode(this, L"AlignOffset", L"AlignOffset"));
    m_arrChildren.push_back(new ValueNode(this, L"UpperStadia", L"UpperStadia"));
    m_arrChildren.push_back(new ValueNode(this, L"Rod", L"Rod"));
    m_arrChildren.push_back(new ValueNode(this, L"LowerStadia", L"LowerStadia"));
    m_arrChildren.push_back(new ValueNode(this, L"CirclePositionSet", L"CirclePositionSet"));
    m_arrChildren.push_back(new ValueNode(this, L"Status", L"Status"));
}

bool RawObservationTypeNode::setValue (const String& strMemberName, const String* pstrValue)
{
    bool bValueSet = false;
    RawObservationType* pObject = dynamic_cast<RawObservationType*>(m_pObject);
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
    if (strMemberName == L"TargetSetupID")
    {
        if (!pstrValue)
        {
            pObject->resetValue_TargetSetupID();
        }
        else
        {
            pObject->setTargetSetupID(StringObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
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
    if (strMemberName == L"Purpose")
    {
        if (!pstrValue)
        {
            pObject->resetValue_Purpose();
        }
        else
        {
            pObject->setPurpose(EnumPurposeTypeImpl::parseString(pstrValue->c_str(), pstrValue->length()));
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
    if (strMemberName == L"HorizAngle")
    {
        if (!pstrValue)
        {
            pObject->resetValue_HorizAngle();
        }
        else
        {
            pObject->setHorizAngle(DoubleObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"SlopeDistance")
    {
        if (!pstrValue)
        {
            pObject->resetValue_SlopeDistance();
        }
        else
        {
            pObject->setSlopeDistance(DoubleObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"ZenithAngle")
    {
        if (!pstrValue)
        {
            pObject->resetValue_ZenithAngle();
        }
        else
        {
            pObject->setZenithAngle(DoubleObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"HorizDistance")
    {
        if (!pstrValue)
        {
            pObject->resetValue_HorizDistance();
        }
        else
        {
            pObject->setHorizDistance(DoubleObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"VertDistance")
    {
        if (!pstrValue)
        {
            pObject->resetValue_VertDistance();
        }
        else
        {
            pObject->setVertDistance(DoubleObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
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
    if (strMemberName == L"Unused")
    {
        if (!pstrValue)
        {
            pObject->resetValue_Unused();
        }
        else
        {
            pObject->setUnused(BooleanObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"DirectFace")
    {
        if (!pstrValue)
        {
            pObject->resetValue_DirectFace();
        }
        else
        {
            pObject->setDirectFace(BooleanObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
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
    if (strMemberName == L"AlignStationName")
    {
        if (!pstrValue)
        {
            pObject->resetValue_AlignStationName();
        }
        else
        {
            pObject->setAlignStationName(StringObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"AlignOffset")
    {
        if (!pstrValue)
        {
            pObject->resetValue_AlignOffset();
        }
        else
        {
            pObject->setAlignOffset(DoubleObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"UpperStadia")
    {
        if (!pstrValue)
        {
            pObject->resetValue_UpperStadia();
        }
        else
        {
            pObject->setUpperStadia(DoubleObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"Rod")
    {
        if (!pstrValue)
        {
            pObject->resetValue_Rod();
        }
        else
        {
            pObject->setRod(DoubleObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"LowerStadia")
    {
        if (!pstrValue)
        {
            pObject->resetValue_LowerStadia();
        }
        else
        {
            pObject->setLowerStadia(DoubleObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"CirclePositionSet")
    {
        if (!pstrValue)
        {
            pObject->resetValue_CirclePositionSet();
        }
        else
        {
            pObject->setCirclePositionSet(DoubleObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"Status")
    {
        if (!pstrValue)
        {
            pObject->resetValue_Status();
        }
        else
        {
            pObject->setStatus(EnumObservationStatusTypeImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    return bValueSet;
}

bool RawObservationTypeNode::getValue (const String& strMemberName, String& strValue)
{
    bool bValueSet = false;
    RawObservationType* pObject = dynamic_cast<RawObservationType*>(m_pObject);
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
    else if (strMemberName == L"TargetSetupID")
    {
        if (pObject->hasValue_TargetSetupID())
        {
            strValue = (StringObjectImpl(pObject->getTargetSetupID())).toString();
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
    else if (strMemberName == L"Purpose")
    {
        if (pObject->hasValue_Purpose())
        {
            strValue = (EnumPurposeTypeImpl(pObject->getPurpose())).toString();
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
    else if (strMemberName == L"HorizAngle")
    {
        if (pObject->hasValue_HorizAngle())
        {
            strValue = (DoubleObjectImpl(pObject->getHorizAngle())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"SlopeDistance")
    {
        if (pObject->hasValue_SlopeDistance())
        {
            strValue = (DoubleObjectImpl(pObject->getSlopeDistance())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"ZenithAngle")
    {
        if (pObject->hasValue_ZenithAngle())
        {
            strValue = (DoubleObjectImpl(pObject->getZenithAngle())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"HorizDistance")
    {
        if (pObject->hasValue_HorizDistance())
        {
            strValue = (DoubleObjectImpl(pObject->getHorizDistance())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"VertDistance")
    {
        if (pObject->hasValue_VertDistance())
        {
            strValue = (DoubleObjectImpl(pObject->getVertDistance())).toString();
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
    else if (strMemberName == L"Unused")
    {
        if (pObject->hasValue_Unused())
        {
            strValue = (BooleanObjectImpl(pObject->getUnused())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"DirectFace")
    {
        if (pObject->hasValue_DirectFace())
        {
            strValue = (BooleanObjectImpl(pObject->getDirectFace())).toString();
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
    else if (strMemberName == L"TimeStamp")
    {
        if (pObject->hasValue_TimeStamp())
        {
            strValue = (StringObjectImpl(pObject->getTimeStamp())).toString();
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
    else if (strMemberName == L"AlignStationName")
    {
        if (pObject->hasValue_AlignStationName())
        {
            strValue = (StringObjectImpl(pObject->getAlignStationName())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"AlignOffset")
    {
        if (pObject->hasValue_AlignOffset())
        {
            strValue = (DoubleObjectImpl(pObject->getAlignOffset())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"UpperStadia")
    {
        if (pObject->hasValue_UpperStadia())
        {
            strValue = (DoubleObjectImpl(pObject->getUpperStadia())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"Rod")
    {
        if (pObject->hasValue_Rod())
        {
            strValue = (DoubleObjectImpl(pObject->getRod())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"LowerStadia")
    {
        if (pObject->hasValue_LowerStadia())
        {
            strValue = (DoubleObjectImpl(pObject->getLowerStadia())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"CirclePositionSet")
    {
        if (pObject->hasValue_CirclePositionSet())
        {
            strValue = (DoubleObjectImpl(pObject->getCirclePositionSet())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"Status")
    {
        if (pObject->hasValue_Status())
        {
            strValue = (EnumObservationStatusTypeImpl(pObject->getStatus())).toString();
            bValueSet = true;
        }
    }
    return bValueSet;
}

String RawObservationTypeNode::nodeName() const
{
    return L"RawObservationType";
}

AddressPointCollectionNode::AddressPointCollectionNode (Object& obj)
    : CollectionNode(&obj) 
{
    initialize(&obj);
}

AddressPointCollectionNode::AddressPointCollectionNode (Object* pObj)
    : CollectionNode (pObj) 
{
    initialize(pObj);
}

void AddressPointCollectionNode::initialize (Object* pObj)
{
    ILxNode* pVariant = NULL;
    m_pLxObj = dynamic_cast<AddressPointCollection*>(pObj);
    if (m_pLxObj == NULL)
        throw new Exception(Exception::Code::kFail, L"AddressPointCollectionNode :: Invalid Object.");
    int nNumChildren = m_pLxObj->count();
    m_arrChildren.reserve(nNumChildren);
    AddressPointCollectionIterator* pIterator = m_pLxObj->iterator();
    m_nNumChildren = 0;
    while (!pIterator->atEnd())
    {
        m_arrChildren.push_back(new AddressPointNode(pIterator->current()));
        pIterator->next();
    }
    pIterator->release();
}

String AddressPointCollectionNode::nodeName() const
{
    return L"AddressPointCollection";
}

ILxNode* AddressPointCollectionNode::findChild(const String& strChildId) const
{
    // Grab string from child
    StringObjectImpl::Type idValue;
    ILxNode* pFoundNode = NULL;
    if (StringObjectImpl::parseString(strChildId.c_str(), strChildId.size(), idValue))
    {
        AddressPointCollectionIterator* pFoundIter = m_pLxObj->find(idValue);
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
