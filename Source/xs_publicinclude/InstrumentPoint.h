#if !defined(__INSTRUMENTPOINT_H)
#define __INSTRUMENTPOINT_H

#include "InstrumentPoint.h"
#include "LXTypes.h"
#include "PointType.h"

namespace LX
{


// Class : InstrumentPoint
class InstrumentPoint : public PointType
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
