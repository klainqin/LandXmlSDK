#if !defined(__DESIGNSPEED_H)
#define __DESIGNSPEED_H

#include "DesignSpeed.h"
#include "LXTypes.h"

namespace LX
{

class FeatureCollection;

// Class : DesignSpeed
class DesignSpeed : public Object
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
    
    virtual double getSpeed() const = 0;
    virtual void setSpeed(double value) = 0;
    virtual bool hasValue_Speed() const = 0;
    virtual void resetValue_Speed() = 0;
    
    
protected:
};
}; // namespace : LX
#endif
