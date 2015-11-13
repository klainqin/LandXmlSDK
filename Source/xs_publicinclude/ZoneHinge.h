#if !defined(__ZONEHINGE_H)
#define __ZONEHINGE_H

#include "ZoneHinge.h"
#include "LXTypes.h"

namespace LX
{

class FeatureCollection;

// Class : ZoneHinge
class ZoneHinge : public Object
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
    
    virtual EnumZoneHingeType::Values getHingeType() const = 0;
    virtual void setHingeType(EnumZoneHingeType::Values value) = 0;
    virtual bool hasValue_HingeType() const = 0;
    virtual void resetValue_HingeType() = 0;
    
    virtual int getZonePriorityRef() const = 0;
    virtual void setZonePriorityRef(int value) = 0;
    virtual bool hasValue_ZonePriorityRef() const = 0;
    virtual void resetValue_ZonePriorityRef() = 0;
    
    
protected:
};
}; // namespace : LX
#endif
