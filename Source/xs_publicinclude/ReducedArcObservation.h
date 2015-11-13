#if !defined(__REDUCEDARCOBSERVATION_H)
#define __REDUCEDARCOBSERVATION_H

#include "ReducedArcObservation.h"
#include "LXTypes.h"

namespace LX
{

class TargetPoint;
class OffsetVals;
class FieldNoteCollection;
class FeatureCollection;

// Class : ReducedArcObservation
class ReducedArcObservation : public Object
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
    
    virtual String getSetID() const = 0;
    virtual void setSetID(String value) = 0;
    virtual bool hasValue_SetID() const = 0;
    virtual void resetValue_SetID() = 0;
    
    virtual double getChordAzimuth() const = 0;
    virtual void setChordAzimuth(double value) = 0;
    virtual bool hasValue_ChordAzimuth() const = 0;
    virtual void resetValue_ChordAzimuth() = 0;
    
    virtual double getRadius() const = 0;
    virtual void setRadius(double value) = 0;
    virtual bool hasValue_Radius() const = 0;
    virtual void resetValue_Radius() = 0;
    
    virtual double getLength() const = 0;
    virtual void setLength(double value) = 0;
    virtual bool hasValue_Length() const = 0;
    virtual void resetValue_Length() = 0;
    
    virtual EnumClockwise::Values getRot() const = 0;
    virtual void setRot(EnumClockwise::Values value) = 0;
    virtual bool hasValue_Rot() const = 0;
    virtual void resetValue_Rot() = 0;
    
    virtual String getEquipmentUsed() const = 0;
    virtual void setEquipmentUsed(String value) = 0;
    virtual bool hasValue_EquipmentUsed() const = 0;
    virtual void resetValue_EquipmentUsed() = 0;
    
    virtual double getArcAzimuthAccuracy() const = 0;
    virtual void setArcAzimuthAccuracy(double value) = 0;
    virtual bool hasValue_ArcAzimuthAccuracy() const = 0;
    virtual void resetValue_ArcAzimuthAccuracy() = 0;
    
    virtual double getArcLengthAccuracy() const = 0;
    virtual void setArcLengthAccuracy(double value) = 0;
    virtual bool hasValue_ArcLengthAccuracy() const = 0;
    virtual void resetValue_ArcLengthAccuracy() = 0;
    
    virtual String getDate() const = 0;
    virtual void setDate(String value) = 0;
    virtual bool hasValue_Date() const = 0;
    virtual void resetValue_Date() = 0;
    
    virtual String getArcType() const = 0;
    virtual void setArcType(String value) = 0;
    virtual bool hasValue_ArcType() const = 0;
    virtual void resetValue_ArcType() = 0;
    
    virtual String getAdoptedSurvey() const = 0;
    virtual void setAdoptedSurvey(String value) = 0;
    virtual bool hasValue_AdoptedSurvey() const = 0;
    virtual void resetValue_AdoptedSurvey() = 0;
    
    virtual String getLengthAccClass() const = 0;
    virtual void setLengthAccClass(String value) = 0;
    virtual bool hasValue_LengthAccClass() const = 0;
    virtual void resetValue_LengthAccClass() = 0;
    
    virtual String getAzimuthAccClass() const = 0;
    virtual void setAzimuthAccClass(String value) = 0;
    virtual bool hasValue_AzimuthAccClass() const = 0;
    virtual void resetValue_AzimuthAccClass() = 0;
    
    virtual double getAzimuthAdoptionFactor() const = 0;
    virtual void setAzimuthAdoptionFactor(double value) = 0;
    virtual bool hasValue_AzimuthAdoptionFactor() const = 0;
    virtual void resetValue_AzimuthAdoptionFactor() = 0;
    
    virtual double getLengthAdoptionFactor() const = 0;
    virtual void setLengthAdoptionFactor(double value) = 0;
    virtual bool hasValue_LengthAdoptionFactor() const = 0;
    virtual void resetValue_LengthAdoptionFactor() = 0;
    
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
