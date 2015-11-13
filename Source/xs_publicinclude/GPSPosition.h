#if !defined(__GPSPOSITION_H)
#define __GPSPOSITION_H

#include "GPSPosition.h"
#include "LXTypes.h"

namespace LX
{

class TargetPoint;
class GPSQCInfoLevel1;
class GPSQCInfoLevel2;
class FieldNoteCollection;
class FeatureCollection;

// Class : GPSPosition
class GPSPosition : public Object
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
    
    
    virtual String getSetupID() const = 0;
    virtual void setSetupID(String value) = 0;
    virtual bool hasValue_SetupID() const = 0;
    virtual void resetValue_SetupID() = 0;
    
    virtual String getSetID() const = 0;
    virtual void setSetID(String value) = 0;
    virtual bool hasValue_SetID() const = 0;
    virtual void resetValue_SetID() = 0;
    
    virtual double getWgsHeight() const = 0;
    virtual void setWgsHeight(double value) = 0;
    virtual bool hasValue_WgsHeight() const = 0;
    virtual void resetValue_WgsHeight() = 0;
    
    virtual double getWgsLatitude() const = 0;
    virtual void setWgsLatitude(double value) = 0;
    virtual bool hasValue_WgsLatitude() const = 0;
    virtual void resetValue_WgsLatitude() = 0;
    
    virtual double getWgsLongitude() const = 0;
    virtual void setWgsLongitude(double value) = 0;
    virtual bool hasValue_WgsLongitude() const = 0;
    virtual void resetValue_WgsLongitude() = 0;
    
    virtual String getPurpose() const = 0;
    virtual void setPurpose(String value) = 0;
    virtual bool hasValue_Purpose() const = 0;
    virtual void resetValue_Purpose() = 0;
    
    virtual String getPntRef() const = 0;
    virtual void setPntRef(String value) = 0;
    virtual bool hasValue_PntRef() const = 0;
    virtual void resetValue_PntRef() = 0;
    
    
protected:
};
}; // namespace : LX
#endif
