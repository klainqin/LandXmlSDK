#if !defined(__GPSVECTOR_H)
#define __GPSVECTOR_H

#include "GPSVector.h"
#include "LXTypes.h"

namespace LX
{

class TargetPoint;
class GPSQCInfoLevel1;
class GPSQCInfoLevel2;
class FieldNoteCollection;
class FeatureCollection;

// Class : GPSVector
class GPSVector : public Object
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
    
    virtual GPSQCInfoLevel1* getGPSQCInfoLevel1() const = 0;
    virtual void setGPSQCInfoLevel1(GPSQCInfoLevel1* value) = 0;
    
    virtual GPSQCInfoLevel2* getGPSQCInfoLevel2() const = 0;
    virtual void setGPSQCInfoLevel2(GPSQCInfoLevel2* value) = 0;
    
    virtual StringCollection* getCoordGeomRefs() const = 0;
    virtual void setCoordGeomRefs(StringCollection* value) = 0;
    
    
    virtual double getDX() const = 0;
    virtual void setDX(double value) = 0;
    virtual bool hasValue_DX() const = 0;
    virtual void resetValue_DX() = 0;
    
    virtual double getDY() const = 0;
    virtual void setDY(double value) = 0;
    virtual bool hasValue_DY() const = 0;
    virtual void resetValue_DY() = 0;
    
    virtual double getDZ() const = 0;
    virtual void setDZ(double value) = 0;
    virtual bool hasValue_DZ() const = 0;
    virtual void resetValue_DZ() = 0;
    
    virtual String getSetupID_A() const = 0;
    virtual void setSetupID_A(String value) = 0;
    virtual bool hasValue_SetupID_A() const = 0;
    virtual void resetValue_SetupID_A() = 0;
    
    virtual String getSetupID_B() const = 0;
    virtual void setSetupID_B(String value) = 0;
    virtual bool hasValue_SetupID_B() const = 0;
    virtual void resetValue_SetupID_B() = 0;
    
    virtual String getStartTime() const = 0;
    virtual void setStartTime(String value) = 0;
    virtual bool hasValue_StartTime() const = 0;
    virtual void resetValue_StartTime() = 0;
    
    virtual String getEndTime() const = 0;
    virtual void setEndTime(String value) = 0;
    virtual bool hasValue_EndTime() const = 0;
    virtual void resetValue_EndTime() = 0;
    
    virtual double getHorizontalPrecision() const = 0;
    virtual void setHorizontalPrecision(double value) = 0;
    virtual bool hasValue_HorizontalPrecision() const = 0;
    virtual void resetValue_HorizontalPrecision() = 0;
    
    virtual double getVerticalPrecision() const = 0;
    virtual void setVerticalPrecision(double value) = 0;
    virtual bool hasValue_VerticalPrecision() const = 0;
    virtual void resetValue_VerticalPrecision() = 0;
    
    virtual EnumPurposeType::Values getPurpose() const = 0;
    virtual void setPurpose(EnumPurposeType::Values value) = 0;
    virtual bool hasValue_Purpose() const = 0;
    virtual void resetValue_Purpose() = 0;
    
    virtual String getSetID() const = 0;
    virtual void setSetID(String value) = 0;
    virtual bool hasValue_SetID() const = 0;
    virtual void resetValue_SetID() = 0;
    
    virtual String getSolutionDataLink() const = 0;
    virtual void setSolutionDataLink(String value) = 0;
    virtual bool hasValue_SolutionDataLink() const = 0;
    virtual void resetValue_SolutionDataLink() = 0;
    
    
protected:
};
}; // namespace : LX
#endif
