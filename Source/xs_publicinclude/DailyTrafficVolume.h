#if !defined(__DAILYTRAFFICVOLUME_H)
#define __DAILYTRAFFICVOLUME_H

#include "DailyTrafficVolume.h"
#include "LXTypes.h"

namespace LX
{

class FeatureCollection;

// Class : DailyTrafficVolume
class DailyTrafficVolume : public Object
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
    
    virtual double getADT() const = 0;
    virtual void setADT(double value) = 0;
    virtual bool hasValue_ADT() const = 0;
    virtual void resetValue_ADT() = 0;
    
    virtual String getYear() const = 0;
    virtual void setYear(String value) = 0;
    virtual bool hasValue_Year() const = 0;
    virtual void resetValue_Year() = 0;
    
    virtual double getEscFactor() const = 0;
    virtual void setEscFactor(double value) = 0;
    virtual bool hasValue_EscFactor() const = 0;
    virtual void resetValue_EscFactor() = 0;
    
    
protected:
};
}; // namespace : LX
#endif
