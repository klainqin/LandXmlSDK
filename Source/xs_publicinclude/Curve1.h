#if !defined(__CURVE1_H)
#define __CURVE1_H

#include "Curve1.h"
#include "LXTypes.h"

namespace LX
{

class Curve;

// Class : Curve1
class Curve1 : public Object
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
