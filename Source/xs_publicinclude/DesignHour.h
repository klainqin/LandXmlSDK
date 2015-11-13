#if !defined(__DESIGNHOUR_H)
#define __DESIGNHOUR_H

#include "DesignHour.h"
#include "LXTypes.h"

namespace LX
{

class FeatureCollection;

// Class : DesignHour
class DesignHour : public Object
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
    
    virtual double getVolume() const = 0;
    virtual void setVolume(double value) = 0;
    virtual bool hasValue_Volume() const = 0;
    virtual void resetValue_Volume() = 0;
    
    
protected:
};
}; // namespace : LX
#endif
