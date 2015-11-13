#if !defined(__TRAFFICVOLUME_H)
#define __TRAFFICVOLUME_H

#include "TrafficVolume.h"
#include "LXTypes.h"

namespace LX
{

class DailyTrafficVolume;
class DesignHour;
class PeakHour;
class FeatureCollection;

// Class : TrafficVolume
class TrafficVolume : public Object
{

public:
	virtual void toXml (IStream& stream) = 0;
public:
	// Collections
    virtual FeatureCollection& Feature() = 0;
    virtual const FeatureCollection& Feature() const = 0;

public:
	// Properties
    virtual DailyTrafficVolume* getDailyTrafficVolume() const = 0;
    virtual void setDailyTrafficVolume(DailyTrafficVolume* value) = 0;
    
    virtual DesignHour* getDesignHour() const = 0;
    virtual void setDesignHour(DesignHour* value) = 0;
    
    virtual PeakHour* getPeakHour() const = 0;
    virtual void setPeakHour(PeakHour* value) = 0;
    
    
    
protected:
};
}; // namespace : LX
#endif
