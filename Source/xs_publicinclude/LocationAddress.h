#if !defined(__LOCATIONADDRESS_H)
#define __LOCATIONADDRESS_H

#include "LocationAddress.h"
#include "LXTypes.h"

namespace LX
{

class ComplexNameCollection;
class RoadNameCollection;
class AdministrativeAreaCollection;
class AddressPointCollection;

// Class : LocationAddress
class LocationAddress : public Object
{

public:
	virtual void toXml (IStream& stream) = 0;
public:
	// Collections
    virtual ComplexNameCollection& ComplexName() = 0;
    virtual const ComplexNameCollection& ComplexName() const = 0;
    virtual RoadNameCollection& RoadName() = 0;
    virtual const RoadNameCollection& RoadName() const = 0;
    virtual AdministrativeAreaCollection& AdministrativeArea() = 0;
    virtual const AdministrativeAreaCollection& AdministrativeArea() const = 0;
    virtual AddressPointCollection& AddressPoint() = 0;
    virtual const AddressPointCollection& AddressPoint() const = 0;

public:
	// Properties
    
    virtual String getAddressType() const = 0;
    virtual void setAddressType(String value) = 0;
    virtual bool hasValue_AddressType() const = 0;
    virtual void resetValue_AddressType() = 0;
    
    virtual String getFlatType() const = 0;
    virtual void setFlatType(String value) = 0;
    virtual bool hasValue_FlatType() const = 0;
    virtual void resetValue_FlatType() = 0;
    
    virtual String getFlatNumber() const = 0;
    virtual void setFlatNumber(String value) = 0;
    virtual bool hasValue_FlatNumber() const = 0;
    virtual void resetValue_FlatNumber() = 0;
    
    virtual String getFloorLevelType() const = 0;
    virtual void setFloorLevelType(String value) = 0;
    virtual bool hasValue_FloorLevelType() const = 0;
    virtual void resetValue_FloorLevelType() = 0;
    
    virtual String getFloorLevelNumber() const = 0;
    virtual void setFloorLevelNumber(String value) = 0;
    virtual bool hasValue_FloorLevelNumber() const = 0;
    virtual void resetValue_FloorLevelNumber() = 0;
    
    virtual int getNumberFirst() const = 0;
    virtual void setNumberFirst(int value) = 0;
    virtual bool hasValue_NumberFirst() const = 0;
    virtual void resetValue_NumberFirst() = 0;
    
    virtual String getNumberSuffixFirst() const = 0;
    virtual void setNumberSuffixFirst(String value) = 0;
    virtual bool hasValue_NumberSuffixFirst() const = 0;
    virtual void resetValue_NumberSuffixFirst() = 0;
    
    virtual int getNumberLast() const = 0;
    virtual void setNumberLast(int value) = 0;
    virtual bool hasValue_NumberLast() const = 0;
    virtual void resetValue_NumberLast() = 0;
    
    virtual String getNumberSuffixLast() const = 0;
    virtual void setNumberSuffixLast(String value) = 0;
    virtual bool hasValue_NumberSuffixLast() const = 0;
    virtual void resetValue_NumberSuffixLast() = 0;
    
    
protected:
};
}; // namespace : LX
#endif
