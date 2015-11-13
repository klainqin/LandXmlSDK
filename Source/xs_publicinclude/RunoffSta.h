#if !defined(__RUNOFFSTA_H)
#define __RUNOFFSTA_H

#include "RunoffSta.h"
#include "LXTypes.h"

namespace LX
{


// Class : RunoffSta
class RunoffSta : public DoubleObject
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
