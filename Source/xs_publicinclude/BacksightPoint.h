#if !defined(__BACKSIGHTPOINT_H)
#define __BACKSIGHTPOINT_H

#include "BacksightPoint.h"
#include "LXTypes.h"
#include "PointType.h"

namespace LX
{


// Class : BacksightPoint
class BacksightPoint : public PointType
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
