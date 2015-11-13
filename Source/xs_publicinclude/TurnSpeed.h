#if !defined(__TURNSPEED_H)
#define __TURNSPEED_H

#include "TurnSpeed.h"
#include "LXTypes.h"

namespace LX
{


// Class : TurnSpeed
class TurnSpeed : public Object
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
    
    virtual int getLegNumber() const = 0;
    virtual void setLegNumber(int value) = 0;
    virtual bool hasValue_LegNumber() const = 0;
    virtual void resetValue_LegNumber() = 0;
    
    virtual double getSpeed() const = 0;
    virtual void setSpeed(double value) = 0;
    virtual bool hasValue_Speed() const = 0;
    virtual void resetValue_Speed() = 0;
    
    
protected:
};
}; // namespace : LX
#endif
