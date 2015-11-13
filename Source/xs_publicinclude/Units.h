#if !defined(__UNITS_H)
#define __UNITS_H

#include "Units.h"
#include "LXTypes.h"

namespace LX
{


// Class : Units
class Units : public Object
{

public:
	// Classes

public:
	virtual void toXml (IStream& stream) = 0;
public:
	// Collections

public:
	// Properties
    virtual Object* getSelectedUnits() const = 0;
    virtual void setSelectedUnits(Object* value) = 0;
    
    
    
protected:
};
}; // namespace : LX
#endif
