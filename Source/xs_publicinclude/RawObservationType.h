#if !defined(__RAWOBSERVATIONTYPE_H)
#define __RAWOBSERVATIONTYPE_H

#include "RawObservationType.h"
#include "LXTypes.h"

namespace LX
{

class TargetPoint;
class OffsetVals;
class FieldNoteCollection;
class FeatureCollection;

// Class : RawObservationType
class RawObservationType : public Object
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
    
    virtual EnumPurposeType::Values getPurpose() const = 0;
    virtual void setPurpose(EnumPurposeType::Values value) = 0;
    virtual bool hasValue_Purpose() const = 0;
    virtual void resetValue_Purpose() = 0;
    
    virtual double getTargetHeight() const = 0;
    virtual void setTargetHeight(double value) = 0;
    virtual bool hasValue_TargetHeight() const = 0;
    virtual void resetValue_TargetHeight() = 0;
    
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
    
    virtual double getHorizDistance() const = 0;
    virtual void setHorizDistance(double value) = 0;
    virtual bool hasValue_HorizDistance() const = 0;
    virtual void resetValue_HorizDistance() = 0;
    
    virtual double getVertDistance() const = 0;
    virtual void setVertDistance(double value) = 0;
    virtual bool hasValue_VertDistance() const = 0;
    virtual void resetValue_VertDistance() = 0;
    
    virtual double getAzimuth() const = 0;
    virtual void setAzimuth(double value) = 0;
    virtual bool hasValue_Azimuth() const = 0;
    virtual void resetValue_Azimuth() = 0;
    
    virtual bool getUnused() const = 0;
    virtual void setUnused(bool value) = 0;
    virtual bool hasValue_Unused() const = 0;
    virtual void resetValue_Unused() = 0;
    
    virtual bool getDirectFace() const = 0;
    virtual void setDirectFace(bool value) = 0;
    virtual bool hasValue_DirectFace() const = 0;
    virtual void resetValue_DirectFace() = 0;
    
    virtual String getTimeStamp() const = 0;
    virtual void setTimeStamp(String value) = 0;
    virtual bool hasValue_TimeStamp() const = 0;
    virtual void resetValue_TimeStamp() = 0;
    
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
    
    virtual double getUpperStadia() const = 0;
    virtual void setUpperStadia(double value) = 0;
    virtual bool hasValue_UpperStadia() const = 0;
    virtual void resetValue_UpperStadia() = 0;
    
    virtual double getRod() const = 0;
    virtual void setRod(double value) = 0;
    virtual bool hasValue_Rod() const = 0;
    virtual void resetValue_Rod() = 0;
    
    virtual double getLowerStadia() const = 0;
    virtual void setLowerStadia(double value) = 0;
    virtual bool hasValue_LowerStadia() const = 0;
    virtual void resetValue_LowerStadia() = 0;
    
    virtual double getCirclePositionSet() const = 0;
    virtual void setCirclePositionSet(double value) = 0;
    virtual bool hasValue_CirclePositionSet() const = 0;
    virtual void resetValue_CirclePositionSet() = 0;
    
    virtual EnumObservationStatusType::Values getStatus() const = 0;
    virtual void setStatus(EnumObservationStatusType::Values value) = 0;
    virtual bool hasValue_Status() const = 0;
    virtual void resetValue_Status() = 0;
    
    
protected:
};
}; // namespace : LX
#endif
