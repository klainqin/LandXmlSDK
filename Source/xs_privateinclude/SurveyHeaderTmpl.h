#if !defined(__SURVEYHEADERTMPL_H)
#define __SURVEYHEADERTMPL_H

#include "SurveyHeader.h"
#include "LXTypesTmpl.h"

namespace LX
{

class Units;
class CoordinateSystem;
class AnnotationCollection;
class AdministrativeAreaCollection;
class AdministrativeDateCollection;
class MapPointCollection;
class PersonnelCollection;
class FieldNoteCollection;
class FeatureCollection;
class SurveyorCertificateCollection;
class PurposeOfSurveyCollection;
class HeadOfPowerCollection;

// Class : SurveyHeader
template<class T>
class SurveyHeaderTmpl : public ObjectTmpl<T>, public IIdentifiable<String>
{

public:
	virtual void toXml (IStream& stream);
public:
	// Constructors
    SurveyHeaderTmpl (DocumentImpl* pDoc);

public:
	// Destructors
    virtual ~SurveyHeaderTmpl ();
public:
	// Collections
    virtual AnnotationCollection& Annotation();
    virtual const AnnotationCollection& Annotation() const;
    virtual AdministrativeAreaCollection& AdministrativeArea();
    virtual const AdministrativeAreaCollection& AdministrativeArea() const;
    virtual AdministrativeDateCollection& AdministrativeDate();
    virtual const AdministrativeDateCollection& AdministrativeDate() const;
    virtual MapPointCollection& MapPoint();
    virtual const MapPointCollection& MapPoint() const;
    virtual PersonnelCollection& Personnel();
    virtual const PersonnelCollection& Personnel() const;
    virtual FieldNoteCollection& FieldNote();
    virtual const FieldNoteCollection& FieldNote() const;
    virtual FeatureCollection& Feature();
    virtual const FeatureCollection& Feature() const;
    virtual SurveyorCertificateCollection& SurveyorCertificate();
    virtual const SurveyorCertificateCollection& SurveyorCertificate() const;
    virtual PurposeOfSurveyCollection& PurposeOfSurvey();
    virtual const PurposeOfSurveyCollection& PurposeOfSurvey() const;
    virtual HeadOfPowerCollection& HeadOfPower();
    virtual const HeadOfPowerCollection& HeadOfPower() const;

    virtual bool getObjectId(const String*& pId) const;
    virtual ValueObject* id () const;
    
public:
	// Properties
    virtual Units* getUnits() const;
    virtual void setUnits(Units* value);

    virtual CoordinateSystem* getCoordinateSystem() const;
    virtual void setCoordinateSystem(CoordinateSystem* value);


    virtual String getName() const;
    virtual void setName(String value);
    virtual bool hasValue_Name() const;
    virtual void resetValue_Name();
    
    virtual String getDesc() const;
    virtual void setDesc(String value);
    virtual bool hasValue_Desc() const;
    virtual void resetValue_Desc();
    
    virtual EnumPurposeType::Values getPurpose() const;
    virtual void setPurpose(EnumPurposeType::Values value);
    virtual bool hasValue_Purpose() const;
    virtual void resetValue_Purpose();
    
    virtual String getStartTime() const;
    virtual void setStartTime(String value);
    virtual bool hasValue_StartTime() const;
    virtual void resetValue_StartTime();
    
    virtual String getEndTime() const;
    virtual void setEndTime(String value);
    virtual bool hasValue_EndTime() const;
    virtual void resetValue_EndTime();
    
    virtual String getSurveyor() const;
    virtual void setSurveyor(String value);
    virtual bool hasValue_Surveyor() const;
    virtual void resetValue_Surveyor();
    
    virtual String getSurveyorFirm() const;
    virtual void setSurveyorFirm(String value);
    virtual bool hasValue_SurveyorFirm() const;
    virtual void resetValue_SurveyorFirm();
    
