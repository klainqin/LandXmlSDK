#if !defined(__BEGINRUNOUTSTA_H)
#define __BEGINRUNOUTSTA_H

#include "BeginRunoutSta.h"
#include "LXTypes.h"

namespace LX
{


// Class : BeginRunoutSta
class BeginRunoutSta : public DoubleObject
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
