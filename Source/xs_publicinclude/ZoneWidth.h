#if !defined(__ZONEWIDTH_H)
#define __ZONEWIDTH_H

#include "ZoneWidth.h"
#include "LXTypes.h"

namespace LX
{

class FeatureCollection;

// Class : ZoneWidth
class ZoneWidth : public Object
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
    
    virtual double getStartWidth() const = 0;
    virtual void setStartWidth(double value) = 0;
    virtual bool hasValue_StartWidth() const = 0;
    virtual void resetValue_StartWidth() = 0;
    
    virtual double getEndWidth() const = 0;
    virtual void setEndWidth(double value) = 0;
    virtual bool hasValue_EndWidth() const = 0;
    virtual void resetValue_EndWidth() = 0;
    
    
protected:
};
}; // namespace : LX
#endif
