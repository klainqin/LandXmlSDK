#if !defined(__LASERSETUP_H)
#define __LASERSETUP_H

#include "LaserSetup.h"
#include "LXTypes.h"

namespace LX
{

class InstrumentPoint;
class Backsight;
class TargetSetupCollection;
class RawObservation;
class FieldNoteCollection;
class FeatureCollection;

// Class : LaserSetup
class LaserSetup : public Object
{

public:
	virtual void toXml (IStream& stream) = 0;
public:
	// Collections
    virtual TargetSetupCollection& TargetSetup() = 0;
    virtual const TargetSetupCollection& TargetSetup() const = 0;
    virtual FieldNoteCollection& FieldNote() = 0;
    virtual const FieldNoteCollection& FieldNote() const = 0;
    virtual FeatureCollection& Feature() = 0;
    virtual const FeatureCollection& Feature() const = 0;

public:
	// Properties
    virtual InstrumentPoint* getInstrumentPoint() const = 0;
    virtual void setInstrumentPoint(InstrumentPoint* value) = 0;
    
    virtual Backsight* getBacksight() const = 0;
    virtual void setBacksight(Backsight* value) = 0;
    
    virtual RawObservation* getRawObservation() const = 0;
    virtual void setRawObservation(RawObservation* value) = 0;
    
    
    virtual String getId() const = 0;
    virtual void setId(String value) = 0;
    virtual bool hasValue_Id() const = 0;
    virtual void resetValue_Id() = 0;
    
    virtual String getStationName() const = 0;
    virtual void setStationName(String value) = 0;
    virtual bool hasValue_StationName() const = 0;
    virtual void resetValue_StationName() = 0;
    
    virtual double getInstrumentHeight() const = 0;
    virtual void setInstrumentHeight(double value) = 0;
    virtual bool hasValue_InstrumentHeight() const = 0;
    virtual void resetValue_InstrumentHeight() = 0;
    
    virtual String getLaserDetailsID() const = 0;
    virtual void setLaserDetailsID(String value) = 0;
    virtual bool hasValue_LaserDetailsID() const = 0;
    virtual void resetValue_LaserDetailsID() = 0;
    
    virtual double getMagDeclination() const = 0;
    virtual void setMagDeclination(double value) = 0;
    virtual bool hasValue_MagDeclination() const = 0;
    virtual void resetValue_MagDeclination() = 0;
    
    
protected:
};
}; // namespace : LX
#endif
