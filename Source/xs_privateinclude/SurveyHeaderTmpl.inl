#include "stdafx.h"
#include "LXTypes.h"
#include "SurveyHeader.h"
#include "Units.h"
#include "CoordinateSystem.h"
#include "AnnotationCollection.h"
#include "AdministrativeAreaCollection.h"
#include "AdministrativeDateCollection.h"
#include "MapPointCollection.h"
#include "PersonnelCollection.h"
#include "FieldNoteCollection.h"
#include "FeatureCollection.h"
#include "SurveyorCertificateCollection.h"
#include "PurposeOfSurveyCollection.h"
#include "HeadOfPowerCollection.h"
#include "LXTypesTmpl.h"
#include "SurveyHeaderImpl.h"
#include "UnitsImpl.h"
#include "CoordinateSystemImpl.h"
#include "AnnotationCollectionImpl.h"
#include "AdministrativeAreaCollectionImpl.h"
#include "AdministrativeDateCollectionImpl.h"
#include "MapPointCollectionImpl.h"
#include "PersonnelCollectionImpl.h"
#include "FieldNoteCollectionImpl.h"
#include "FeatureCollectionImpl.h"
#include "SurveyorCertificateCollectionImpl.h"
#include "PurposeOfSurveyCollectionImpl.h"
#include "HeadOfPowerCollectionImpl.h"
#include "LXTypesTmpl.inl"

