#if !defined(__ROADNAME_H)
#define __ROADNAME_H

#include "RoadName.h"
#include "LXTypes.h"

namespace LX
{


// Class : RoadName
class RoadName : public Object
{

public:
	virtual void toXml (IStream& stream) = 0;
public:
	// Collections

public:
	// Properties
    virtual StringCollection* getPclRef() const = 0;
    virtual void setPclRef(StringCollection* value) = 0;
    
    
    virtual String getRoadNameType() const = 0;
    virtual void setRoadNameType(String value) = 0;
    virtual bool hasValue_RoadNameType() const = 0;
    virtual void resetValue_RoadNameType() = 0;
    
    virtual String getRoadName() const = 0;
    virtual void setRoadName(String value) = 0;
    virtual bool hasValue_RoadName() const = 0;
    virtual void resetValue_RoadName() = 0;
    
    virtual String getRoadNameSuffix() const = 0;
    virtual void setRoadNameSuffix(String value) = 0;
    virtual bool hasValue_RoadNameSuffix() const = 0;
    virtual void resetValue_RoadNameSuffix() = 0;
    
    virtual String getRoadType() const = 0;
    virtual void setRoadType(String value) = 0;
    virtual bool hasValue_RoadType() const = 0;
    virtual void resetValue_RoadType() = 0;
    
    
protected:
};
}; // namespace : LX
#endif
