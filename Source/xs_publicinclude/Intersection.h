#if !defined(__INTERSECTION_H)
#define __INTERSECTION_H

#include "Intersection.h"
#include "LXTypes.h"

namespace LX
{


// Class : Intersection
class Intersection : public Object
{

public:
	virtual void toXml (IStream& stream) = 0;
public:
	// Collections

public:
	// Properties
    
    virtual String getRoadwayRef() const = 0;
    virtual void setRoadwayRef(String value) = 0;
    virtual bool hasValue_RoadwayRef() const = 0;
    virtual void resetValue_RoadwayRef() = 0;
    
    virtual double getRoadwayPI() const = 0;
    virtual void setRoadwayPI(double value) = 0;
    virtual bool hasValue_RoadwayPI() const = 0;
    virtual void resetValue_RoadwayPI() = 0;
    
    virtual String getIntersectingRoadwayRef() const = 0;
    virtual void setIntersectingRoadwayRef(String value) = 0;
    virtual bool hasValue_IntersectingRoadwayRef() const = 0;
    virtual void resetValue_IntersectingRoadwayRef() = 0;
    
    virtual double getIntersectRoadwayPI() const = 0;
    virtual void setIntersectRoadwayPI(double value) = 0;
    virtual bool hasValue_IntersectRoadwayPI() const = 0;
    virtual void resetValue_IntersectRoadwayPI() = 0;
    
    virtual EnumIntersectionConstructionType::Values getContructionType() const = 0;
    virtual void setContructionType(EnumIntersectionConstructionType::Values value) = 0;
    virtual bool hasValue_ContructionType() const = 0;
    virtual void resetValue_ContructionType() = 0;
    
    
protected:
};
}; // namespace : LX
#endif
