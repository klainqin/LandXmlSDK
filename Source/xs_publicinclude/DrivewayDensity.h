#if !defined(__DRIVEWAYDENSITY_H)
#define __DRIVEWAYDENSITY_H

#include "DrivewayDensity.h"
#include "LXTypes.h"

namespace LX
{


// Class : DrivewayDensity
class DrivewayDensity : public Object
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
    
    virtual int getDensity() const = 0;
    virtual void setDensity(int value) = 0;
    virtual bool hasValue_Density() const = 0;
    virtual void resetValue_Density() = 0;
    
    
protected:
};
}; // namespace : LX
#endif
