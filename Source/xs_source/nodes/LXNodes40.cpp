#include "stdafx.h"
#include "ObjectNode.h"
#include "CollectionNode.h"
#include "ValueNode.h"
#include "Exception.h"
#include "ValueTypeObjects.h"
#include "LXTypesImpl.h"
#include "LXNodes.h"
#include "SurfVolumesCollection.h"
#include "ReducedArcObservation.h"
#include "TargetPoint.h"
#include "OffsetVals.h"
#include "FieldNoteCollection.h"
#include "FeatureCollection.h"
#include "GradeModel.h"
#include "GradeSurfaceCollection.h"
#include "PlanFeaturesCollection.h"

namespace LX
{

SurfVolumesCollectionNode::SurfVolumesCollectionNode (Object& obj)
    : CollectionNode(&obj) 
{
    initialize(&obj);
}

SurfVolumesCollectionNode::SurfVolumesCollectionNode (Object* pObj)
    : CollectionNode (pObj) 
{
    initialize(pObj);
}

void SurfVolumesCollectionNode::initialize (Object* pObj)
{
    ILxNode* pVariant = NULL;
    m_pLxObj = dynamic_cast<SurfVolumesCollection*>(pObj);
    if (m_pLxObj == NULL)
        throw new Exception(Exception::Code::kFail, L"SurfVolumesCollectionNode :: Invalid Object.");
    int nNumChildren = m_pLxObj->count();
    m_arrChildren.reserve(nNumChildren);
    SurfVolumesCollectionIterator* pIterator = m_pLxObj->iterator();
    m_nNumChildren = 0;
    while (!pIterator->atEnd())
    {
        m_arrChildren.push_back(new SurfVolumesNode(pIterator->current()));
        pIterator->next();
    }
    pIterator->release();
}

String SurfVolumesCollectionNode::nodeName() const
{
    return L"SurfVolumesCollection";
}

ILxNode* SurfVolumesCollectionNode::findChild(const String& strChildId) const
{
    // Grab string from child
    StringObjectImpl::Type idValue;
    ILxNode* pFoundNode = NULL;
    if (StringObjectImpl::parseString(strChildId.c_str(), strChildId.size(), idValue))
    {
        SurfVolumesCollectionIterator* pFoundIter = m_pLxObj->find(idValue);
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
ReducedArcObservationNode::ReducedArcObservationNode (Object* pObj)
    : ObjectNode (pObj)
{
    ILxNode* pVariant = NULL;
    m_pLxObj = dynamic_cast<ReducedArcObservation*>(pObj);
    if (m_pLxObj == NULL)
        throw new Exception(Exception::Code::kFail, L"ReducedArcObservationNode :: Invalid Object.");
    int nNumChildren = 30;
    m_arrChildren.reserve(nNumChildren);
    m_nNumChildren = 0;
    if (m_pLxObj->getTargetPoint())
        m_arrChildren.push_back(new TargetPointNode(m_pLxObj->getTargetPoint()));
    if (m_pLxObj->getOffsetVals())
        m_arrChildren.push_back(new OffsetValsNode(m_pLxObj->getOffsetVals()));
    m_arrChildren.push_back(new FieldNoteCollectionNode(m_pLxObj->FieldNote()));
    m_arrChildren.push_back(new FeatureCollectionNode(m_pLxObj->Feature()));
    m_arrChildren.push_back(new ValueNode(this, L"Purpose", L"Purpose"));
    m_arrChildren.push_back(new ValueNode(this, L"SetupID", L"SetupID"));
    m_arrChildren.push_back(new ValueNode(this, L"TargetSetupID", L"TargetSetupID"));
    m_arrChildren.push_back(new ValueNode(this, L"SetID", L"SetID"));
    m_arrChildren.push_back(new ValueNode(this, L"ChordAzimuth", L"ChordAzimuth"));
    m_arrChildren.push_back(new ValueNode(this, L"Radius", L"Radius"));
    m_arrChildren.push_back(new ValueNode(this, L"Length", L"Length"));
    m_arrChildren.push_back(new ValueNode(this, L"Rot", L"Rot"));
    m_arrChildren.push_back(new ValueNode(this, L"EquipmentUsed", L"EquipmentUsed"));
    m_arrChildren.push_back(new ValueNode(this, L"ArcAzimuthAccuracy", L"ArcAzimuthAccuracy"));
    m_arrChildren.push_back(new ValueNode(this, L"ArcLengthAccuracy", L"ArcLengthAccuracy"));
    m_arrChildren.push_back(new ValueNode(this, L"Date", L"Date"));
    m_arrChildren.push_back(new ValueNode(this, L"ArcType", L"ArcType"));
    m_arrChildren.push_back(new ValueNode(this, L"AdoptedSurvey", L"AdoptedSurvey"));
    m_arrChildren.push_back(new ValueNode(this, L"LengthAccClass", L"LengthAccClass"));
    m_arrChildren.push_back(new ValueNode(this, L"AzimuthAccClass", L"AzimuthAccClass"));
    m_arrChildren.push_back(new ValueNode(this, L"AzimuthAdoptionFactor", L"AzimuthAdoptionFactor"));
    m_arrChildren.push_back(new ValueNode(this, L"LengthAdoptionFactor", L"LengthAdoptionFactor"));
    m_arrChildren.push_back(new ValueNode(this, L"Name", L"Name"));
    m_arrChildren.push_back(new ValueNode(this, L"Desc", L"Desc"));
    m_arrChildren.push_back(new ValueNode(this, L"State", L"State"));
    m_arrChildren.push_back(new ValueNode(this, L"OID", L"OID"));
    m_arrChildren.push_back(new ValueNode(this, L"CoordGeomRefs", L"CoordGeomRefs"));
    m_arrChildren.push_back(new ValueNode(this, L"AlignRef", L"AlignRef"));
    m_arrChildren.push_back(new ValueNode(this, L"AlignStationName", L"AlignStationName"));
    m_arrChildren.push_back(new ValueNode(this, L"AlignOffset", L"AlignOffset"));
}

bool ReducedArcObservationNode::setValue (const String& strMemberName, const String* pstrValue)
{
    bool bValueSet = false;
    ReducedArcObservation* pObject = dynamic_cast<ReducedArcObservation*>(m_pObject);
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
    if (strMemberName == L"ChordAzimuth")
    {
        if (!pstrValue)
        {
            pObject->resetValue_ChordAzimuth();
        }
        else
        {
            pObject->setChordAzimuth(DoubleObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"Radius")
    {
        if (!pstrValue)
        {
            pObject->resetValue_Radius();
        }
        else
        {
            pObject->setRadius(DoubleObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
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
    if (strMemberName == L"Rot")
    {
        if (!pstrValue)
        {
            pObject->resetValue_Rot();
        }
        else
        {
            pObject->setRot(EnumClockwiseImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"EquipmentUsed")
    {
        if (!pstrValue)
        {
            pObject->resetValue_EquipmentUsed();
        }
        else
        {
            pObject->setEquipmentUsed(StringObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"ArcAzimuthAccuracy")
    {
        if (!pstrValue)
        {
            pObject->resetValue_ArcAzimuthAccuracy();
        }
        else
        {
            pObject->setArcAzimuthAccuracy(DoubleObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"ArcLengthAccuracy")
    {
        if (!pstrValue)
        {
            pObject->resetValue_ArcLengthAccuracy();
        }
        else
        {
            pObject->setArcLengthAccuracy(DoubleObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
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
    if (strMemberName == L"ArcType")
    {
        if (!pstrValue)
        {
            pObject->resetValue_ArcType();
        }
        else
        {
            pObject->setArcType(StringObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"AdoptedSurvey")
    {
        if (!pstrValue)
        {
            pObject->resetValue_AdoptedSurvey();
        }
        else
        {
            pObject->setAdoptedSurvey(StringObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"LengthAccClass")
    {
        if (!pstrValue)
        {
            pObject->resetValue_LengthAccClass();
        }
        else
        {
            pObject->setLengthAccClass(StringObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"AzimuthAccClass")
    {
        if (!pstrValue)
        {
            pObject->resetValue_AzimuthAccClass();
        }
        else
        {
            pObject->setAzimuthAccClass(StringObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"AzimuthAdoptionFactor")
    {
        if (!pstrValue)
        {
            pObject->resetValue_AzimuthAdoptionFactor();
        }
        else
        {
            pObject->setAzimuthAdoptionFactor(DoubleObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"LengthAdoptionFactor")
    {
        if (!pstrValue)
        {
            pObject->resetValue_LengthAdoptionFactor();
        }
        else
        {
            pObject->setLengthAdoptionFactor(DoubleObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
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
    return bValueSet;
}

bool ReducedArcObservationNode::getValue (const String& strMemberName, String& strValue)
{
    bool bValueSet = false;
    ReducedArcObservation* pObject = dynamic_cast<ReducedArcObservation*>(m_pObject);
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
    else if (strMemberName == L"Purpose")
    {
        if (pObject->hasValue_Purpose())
        {
            strValue = (EnumPurposeTypeImpl(pObject->getPurpose())).toString();
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
    else if (strMemberName == L"ChordAzimuth")
    {
        if (pObject->hasValue_ChordAzimuth())
        {
            strValue = (DoubleObjectImpl(pObject->getChordAzimuth())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"Radius")
    {
        if (pObject->hasValue_Radius())
        {
            strValue = (DoubleObjectImpl(pObject->getRadius())).toString();
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
    else if (strMemberName == L"Rot")
    {
        if (pObject->hasValue_Rot())
        {
            strValue = (EnumClockwiseImpl(pObject->getRot())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"EquipmentUsed")
    {
        if (pObject->hasValue_EquipmentUsed())
        {
            strValue = (StringObjectImpl(pObject->getEquipmentUsed())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"ArcAzimuthAccuracy")
    {
        if (pObject->hasValue_ArcAzimuthAccuracy())
        {
            strValue = (DoubleObjectImpl(pObject->getArcAzimuthAccuracy())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"ArcLengthAccuracy")
    {
        if (pObject->hasValue_ArcLengthAccuracy())
        {
            strValue = (DoubleObjectImpl(pObject->getArcLengthAccuracy())).toString();
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
    else if (strMemberName == L"ArcType")
    {
        if (pObject->hasValue_ArcType())
        {
            strValue = (StringObjectImpl(pObject->getArcType())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"AdoptedSurvey")
    {
        if (pObject->hasValue_AdoptedSurvey())
        {
            strValue = (StringObjectImpl(pObject->getAdoptedSurvey())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"LengthAccClass")
    {
        if (pObject->hasValue_LengthAccClass())
        {
            strValue = (StringObjectImpl(pObject->getLengthAccClass())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"AzimuthAccClass")
    {
        if (pObject->hasValue_AzimuthAccClass())
        {
            strValue = (StringObjectImpl(pObject->getAzimuthAccClass())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"AzimuthAdoptionFactor")
    {
        if (pObject->hasValue_AzimuthAdoptionFactor())
        {
            strValue = (DoubleObjectImpl(pObject->getAzimuthAdoptionFactor())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"LengthAdoptionFactor")
    {
        if (pObject->hasValue_LengthAdoptionFactor())
        {
            strValue = (DoubleObjectImpl(pObject->getLengthAdoptionFactor())).toString();
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
    else if (strMemberName == L"OID")
    {
        if (pObject->hasValue_OID())
        {
            strValue = (StringObjectImpl(pObject->getOID())).toString();
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
    return bValueSet;
}

String ReducedArcObservationNode::nodeName() const
{
    return L"ReducedArcObservation";
}

GradeModelNode::GradeModelNode (Object* pObj)
    : ObjectNode (pObj)
{
    ILxNode* pVariant = NULL;
    m_pLxObj = dynamic_cast<GradeModel*>(pObj);
    if (m_pLxObj == NULL)
        throw new Exception(Exception::Code::kFail, L"GradeModelNode :: Invalid Object.");
    int nNumChildren = 5;
    m_arrChildren.reserve(nNumChildren);
    m_nNumChildren = 0;
    m_arrChildren.push_back(new GradeSurfaceCollectionNode(m_pLxObj->GradeSurface()));
    m_arrChildren.push_back(new FeatureCollectionNode(m_pLxObj->Feature()));
    m_arrChildren.push_back(new ValueNode(this, L"Desc", L"Desc"));
    m_arrChildren.push_back(new ValueNode(this, L"Name", L"Name"));
    m_arrChildren.push_back(new ValueNode(this, L"State", L"State"));
}

bool GradeModelNode::setValue (const String& strMemberName, const String* pstrValue)
{
    bool bValueSet = false;
    GradeModel* pObject = dynamic_cast<GradeModel*>(m_pObject);
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

bool GradeModelNode::getValue (const String& strMemberName, String& strValue)
{
    bool bValueSet = false;
    GradeModel* pObject = dynamic_cast<GradeModel*>(m_pObject);
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

String GradeModelNode::nodeName() const
{
    return L"GradeModel";
}

PlanFeaturesCollectionNode::PlanFeaturesCollectionNode (Object& obj)
    : CollectionNode(&obj) 
{
    initialize(&obj);
}

PlanFeaturesCollectionNode::PlanFeaturesCollectionNode (Object* pObj)
    : CollectionNode (pObj) 
{
    initialize(pObj);
}

void PlanFeaturesCollectionNode::initialize (Object* pObj)
{
    ILxNode* pVariant = NULL;
    m_pLxObj = dynamic_cast<PlanFeaturesCollection*>(pObj);
    if (m_pLxObj == NULL)
        throw new Exception(Exception::Code::kFail, L"PlanFeaturesCollectionNode :: Invalid Object.");
    int nNumChildren = m_pLxObj->count();
    m_arrChildren.reserve(nNumChildren);
    PlanFeaturesCollectionIterator* pIterator = m_pLxObj->iterator();
    m_nNumChildren = 0;
    while (!pIterator->atEnd())
    {
        m_arrChildren.push_back(new PlanFeaturesNode(pIterator->current()));
        pIterator->next();
    }
    pIterator->release();
}

String PlanFeaturesCollectionNode::nodeName() const
{
    return L"PlanFeaturesCollection";
}

ILxNode* PlanFeaturesCollectionNode::findChild(const String& strChildId) const
{
    // Grab string from child
    StringObjectImpl::Type idValue;
    ILxNode* pFoundNode = NULL;
    if (StringObjectImpl::parseString(strChildId.c_str(), strChildId.size(), idValue))
    {
        PlanFeaturesCollectionIterator* pFoundIter = m_pLxObj->find(idValue);
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
TargetPointNode::TargetPointNode (Object* pObj)
    : ObjectNode (pObj)
{
    ILxNode* pVariant = NULL;
    m_pLxObj = dynamic_cast<TargetPoint*>(pObj);
    if (m_pLxObj == NULL)
        throw new Exception(Exception::Code::kFail, L"TargetPointNode :: Invalid Object.");
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

bool TargetPointNode::setValue (const String& strMemberName, const String* pstrValue)
{
    bool bValueSet = false;
    TargetPoint* pObject = dynamic_cast<TargetPoint*>(m_pObject);
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

bool TargetPointNode::getValue (const String& strMemberName, String& strValue)
{
    bool bValueSet = false;
    TargetPoint* pObject = dynamic_cast<TargetPoint*>(m_pObject);
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

String TargetPointNode::nodeName() const
{
    return L"TargetPoint";
}

}; // namespace : LX
