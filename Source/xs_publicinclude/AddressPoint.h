#if !defined(__ADDRESSPOINT_H)
#define __ADDRESSPOINT_H

#include "AddressPoint.h"
#include "LXTypes.h"
#include "PointType.h"

namespace LX
{


// Class : AddressPoint
class AddressPoint : public PointType
{

public:
	virtual void toXml (IStream& stream) = 0;
public:
	// Collections

public:
	// Properties
    
    virtual String getAddressPointType() const = 0;
    virtual void setAddressPointType(String value) = 0;
    virtual bool hasValue_AddressPointType() const = 0;
    virtual void resetValue_AddressPointType() = 0;
    
    
protected:
};
}; // namespace : LX
#endif
