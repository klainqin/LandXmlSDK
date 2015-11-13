#if !defined(__TARGETPOINT_H)
#define __TARGETPOINT_H

#include "TargetPoint.h"
#include "LXTypes.h"
#include "PointType.h"

namespace LX
{


// Class : TargetPoint
class TargetPoint : public PointType
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
