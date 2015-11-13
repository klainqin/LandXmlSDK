#if !defined(__VOLUME_H)
#define __VOLUME_H

#include "Volume.h"
#include "LXTypes.h"

namespace LX
{


// Class : Volume
class Volume : public Object
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
    
    virtual double getTurnPercent() const = 0;
    virtual void setTurnPercent(double value) = 0;
    virtual bool hasValue_TurnPercent() const = 0;
    virtual void resetValue_TurnPercent() = 0;
    
    virtual double getPercentTrucks() const = 0;
    virtual void setPercentTrucks(double value) = 0;
    virtual bool hasValue_PercentTrucks() const = 0;
    virtual void resetValue_PercentTrucks() = 0;
    
    
protected:
};
}; // namespace : LX
#endif
