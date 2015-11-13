#if !defined(__OFFSETVALS_H)
#define __OFFSETVALS_H

#include "OffsetVals.h"
#include "LXTypes.h"

namespace LX
{


// Class : OffsetVals
class OffsetVals : public Object
{

public:
	virtual void toXml (IStream& stream) = 0;
public:
	// Collections

public:
	// Properties
    
    virtual double getOffsetInOut() const = 0;
    virtual void setOffsetInOut(double value) = 0;
    virtual bool hasValue_OffsetInOut() const = 0;
    virtual void resetValue_OffsetInOut() = 0;
    
    virtual double getOffsetLeftRight() const = 0;
    virtual void setOffsetLeftRight(double value) = 0;
    virtual bool hasValue_OffsetLeftRight() const = 0;
    virtual void resetValue_OffsetLeftRight() = 0;
    
    virtual double getOffsetUpDown() const = 0;
    virtual void setOffsetUpDown(double value) = 0;
    virtual bool hasValue_OffsetUpDown() const = 0;
    virtual void resetValue_OffsetUpDown() = 0;
    
    
protected:
};
}; // namespace : LX
#endif
