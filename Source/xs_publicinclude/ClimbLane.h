#if !defined(__CLIMBLANE_H)
#define __CLIMBLANE_H

#include "ClimbLane.h"
#include "LXTypes.h"

namespace LX
{


// Class : ClimbLane
class ClimbLane : public Object
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
    
    virtual double getBeginFullWidthSta() const = 0;
    virtual void setBeginFullWidthSta(double value) = 0;
    virtual bool hasValue_BeginFullWidthSta() const = 0;
    virtual void resetValue_BeginFullWidthSta() = 0;
    
    virtual double getEndFullWidthSta() const = 0;
    virtual void setEndFullWidthSta(double value) = 0;
    virtual bool hasValue_EndFullWidthSta() const = 0;
    virtual void resetValue_EndFullWidthSta() = 0;
    
    virtual double getWidth() const = 0;
    virtual void setWidth(double value) = 0;
    virtual bool hasValue_Width() const = 0;
    virtual void resetValue_Width() = 0;
    
    virtual EnumSideofRoadType::Values getSideofRoad() const = 0;
    virtual void setSideofRoad(EnumSideofRoadType::Values value) = 0;
    virtual bool hasValue_SideofRoad() const = 0;
    virtual void resetValue_SideofRoad() = 0;
    
    
protected:
};
}; // namespace : LX
#endif
