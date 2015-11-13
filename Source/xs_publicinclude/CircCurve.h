#if !defined(__CIRCCURVE_H)
#define __CIRCCURVE_H

#include "CircCurve.h"
#include "LXTypes.h"

namespace LX
{


// Class : CircCurve
class CircCurve : public DoubleCollection
{

public:
	virtual void toXml (IStream& stream) = 0;
public:
	// Collections

public:
	// Properties
    
    virtual double getLength() const = 0;
    virtual void setLength(double value) = 0;
    virtual bool hasValue_Length() const = 0;
    virtual void resetValue_Length() = 0;
    
    virtual double getRadius() const = 0;
    virtual void setRadius(double value) = 0;
    virtual bool hasValue_Radius() const = 0;
    virtual void resetValue_Radius() = 0;
    
    virtual String getDesc() const = 0;
    virtual void setDesc(String value) = 0;
    virtual bool hasValue_Desc() const = 0;
    virtual void resetValue_Desc() = 0;
    
    
protected:
};
}; // namespace : LX
#endif
