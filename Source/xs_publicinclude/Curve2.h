#if !defined(__CURVE2_H)
#define __CURVE2_H

#include "Curve2.h"
#include "LXTypes.h"

namespace LX
{

class Curve;

// Class : Curve2
class Curve2 : public Object
{

public:
	virtual void toXml (IStream& stream) = 0;
public:
	// Collections

public:
	// Properties
    virtual Curve* getCurve() const = 0;
    virtual void setCurve(Curve* value) = 0;
    
    
    
protected:
};
}; // namespace : LX
#endif