namespace LX
{


template<class T>
SurveyHeaderTmpl<T>::SurveyHeaderTmpl<T> (DocumentImpl* pDoc)
    : ObjectTmpl<T>(pDoc)
{
    m_Units = NULL;
    m_CoordinateSystem = NULL;
    m_Annotation = createAnnotationCollectionObject(pDoc);
    m_AdministrativeArea = createAdministrativeAreaCollectionObject(pDoc);
    m_AdministrativeDate = createAdministrativeDateCollectionObject(pDoc);
    m_MapPoint = createMapPointCollectionObject(pDoc);
    m_Personnel = createPersonnelCollectionObject(pDoc);
    m_FieldNote = createFieldNoteCollectionObject(pDoc);
    m_Feature = createFeatureCollectionObject(pDoc);
    m_SurveyorCertificate = createSurveyorCertificateCollectionObject(pDoc);
    m_PurposeOfSurvey = createPurposeOfSurveyCollectionObject(pDoc);
    m_HeadOfPower = createHeadOfPowerCollectionObject(pDoc);
    m_Name = L"";
    m_bName_valueSet = false;
    m_Desc = L"";
    m_bDesc_valueSet = false;
    m_Purpose = EnumPurposeType::Values::k_null;
    m_bPurpose_valueSet = false;
    m_StartTime = L"";
    m_bStartTime_valueSet = false;
    m_EndTime = L"";
    m_bEndTime_valueSet = false;
    m_Surveyor = L"";
    m_bSurveyor_valueSet = false;
    m_SurveyorFirm = L"";
    m_bSurveyorFirm_valueSet = false;
    m_SurveyorReference = L"";
    m_bSurveyorReference_valueSet = false;
    m_SurveyorRegistration = L"";
    m_bSurveyorRegistration_valueSet = false;
    m_SurveyPurpose = L"";
    m_bSurveyPurpose_valueSet = false;
    m_Type = EnumSurveyType::Values::k_null;
    m_bType_valueSet = false;
    m_Class = L"";
    m_bClass_valueSet = false;
    m_County = L"";
    m_bCounty_valueSet = false;
    m_ApplyAtmosphericCorrection = false;
    m_bApplyAtmosphericCorrection_valueSet = false;
    m_Pressure = 0.0;
    m_bPressure_valueSet = false;
    m_Temperature = 0.0;
    m_bTemperature_valueSet = false;
    m_ApplySeaLevelCorrection = false;
    m_bApplySeaLevelCorrection_valueSet = false;
    m_ScaleFactor = 0.0;
    m_bScaleFactor_valueSet = false;
    m_SeaLevelCorrectionFactor = 0.0;
    m_bSeaLevelCorrectionFactor_valueSet = false;
    m_CombinedFactor = 0.0;
    m_bCombinedFactor_valueSet = false;
    m_Jurisdiction = L"";
    m_bJurisdiction_valueSet = false;
    m_SubmissionDate = L"";
    m_bSubmissionDate_valueSet = false;
    m_DocumentStatus = L"";
    m_bDocumentStatus_valueSet = false;
    m_SurveyFormat = L"";
    m_bSurveyFormat_valueSet = false;
    m_SurveyStatus = L"";
    m_bSurveyStatus_valueSet = false;
    m_CommunityTitleSchemeNo = 0;
    m_bCommunityTitleSchemeNo_valueSet = false;
    m_CommunityTitleSchemeName = L"";
    m_bCommunityTitleSchemeName_valueSet = false;
    m_FieldNoteFlag = false;
    m_bFieldNoteFlag_valueSet = false;
    m_FieldNoteReference = L"";
    m_bFieldNoteReference_valueSet = false;
    m_FieldReport = L"";
    m_bFieldReport_valueSet = false;
}


template<class T>
SurveyHeaderTmpl<T>::~SurveyHeaderTmpl<T> ()
{
    if (m_Units != NULL)
    {
        m_Units->release();
        m_Units = NULL;
    }
    if (m_CoordinateSystem != NULL)
    {
        m_CoordinateSystem->release();
        m_CoordinateSystem = NULL;
    }
    if (m_Annotation != NULL)
    {
        m_Annotation->release();
        m_Annotation = NULL;
    }
    if (m_AdministrativeArea != NULL)
    {
        m_AdministrativeArea->release();
        m_AdministrativeArea = NULL;
    }
    if (m_AdministrativeDate != NULL)
    {
        m_AdministrativeDate->release();
        m_AdministrativeDate = NULL;
    }
    if (m_MapPoint != NULL)
    {
        m_MapPoint->release();
        m_MapPoint = NULL;
    }
    if (m_Personnel != NULL)
    {
        m_Personnel->release();
        m_Personnel = NULL;
    }
    if (m_FieldNote != NULL)
    {
        m_FieldNote->release();
        m_FieldNote = NULL;
    }
    if (m_Feature != NULL)
    {
        m_Feature->release();
        m_Feature = NULL;
    }
    if (m_SurveyorCertificate != NULL)
    {
        m_SurveyorCertificate->release();
        m_SurveyorCertificate = NULL;
    }
    if (m_PurposeOfSurvey != NULL)
    {
        m_PurposeOfSurvey->release();
        m_PurposeOfSurvey = NULL;
    }
    if (m_HeadOfPower != NULL)
    {
        m_HeadOfPower->release();
        m_HeadOfPower = NULL;
    }
}


template <class T>
bool SurveyHeaderTmpl<T>::getObjectId(const String*& pId) const
{
    if (m_bName_valueSet)
    {
        pId = &m_Name;
        return true;
    }
    else
    {
        pId = NULL;
        return false;
    }
}

template <class T>
ValueObject* SurveyHeaderTmpl<T>::id() const
{
    if (m_bName_valueSet)
    {
        ValueObject* pValue = new StringObjectTmpl<StringObject>(m_Name);
        if (!pValue)
	         throw Exception(Exception::kUnableToAllocateMemory, L"Out of Memory.");
        return pValue;
    }
    else
        return NULL;
}

template <class T>
AnnotationCollection& SurveyHeaderTmpl<T>::Annotation()
{
    return *m_Annotation;
}

template <class T>
const AnnotationCollection& SurveyHeaderTmpl<T>::Annotation() const
{
    return *m_Annotation;
}

template <class T>
AdministrativeAreaCollection& SurveyHeaderTmpl<T>::AdministrativeArea()
{
    return *m_AdministrativeArea;
}

template <class T>
const AdministrativeAreaCollection& SurveyHeaderTmpl<T>::AdministrativeArea() const
{
    return *m_AdministrativeArea;
}

template <class T>
AdministrativeDateCollection& SurveyHeaderTmpl<T>::AdministrativeDate()
{
    return *m_AdministrativeDate;
}

template <class T>
const AdministrativeDateCollection& SurveyHeaderTmpl<T>::AdministrativeDate() const
{
    return *m_AdministrativeDate;
}

template <class T>
MapPointCollection& SurveyHeaderTmpl<T>::MapPoint()
{
    return *m_MapPoint;
}

template <class T>
const MapPointCollection& SurveyHeaderTmpl<T>::MapPoint() const
{
    return *m_MapPoint;
}

template <class T>
PersonnelCollection& SurveyHeaderTmpl<T>::Personnel()
{
    return *m_Personnel;
}

template <class T>
const PersonnelCollection& SurveyHeaderTmpl<T>::Personnel() const
{
    return *m_Personnel;
}

template <class T>
FieldNoteCollection& SurveyHeaderTmpl<T>::FieldNote()
{
    return *m_FieldNote;
}

template <class T>
const FieldNoteCollection& SurveyHeaderTmpl<T>::FieldNote() const
{
    return *m_FieldNote;
}

template <class T>
FeatureCollection& SurveyHeaderTmpl<T>::Feature()
{
    return *m_Feature;
}

template <class T>
const FeatureCollection& SurveyHeaderTmpl<T>::Feature() const
{
    return *m_Feature;
}

template <class T>
SurveyorCertificateCollection& SurveyHeaderTmpl<T>::SurveyorCertificate()
{
    return *m_SurveyorCertificate;
}

template <class T>
const SurveyorCertificateCollection& SurveyHeaderTmpl<T>::SurveyorCertificate() const
{
    return *m_SurveyorCertificate;
}

template <class T>
PurposeOfSurveyCollection& SurveyHeaderTmpl<T>::PurposeOfSurvey()
{
    return *m_PurposeOfSurvey;
}

template <class T>
const PurposeOfSurveyCollection& SurveyHeaderTmpl<T>::PurposeOfSurvey() const
{
    return *m_PurposeOfSurvey;
}

template <class T>
HeadOfPowerCollection& SurveyHeaderTmpl<T>::HeadOfPower()
{
    return *m_HeadOfPower;
}

template <class T>
const HeadOfPowerCollection& SurveyHeaderTmpl<T>::HeadOfPower() const
{
    return *m_HeadOfPower;
}


template <class T>
Units* SurveyHeaderTmpl<T>::getUnits() const
{
    return m_Units;
}

template <class T>
void SurveyHeaderTmpl<T>::setUnits(Units* pValue)
{
    m_Units = pValue;
}

template <class T>
CoordinateSystem* SurveyHeaderTmpl<T>::getCoordinateSystem() const
{
    return m_CoordinateSystem;
}

template <class T>
void SurveyHeaderTmpl<T>::setCoordinateSystem(CoordinateSystem* pValue)
{
    m_CoordinateSystem = pValue;
}


template <class T>
String SurveyHeaderTmpl<T>::getName() const
{
    return m_Name;
}

template <class T>
void SurveyHeaderTmpl<T>::setName(String value)
{
    String oldValue = m_Name;
    m_Name = value;
    if (m_pCollectionLocation)
    {
        // We are in a collection. Now check to make sure we are in a named collection.
        NamedCollectionLocation* pNamedCollLoc = dynamic_cast<NamedCollectionLocation*>(m_pCollectionLocation);
        if (pNamedCollLoc)
        {
            try
            {
                // First check the name.
                if (!pNamedCollLoc->objectCheckNewName())
	                 throw Exception(Exception::kObjectIdCollectionConflict, L"Unable to change identifying member, because collection name conflict.");
                // We are in a named collection. Now tell the collection the object has been renamed.
                if (!pNamedCollLoc->objectRenamed())
                    // Object could not be renamed within the collection.
	                 throw Exception(Exception::kObjectRenamedFailed, L"Could not rename object within collection.");
            }
            catch (Exception e)
            {
                m_Name = oldValue;
                throw;
            }
        }
    }
    m_bName_valueSet = true;
}

template <class T>
bool SurveyHeaderTmpl<T>::hasValue_Name() const
{
    return m_bName_valueSet;
}

template <class T>
void SurveyHeaderTmpl<T>::resetValue_Name()
{
    m_bName_valueSet = false;
}


template <class T>
String SurveyHeaderTmpl<T>::getDesc() const
{
    return m_Desc;
}

template <class T>
void SurveyHeaderTmpl<T>::setDesc(String value)
{
    m_Desc = value;
    m_bDesc_valueSet = true;
}

template <class T>
bool SurveyHeaderTmpl<T>::hasValue_Desc() const
{
    return m_bDesc_valueSet;
}

template <class T>
void SurveyHeaderTmpl<T>::resetValue_Desc()
{
    m_bDesc_valueSet = false;
}


template <class T>
EnumPurposeType::Values SurveyHeaderTmpl<T>::getPurpose() const
{
    return m_Purpose;
}

template <class T>
void SurveyHeaderTmpl<T>::setPurpose(EnumPurposeType::Values value)
{
    m_Purpose = value;
    m_bPurpose_valueSet = true;
}

template <class T>
bool SurveyHeaderTmpl<T>::hasValue_Purpose() const
{
    return m_bPurpose_valueSet;
}

template <class T>
void SurveyHeaderTmpl<T>::resetValue_Purpose()
{
    m_bPurpose_valueSet = false;
}


template <class T>
String SurveyHeaderTmpl<T>::getStartTime() const
{
    return m_StartTime;
}

template <class T>
void SurveyHeaderTmpl<T>::setStartTime(String value)
{
    m_StartTime = value;
    m_bStartTime_valueSet = true;
}

template <class T>
bool SurveyHeaderTmpl<T>::hasValue_StartTime() const
{
    return m_bStartTime_valueSet;
}

template <class T>
void SurveyHeaderTmpl<T>::resetValue_StartTime()
{
    m_bStartTime_valueSet = false;
}


template <class T>
String SurveyHeaderTmpl<T>::getEndTime() const
{
    return m_EndTime;
}

template <class T>
void SurveyHeaderTmpl<T>::setEndTime(String value)
{
    m_EndTime = value;
    m_bEndTime_valueSet = true;
}

template <class T>
bool SurveyHeaderTmpl<T>::hasValue_EndTime() const
{
    return m_bEndTime_valueSet;
}

template <class T>
void SurveyHeaderTmpl<T>::resetValue_EndTime()
{
    m_bEndTime_valueSet = false;
}


template <class T>
String SurveyHeaderTmpl<T>::getSurveyor() const
{
    return m_Surveyor;
}

template <class T>
void SurveyHeaderTmpl<T>::setSurveyor(String value)
{
    m_Surveyor = value;
    m_bSurveyor_valueSet = true;
}

template <class T>
bool SurveyHeaderTmpl<T>::hasValue_Surveyor() const
{
    return m_bSurveyor_valueSet;
}

template <class T>
void SurveyHeaderTmpl<T>::resetValue_Surveyor()
{
    m_bSurveyor_valueSet = false;
}


template <class T>
String SurveyHeaderTmpl<T>::getSurveyorFirm() const
{
    return m_SurveyorFirm;
}

template <class T>
void SurveyHeaderTmpl<T>::setSurveyorFirm(String value)
{
    m_SurveyorFirm = value;
    m_bSurveyorFirm_valueSet = true;
}

template <class T>
bool SurveyHeaderTmpl<T>::hasValue_SurveyorFirm() const
{
    return m_bSurveyorFirm_valueSet;
}

template <class T>
void SurveyHeaderTmpl<T>::resetValue_SurveyorFirm()
{
    m_bSurveyorFirm_valueSet = false;
}


template <class T>
String SurveyHeaderTmpl<T>::getSurveyorReference() const
{
    return m_SurveyorReference;
}

template <class T>
void SurveyHeaderTmpl<T>::setSurveyorReference(String value)
{
    m_SurveyorReference = value;
    m_bSurveyorReference_valueSet = true;
}

template <class T>
bool SurveyHeaderTmpl<T>::hasValue_SurveyorReference() const
{
    return m_bSurveyorReference_valueSet;
}

template <class T>
void SurveyHeaderTmpl<T>::resetValue_SurveyorReference()
{
    m_bSurveyorReference_valueSet = false;
}


template <class T>
String SurveyHeaderTmpl<T>::getSurveyorRegistration() const
{
    return m_SurveyorRegistration;
}

template <class T>
void SurveyHeaderTmpl<T>::setSurveyorRegistration(String value)
{
    m_SurveyorRegistration = value;
    m_bSurveyorRegistration_valueSet = true;
}

template <class T>
bool SurveyHeaderTmpl<T>::hasValue_SurveyorRegistration() const
{
    return m_bSurveyorRegistration_valueSet;
}

template <class T>
void SurveyHeaderTmpl<T>::resetValue_SurveyorRegistration()
{
    m_bSurveyorRegistration_valueSet = false;
}


template <class T>
String SurveyHeaderTmpl<T>::getSurveyPurpose() const
{
    return m_SurveyPurpose;
}

template <class T>
void SurveyHeaderTmpl<T>::setSurveyPurpose(String value)
{
    m_SurveyPurpose = value;
    m_bSurveyPurpose_valueSet = true;
}

template <class T>
bool SurveyHeaderTmpl<T>::hasValue_SurveyPurpose() const
{
    return m_bSurveyPurpose_valueSet;
}

template <class T>
void SurveyHeaderTmpl<T>::resetValue_SurveyPurpose()
{
    m_bSurveyPurpose_valueSet = false;
}


template <class T>
EnumSurveyType::Values SurveyHeaderTmpl<T>::getType() const
{
    return m_Type;
}

template <class T>
void SurveyHeaderTmpl<T>::setType(EnumSurveyType::Values value)
{
    m_Type = value;
    m_bType_valueSet = true;
}

template <class T>
bool SurveyHeaderTmpl<T>::hasValue_Type() const
{
    return m_bType_valueSet;
}

template <class T>
void SurveyHeaderTmpl<T>::resetValue_Type()
{
    m_bType_valueSet = false;
}


template <class T>
String SurveyHeaderTmpl<T>::getClass() const
{
    return m_Class;
}

template <class T>
void SurveyHeaderTmpl<T>::setClass(String value)
{
    m_Class = value;
    m_bClass_valueSet = true;
}

template <class T>
bool SurveyHeaderTmpl<T>::hasValue_Class() const
{
    return m_bClass_valueSet;
}

template <class T>
void SurveyHeaderTmpl<T>::resetValue_Class()
{
    m_bClass_valueSet = false;
}


template <class T>
String SurveyHeaderTmpl<T>::getCounty() const
{
    return m_County;
}

template <class T>
void SurveyHeaderTmpl<T>::setCounty(String value)
{
    m_County = value;
    m_bCounty_valueSet = true;
}

template <class T>
bool SurveyHeaderTmpl<T>::hasValue_County() const
{
    return m_bCounty_valueSet;
}

template <class T>
void SurveyHeaderTmpl<T>::resetValue_County()
{
    m_bCounty_valueSet = false;
}


template <class T>
bool SurveyHeaderTmpl<T>::getApplyAtmosphericCorrection() const
{
    return m_ApplyAtmosphericCorrection;
}

template <class T>
void SurveyHeaderTmpl<T>::setApplyAtmosphericCorrection(bool value)
{
    m_ApplyAtmosphericCorrection = value;
    m_bApplyAtmosphericCorrection_valueSet = true;
}

template <class T>
bool SurveyHeaderTmpl<T>::hasValue_ApplyAtmosphericCorrection() const
{
    return m_bApplyAtmosphericCorrection_valueSet;
}

template <class T>
void SurveyHeaderTmpl<T>::resetValue_ApplyAtmosphericCorrection()
{
    m_bApplyAtmosphericCorrection_valueSet = false;
}


template <class T>
double SurveyHeaderTmpl<T>::getPressure() const
{
    return m_Pressure;
}

template <class T>
void SurveyHeaderTmpl<T>::setPressure(double value)
{
    m_Pressure = value;
    m_bPressure_valueSet = true;
}

template <class T>
bool SurveyHeaderTmpl<T>::hasValue_Pressure() const
{
    return m_bPressure_valueSet;
}

template <class T>
void SurveyHeaderTmpl<T>::resetValue_Pressure()
{
    m_bPressure_valueSet = false;
}


template <class T>
double SurveyHeaderTmpl<T>::getTemperature() const
{
    return m_Temperature;
}

template <class T>
void SurveyHeaderTmpl<T>::setTemperature(double value)
{
    m_Temperature = value;
    m_bTemperature_valueSet = true;
}

template <class T>
bool SurveyHeaderTmpl<T>::hasValue_Temperature() const
{
    return m_bTemperature_valueSet;
}

template <class T>
void SurveyHeaderTmpl<T>::resetValue_Temperature()
{
    m_bTemperature_valueSet = false;
}


template <class T>
bool SurveyHeaderTmpl<T>::getApplySeaLevelCorrection() const
{
    return m_ApplySeaLevelCorrection;
}

template <class T>
void SurveyHeaderTmpl<T>::setApplySeaLevelCorrection(bool value)
{
    m_ApplySeaLevelCorrection = value;
    m_bApplySeaLevelCorrection_valueSet = true;
}

template <class T>
bool SurveyHeaderTmpl<T>::hasValue_ApplySeaLevelCorrection() const
{
    return m_bApplySeaLevelCorrection_valueSet;
}

template <class T>
void SurveyHeaderTmpl<T>::resetValue_ApplySeaLevelCorrection()
{
    m_bApplySeaLevelCorrection_valueSet = false;
}


template <class T>
double SurveyHeaderTmpl<T>::getScaleFactor() const
{
    return m_ScaleFactor;
}

template <class T>
void SurveyHeaderTmpl<T>::setScaleFactor(double value)
{
    m_ScaleFactor = value;
    m_bScaleFactor_valueSet = true;
}

template <class T>
bool SurveyHeaderTmpl<T>::hasValue_ScaleFactor() const
{
    return m_bScaleFactor_valueSet;
}

template <class T>
void SurveyHeaderTmpl<T>::resetValue_ScaleFactor()
{
    m_bScaleFactor_valueSet = false;
}


template <class T>
double SurveyHeaderTmpl<T>::getSeaLevelCorrectionFactor() const
{
    return m_SeaLevelCorrectionFactor;
}

template <class T>
void SurveyHeaderTmpl<T>::setSeaLevelCorrectionFactor(double value)
{
    m_SeaLevelCorrectionFactor = value;
    m_bSeaLevelCorrectionFactor_valueSet = true;
}

template <class T>
bool SurveyHeaderTmpl<T>::hasValue_SeaLevelCorrectionFactor() const
{
    return m_bSeaLevelCorrectionFactor_valueSet;
}

template <class T>
void SurveyHeaderTmpl<T>::resetValue_SeaLevelCorrectionFactor()
{
    m_bSeaLevelCorrectionFactor_valueSet = false;
}


template <class T>
double SurveyHeaderTmpl<T>::getCombinedFactor() const
{
    return m_CombinedFactor;
}

template <class T>
void SurveyHeaderTmpl<T>::setCombinedFactor(double value)
{
    m_CombinedFactor = value;
    m_bCombinedFactor_valueSet = true;
}

template <class T>
bool SurveyHeaderTmpl<T>::hasValue_CombinedFactor() const
{
    return m_bCombinedFactor_valueSet;
}

template <class T>
void SurveyHeaderTmpl<T>::resetValue_CombinedFactor()
{
    m_bCombinedFactor_valueSet = false;
}


template <class T>
String SurveyHeaderTmpl<T>::getJurisdiction() const
{
    return m_Jurisdiction;
}

template <class T>
void SurveyHeaderTmpl<T>::setJurisdiction(String value)
{
    m_Jurisdiction = value;
    m_bJurisdiction_valueSet = true;
}

template <class T>
bool SurveyHeaderTmpl<T>::hasValue_Jurisdiction() const
{
    return m_bJurisdiction_valueSet;
}

template <class T>
void SurveyHeaderTmpl<T>::resetValue_Jurisdiction()
{
    m_bJurisdiction_valueSet = false;
}


template <class T>
String SurveyHeaderTmpl<T>::getSubmissionDate() const
{
    return m_SubmissionDate;
}

template <class T>
void SurveyHeaderTmpl<T>::setSubmissionDate(String value)
{
    m_SubmissionDate = value;
    m_bSubmissionDate_valueSet = true;
}

template <class T>
bool SurveyHeaderTmpl<T>::hasValue_SubmissionDate() const
{
    return m_bSubmissionDate_valueSet;
}

template <class T>
void SurveyHeaderTmpl<T>::resetValue_SubmissionDate()
{
    m_bSubmissionDate_valueSet = false;
}


template <class T>
String SurveyHeaderTmpl<T>::getDocumentStatus() const
{
    return m_DocumentStatus;
}

template <class T>
void SurveyHeaderTmpl<T>::setDocumentStatus(String value)
{
    m_DocumentStatus = value;
    m_bDocumentStatus_valueSet = true;
}

template <class T>
bool SurveyHeaderTmpl<T>::hasValue_DocumentStatus() const
{
    return m_bDocumentStatus_valueSet;
}

template <class T>
void SurveyHeaderTmpl<T>::resetValue_DocumentStatus()
{
    m_bDocumentStatus_valueSet = false;
}


template <class T>
String SurveyHeaderTmpl<T>::getSurveyFormat() const
{
    return m_SurveyFormat;
}

template <class T>
void SurveyHeaderTmpl<T>::setSurveyFormat(String value)
{
    m_SurveyFormat = value;
    m_bSurveyFormat_valueSet = true;
}

template <class T>
bool SurveyHeaderTmpl<T>::hasValue_SurveyFormat() const
{
    return m_bSurveyFormat_valueSet;
}

template <class T>
void SurveyHeaderTmpl<T>::resetValue_SurveyFormat()
{
    m_bSurveyFormat_valueSet = false;
}


template <class T>
String SurveyHeaderTmpl<T>::getSurveyStatus() const
{
    return m_SurveyStatus;
}

template <class T>
void SurveyHeaderTmpl<T>::setSurveyStatus(String value)
{
    m_SurveyStatus = value;
    m_bSurveyStatus_valueSet = true;
}

template <class T>
bool SurveyHeaderTmpl<T>::hasValue_SurveyStatus() const
{
    return m_bSurveyStatus_valueSet;
}

template <class T>
void SurveyHeaderTmpl<T>::resetValue_SurveyStatus()
{
    m_bSurveyStatus_valueSet = false;
}


template <class T>
int SurveyHeaderTmpl<T>::getCommunityTitleSchemeNo() const
{
    return m_CommunityTitleSchemeNo;
}

template <class T>
void SurveyHeaderTmpl<T>::setCommunityTitleSchemeNo(int value)
{
    m_CommunityTitleSchemeNo = value;
    m_bCommunityTitleSchemeNo_valueSet = true;
}

template <class T>
bool SurveyHeaderTmpl<T>::hasValue_CommunityTitleSchemeNo() const
{
    return m_bCommunityTitleSchemeNo_valueSet;
}

template <class T>
void SurveyHeaderTmpl<T>::resetValue_CommunityTitleSchemeNo()
{
    m_bCommunityTitleSchemeNo_valueSet = false;
}


template <class T>
String SurveyHeaderTmpl<T>::getCommunityTitleSchemeName() const
{
    return m_CommunityTitleSchemeName;
}

template <class T>
void SurveyHeaderTmpl<T>::setCommunityTitleSchemeName(String value)
{
    m_CommunityTitleSchemeName = value;
    m_bCommunityTitleSchemeName_valueSet = true;
}

template <class T>
bool SurveyHeaderTmpl<T>::hasValue_CommunityTitleSchemeName() const
{
    return m_bCommunityTitleSchemeName_valueSet;
}

template <class T>
void SurveyHeaderTmpl<T>::resetValue_CommunityTitleSchemeName()
{
    m_bCommunityTitleSchemeName_valueSet = false;
}


template <class T>
bool SurveyHeaderTmpl<T>::getFieldNoteFlag() const
{
    return m_FieldNoteFlag;
}

template <class T>
void SurveyHeaderTmpl<T>::setFieldNoteFlag(bool value)
{
    m_FieldNoteFlag = value;
    m_bFieldNoteFlag_valueSet = true;
}

template <class T>
bool SurveyHeaderTmpl<T>::hasValue_FieldNoteFlag() const
{
    return m_bFieldNoteFlag_valueSet;
}

template <class T>
void SurveyHeaderTmpl<T>::resetValue_FieldNoteFlag()
{
    m_bFieldNoteFlag_valueSet = false;
}


template <class T>
String SurveyHeaderTmpl<T>::getFieldNoteReference() const
{
    return m_FieldNoteReference;
}

template <class T>
void SurveyHeaderTmpl<T>::setFieldNoteReference(String value)
{
    m_FieldNoteReference = value;
    m_bFieldNoteReference_valueSet = true;
}

template <class T>
bool SurveyHeaderTmpl<T>::hasValue_FieldNoteReference() const
{
    return m_bFieldNoteReference_valueSet;
}

template <class T>
void SurveyHeaderTmpl<T>::resetValue_FieldNoteReference()
{
    m_bFieldNoteReference_valueSet = false;
}


template <class T>
String SurveyHeaderTmpl<T>::getFieldReport() const
{
    return m_FieldReport;
}

template <class T>
void SurveyHeaderTmpl<T>::setFieldReport(String value)
{
    m_FieldReport = value;
    m_bFieldReport_valueSet = true;
}

template <class T>
bool SurveyHeaderTmpl<T>::hasValue_FieldReport() const
{
    return m_bFieldReport_valueSet;
}

template <class T>
void SurveyHeaderTmpl<T>::resetValue_FieldReport()
{
    m_bFieldReport_valueSet = false;
}



template <class T>
void SurveyHeaderTmpl<T>::toXml (IStream& stream)
{
    static const wchar_t* kstrElementName = L"SurveyHeader";
    stream.write(L"<");
    stream.write(kstrElementName);
    if (m_bName_valueSet)
    {
        stream.write(L" name=\"");
        StringObjectImpl::streamOut(m_Name, stream);
        stream.write(L"\"");
    }
    if (m_bDesc_valueSet)
    {
        stream.write(L" desc=\"");
        StringObjectImpl::streamOut(m_Desc, stream);
        stream.write(L"\"");
    }
    if (m_bPurpose_valueSet)
    {
        stream.write(L" purpose=\"");
        EnumPurposeTypeImpl::streamOut(m_Purpose, stream);
        stream.write(L"\"");
    }
    if (m_bStartTime_valueSet)
    {
        stream.write(L" startTime=\"");
        StringObjectImpl::streamOut(m_StartTime, stream);
        stream.write(L"\"");
    }
    if (m_bEndTime_valueSet)
    {
        stream.write(L" endTime=\"");
        StringObjectImpl::streamOut(m_EndTime, stream);
        stream.write(L"\"");
    }
    if (m_bSurveyor_valueSet)
    {
        stream.write(L" surveyor=\"");
        StringObjectImpl::streamOut(m_Surveyor, stream);
        stream.write(L"\"");
    }
    if (m_bSurveyorFirm_valueSet)
    {
        stream.write(L" surveyorFirm=\"");
        StringObjectImpl::streamOut(m_SurveyorFirm, stream);
        stream.write(L"\"");
    }
    if (m_bSurveyorReference_valueSet)
    {
        stream.write(L" surveyorReference=\"");
        StringObjectImpl::streamOut(m_SurveyorReference, stream);
        stream.write(L"\"");
    }
    if (m_bSurveyorRegistration_valueSet)
    {
        stream.write(L" surveyorRegistration=\"");
        StringObjectImpl::streamOut(m_SurveyorRegistration, stream);
        stream.write(L"\"");
    }
    if (m_bSurveyPurpose_valueSet)
    {
        stream.write(L" surveyPurpose=\"");
        StringObjectImpl::streamOut(m_SurveyPurpose, stream);
        stream.write(L"\"");
    }
    if (m_bType_valueSet)
    {
        stream.write(L" type=\"");
        EnumSurveyTypeImpl::streamOut(m_Type, stream);
        stream.write(L"\"");
    }
    if (m_bClass_valueSet)
    {
        stream.write(L" class=\"");
        StringObjectImpl::streamOut(m_Class, stream);
        stream.write(L"\"");
    }
    if (m_bCounty_valueSet)
    {
        stream.write(L" county=\"");
        StringObjectImpl::streamOut(m_County, stream);
        stream.write(L"\"");
    }
    if (m_bApplyAtmosphericCorrection_valueSet)
    {
        stream.write(L" applyAtmosphericCorrection=\"");
        BooleanObjectImpl::streamOut(m_ApplyAtmosphericCorrection, stream);
        stream.write(L"\"");
    }
    if (m_bPressure_valueSet)
    {
        stream.write(L" pressure=\"");
        DoubleObjectImpl::streamOut(m_Pressure, stream);
        stream.write(L"\"");
    }
    if (m_bTemperature_valueSet)
    {
        stream.write(L" temperature=\"");
        DoubleObjectImpl::streamOut(m_Temperature, stream);
        stream.write(L"\"");
    }
    if (m_bApplySeaLevelCorrection_valueSet)
    {
        stream.write(L" applySeaLevelCorrection=\"");
        BooleanObjectImpl::streamOut(m_ApplySeaLevelCorrection, stream);
        stream.write(L"\"");
    }
    if (m_bScaleFactor_valueSet)
    {
        stream.write(L" scaleFactor=\"");
        DoubleObjectImpl::streamOut(m_ScaleFactor, stream);
        stream.write(L"\"");
    }
    if (m_bSeaLevelCorrectionFactor_valueSet)
    {
        stream.write(L" seaLevelCorrectionFactor=\"");
        DoubleObjectImpl::streamOut(m_SeaLevelCorrectionFactor, stream);
        stream.write(L"\"");
    }
    if (m_bCombinedFactor_valueSet)
    {
        stream.write(L" combinedFactor=\"");
        DoubleObjectImpl::streamOut(m_CombinedFactor, stream);
        stream.write(L"\"");
    }
    if (m_bJurisdiction_valueSet)
    {
        stream.write(L" jurisdiction=\"");
        StringObjectImpl::streamOut(m_Jurisdiction, stream);
        stream.write(L"\"");
    }
    if (m_bSubmissionDate_valueSet)
    {
        stream.write(L" submissionDate=\"");
        StringObjectImpl::streamOut(m_SubmissionDate, stream);
        stream.write(L"\"");
    }
    if (m_bDocumentStatus_valueSet)
    {
        stream.write(L" documentStatus=\"");
        StringObjectImpl::streamOut(m_DocumentStatus, stream);
        stream.write(L"\"");
    }
    if (m_bSurveyFormat_valueSet)
    {
        stream.write(L" surveyFormat=\"");
        StringObjectImpl::streamOut(m_SurveyFormat, stream);
        stream.write(L"\"");
    }
    if (m_bSurveyStatus_valueSet)
    {
        stream.write(L" surveyStatus=\"");
        StringObjectImpl::streamOut(m_SurveyStatus, stream);
        stream.write(L"\"");
    }
    if (m_bCommunityTitleSchemeNo_valueSet)
    {
        stream.write(L" communityTitleSchemeNo=\"");
        IntegerObjectImpl::streamOut(m_CommunityTitleSchemeNo, stream);
        stream.write(L"\"");
    }
    if (m_bCommunityTitleSchemeName_valueSet)
    {
        stream.write(L" communityTitleSchemeName=\"");
        StringObjectImpl::streamOut(m_CommunityTitleSchemeName, stream);
        stream.write(L"\"");
    }
    if (m_bFieldNoteFlag_valueSet)
    {
        stream.write(L" fieldNoteFlag=\"");
        BooleanObjectImpl::streamOut(m_FieldNoteFlag, stream);
        stream.write(L"\"");
    }
    if (m_bFieldNoteReference_valueSet)
    {
        stream.write(L" fieldNoteReference=\"");
        StringObjectImpl::streamOut(m_FieldNoteReference, stream);
        stream.write(L"\"");
    }
    if (m_bFieldReport_valueSet)
    {
        stream.write(L" fieldReport=\"");
        StringObjectImpl::streamOut(m_FieldReport, stream);
        stream.write(L"\"");
    }
    stream.write(L">");
    if (m_Units)
    {
    	m_Units->toXml(stream);
    }
    if (m_CoordinateSystem)
    {
    	m_CoordinateSystem->toXml(stream);
    }
    if (m_Annotation)
    {
    	m_Annotation->toXml(stream);
    }
    if (m_AdministrativeArea)
    {
    	m_AdministrativeArea->toXml(stream);
    }
    if (m_AdministrativeDate)
    {
    	m_AdministrativeDate->toXml(stream);
    }
    if (m_MapPoint)
    {
    	m_MapPoint->toXml(stream);
    }
    if (m_Personnel)
    {
    	m_Personnel->toXml(stream);
    }
    if (m_FieldNote)
    {
    	m_FieldNote->toXml(stream);
    }
    if (m_Feature)
    {
    	m_Feature->toXml(stream);
    }
    if (m_SurveyorCertificate)
    {
    	m_SurveyorCertificate->toXml(stream);
    }
    if (m_PurposeOfSurvey)
    {
    	m_PurposeOfSurvey->toXml(stream);
    }
    if (m_HeadOfPower)
    {
    	m_HeadOfPower->toXml(stream);
    }
    stream.write(L"</");
    stream.write(kstrElementName);
    stream.write(L">");
}

template <class T>
Object::ValidityEnum SurveyHeaderTmpl<T>::validate (IValidationEventSink* pEventSink) const
{
    Object::ValidityEnum returnCode = Object::kValid;
    returnCode = this->ObjectTmpl<T>::validate(pEventSink);
    if (m_Units)
    {
        if (m_Units->validate(pEventSink) != Object::kValid)
            returnCode = Object::kValidWithInvalidChildren;
    }
    if (m_CoordinateSystem)
    {
        if (m_CoordinateSystem->validate(pEventSink) != Object::kValid)
            returnCode = Object::kValidWithInvalidChildren;
    }
    if (m_Annotation)
    {
        if (m_Annotation->validate(pEventSink) != Object::kValid)
            returnCode = Object::kValidWithInvalidChildren;
    }
    if (m_AdministrativeArea)
    {
        if (m_AdministrativeArea->validate(pEventSink) != Object::kValid)
            returnCode = Object::kValidWithInvalidChildren;
    }
    if (m_AdministrativeDate)
    {
        if (m_AdministrativeDate->validate(pEventSink) != Object::kValid)
            returnCode = Object::kValidWithInvalidChildren;
    }
    if (m_MapPoint)
    {
        if (m_MapPoint->validate(pEventSink) != Object::kValid)
            returnCode = Object::kValidWithInvalidChildren;
    }
    if (m_Personnel)
    {
        if (m_Personnel->validate(pEventSink) != Object::kValid)
            returnCode = Object::kValidWithInvalidChildren;
    }
    if (m_FieldNote)
    {
        if (m_FieldNote->validate(pEventSink) != Object::kValid)
            returnCode = Object::kValidWithInvalidChildren;
    }
    if (m_Feature)
    {
        if (m_Feature->validate(pEventSink) != Object::kValid)
            returnCode = Object::kValidWithInvalidChildren;
    }
    if (m_SurveyorCertificate)
    {
        if (m_SurveyorCertificate->validate(pEventSink) != Object::kValid)
            returnCode = Object::kValidWithInvalidChildren;
    }
    if (m_PurposeOfSurvey)
    {
        if (m_PurposeOfSurvey->validate(pEventSink) != Object::kValid)
            returnCode = Object::kValidWithInvalidChildren;
    }
    if (m_HeadOfPower)
    {
        if (m_HeadOfPower->validate(pEventSink) != Object::kValid)
            returnCode = Object::kValidWithInvalidChildren;
    }
    if (!m_bName_valueSet)
    {
        pEventSink->onEvent(IValidationEventSink::EventCode::kRequiredValueNotSet, this, L"Name", L"Required value not set");
        returnCode = Object::kInvalid;
    }
    return returnCode;
}

}; // namespace : LX
