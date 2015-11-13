#include "stdafx.h"
#include "ObjectNode.h"
#include "CollectionNode.h"
#include "ValueNode.h"
#include "Exception.h"
#include "ValueTypeObjects.h"
#include "LXTypesImpl.h"
#include "LXNodes.h"
#include "Parcels.h"
#include "ParcelCollection.h"
#include "FeatureCollection.h"
#include "Classification.h"
#include "Zones.h"
#include "ZoneCollection.h"
#include "ZoneHingeCollection.h"
#include "AlignPICollection.h"
#include "SurveyHeader.h"
#include "Units.h"
#include "CoordinateSystem.h"
#include "AnnotationCollection.h"
#include "AdministrativeAreaCollection.h"
#include "AdministrativeDateCollection.h"
#include "MapPointCollection.h"
#include "PersonnelCollection.h"
#include "FieldNoteCollection.h"
#include "SurveyorCertificateCollection.h"
#include "PurposeOfSurveyCollection.h"
#include "HeadOfPowerCollection.h"

namespace LX
{

ParcelsNode::ParcelsNode (Object* pObj)
    : ObjectNode (pObj)
{
    ILxNode* pVariant = NULL;
    m_pLxObj = dynamic_cast<Parcels*>(pObj);
    if (m_pLxObj == NULL)
        throw new Exception(Exception::Code::kFail, L"ParcelsNode :: Invalid Object.");
    int nNumChildren = 5;
    m_arrChildren.reserve(nNumChildren);
    m_nNumChildren = 0;
    m_arrChildren.push_back(new ParcelCollectionNode(m_pLxObj->Parcel()));
    m_arrChildren.push_back(new FeatureCollectionNode(m_pLxObj->Feature()));
    m_arrChildren.push_back(new ValueNode(this, L"Desc", L"Desc"));
    m_arrChildren.push_back(new ValueNode(this, L"Name", L"Name"));
    m_arrChildren.push_back(new ValueNode(this, L"State", L"State"));
}

bool ParcelsNode::setValue (const String& strMemberName, const String* pstrValue)
{
    bool bValueSet = false;
    Parcels* pObject = dynamic_cast<Parcels*>(m_pObject);
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

bool ParcelsNode::getValue (const String& strMemberName, String& strValue)
{
    bool bValueSet = false;
    Parcels* pObject = dynamic_cast<Parcels*>(m_pObject);
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

String ParcelsNode::nodeName() const
{
    return L"Parcels";
}

ClassificationNode::ClassificationNode (Object* pObj)
    : ObjectNode (pObj)
{
    ILxNode* pVariant = NULL;
    m_pLxObj = dynamic_cast<Classification*>(pObj);
    if (m_pLxObj == NULL)
        throw new Exception(Exception::Code::kFail, L"ClassificationNode :: Invalid Object.");
    int nNumChildren = 4;
    m_arrChildren.reserve(nNumChildren);
    m_nNumChildren = 0;
    m_arrChildren.push_back(new FeatureCollectionNode(m_pLxObj->Feature()));
    m_arrChildren.push_back(new ValueNode(this, L"StaStart", L"StaStart"));
    m_arrChildren.push_back(new ValueNode(this, L"StaEnd", L"StaEnd"));
    m_arrChildren.push_back(new ValueNode(this, L"FunctionalClass", L"FunctionalClass"));
}

bool ClassificationNode::setValue (const String& strMemberName, const String* pstrValue)
{
    bool bValueSet = false;
    Classification* pObject = dynamic_cast<Classification*>(m_pObject);
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
    if (strMemberName == L"FunctionalClass")
    {
        if (!pstrValue)
        {
            pObject->resetValue_FunctionalClass();
        }
        else
        {
            pObject->setFunctionalClass(EnumFunctionalClassTypeImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    return bValueSet;
}

bool ClassificationNode::getValue (const String& strMemberName, String& strValue)
{
    bool bValueSet = false;
    Classification* pObject = dynamic_cast<Classification*>(m_pObject);
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
    else if (strMemberName == L"FunctionalClass")
    {
        if (pObject->hasValue_FunctionalClass())
        {
            strValue = (EnumFunctionalClassTypeImpl(pObject->getFunctionalClass())).toString();
            bValueSet = true;
        }
    }
    return bValueSet;
}

String ClassificationNode::nodeName() const
{
    return L"Classification";
}

ZonesNode::ZonesNode (Object* pObj)
    : ObjectNode (pObj)
{
    ILxNode* pVariant = NULL;
    m_pLxObj = dynamic_cast<Zones*>(pObj);
    if (m_pLxObj == NULL)
        throw new Exception(Exception::Code::kFail, L"ZonesNode :: Invalid Object.");
    int nNumChildren = 7;
    m_arrChildren.reserve(nNumChildren);
    m_nNumChildren = 0;
    m_arrChildren.push_back(new ZoneCollectionNode(m_pLxObj->Zone()));
    m_arrChildren.push_back(new ZoneHingeCollectionNode(m_pLxObj->ZoneHinge()));
    m_arrChildren.push_back(new FeatureCollectionNode(m_pLxObj->Feature()));
    m_arrChildren.push_back(new ValueNode(this, L"Side", L"Side"));
    m_arrChildren.push_back(new ValueNode(this, L"Desc", L"Desc"));
    m_arrChildren.push_back(new ValueNode(this, L"Name", L"Name"));
    m_arrChildren.push_back(new ValueNode(this, L"State", L"State"));
}

bool ZonesNode::setValue (const String& strMemberName, const String* pstrValue)
{
    bool bValueSet = false;
    Zones* pObject = dynamic_cast<Zones*>(m_pObject);
    if (strMemberName == L"Side")
    {
        if (!pstrValue)
        {
            pObject->resetValue_Side();
        }
        else
        {
            pObject->setSide(EnumSideofRoadTypeImpl::parseString(pstrValue->c_str(), pstrValue->length()));
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

bool ZonesNode::getValue (const String& strMemberName, String& strValue)
{
    bool bValueSet = false;
    Zones* pObject = dynamic_cast<Zones*>(m_pObject);
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
    else if (strMemberName == L"Side")
    {
        if (pObject->hasValue_Side())
        {
            strValue = (EnumSideofRoadTypeImpl(pObject->getSide())).toString();
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

String ZonesNode::nodeName() const
{
    return L"Zones";
}

AlignPICollectionNode::AlignPICollectionNode (Object& obj)
    : CollectionNode(&obj) 
{
    initialize(&obj);
}

AlignPICollectionNode::AlignPICollectionNode (Object* pObj)
    : CollectionNode (pObj) 
{
    initialize(pObj);
}

void AlignPICollectionNode::initialize (Object* pObj)
{
    ILxNode* pVariant = NULL;
    m_pLxObj = dynamic_cast<AlignPICollection*>(pObj);
    if (m_pLxObj == NULL)
        throw new Exception(Exception::Code::kFail, L"AlignPICollectionNode :: Invalid Object.");
    int nNumChildren = m_pLxObj->count();
    m_arrChildren.reserve(nNumChildren);
    AlignPICollectionIterator* pIterator = m_pLxObj->iterator();
    m_nNumChildren = 0;
    while (!pIterator->atEnd())
    {
        m_arrChildren.push_back(new AlignPINode(pIterator->current()));
        pIterator->next();
    }
    pIterator->release();
}

String AlignPICollectionNode::nodeName() const
{
    return L"AlignPICollection";
}

ILxNode* AlignPICollectionNode::findChild(const String& strChildId) const
{
    return NULL;
}
SurveyHeaderNode::SurveyHeaderNode (Object* pObj)
    : ObjectNode (pObj)
{
    ILxNode* pVariant = NULL;
    m_pLxObj = dynamic_cast<SurveyHeader*>(pObj);
    if (m_pLxObj == NULL)
        throw new Exception(Exception::Code::kFail, L"SurveyHeaderNode :: Invalid Object.");
    int nNumChildren = 42;
    m_arrChildren.reserve(nNumChildren);
    m_nNumChildren = 0;
    if (m_pLxObj->getUnits())
        m_arrChildren.push_back(new UnitsNode(m_pLxObj->getUnits()));
    if (m_pLxObj->getCoordinateSystem())
        m_arrChildren.push_back(new CoordinateSystemNode(m_pLxObj->getCoordinateSystem()));
    m_arrChildren.push_back(new AnnotationCollectionNode(m_pLxObj->Annotation()));
    m_arrChildren.push_back(new AdministrativeAreaCollectionNode(m_pLxObj->AdministrativeArea()));
    m_arrChildren.push_back(new AdministrativeDateCollectionNode(m_pLxObj->AdministrativeDate()));
    m_arrChildren.push_back(new MapPointCollectionNode(m_pLxObj->MapPoint()));
    m_arrChildren.push_back(new PersonnelCollectionNode(m_pLxObj->Personnel()));
    m_arrChildren.push_back(new FieldNoteCollectionNode(m_pLxObj->FieldNote()));
    m_arrChildren.push_back(new FeatureCollectionNode(m_pLxObj->Feature()));
    m_arrChildren.push_back(new SurveyorCertificateCollectionNode(m_pLxObj->SurveyorCertificate()));
    m_arrChildren.push_back(new PurposeOfSurveyCollectionNode(m_pLxObj->PurposeOfSurvey()));
    m_arrChildren.push_back(new HeadOfPowerCollectionNode(m_pLxObj->HeadOfPower()));
    m_arrChildren.push_back(new ValueNode(this, L"Name", L"Name"));
    m_arrChildren.push_back(new ValueNode(this, L"Desc", L"Desc"));
    m_arrChildren.push_back(new ValueNode(this, L"Purpose", L"Purpose"));
    m_arrChildren.push_back(new ValueNode(this, L"StartTime", L"StartTime"));
    m_arrChildren.push_back(new ValueNode(this, L"EndTime", L"EndTime"));
    m_arrChildren.push_back(new ValueNode(this, L"Surveyor", L"Surveyor"));
    m_arrChildren.push_back(new ValueNode(this, L"SurveyorFirm", L"SurveyorFirm"));
    m_arrChildren.push_back(new ValueNode(this, L"SurveyorReference", L"SurveyorReference"));
    m_arrChildren.push_back(new ValueNode(this, L"SurveyorRegistration", L"SurveyorRegistration"));
    m_arrChildren.push_back(new ValueNode(this, L"SurveyPurpose", L"SurveyPurpose"));
    m_arrChildren.push_back(new ValueNode(this, L"Type", L"Type"));
    m_arrChildren.push_back(new ValueNode(this, L"Class", L"Class"));
    m_arrChildren.push_back(new ValueNode(this, L"County", L"County"));
    m_arrChildren.push_back(new ValueNode(this, L"ApplyAtmosphericCorrection", L"ApplyAtmosphericCorrection"));
    m_arrChildren.push_back(new ValueNode(this, L"Pressure", L"Pressure"));
    m_arrChildren.push_back(new ValueNode(this, L"Temperature", L"Temperature"));
    m_arrChildren.push_back(new ValueNode(this, L"ApplySeaLevelCorrection", L"ApplySeaLevelCorrection"));
    m_arrChildren.push_back(new ValueNode(this, L"ScaleFactor", L"ScaleFactor"));
    m_arrChildren.push_back(new ValueNode(this, L"SeaLevelCorrectionFactor", L"SeaLevelCorrectionFactor"));
    m_arrChildren.push_back(new ValueNode(this, L"CombinedFactor", L"CombinedFactor"));
    m_arrChildren.push_back(new ValueNode(this, L"Jurisdiction", L"Jurisdiction"));
    m_arrChildren.push_back(new ValueNode(this, L"SubmissionDate", L"SubmissionDate"));
    m_arrChildren.push_back(new ValueNode(this, L"DocumentStatus", L"DocumentStatus"));
    m_arrChildren.push_back(new ValueNode(this, L"SurveyFormat", L"SurveyFormat"));
    m_arrChildren.push_back(new ValueNode(this, L"SurveyStatus", L"SurveyStatus"));
    m_arrChildren.push_back(new ValueNode(this, L"CommunityTitleSchemeNo", L"CommunityTitleSchemeNo"));
    m_arrChildren.push_back(new ValueNode(this, L"CommunityTitleSchemeName", L"CommunityTitleSchemeName"));
    m_arrChildren.push_back(new ValueNode(this, L"FieldNoteFlag", L"FieldNoteFlag"));
    m_arrChildren.push_back(new ValueNode(this, L"FieldNoteReference", L"FieldNoteReference"));
    m_arrChildren.push_back(new ValueNode(this, L"FieldReport", L"FieldReport"));
}

bool SurveyHeaderNode::setValue (const String& strMemberName, const String* pstrValue)
{
    bool bValueSet = false;
    SurveyHeader* pObject = dynamic_cast<SurveyHeader*>(m_pObject);
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
    if (strMemberName == L"StartTime")
    {
        if (!pstrValue)
        {
            pObject->resetValue_StartTime();
        }
        else
        {
            pObject->setStartTime(StringObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"EndTime")
    {
        if (!pstrValue)
        {
            pObject->resetValue_EndTime();
        }
        else
        {
            pObject->setEndTime(StringObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"Surveyor")
    {
        if (!pstrValue)
        {
            pObject->resetValue_Surveyor();
        }
        else
        {
            pObject->setSurveyor(StringObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"SurveyorFirm")
    {
        if (!pstrValue)
        {
            pObject->resetValue_SurveyorFirm();
        }
        else
        {
            pObject->setSurveyorFirm(StringObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"SurveyorReference")
    {
        if (!pstrValue)
        {
            pObject->resetValue_SurveyorReference();
        }
        else
        {
            pObject->setSurveyorReference(StringObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"SurveyorRegistration")
    {
        if (!pstrValue)
        {
            pObject->resetValue_SurveyorRegistration();
        }
        else
        {
            pObject->setSurveyorRegistration(StringObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"SurveyPurpose")
    {
        if (!pstrValue)
        {
            pObject->resetValue_SurveyPurpose();
        }
        else
        {
            pObject->setSurveyPurpose(StringObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"Type")
    {
        if (!pstrValue)
        {
            pObject->resetValue_Type();
        }
        else
        {
            pObject->setType(EnumSurveyTypeImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"Class")
    {
        if (!pstrValue)
        {
            pObject->resetValue_Class();
        }
        else
        {
            pObject->setClass(StringObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"County")
    {
        if (!pstrValue)
        {
            pObject->resetValue_County();
        }
        else
        {
            pObject->setCounty(StringObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"ApplyAtmosphericCorrection")
    {
        if (!pstrValue)
        {
            pObject->resetValue_ApplyAtmosphericCorrection();
        }
        else
        {
            pObject->setApplyAtmosphericCorrection(BooleanObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"Pressure")
    {
        if (!pstrValue)
        {
            pObject->resetValue_Pressure();
        }
        else
        {
            pObject->setPressure(DoubleObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"Temperature")
    {
        if (!pstrValue)
        {
            pObject->resetValue_Temperature();
        }
        else
        {
            pObject->setTemperature(DoubleObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"ApplySeaLevelCorrection")
    {
        if (!pstrValue)
        {
            pObject->resetValue_ApplySeaLevelCorrection();
        }
        else
        {
            pObject->setApplySeaLevelCorrection(BooleanObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"ScaleFactor")
    {
        if (!pstrValue)
        {
            pObject->resetValue_ScaleFactor();
        }
        else
        {
            pObject->setScaleFactor(DoubleObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"SeaLevelCorrectionFactor")
    {
        if (!pstrValue)
        {
            pObject->resetValue_SeaLevelCorrectionFactor();
        }
        else
        {
            pObject->setSeaLevelCorrectionFactor(DoubleObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"CombinedFactor")
    {
        if (!pstrValue)
        {
            pObject->resetValue_CombinedFactor();
        }
        else
        {
            pObject->setCombinedFactor(DoubleObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"Jurisdiction")
    {
        if (!pstrValue)
        {
            pObject->resetValue_Jurisdiction();
        }
        else
        {
            pObject->setJurisdiction(StringObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"SubmissionDate")
    {
        if (!pstrValue)
        {
            pObject->resetValue_SubmissionDate();
        }
        else
        {
            pObject->setSubmissionDate(StringObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"DocumentStatus")
    {
        if (!pstrValue)
        {
            pObject->resetValue_DocumentStatus();
        }
        else
        {
            pObject->setDocumentStatus(StringObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"SurveyFormat")
    {
        if (!pstrValue)
        {
            pObject->resetValue_SurveyFormat();
        }
        else
        {
            pObject->setSurveyFormat(StringObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"SurveyStatus")
    {
        if (!pstrValue)
        {
            pObject->resetValue_SurveyStatus();
        }
        else
        {
            pObject->setSurveyStatus(StringObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"CommunityTitleSchemeNo")
    {
        if (!pstrValue)
        {
            pObject->resetValue_CommunityTitleSchemeNo();
        }
        else
        {
            pObject->setCommunityTitleSchemeNo(IntegerObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"CommunityTitleSchemeName")
    {
        if (!pstrValue)
        {
            pObject->resetValue_CommunityTitleSchemeName();
        }
        else
        {
            pObject->setCommunityTitleSchemeName(StringObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"FieldNoteFlag")
    {
        if (!pstrValue)
        {
            pObject->resetValue_FieldNoteFlag();
        }
        else
        {
            pObject->setFieldNoteFlag(BooleanObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"FieldNoteReference")
    {
        if (!pstrValue)
        {
            pObject->resetValue_FieldNoteReference();
        }
        else
        {
            pObject->setFieldNoteReference(StringObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"FieldReport")
    {
        if (!pstrValue)
        {
            pObject->resetValue_FieldReport();
        }
        else
        {
            pObject->setFieldReport(StringObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    return bValueSet;
}

bool SurveyHeaderNode::getValue (const String& strMemberName, String& strValue)
{
    bool bValueSet = false;
    SurveyHeader* pObject = dynamic_cast<SurveyHeader*>(m_pObject);
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
    else if (strMemberName == L"Purpose")
    {
        if (pObject->hasValue_Purpose())
        {
            strValue = (EnumPurposeTypeImpl(pObject->getPurpose())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"StartTime")
    {
        if (pObject->hasValue_StartTime())
        {
            strValue = (StringObjectImpl(pObject->getStartTime())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"EndTime")
    {
        if (pObject->hasValue_EndTime())
        {
            strValue = (StringObjectImpl(pObject->getEndTime())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"Surveyor")
    {
        if (pObject->hasValue_Surveyor())
        {
            strValue = (StringObjectImpl(pObject->getSurveyor())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"SurveyorFirm")
    {
        if (pObject->hasValue_SurveyorFirm())
        {
            strValue = (StringObjectImpl(pObject->getSurveyorFirm())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"SurveyorReference")
    {
        if (pObject->hasValue_SurveyorReference())
        {
            strValue = (StringObjectImpl(pObject->getSurveyorReference())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"SurveyorRegistration")
    {
        if (pObject->hasValue_SurveyorRegistration())
        {
            strValue = (StringObjectImpl(pObject->getSurveyorRegistration())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"SurveyPurpose")
    {
        if (pObject->hasValue_SurveyPurpose())
        {
            strValue = (StringObjectImpl(pObject->getSurveyPurpose())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"Type")
    {
        if (pObject->hasValue_Type())
        {
            strValue = (EnumSurveyTypeImpl(pObject->getType())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"Class")
    {
        if (pObject->hasValue_Class())
        {
            strValue = (StringObjectImpl(pObject->getClass())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"County")
    {
        if (pObject->hasValue_County())
        {
            strValue = (StringObjectImpl(pObject->getCounty())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"ApplyAtmosphericCorrection")
    {
        if (pObject->hasValue_ApplyAtmosphericCorrection())
        {
            strValue = (BooleanObjectImpl(pObject->getApplyAtmosphericCorrection())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"Pressure")
    {
        if (pObject->hasValue_Pressure())
        {
            strValue = (DoubleObjectImpl(pObject->getPressure())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"Temperature")
    {
        if (pObject->hasValue_Temperature())
        {
            strValue = (DoubleObjectImpl(pObject->getTemperature())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"ApplySeaLevelCorrection")
    {
        if (pObject->hasValue_ApplySeaLevelCorrection())
        {
            strValue = (BooleanObjectImpl(pObject->getApplySeaLevelCorrection())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"ScaleFactor")
    {
        if (pObject->hasValue_ScaleFactor())
        {
            strValue = (DoubleObjectImpl(pObject->getScaleFactor())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"SeaLevelCorrectionFactor")
    {
        if (pObject->hasValue_SeaLevelCorrectionFactor())
        {
            strValue = (DoubleObjectImpl(pObject->getSeaLevelCorrectionFactor())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"CombinedFactor")
    {
        if (pObject->hasValue_CombinedFactor())
        {
            strValue = (DoubleObjectImpl(pObject->getCombinedFactor())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"Jurisdiction")
    {
        if (pObject->hasValue_Jurisdiction())
        {
            strValue = (StringObjectImpl(pObject->getJurisdiction())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"SubmissionDate")
    {
        if (pObject->hasValue_SubmissionDate())
        {
            strValue = (StringObjectImpl(pObject->getSubmissionDate())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"DocumentStatus")
    {
        if (pObject->hasValue_DocumentStatus())
        {
            strValue = (StringObjectImpl(pObject->getDocumentStatus())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"SurveyFormat")
    {
        if (pObject->hasValue_SurveyFormat())
        {
            strValue = (StringObjectImpl(pObject->getSurveyFormat())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"SurveyStatus")
    {
        if (pObject->hasValue_SurveyStatus())
        {
            strValue = (StringObjectImpl(pObject->getSurveyStatus())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"CommunityTitleSchemeNo")
    {
        if (pObject->hasValue_CommunityTitleSchemeNo())
        {
            strValue = (IntegerObjectImpl(pObject->getCommunityTitleSchemeNo())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"CommunityTitleSchemeName")
    {
        if (pObject->hasValue_CommunityTitleSchemeName())
        {
            strValue = (StringObjectImpl(pObject->getCommunityTitleSchemeName())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"FieldNoteFlag")
    {
        if (pObject->hasValue_FieldNoteFlag())
        {
            strValue = (BooleanObjectImpl(pObject->getFieldNoteFlag())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"FieldNoteReference")
    {
        if (pObject->hasValue_FieldNoteReference())
        {
            strValue = (StringObjectImpl(pObject->getFieldNoteReference())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"FieldReport")
    {
        if (pObject->hasValue_FieldReport())
        {
            strValue = (StringObjectImpl(pObject->getFieldReport())).toString();
            bValueSet = true;
        }
    }
    return bValueSet;
}

String SurveyHeaderNode::nodeName() const
{
    return L"SurveyHeader";
}

}; // namespace : LX
