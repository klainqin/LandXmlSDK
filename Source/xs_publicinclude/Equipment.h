#if !defined(__EQUIPMENT_H)
#define __EQUIPMENT_H

#include "Equipment.h"
#include "LXTypes.h"

namespace LX
{


// Class : Equipment
class Equipment : public Object
{

public:
	// Classes

public:
	virtual void toXml (IStream& stream) = 0;
public:
	// Collections

public:
	// Properties
    virtual Object* getEquipmentDetails() const = 0;
    virtual void setEquipmentDetails(Object* value) = 0;
    
    
    
protected:
};
}; // namespace : LX
#endif
