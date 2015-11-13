#if !defined(__HEADOFPOWER_H)
#define __HEADOFPOWER_H

#include "HeadOfPower.h"
#include "LXTypes.h"

namespace LX
{


// Class : HeadOfPower
class HeadOfPower : public Object
{

public:
	virtual void toXml (IStream& stream) = 0;
public:
	// Collections

public:
	// Properties
    
    virtual String getName() const = 0;
    virtual void setName(String value) = 0;
    virtual bool hasValue_Name() const = 0;
    virtual void resetValue_Name() = 0;
    
    
protected:
};
}; // namespace : LX
#endif
