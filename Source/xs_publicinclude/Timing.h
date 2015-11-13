#if !defined(__TIMING_H)
#define __TIMING_H

#include "Timing.h"
#include "LXTypes.h"

namespace LX
{


// Class : Timing
class Timing : public Object
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
    
    virtual double getProtectedTurnPercent() const = 0;
    virtual void setProtectedTurnPercent(double value) = 0;
    virtual bool hasValue_ProtectedTurnPercent() const = 0;
    virtual void resetValue_ProtectedTurnPercent() = 0;
    
    virtual double getUnprotectedTurnPercent() const = 0;
    virtual void setUnprotectedTurnPercent(double value) = 0;
    virtual bool hasValue_UnprotectedTurnPercent() const = 0;
    virtual void resetValue_UnprotectedTurnPercent() = 0;
    
    
protected:
};
}; // namespace : LX
#endif
