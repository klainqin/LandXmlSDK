#if !defined(__LANES_H)
#define __LANES_H

#include "Lanes.h"
#include "LXTypes.h"

namespace LX
{

class ThruLaneCollection;
class PassingLaneCollection;
class TurnLaneCollection;
class TwoWayLeftTurnLaneCollection;
class ClimbLaneCollection;
class OffsetLaneCollection;
class WideningLaneCollection;
class FeatureCollection;

// Class : Lanes
class Lanes : public Object
{

public:
	virtual void toXml (IStream& stream) = 0;
public:
	// Collections
    virtual ThruLaneCollection& ThruLane() = 0;
    virtual const ThruLaneCollection& ThruLane() const = 0;
    virtual PassingLaneCollection& PassingLane() = 0;
    virtual const PassingLaneCollection& PassingLane() const = 0;
    virtual TurnLaneCollection& TurnLane() = 0;
    virtual const TurnLaneCollection& TurnLane() const = 0;
    virtual TwoWayLeftTurnLaneCollection& TwoWayLeftTurnLane() = 0;
    virtual const TwoWayLeftTurnLaneCollection& TwoWayLeftTurnLane() const = 0;
    virtual ClimbLaneCollection& ClimbLane() = 0;
    virtual const ClimbLaneCollection& ClimbLane() const = 0;
    virtual OffsetLaneCollection& OffsetLane() = 0;
    virtual const OffsetLaneCollection& OffsetLane() const = 0;
    virtual WideningLaneCollection& WideningLane() = 0;
    virtual const WideningLaneCollection& WideningLane() const = 0;
    virtual FeatureCollection& Feature() = 0;
    virtual const FeatureCollection& Feature() const = 0;

public:
	// Properties
    
    
protected:
};
}; // namespace : LX
#endif
