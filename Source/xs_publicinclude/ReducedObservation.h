#if !defined(__REDUCEDOBSERVATION_H)
#define __REDUCEDOBSERVATION_H

#include "ReducedObservation.h"
#include "LXTypes.h"

namespace LX
{

class TargetPoint;
class OffsetVals;
class FieldNoteCollection;
class FeatureCollection;

// Class : ReducedObservation
class ReducedObservation : public Object
{

public:
	virtual void toXml (IStream& stream) = 0;
public:
	// Collections
    virtual FieldNoteCollection& FieldNote() = 0;
    virtual const FieldNoteCollection& FieldNote() const = 0;
    virtual FeatureCollection& Feature() = 0;
    virtual const FeatureCollection& Feature() const = 0;

public:
	// Properties
    virtual TargetPoint* getTargetPoint() const = 0;
    virtual void setTargetPoint(TargetPoint* value) = 0;
    
    virtual OffsetVals* getOffsetVals() const = 0;
    virtual void setOffsetVals(OffsetVals* value) = 0;
    
    virtual StringCollection* getCoordGeomRefs() const = 0;
    virtual void setCoordGeomRefs(StringCollection* value) = 0;
    
    
    virtual EnumPurposeType::Values getPurpose() const = 0;
    virtual void setPurpose(EnumPurposeType::Values value) = 0;
    virtual bool hasValue_Purpose() const = 0;
    virtual void resetValue_Purpose() = 0;
    
    virtual String getSetupID() const = 0;
    virtual void setSetupID(String value) = 0;
    virtual bool hasValue_SetupID() const = 0;
    virtual void resetValue_SetupID() = 0;
    
    virtual String getTargetSetupID() const = 0;
    virtual void setTargetSetupID(String value) = 0;
    virtual bool hasValue_TargetSetupID() const = 0;
    virtual void resetValue_TargetSetupID() = 0;
    
    virtual String getTargetSetup2ID() const = 0;
    virtual void setTargetSetup2ID(String value) = 0;
    virtual bool hasValue_TargetSetup2ID() const = 0;
    virtual void resetValue_TargetSetup2ID() = 0;
    
    virtual String getSetID() const = 0;
    virtual void setSetID(String value) = 0;
    virtual bool hasValue_SetID() const = 0;
    virtual void resetValue_SetID() = 0;
    
    virtual double getTargetHeight() const = 0;
    virtual void setTargetHeight(double value) = 0;
    virtual bool hasValue_TargetHeight() const = 0;
    virtual void resetValue_TargetHeight() = 0;
    
    virtual double getAzimuth() const = 0;
    virtual void setAzimuth(double value) = 0;
    virtual bool hasValue_Azimuth() const = 0;
    virtual void resetValue_Azimuth() = 0;
    
    virtual double getHorizDistance() const = 0;
    virtual void setHorizDistance(double value) = 0;
    virtual bool hasValue_HorizDistance() const = 0;
    virtual void resetValue_HorizDistance() = 0;
    
    virtual double getVertDistance() const = 0;
    virtual void setVertDistance(double value) = 0;
    virtual bool hasValue_VertDistance() const = 0;
    virtual void resetValue_VertDistance() = 0;
    
    virtual double getHorizAngle() const = 0;
    virtual void setHorizAngle(double value) = 0;
    virtual bool hasValue_HorizAngle() const = 0;
    virtual void resetValue_HorizAngle() = 0;
    
    virtual double getSlopeDistance() const = 0;
    virtual void setSlopeDistance(double value) = 0;
    virtual bool hasValue_SlopeDistance() const = 0;
    virtual void resetValue_SlopeDistance() = 0;
    
    virtual double getZenithAngle() const = 0;
    virtual void setZenithAngle(double value) = 0;
    virtual bool hasValue_ZenithAngle() const = 0;
    virtual void resetValue_ZenithAngle() = 0;
    
    virtual String getEquipmentUsed() const = 0;
    virtual void setEquipmentUsed(String value) = 0;
    virtual bool hasValue_EquipmentUsed() const = 0;
    virtual void resetValue_EquipmentUsed() = 0;
    
    virtual double getAzimuthAccuracy() const = 0;
    virtual void setAzimuthAccuracy(double value) = 0;
    virtual bool hasValue_AzimuthAccuracy() const = 0;
    virtual void resetValue_AzimuthAccuracy() = 0;
    
    virtual double getDistanceAccuracy() const = 0;
    virtual void setDistanceAccuracy(double value) = 0;
    virtual bool hasValue_DistanceAccuracy() const = 0;
    virtual void resetValue_DistanceAccuracy() = 0;
    
    virtual double getAngleAccuracy() const = 0;
    virtual void setAngleAccuracy(double value) = 0;
    virtual bool hasValue_AngleAccuracy() const = 0;
    virtual void resetValue_AngleAccuracy() = 0;
    
