#if !defined(__OUTLETSTRUCT_H)
#define __OUTLETSTRUCT_H

#include "OutletStruct.h"
#include "LXTypes.h"

namespace LX
{

class FeatureCollection;

// Class : OutletStruct
class OutletStruct : public Object
{

public:
	virtual void toXml (IStream& stream) = 0;
public:
	// Collections
    virtual FeatureCollection& Feature() = 0;
    virtual const FeatureCollection& Feature() const = 0;

public:
	// Properties
    
    
protected:
};
}; // namespace : LX
#endif
