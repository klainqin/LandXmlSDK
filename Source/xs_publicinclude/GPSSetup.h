#if !defined(__GPSSETUP_H)
#define __GPSSETUP_H

#include "GPSSetup.h"
#include "LXTypes.h"

namespace LX
{

class GPSPosition;
class TargetSetupCollection;
class FieldNoteCollection;
class FeatureCollection;

// Class : GPSSetup
class GPSSetup : public Object
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
    virtual GPSPosition* getGPSPosition() const = 0;
    virtual void setGPSPosition(GPSPosition* value) = 0;
    
    
    virtual String getId() const = 0;
    virtual void setId(String value) = 0;
    virtual bool hasValue_Id() const = 0;
    virtual void resetValue_Id() = 0;
    
    virtual double getAntennaHeight() const = 0;
    virtual void setAntennaHeight(double value) = 0;
    virtual bool hasValue_AntennaHeight() const = 0;
    virtual void resetValue_AntennaHeight() = 0;
    
    virtual String getStationName() const = 0;
    virtual void setStationName(String value) = 0;
    virtual bool hasValue_StationName() const = 0;
    virtual void resetValue_StationName() = 0;
    
    virtual String getGPSAntennaDetailsID() const = 0;
    virtual void setGPSAntennaDetailsID(String value) = 0;
    virtual bool hasValue_GPSAntennaDetailsID() const = 0;
    virtual void resetValue_GPSAntennaDetailsID() = 0;
    
    virtual String getGPSReceiverDetailsID() const = 0;
    virtual void setGPSReceiverDetailsID(String value) = 0;
    virtual bool hasValue_GPSReceiverDetailsID() const = 0;
    virtual void resetValue_GPSReceiverDetailsID() = 0;
    
    virtual String getObservationDataLink() const = 0;
    virtual void setObservationDataLink(String value) = 0;
    virtual bool hasValue_ObservationDataLink() const = 0;
    virtual void resetValue_ObservationDataLink() = 0;
    
    virtual String getStationDescription() const = 0;
    virtual void setStationDescription(String value) = 0;
    virtual bool hasValue_StationDescription() const = 0;
    virtual void resetValue_StationDescription() = 0;
    
    virtual double getStartTime() const = 0;
    virtual void setStartTime(double value) = 0;
    virtual bool hasValue_StartTime() const = 0;
    virtual void resetValue_StartTime() = 0;
    
    virtual double getStopTime() const = 0;
    virtual void setStopTime(double value) = 0;
    virtual bool hasValue_StopTime() const = 0;
    virtual void resetValue_StopTime() = 0;
    
    
protected:
};
}; // namespace : LX
#endif
