#if !defined(__ZONESLOPE_H)
#define __ZONESLOPE_H

#include "ZoneSlope.h"
#include "LXTypes.h"

namespace LX
{


// Class : ZoneSlope
class ZoneSlope : public Object
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
    
    virtual double getStartVertValue() const = 0;
    virtual void setStartVertValue(double value) = 0;
    virtual bool hasValue_StartVertValue() const = 0;
    virtual void resetValue_StartVertValue() = 0;
    
    virtual EnumZoneVertType::Values getStartVertType() const = 0;
    virtual void setStartVertType(EnumZoneVertType::Values value) = 0;
    virtual bool hasValue_StartVertType() const = 0;
    virtual void resetValue_StartVertType() = 0;
    
    virtual double getEndVertValue() const = 0;
    virtual void setEndVertValue(double value) = 0;
    virtual bool hasValue_EndVertValue() const = 0;
    virtual void resetValue_EndVertValue() = 0;
    
    virtual EnumZoneVertType::Values getEndVertType() const = 0;
    virtual void setEndVertType(EnumZoneVertType::Values value) = 0;
    virtual bool hasValue_EndVertType() const = 0;
    virtual void resetValue_EndVertType() = 0;
    
    virtual double getParabolicStartStation() const = 0;
    virtual void setParabolicStartStation(double value) = 0;
    virtual bool hasValue_ParabolicStartStation() const = 0;
    virtual void resetValue_ParabolicStartStation() = 0;
    
    virtual double getParabolicEndStation() const = 0;
    virtual void setParabolicEndStation(double value) = 0;
    virtual bool hasValue_ParabolicEndStation() const = 0;
    virtual void resetValue_ParabolicEndStation() = 0;
    
    
protected:
};
}; // namespace : LX
#endif