    virtual String getSurveyorReference() const;
    virtual void setSurveyorReference(String value);
    virtual bool hasValue_SurveyorReference() const;
    virtual void resetValue_SurveyorReference();
    
    virtual String getSurveyorRegistration() const;
    virtual void setSurveyorRegistration(String value);
    virtual bool hasValue_SurveyorRegistration() const;
    virtual void resetValue_SurveyorRegistration();
    
    virtual String getSurveyPurpose() const;
    virtual void setSurveyPurpose(String value);
    virtual bool hasValue_SurveyPurpose() const;
    virtual void resetValue_SurveyPurpose();
    
    virtual EnumSurveyType::Values getType() const;
    virtual void setType(EnumSurveyType::Values value);
    virtual bool hasValue_Type() const;
    virtual void resetValue_Type();
    
    virtual String getClass() const;
    virtual void setClass(String value);
    virtual bool hasValue_Class() const;
    virtual void resetValue_Class();
    
    virtual String getCounty() const;
    virtual void setCounty(String value);
    virtual bool hasValue_County() const;
    virtual void resetValue_County();
    
    virtual bool getApplyAtmosphericCorrection() const;
    virtual void setApplyAtmosphericCorrection(bool value);
    virtual bool hasValue_ApplyAtmosphericCorrection() const;
    virtual void resetValue_ApplyAtmosphericCorrection();
    
    virtual double getPressure() const;
    virtual void setPressure(double value);
    virtual bool hasValue_Pressure() const;
    virtual void resetValue_Pressure();
    
    virtual double getTemperature() const;
    virtual void setTemperature(double value);
    virtual bool hasValue_Temperature() const;
    virtual void resetValue_Temperature();
    
    virtual bool getApplySeaLevelCorrection() const;
    virtual void setApplySeaLevelCorrection(bool value);
    virtual bool hasValue_ApplySeaLevelCorrection() const;
    virtual void resetValue_ApplySeaLevelCorrection();
    
    virtual double getScaleFactor() const;
    virtual void setScaleFactor(double value);
    virtual bool hasValue_ScaleFactor() const;
    virtual void resetValue_ScaleFactor();
    
    virtual double getSeaLevelCorrectionFactor() const;
    virtual void setSeaLevelCorrectionFactor(double value);
    virtual bool hasValue_SeaLevelCorrectionFactor() const;
    virtual void resetValue_SeaLevelCorrectionFactor();
    
    virtual double getCombinedFactor() const;
    virtual void setCombinedFactor(double value);
    virtual bool hasValue_CombinedFactor() const;
    virtual void resetValue_CombinedFactor();
    
    virtual String getJurisdiction() const;
    virtual void setJurisdiction(String value);
    virtual bool hasValue_Jurisdiction() const;
    virtual void resetValue_Jurisdiction();
    
    virtual String getSubmissionDate() const;
    virtual void setSubmissionDate(String value);
    virtual bool hasValue_SubmissionDate() const;
    virtual void resetValue_SubmissionDate();
    
    virtual String getDocumentStatus() const;
    virtual void setDocumentStatus(String value);
    virtual bool hasValue_DocumentStatus() const;
    virtual void resetValue_DocumentStatus();
    
    virtual String getSurveyFormat() const;
    virtual void setSurveyFormat(String value);
    virtual bool hasValue_SurveyFormat() const;
    virtual void resetValue_SurveyFormat();
    
    virtual String getSurveyStatus() const;
    virtual void setSurveyStatus(String value);
    virtual bool hasValue_SurveyStatus() const;
    virtual void resetValue_SurveyStatus();
    
    virtual int getCommunityTitleSchemeNo() const;
    virtual void setCommunityTitleSchemeNo(int value);
    virtual bool hasValue_CommunityTitleSchemeNo() const;
    virtual void resetValue_CommunityTitleSchemeNo();
    
    virtual String getCommunityTitleSchemeName() const;
    virtual void setCommunityTitleSchemeName(String value);
    virtual bool hasValue_CommunityTitleSchemeName() const;
    virtual void resetValue_CommunityTitleSchemeName();
    
