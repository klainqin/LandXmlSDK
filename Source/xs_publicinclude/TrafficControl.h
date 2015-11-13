#if !defined(__TRAFFICCONTROL_H)
#define __TRAFFICCONTROL_H

#include "TrafficControl.h"
#include "LXTypes.h"

namespace LX
{


// Class : TrafficControl
class TrafficControl : public Object
{

public:
	virtual void toXml (IStream& stream) = 0;
public:
	// Collections

public:
	// Properties
    
    virtual double getStation() const = 0;
    virtual void setStation(double value) = 0;
    virtual bool hasValue_Station() const = 0;
    virtual void resetValue_Station() = 0;
    
    virtual double getSignalPeriod() const = 0;
    virtual void setSignalPeriod(double value) = 0;
    virtual bool hasValue_SignalPeriod() const = 0;
    virtual void resetValue_SignalPeriod() = 0;
    
    virtual EnumTrafficControlPosition::Values getControlPosition() const = 0;
    virtual void setControlPosition(EnumTrafficControlPosition::Values value) = 0;
    virtual bool hasValue_ControlPosition() const = 0;
    virtual void resetValue_ControlPosition() = 0;
    
    virtual EnumTrafficControlType::Values getControlType() const = 0;
    virtual void setControlType(EnumTrafficControlType::Values value) = 0;
    virtual bool hasValue_ControlType() const = 0;
    virtual void resetValue_ControlType() = 0;
    
    
protected:
};
}; // namespace : LX
#endif
