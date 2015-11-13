#if !defined(__CORNER_H)
#define __CORNER_H

#include "Corner.h"
#include "LXTypes.h"

namespace LX
{


// Class : Corner
class Corner : public Object
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
    
    virtual EnumCornerType::Values getType() const = 0;
    virtual void setType(EnumCornerType::Values value) = 0;
    virtual bool hasValue_Type() const = 0;
    virtual void resetValue_Type() = 0;
    
    
protected:
};
}; // namespace : LX
#endif
