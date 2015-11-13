#if !defined(__DESIGNSPEED85TH_H)
#define __DESIGNSPEED85TH_H

#include "DesignSpeed85th.h"
#include "LXTypes.h"

namespace LX
{

class FeatureCollection;

// Class : DesignSpeed85th
class DesignSpeed85th : public Object
{

public:
	virtual void toXml (IStream& stream) = 0;
public:
	// Collections
    virtual FeatureCollection& Feature() = 0;
    virtual const FeatureCollection& Feature() const = 0;

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
    
    virtual double getSpeed() const = 0;
    virtual void setSpeed(double value) = 0;
    virtual bool hasValue_Speed() const = 0;
    virtual void resetValue_Speed() = 0;
    
    
protected:
};
}; // namespace : LX
#endif
