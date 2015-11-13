#if !defined(__EXCLUSIONS_H)
#define __EXCLUSIONS_H

#include "Exclusions.h"
#include "LXTypes.h"

namespace LX
{


// Class : Exclusions
class Exclusions : public Object
{

public:
	virtual void toXml (IStream& stream) = 0;
public:
	// Collections

public:
	// Properties
    
    virtual String getExclusionType() const = 0;
    virtual void setExclusionType(String value) = 0;
    virtual bool hasValue_ExclusionType() const = 0;
    virtual void resetValue_ExclusionType() = 0;
    
    virtual double getArea() const = 0;
    virtual void setArea(double value) = 0;
    virtual bool hasValue_Area() const = 0;
    virtual void resetValue_Area() = 0;
    
    
protected:
};
}; // namespace : LX
#endif
