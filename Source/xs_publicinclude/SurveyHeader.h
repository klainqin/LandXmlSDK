#if !defined(__SURVEYHEADER_H)
#define __SURVEYHEADER_H

#include "SurveyHeader.h"
#include "LXTypes.h"

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
class SurveyHeader : public Object
{

public:
	virtual void toXml (IStream& stream) = 0;
public:
	// Collections
    virtual AnnotationCollection& Annotation() = 0;
    virtual const AnnotationCollection& Annotation() const = 0;
    virtual AdministrativeAreaCollection& AdministrativeArea() = 0;
    virtual const AdministrativeAreaCollection& AdministrativeArea() const = 0;
    virtual AdministrativeDateCollection& AdministrativeDate() = 0;
    virtual const AdministrativeDateCollection& AdministrativeDate() const = 0;
    virtual MapPointCollection& MapPoint() = 0;
    virtual const MapPointCollection& MapPoint() const = 0;
    virtual PersonnelCollection& Personnel() = 0;
    virtual const PersonnelCollection& Personnel() const = 0;
    virtual FieldNoteCollection& FieldNote() = 0;
    virtual const FieldNoteCollection& FieldNote() const = 0;
    virtual FeatureCollection& Feature() = 0;
    virtual const FeatureCollection& Feature() const = 0;
    virtual SurveyorCertificateCollection& SurveyorCertificate() = 0;
    virtual const SurveyorCertificateCollection& SurveyorCertificate() const = 0;
    virtual PurposeOfSurveyCollection& PurposeOfSurvey() = 0;
    virtual const PurposeOfSurveyCollection& PurposeOfSurvey() const = 0;
    virtual HeadOfPowerCollection& HeadOfPower() = 0;
    virtual const HeadOfPowerCollection& HeadOfPower() const = 0;

public:
	// Properties
    virtual Units* getUnits() const = 0;
    virtual void setUnits(Units* value) = 0;
    
    virtual CoordinateSystem* getCoordinateSystem() const = 0;
    virtual void setCoordinateSystem(CoordinateSystem* value) = 0;
    
    
    virtual String getName() const = 0;
    virtual void setName(String value) = 0;
    virtual bool hasValue_Name() const = 0;
    virtual void resetValue_Name() = 0;
    
    virtual String getDesc() const = 0;
    virtual void setDesc(String value) = 0;
    virtual bool hasValue_Desc() const = 0;
    virtual void resetValue_Desc() = 0;
    
    virtual EnumPurposeType::Values getPurpose() const = 0;
    virtual void setPurpose(EnumPurposeType::Values value) = 0;
    virtual bool hasValue_Purpose() const = 0;
    virtual void resetValue_Purpose() = 0;
    
    virtual String getStartTime() const = 0;
    virtual void setStartTime(String value) = 0;
    virtual bool hasValue_StartTime() const = 0;
    virtual void resetValue_StartTime() = 0;
    
    virtual String getEndTime() const = 0;
    virtual void setEndTime(String value) = 0;
    virtual bool hasValue_EndTime() const = 0;
    virtual void resetValue_EndTime() = 0;
    
    virtual String getSurveyor() const = 0;
    virtual void setSurveyor(String value) = 0;
    virtual bool hasValue_Surveyor() const = 0;
    virtual void resetValue_Surveyor() = 0;
    
    virtual String getSurveyorFirm() const = 0;
    virtual void setSurveyorFirm(String value) = 0;
    virtual bool hasValue_SurveyorFirm() const = 0;
    virtual void resetValue_SurveyorFirm() = 0;
    
    virtual String getSurveyorReference() const = 0;
    virtual void setSurveyorReference(String value) = 0;
    virtual bool hasValue_SurveyorReference() const = 0;
    virtual void resetValue_SurveyorReference() = 0;
    
    virtual String getSurveyorRegistration() const = 0;
    virtual void setSurveyorRegistration(String value) = 0;
    virtual bool hasValue_SurveyorRegistration() const = 0;
    virtual void resetValue_SurveyorRegistration() = 0;
    
    virtual String getSurveyPurpose() const = 0;
    virtual void setSurveyPurpose(String value) = 0;
    virtual bool hasValue_SurveyPurpose() const = 0;
    virtual void resetValue_SurveyPurpose() = 0;
    
    virtual EnumSurveyType::Values getType() const = 0;
    virtual void setType(EnumSurveyType::Values value) = 0;
    virtual bool hasValue_Type() const = 0;
    virtual void resetValue_Type() = 0;
    
