#if !defined(__CONNSPIRAL_H)
#define __CONNSPIRAL_H

#include "ConnSpiral.h"
#include "LXTypes.h"

namespace LX
{

class Spiral;

// Class : ConnSpiral
class ConnSpiral : public Object
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
