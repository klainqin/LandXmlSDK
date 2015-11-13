#if !defined(__DECISIONSIGHTDISTANCE_H)
#define __DECISIONSIGHTDISTANCE_H

#include "DecisionSightDistance.h"
#include "LXTypes.h"

namespace LX
{


// Class : DecisionSightDistance
class DecisionSightDistance : public Object
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
    
    virtual EnumManeuverType::Values getManeuver() const = 0;
    virtual void setManeuver(EnumManeuverType::Values value) = 0;
    virtual bool hasValue_Maneuver() const = 0;
    virtual void resetValue_Maneuver() = 0;
    
    
protected:
};
}; // namespace : LX
#endif