    virtual String getClass() const = 0;
    virtual void setClass(String value) = 0;
    virtual bool hasValue_Class() const = 0;
    virtual void resetValue_Class() = 0;
    
    virtual String getCounty() const = 0;
    virtual void setCounty(String value) = 0;
    virtual bool hasValue_County() const = 0;
    virtual void resetValue_County() = 0;
    
    virtual bool getApplyAtmosphericCorrection() const = 0;
    virtual void setApplyAtmosphericCorrection(bool value) = 0;
    virtual bool hasValue_ApplyAtmosphericCorrection() const = 0;
    virtual void resetValue_ApplyAtmosphericCorrection() = 0;
    
    virtual double getPressure() const = 0;
    virtual void setPressure(double value) = 0;
    virtual bool hasValue_Pressure() const = 0;
    virtual void resetValue_Pressure() = 0;
    
    virtual double getTemperature() const = 0;
    virtual void setTemperature(double value) = 0;
    virtual bool hasValue_Temperature() const = 0;
    virtual void resetValue_Temperature() = 0;
    
    virtual bool getApplySeaLevelCorrection() const = 0;
    virtual void setApplySeaLevelCorrection(bool value) = 0;
    virtual bool hasValue_ApplySeaLevelCorrection() const = 0;
    virtual void resetValue_ApplySeaLevelCorrection() = 0;
    
    virtual double getScaleFactor() const = 0;
    virtual void setScaleFactor(double value) = 0;
    virtual bool hasValue_ScaleFactor() const = 0;
    virtual void resetValue_ScaleFactor() = 0;
    
    virtual double getSeaLevelCorrectionFactor() const = 0;
    virtual void setSeaLevelCorrectionFactor(double value) = 0;
    virtual bool hasValue_SeaLevelCorrectionFactor() const = 0;
    virtual void resetValue_SeaLevelCorrectionFactor() = 0;
    
    virtual double getCombinedFactor() const = 0;
    virtual void setCombinedFactor(double value) = 0;
    virtual bool hasValue_CombinedFactor() const = 0;
    virtual void resetValue_CombinedFactor() = 0;
    
    virtual String getJurisdiction() const = 0;
    virtual void setJurisdiction(String value) = 0;
    virtual bool hasValue_Jurisdiction() const = 0;
    virtual void resetValue_Jurisdiction() = 0;
    
    virtual String getSubmissionDate() const = 0;
    virtual void setSubmissionDate(String value) = 0;
    virtual bool hasValue_SubmissionDate() const = 0;
    virtual void resetValue_SubmissionDate() = 0;
    
    virtual String getDocumentStatus() const = 0;
    virtual void setDocumentStatus(String value) = 0;
    virtual bool hasValue_DocumentStatus() const = 0;
    virtual void resetValue_DocumentStatus() = 0;
    
    virtual String getSurveyFormat() const = 0;
    virtual void setSurveyFormat(String value) = 0;
    virtual bool hasValue_SurveyFormat() const = 0;
    virtual void resetValue_SurveyFormat() = 0;
    
    virtual String getSurveyStatus() const = 0;
    virtual void setSurveyStatus(String value) = 0;
    virtual bool hasValue_SurveyStatus() const = 0;
    virtual void resetValue_SurveyStatus() = 0;
    
    virtual int getCommunityTitleSchemeNo() const = 0;
    virtual void setCommunityTitleSchemeNo(int value) = 0;
    virtual bool hasValue_CommunityTitleSchemeNo() const = 0;
    virtual void resetValue_CommunityTitleSchemeNo() = 0;
    
    virtual String getCommunityTitleSchemeName() const = 0;
    virtual void setCommunityTitleSchemeName(String value) = 0;
    virtual bool hasValue_CommunityTitleSchemeName() const = 0;
    virtual void resetValue_CommunityTitleSchemeName() = 0;
    
    virtual bool getFieldNoteFlag() const = 0;
    virtual void setFieldNoteFlag(bool value) = 0;
    virtual bool hasValue_FieldNoteFlag() const = 0;
    virtual void resetValue_FieldNoteFlag() = 0;
    
    virtual String getFieldNoteReference() const = 0;
    virtual void setFieldNoteReference(String value) = 0;
    virtual bool hasValue_FieldNoteReference() const = 0;
    virtual void resetValue_FieldNoteReference() = 0;
    
    virtual String getFieldReport() const = 0;
    virtual void setFieldReport(String value) = 0;
    virtual bool hasValue_FieldReport() const = 0;
    virtual void resetValue_FieldReport() = 0;
    
    
protected:
};
}; // namespace : LX
#endif
