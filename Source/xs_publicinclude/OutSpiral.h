#if !defined(__OUTSPIRAL_H)
#define __OUTSPIRAL_H

#include "OutSpiral.h"
#include "LXTypes.h"

namespace LX
{

class Spiral;

// Class : OutSpiral
class OutSpiral : public Object
{

public:
	virtual void toXml (IStream& stream) = 0;
public:
	// Collections

public:
	// Properties
    virtual Spiral* getSpiral() const = 0;
    virtual void setSpiral(Spiral* value) = 0;
    
    
    
protected:
};
}; // namespace : LX
#endif
