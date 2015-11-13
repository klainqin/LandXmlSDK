#if !defined(__STATION_H)
#define __STATION_H

#include "Station.h"
#include "LXTypes.h"

namespace LX
{


// Class : Station
class Station : public DoubleObject
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
