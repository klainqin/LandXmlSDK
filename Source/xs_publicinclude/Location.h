#if !defined(__LOCATION_H)
#define __LOCATION_H

#include "Location.h"
#include "LXTypes.h"
#include "PointType.h"

namespace LX
{


// Class : Location
class Location : public PointType
{

public:
	virtual void toXml (IStream& stream) = 0;
public:
	// Collections

public:
	// Properties
    
    
protected:
};
}; // namespace : LX
#endif
