#if !defined(__MAPPOINT_H)
#define __MAPPOINT_H

#include "MapPoint.h"
#include "LXTypes.h"
#include "PointType.h"

namespace LX
{


// Class : MapPoint
class MapPoint : public PointType
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