    virtual String getDate() const = 0;
    virtual void setDate(String value) = 0;
    virtual bool hasValue_Date() const = 0;
    virtual void resetValue_Date() = 0;
    
    virtual String getDistanceType() const = 0;
    virtual void setDistanceType(String value) = 0;
    virtual bool hasValue_DistanceType() const = 0;
    virtual void resetValue_DistanceType() = 0;
    
    virtual String getAzimuthType() const = 0;
    virtual void setAzimuthType(String value) = 0;
    virtual bool hasValue_AzimuthType() const = 0;
    virtual void resetValue_AzimuthType() = 0;
    
    virtual String getAngleType() const = 0;
    virtual void setAngleType(String value) = 0;
    virtual bool hasValue_AngleType() const = 0;
    virtual void resetValue_AngleType() = 0;
    
    virtual String getAdoptedAzimuthSurvey() const = 0;
    virtual void setAdoptedAzimuthSurvey(String value) = 0;
    virtual bool hasValue_AdoptedAzimuthSurvey() const = 0;
    virtual void resetValue_AdoptedAzimuthSurvey() = 0;
    
    virtual String getAdoptedDistanceSurvey() const = 0;
    virtual void setAdoptedDistanceSurvey(String value) = 0;
    virtual bool hasValue_AdoptedDistanceSurvey() const = 0;
    virtual void resetValue_AdoptedDistanceSurvey() = 0;
    
    virtual String getAdoptedAngleSurvey() const = 0;
    virtual void setAdoptedAngleSurvey(String value) = 0;
    virtual bool hasValue_AdoptedAngleSurvey() const = 0;
    virtual void resetValue_AdoptedAngleSurvey() = 0;
    
    virtual String getDistanceAccClass() const = 0;
    virtual void setDistanceAccClass(String value) = 0;
    virtual bool hasValue_DistanceAccClass() const = 0;
    virtual void resetValue_DistanceAccClass() = 0;
    
    virtual String getAzimuthAccClass() const = 0;
    virtual void setAzimuthAccClass(String value) = 0;
    virtual bool hasValue_AzimuthAccClass() const = 0;
    virtual void resetValue_AzimuthAccClass() = 0;
    
    virtual String getAngleAccClass() const = 0;
    virtual void setAngleAccClass(String value) = 0;
    virtual bool hasValue_AngleAccClass() const = 0;
    virtual void resetValue_AngleAccClass() = 0;
    
    virtual double getAzimuthAdoptionFactor() const = 0;
    virtual void setAzimuthAdoptionFactor(double value) = 0;
    virtual bool hasValue_AzimuthAdoptionFactor() const = 0;
    virtual void resetValue_AzimuthAdoptionFactor() = 0;
    
    virtual double getDistanceAdoptionFactor() const = 0;
    virtual void setDistanceAdoptionFactor(double value) = 0;
    virtual bool hasValue_DistanceAdoptionFactor() const = 0;
    virtual void resetValue_DistanceAdoptionFactor() = 0;
    
    virtual String getName() const = 0;
    virtual void setName(String value) = 0;
    virtual bool hasValue_Name() const = 0;
    virtual void resetValue_Name() = 0;
    
    virtual String getDesc() const = 0;
    virtual void setDesc(String value) = 0;
    virtual bool hasValue_Desc() const = 0;
    virtual void resetValue_Desc() = 0;
    
    virtual EnumStateType::Values getState() const = 0;
    virtual void setState(EnumStateType::Values value) = 0;
    virtual bool hasValue_State() const = 0;
    virtual void resetValue_State() = 0;
    
    virtual String getOID() const = 0;
    virtual void setOID(String value) = 0;
    virtual bool hasValue_OID() const = 0;
    virtual void resetValue_OID() = 0;
    
    virtual String getMSLDistance() const = 0;
    virtual void setMSLDistance(String value) = 0;
    virtual bool hasValue_MSLDistance() const = 0;
    virtual void resetValue_MSLDistance() = 0;
    
    virtual String getSpherDistance() const = 0;
    virtual void setSpherDistance(String value) = 0;
    virtual bool hasValue_SpherDistance() const = 0;
    virtual void resetValue_SpherDistance() = 0;
    
    virtual String getAlignRef() const = 0;
    virtual void setAlignRef(String value) = 0;
    virtual bool hasValue_AlignRef() const = 0;
    virtual void resetValue_AlignRef() = 0;
    
    virtual String getAlignStationName() const = 0;
    virtual void setAlignStationName(String value) = 0;
    virtual bool hasValue_AlignStationName() const = 0;
    virtual void resetValue_AlignStationName() = 0;
    
    virtual double getAlignOffset() const = 0;
    virtual void setAlignOffset(double value) = 0;
    virtual bool hasValue_AlignOffset() const = 0;
    virtual void resetValue_AlignOffset() = 0;
    
    
protected:
};
}; // namespace : LX
#endif
