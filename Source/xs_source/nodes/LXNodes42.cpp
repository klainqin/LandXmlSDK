#include "stdafx.h"
#include "ObjectNode.h"
#include "CollectionNode.h"
#include "ValueNode.h"
#include "Exception.h"
#include "ValueTypeObjects.h"
#include "LXTypesImpl.h"
#include "LXNodes.h"
#include "MonumentCollection.h"
#include "GPSQCInfoLevel2.h"
#include "TestObservation.h"
#include "CrashDataCollection.h"
#include "OffsetLaneCollection.h"

namespace LX
{

MonumentCollectionNode::MonumentCollectionNode (Object& obj)
    : CollectionNode(&obj) 
{
    initialize(&obj);
}

MonumentCollectionNode::MonumentCollectionNode (Object* pObj)
    : CollectionNode (pObj) 
{
    initialize(pObj);
}

void MonumentCollectionNode::initialize (Object* pObj)
{
    ILxNode* pVariant = NULL;
    m_pLxObj = dynamic_cast<MonumentCollection*>(pObj);
    if (m_pLxObj == NULL)
        throw new Exception(Exception::Code::kFail, L"MonumentCollectionNode :: Invalid Object.");
    int nNumChildren = m_pLxObj->count();
    m_arrChildren.reserve(nNumChildren);
    MonumentCollectionIterator* pIterator = m_pLxObj->iterator();
    m_nNumChildren = 0;
    while (!pIterator->atEnd())
    {
        m_arrChildren.push_back(new MonumentNode(pIterator->current()));
        pIterator->next();
    }
    pIterator->release();
}

String MonumentCollectionNode::nodeName() const
{
    return L"MonumentCollection";
}

ILxNode* MonumentCollectionNode::findChild(const String& strChildId) const
{
    // Grab string from child
    StringObjectImpl::Type idValue;
    ILxNode* pFoundNode = NULL;
    if (StringObjectImpl::parseString(strChildId.c_str(), strChildId.size(), idValue))
    {
        MonumentCollectionIterator* pFoundIter = m_pLxObj->find(idValue);
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
GPSQCInfoLevel2Node::GPSQCInfoLevel2Node (Object* pObj)
    : ObjectNode (pObj)
{
    ILxNode* pVariant = NULL;
    m_pLxObj = dynamic_cast<GPSQCInfoLevel2*>(pObj);
    if (m_pLxObj == NULL)
        throw new Exception(Exception::Code::kFail, L"GPSQCInfoLevel2Node :: Invalid Object.");
    int nNumChildren = 14;
    m_arrChildren.reserve(nNumChildren);
    m_nNumChildren = 0;
    m_arrChildren.push_back(new ValueNode(this, L"CovarianceXX", L"CovarianceXX"));
    m_arrChildren.push_back(new ValueNode(this, L"CovarianceXY", L"CovarianceXY"));
    m_arrChildren.push_back(new ValueNode(this, L"CovarianceXZ", L"CovarianceXZ"));
    m_arrChildren.push_back(new ValueNode(this, L"CovarianceYY", L"CovarianceYY"));
    m_arrChildren.push_back(new ValueNode(this, L"CovarianceYZ", L"CovarianceYZ"));
    m_arrChildren.push_back(new ValueNode(this, L"CovarianceZZ", L"CovarianceZZ"));
    m_arrChildren.push_back(new ValueNode(this, L"GPSSolnType", L"GPSSolnType"));
    m_arrChildren.push_back(new ValueNode(this, L"GPSSolnFreq", L"GPSSolnFreq"));
    m_arrChildren.push_back(new ValueNode(this, L"RMS", L"RMS"));
    m_arrChildren.push_back(new ValueNode(this, L"Ratio", L"Ratio"));
    m_arrChildren.push_back(new ValueNode(this, L"ReferenceVariance", L"ReferenceVariance"));
    m_arrChildren.push_back(new ValueNode(this, L"NbrSatellites", L"NbrSatellites"));
    m_arrChildren.push_back(new ValueNode(this, L"StartTime", L"StartTime"));
    m_arrChildren.push_back(new ValueNode(this, L"StopTime", L"StopTime"));
}

bool GPSQCInfoLevel2Node::setValue (const String& strMemberName, const String* pstrValue)
{
    bool bValueSet = false;
    GPSQCInfoLevel2* pObject = dynamic_cast<GPSQCInfoLevel2*>(m_pObject);
    if (strMemberName == L"CovarianceXX")
    {
        if (!pstrValue)
        {
            pObject->resetValue_CovarianceXX();
        }
        else
        {
            pObject->setCovarianceXX(DoubleObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"CovarianceXY")
    {
        if (!pstrValue)
        {
            pObject->resetValue_CovarianceXY();
        }
        else
        {
            pObject->setCovarianceXY(DoubleObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"CovarianceXZ")
    {
        if (!pstrValue)
        {
            pObject->resetValue_CovarianceXZ();
        }
        else
        {
            pObject->setCovarianceXZ(DoubleObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"CovarianceYY")
    {
        if (!pstrValue)
        {
            pObject->resetValue_CovarianceYY();
        }
        else
        {
            pObject->setCovarianceYY(DoubleObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"CovarianceYZ")
    {
        if (!pstrValue)
        {
            pObject->resetValue_CovarianceYZ();
        }
        else
        {
            pObject->setCovarianceYZ(DoubleObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"CovarianceZZ")
    {
        if (!pstrValue)
        {
            pObject->resetValue_CovarianceZZ();
        }
        else
        {
            pObject->setCovarianceZZ(DoubleObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"GPSSolnType")
    {
        if (!pstrValue)
        {
            pObject->resetValue_GPSSolnType();
        }
        else
        {
            pObject->setGPSSolnType(EnumGPSSolutionTypeEnumImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"GPSSolnFreq")
    {
        if (!pstrValue)
        {
            pObject->resetValue_GPSSolnFreq();
        }
        else
        {
            pObject->setGPSSolnFreq(EnumGPSSolutionFrequencyEnumImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"RMS")
    {
        if (!pstrValue)
        {
            pObject->resetValue_RMS();
        }
        else
        {
            pObject->setRMS(DoubleObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"Ratio")
    {
        if (!pstrValue)
        {
            pObject->resetValue_Ratio();
        }
        else
        {
            pObject->setRatio(DoubleObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"ReferenceVariance")
    {
        if (!pstrValue)
        {
            pObject->resetValue_ReferenceVariance();
        }
        else
        {
            pObject->setReferenceVariance(DoubleObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"NbrSatellites")
    {
        if (!pstrValue)
        {
            pObject->resetValue_NbrSatellites();
        }
        else
        {
            pObject->setNbrSatellites(IntegerObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
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
            pObject->setStartTime(DoubleObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"StopTime")
    {
        if (!pstrValue)
        {
            pObject->resetValue_StopTime();
        }
        else
        {
            pObject->setStopTime(DoubleObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    return bValueSet;
}

bool GPSQCInfoLevel2Node::getValue (const String& strMemberName, String& strValue)
{
    bool bValueSet = false;
    GPSQCInfoLevel2* pObject = dynamic_cast<GPSQCInfoLevel2*>(m_pObject);
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
    else if (strMemberName == L"CovarianceXX")
    {
        if (pObject->hasValue_CovarianceXX())
        {
            strValue = (DoubleObjectImpl(pObject->getCovarianceXX())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"CovarianceXY")
    {
        if (pObject->hasValue_CovarianceXY())
        {
            strValue = (DoubleObjectImpl(pObject->getCovarianceXY())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"CovarianceXZ")
    {
        if (pObject->hasValue_CovarianceXZ())
        {
            strValue = (DoubleObjectImpl(pObject->getCovarianceXZ())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"CovarianceYY")
    {
        if (pObject->hasValue_CovarianceYY())
        {
            strValue = (DoubleObjectImpl(pObject->getCovarianceYY())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"CovarianceYZ")
    {
        if (pObject->hasValue_CovarianceYZ())
        {
            strValue = (DoubleObjectImpl(pObject->getCovarianceYZ())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"CovarianceZZ")
    {
        if (pObject->hasValue_CovarianceZZ())
        {
            strValue = (DoubleObjectImpl(pObject->getCovarianceZZ())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"GPSSolnType")
    {
        if (pObject->hasValue_GPSSolnType())
        {
            strValue = (EnumGPSSolutionTypeEnumImpl(pObject->getGPSSolnType())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"GPSSolnFreq")
    {
        if (pObject->hasValue_GPSSolnFreq())
        {
            strValue = (EnumGPSSolutionFrequencyEnumImpl(pObject->getGPSSolnFreq())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"RMS")
    {
        if (pObject->hasValue_RMS())
        {
            strValue = (DoubleObjectImpl(pObject->getRMS())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"Ratio")
    {
        if (pObject->hasValue_Ratio())
        {
            strValue = (DoubleObjectImpl(pObject->getRatio())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"ReferenceVariance")
    {
        if (pObject->hasValue_ReferenceVariance())
        {
            strValue = (DoubleObjectImpl(pObject->getReferenceVariance())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"NbrSatellites")
    {
        if (pObject->hasValue_NbrSatellites())
        {
            strValue = (IntegerObjectImpl(pObject->getNbrSatellites())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"StartTime")
    {
        if (pObject->hasValue_StartTime())
        {
            strValue = (DoubleObjectImpl(pObject->getStartTime())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"StopTime")
    {
        if (pObject->hasValue_StopTime())
        {
            strValue = (DoubleObjectImpl(pObject->getStopTime())).toString();
            bValueSet = true;
        }
    }
    return bValueSet;
}

String GPSQCInfoLevel2Node::nodeName() const
{
    return L"GPSQCInfoLevel2";
}

TestObservationNode::TestObservationNode (Object* pObj)
    : ObjectNode (pObj)
{
    ILxNode* pVariant = NULL;
    m_pLxObj = dynamic_cast<TestObservation*>(pObj);
    if (m_pLxObj == NULL)
        throw new Exception(Exception::Code::kFail, L"TestObservationNode :: Invalid Object.");
    int nNumChildren = 31;
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
    m_arrChildren.push_back(new ValueNode(this, L"Setup1RodA", L"Setup1RodA"));
    m_arrChildren.push_back(new ValueNode(this, L"Setup1RodB", L"Setup1RodB"));
    m_arrChildren.push_back(new ValueNode(this, L"Setup2RodA", L"Setup2RodA"));
    m_arrChildren.push_back(new ValueNode(this, L"Setup2RodB", L"Setup2RodB"));
}

bool TestObservationNode::setValue (const String& strMemberName, const String* pstrValue)
{
    bool bValueSet = false;
    TestObservation* pObject = dynamic_cast<TestObservation*>(m_pObject);
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
    if (strMemberName == L"Setup1RodA")
    {
        if (!pstrValue)
        {
            pObject->resetValue_Setup1RodA();
        }
        else
        {
            pObject->setSetup1RodA(DoubleObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"Setup1RodB")
    {
        if (!pstrValue)
        {
            pObject->resetValue_Setup1RodB();
        }
        else
        {
            pObject->setSetup1RodB(DoubleObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"Setup2RodA")
    {
        if (!pstrValue)
        {
            pObject->resetValue_Setup2RodA();
        }
        else
        {
            pObject->setSetup2RodA(DoubleObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"Setup2RodB")
    {
        if (!pstrValue)
        {
            pObject->resetValue_Setup2RodB();
        }
        else
        {
            pObject->setSetup2RodB(DoubleObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    return bValueSet;
}

bool TestObservationNode::getValue (const String& strMemberName, String& strValue)
{
    bool bValueSet = false;
    TestObservation* pObject = dynamic_cast<TestObservation*>(m_pObject);
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
    else if (strMemberName == L"Setup1RodA")
    {
        if (pObject->hasValue_Setup1RodA())
        {
            strValue = (DoubleObjectImpl(pObject->getSetup1RodA())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"Setup1RodB")
    {
        if (pObject->hasValue_Setup1RodB())
        {
            strValue = (DoubleObjectImpl(pObject->getSetup1RodB())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"Setup2RodA")
    {
        if (pObject->hasValue_Setup2RodA())
        {
            strValue = (DoubleObjectImpl(pObject->getSetup2RodA())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"Setup2RodB")
    {
        if (pObject->hasValue_Setup2RodB())
        {
            strValue = (DoubleObjectImpl(pObject->getSetup2RodB())).toString();
            bValueSet = true;
        }
    }
    return bValueSet;
}

String TestObservationNode::nodeName() const
{
    return L"TestObservation";
}

CrashDataCollectionNode::CrashDataCollectionNode (Object& obj)
    : CollectionNode(&obj) 
{
    initialize(&obj);
}

CrashDataCollectionNode::CrashDataCollectionNode (Object* pObj)
    : CollectionNode (pObj) 
{
    initialize(pObj);
}

void CrashDataCollectionNode::initialize (Object* pObj)
{
    ILxNode* pVariant = NULL;
    m_pLxObj = dynamic_cast<CrashDataCollection*>(pObj);
    if (m_pLxObj == NULL)
        throw new Exception(Exception::Code::kFail, L"CrashDataCollectionNode :: Invalid Object.");
    int nNumChildren = m_pLxObj->count();
    m_arrChildren.reserve(nNumChildren);
    CrashDataCollectionIterator* pIterator = m_pLxObj->iterator();
    m_nNumChildren = 0;
    while (!pIterator->atEnd())
    {
        m_arrChildren.push_back(new CrashDataNode(pIterator->current()));
        pIterator->next();
    }
    pIterator->release();
}

String CrashDataCollectionNode::nodeName() const
{
    return L"CrashDataCollection";
}

ILxNode* CrashDataCollectionNode::findChild(const String& strChildId) const
{
    return NULL;
}
OffsetLaneCollectionNode::OffsetLaneCollectionNode (Object& obj)
    : CollectionNode(&obj) 
{
    initialize(&obj);
}

OffsetLaneCollectionNode::OffsetLaneCollectionNode (Object* pObj)
    : CollectionNode (pObj) 
{
    initialize(pObj);
}

void OffsetLaneCollectionNode::initialize (Object* pObj)
{
    ILxNode* pVariant = NULL;
    m_pLxObj = dynamic_cast<OffsetLaneCollection*>(pObj);
    if (m_pLxObj == NULL)
        throw new Exception(Exception::Code::kFail, L"OffsetLaneCollectionNode :: Invalid Object.");
    int nNumChildren = m_pLxObj->count();
    m_arrChildren.reserve(nNumChildren);
    OffsetLaneCollectionIterator* pIterator = m_pLxObj->iterator();
    m_nNumChildren = 0;
    while (!pIterator->atEnd())
    {
        m_arrChildren.push_back(new OffsetLaneNode(pIterator->current()));
        pIterator->next();
    }
    pIterator->release();
}

String OffsetLaneCollectionNode::nodeName() const
{
    return L"OffsetLaneCollection";
}

ILxNode* OffsetLaneCollectionNode::findChild(const String& strChildId) const
{
    return NULL;
}
}; // namespace : LX
