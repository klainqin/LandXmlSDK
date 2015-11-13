#if !defined(__POSTEDSPEED_H)
#define __POSTEDSPEED_H

#include "PostedSpeed.h"
#include "LXTypes.h"

namespace LX
{


// Class : PostedSpeed
class PostedSpeed : public Object
{

public:
	virtual void toXml (IStream& stream) = 0;
public:
	// Collections

public:
	// Properties
    
    virtual double getStaStart() const = 0;
    virtual void setStaStart(double value) = 0;
    virtual bool hasValue_StaStart() const = 0;
    virtual void resetValue_StaStart() = 0;
    
    virtual double getStaEnd() const = 0;
    virtual void setStaEnd(double value) = 0;
    virtual bool hasValue_StaEnd() const = 0;
    virtual void resetValue_StaEnd() = 0;
    
    virtual EnumSideofRoadType::Values getSideofRoad() const = 0;
    virtual void setSideofRoad(EnumSideofRoadType::Values value) = 0;
    virtual bool hasValue_SideofRoad() const = 0;
    virtual void resetValue_SideofRoad() = 0;
    
    virtual double getSpeedLimit() const = 0;
    virtual void setSpeedLimit(double value) = 0;
    virtual bool hasValue_SpeedLimit() const = 0;
    virtual void resetValue_SpeedLimit() = 0;
    
    
protected:
};
}; // namespace : LX
#endif
