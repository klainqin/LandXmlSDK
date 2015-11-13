#if !defined(__PNTS_H)
#define __PNTS_H

#include "Pnts.h"
#include "LXTypes.h"

namespace LX
{

class PCollection;

// Class : Pnts
class Pnts : public Object
{

public:
	virtual void toXml (IStream& stream) = 0;
public:
	// Collections
    virtual PCollection& P() = 0;
    virtual const PCollection& P() const = 0;

public:
	// Properties
    
    
protected:
};
}; // namespace : LX
#endif
