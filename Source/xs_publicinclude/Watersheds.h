#if !defined(__WATERSHEDS_H)
#define __WATERSHEDS_H

#include "Watersheds.h"
#include "LXTypes.h"

namespace LX
{

class WatershedCollection;
class FeatureCollection;

// Class : Watersheds
class Watersheds : public Object
{

public:
	virtual void toXml (IStream& stream) = 0;
public:
	// Collections
    virtual WatershedCollection& Watershed() = 0;
    virtual const WatershedCollection& Watershed() const = 0;
    virtual FeatureCollection& Feature() = 0;
    virtual const FeatureCollection& Feature() const = 0;

public:
	// Properties
    
    
protected:
};
}; // namespace : LX
#endif
