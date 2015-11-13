#if !defined(__INLETSTRUCT_H)
#define __INLETSTRUCT_H

#include "InletStruct.h"
#include "LXTypes.h"

namespace LX
{

class FeatureCollection;

// Class : InletStruct
class InletStruct : public Object
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
