#if !defined(__INSPIRAL_H)
#define __INSPIRAL_H

#include "InSpiral.h"
#include "LXTypes.h"

namespace LX
{

class Spiral;

// Class : InSpiral
class InSpiral : public Object
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
