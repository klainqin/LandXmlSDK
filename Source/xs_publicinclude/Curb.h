#if !defined(__CURB_H)
#define __CURB_H

#include "Curb.h"
#include "LXTypes.h"

namespace LX
{


// Class : Curb
class Curb : public Object
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
    
    virtual EnumCurbType::Values getType() const = 0;
    virtual void setType(EnumCurbType::Values value) = 0;
    virtual bool hasValue_Type() const = 0;
    virtual void resetValue_Type() = 0;
    
    
protected:
};
}; // namespace : LX
#endif
