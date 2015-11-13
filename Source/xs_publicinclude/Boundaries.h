#if !defined(__BOUNDARIES_H)
#define __BOUNDARIES_H

#include "Boundaries.h"
#include "LXTypes.h"

namespace LX
{

class BoundaryCollection;
class FeatureCollection;

// Class : Boundaries
class Boundaries : public Object
{

public:
	virtual void toXml (IStream& stream) = 0;
public:
	// Collections
    virtual BoundaryCollection& Boundary() = 0;
    virtual const BoundaryCollection& Boundary() const = 0;
    virtual FeatureCollection& Feature() = 0;
    virtual const FeatureCollection& Feature() const = 0;

public:
	// Properties
    
    
protected:
};
}; // namespace : LX
#endif
