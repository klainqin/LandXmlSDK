#if !defined(__ROADWAYS_H)
#define __ROADWAYS_H

#include "Roadways.h"
#include "LXTypes.h"

namespace LX
{

class RoadwayCollection;
class IntersectionsCollection;
class FeatureCollection;

// Class : Roadways
class Roadways : public Object
{

public:
	virtual void toXml (IStream& stream) = 0;
public:
	// Collections
    virtual RoadwayCollection& Roadway() = 0;
    virtual const RoadwayCollection& Roadway() const = 0;
    virtual IntersectionsCollection& Intersections() = 0;
    virtual const IntersectionsCollection& Intersections() const = 0;
    virtual FeatureCollection& Feature() = 0;
    virtual const FeatureCollection& Feature() const = 0;

public:
	// Properties
    
    virtual String getName() const = 0;
    virtual void setName(String value) = 0;
    virtual bool hasValue_Name() const = 0;
    virtual void resetValue_Name() = 0;
    
    virtual String getDesc() const = 0;
    virtual void setDesc(String value) = 0;
    virtual bool hasValue_Desc() const = 0;
    virtual void resetValue_Desc() = 0;
    
    virtual EnumStateType::Values getState() const = 0;
    virtual void setState(EnumStateType::Values value) = 0;
    virtual bool hasValue_State() const = 0;
    virtual void resetValue_State() = 0;
    
    
protected:
};
}; // namespace : LX
#endif
