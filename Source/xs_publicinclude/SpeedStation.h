#if !defined(__SPEEDSTATION_H)
#define __SPEEDSTATION_H

#include "SpeedStation.h"
#include "LXTypes.h"

namespace LX
{


// Class : SpeedStation
class SpeedStation : public Object
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
    
    virtual double getSpeed() const = 0;
    virtual void setSpeed(double value) = 0;
    virtual bool hasValue_Speed() const = 0;
    virtual void resetValue_Speed() = 0;
    
    
protected:
};
}; // namespace : LX
#endif
