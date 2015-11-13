#if !defined(__STAEQUATION_H)
#define __STAEQUATION_H

#include "StaEquation.h"
#include "LXTypes.h"

namespace LX
{

class FeatureCollection;

// Class : StaEquation
class StaEquation : public Object
{

public:
	virtual void toXml (IStream& stream) = 0;
public:
	// Collections
    virtual FeatureCollection& Feature() = 0;
    virtual const FeatureCollection& Feature() const = 0;

public:
	// Properties
    
    virtual double getStaAhead() const = 0;
    virtual void setStaAhead(double value) = 0;
    virtual bool hasValue_StaAhead() const = 0;
    virtual void resetValue_StaAhead() = 0;
    
    virtual double getStaBack() const = 0;
    virtual void setStaBack(double value) = 0;
    virtual bool hasValue_StaBack() const = 0;
    virtual void resetValue_StaBack() = 0;
    
    virtual double getStaInternal() const = 0;
    virtual void setStaInternal(double value) = 0;
    virtual bool hasValue_StaInternal() const = 0;
    virtual void resetValue_StaInternal() = 0;
    
    virtual EnumStationIncrementDirectionType::Values getStaIncrement() const = 0;
    virtual void setStaIncrement(EnumStationIncrementDirectionType::Values value) = 0;
    virtual bool hasValue_StaIncrement() const = 0;
    virtual void resetValue_StaIncrement() = 0;
    
    virtual String getDesc() const = 0;
    virtual void setDesc(String value) = 0;
    virtual bool hasValue_Desc() const = 0;
    virtual void resetValue_Desc() = 0;
    
    
protected:
};
}; // namespace : LX
#endif
