#if !defined(__INSTRUMENTSETUP_H)
#define __INSTRUMENTSETUP_H

#include "InstrumentSetup.h"
#include "LXTypes.h"

namespace LX
{

class InstrumentPoint;
class BacksightCollection;
class TargetSetupCollection;
class RawObservationCollection;
class ObservationGroupCollection;
class ControlChecksCollection;
class FieldNoteCollection;
class FeatureCollection;

// Class : InstrumentSetup
class InstrumentSetup : public Object
{

public:
	virtual void toXml (IStream& stream) = 0;
public:
	// Collections
    virtual BacksightCollection& Backsight() = 0;
    virtual const BacksightCollection& Backsight() const = 0;
    virtual TargetSetupCollection& TargetSetup() = 0;
    virtual const TargetSetupCollection& TargetSetup() const = 0;
    virtual RawObservationCollection& RawObservation() = 0;
    virtual const RawObservationCollection& RawObservation() const = 0;
    virtual ObservationGroupCollection& ObservationGroup() = 0;
    virtual const ObservationGroupCollection& ObservationGroup() const = 0;
    virtual ControlChecksCollection& ControlChecks() = 0;
    virtual const ControlChecksCollection& ControlChecks() const = 0;
    virtual FieldNoteCollection& FieldNote() = 0;
    virtual const FieldNoteCollection& FieldNote() const = 0;
    virtual FeatureCollection& Feature() = 0;
    virtual const FeatureCollection& Feature() const = 0;

public:
	// Properties
    virtual InstrumentPoint* getInstrumentPoint() const = 0;
    virtual void setInstrumentPoint(InstrumentPoint* value) = 0;
    
    
    virtual String getId() const = 0;
    virtual void setId(String value) = 0;
    virtual bool hasValue_Id() const = 0;
    virtual void resetValue_Id() = 0;
    
    virtual String getInstrumentDetailsID() const = 0;
    virtual void setInstrumentDetailsID(String value) = 0;
    virtual bool hasValue_InstrumentDetailsID() const = 0;
    virtual void resetValue_InstrumentDetailsID() = 0;
    
    virtual String getStationName() const = 0;
    virtual void setStationName(String value) = 0;
    virtual bool hasValue_StationName() const = 0;
    virtual void resetValue_StationName() = 0;
    
    virtual double getInstrumentHeight() const = 0;
    virtual void setInstrumentHeight(double value) = 0;
    virtual bool hasValue_InstrumentHeight() const = 0;
    virtual void resetValue_InstrumentHeight() = 0;
    
    virtual double getOrientationAzimuth() const = 0;
    virtual void setOrientationAzimuth(double value) = 0;
    virtual bool hasValue_OrientationAzimuth() const = 0;
    virtual void resetValue_OrientationAzimuth() = 0;
    
    virtual double getCircleAzimuth() const = 0;
    virtual void setCircleAzimuth(double value) = 0;
    virtual bool hasValue_CircleAzimuth() const = 0;
    virtual void resetValue_CircleAzimuth() = 0;
    
    virtual EnumObservationStatusType::Values getStatus() const = 0;
    virtual void setStatus(EnumObservationStatusType::Values value) = 0;
    virtual bool hasValue_Status() const = 0;
    virtual void resetValue_Status() = 0;
    
    
protected:
};
}; // namespace : LX
#endif