    virtual bool getFieldNoteFlag() const;
    virtual void setFieldNoteFlag(bool value);
    virtual bool hasValue_FieldNoteFlag() const;
    virtual void resetValue_FieldNoteFlag();
    
    virtual String getFieldNoteReference() const;
    virtual void setFieldNoteReference(String value);
    virtual bool hasValue_FieldNoteReference() const;
    virtual void resetValue_FieldNoteReference();
    
    virtual String getFieldReport() const;
    virtual void setFieldReport(String value);
    virtual bool hasValue_FieldReport() const;
    virtual void resetValue_FieldReport();
    

    virtual Object::ValidityEnum validate(IValidationEventSink *pEventSink) const;

protected:
    Units *m_Units;
    CoordinateSystem *m_CoordinateSystem;
    AnnotationCollection *m_Annotation;
    AdministrativeAreaCollection *m_AdministrativeArea;
    AdministrativeDateCollection *m_AdministrativeDate;
    MapPointCollection *m_MapPoint;
    PersonnelCollection *m_Personnel;
    FieldNoteCollection *m_FieldNote;
    FeatureCollection *m_Feature;
    SurveyorCertificateCollection *m_SurveyorCertificate;
    PurposeOfSurveyCollection *m_PurposeOfSurvey;
    HeadOfPowerCollection *m_HeadOfPower;
    String m_Name;
    bool m_bName_valueSet;
    String m_Desc;
    bool m_bDesc_valueSet;
    EnumPurposeType::Values m_Purpose;
    bool m_bPurpose_valueSet;
    String m_StartTime;
    bool m_bStartTime_valueSet;
    String m_EndTime;
    bool m_bEndTime_valueSet;
    String m_Surveyor;
    bool m_bSurveyor_valueSet;
    String m_SurveyorFirm;
    bool m_bSurveyorFirm_valueSet;
    String m_SurveyorReference;
    bool m_bSurveyorReference_valueSet;
    String m_SurveyorRegistration;
    bool m_bSurveyorRegistration_valueSet;
    String m_SurveyPurpose;
    bool m_bSurveyPurpose_valueSet;
    EnumSurveyType::Values m_Type;
    bool m_bType_valueSet;
    String m_Class;
    bool m_bClass_valueSet;
    String m_County;
    bool m_bCounty_valueSet;
    bool m_ApplyAtmosphericCorrection;
    bool m_bApplyAtmosphericCorrection_valueSet;
    double m_Pressure;
    bool m_bPressure_valueSet;
    double m_Temperature;
    bool m_bTemperature_valueSet;
    bool m_ApplySeaLevelCorrection;
    bool m_bApplySeaLevelCorrection_valueSet;
    double m_ScaleFactor;
    bool m_bScaleFactor_valueSet;
    double m_SeaLevelCorrectionFactor;
    bool m_bSeaLevelCorrectionFactor_valueSet;
    double m_CombinedFactor;
    bool m_bCombinedFactor_valueSet;
    String m_Jurisdiction;
    bool m_bJurisdiction_valueSet;
    String m_SubmissionDate;
    bool m_bSubmissionDate_valueSet;
    String m_DocumentStatus;
    bool m_bDocumentStatus_valueSet;
    String m_SurveyFormat;
    bool m_bSurveyFormat_valueSet;
    String m_SurveyStatus;
    bool m_bSurveyStatus_valueSet;
    int m_CommunityTitleSchemeNo;
    bool m_bCommunityTitleSchemeNo_valueSet;
    String m_CommunityTitleSchemeName;
    bool m_bCommunityTitleSchemeName_valueSet;
    bool m_FieldNoteFlag;
    bool m_bFieldNoteFlag_valueSet;
    String m_FieldNoteReference;
    bool m_bFieldNoteReference_valueSet;
    String m_FieldReport;
    bool m_bFieldReport_valueSet;
};
}; // namespace : LX
#endif
