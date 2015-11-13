#if !defined(__ROADSIDE_H)
#define __ROADSIDE_H

#include "Roadside.h"
#include "LXTypes.h"

namespace LX
{


// Class : Roadside
class Roadside : public Object
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
