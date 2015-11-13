#if !defined(__STRUCTS_H)
#define __STRUCTS_H

#include "Structs.h"
#include "LXTypes.h"

namespace LX
{

class Units;
class StructCollection;
class FeatureCollection;

// Class : Structs
class Structs : public Object
{

public:
	virtual void toXml (IStream& stream) = 0;
public:
	// Collections
    virtual StructCollection& Struct() = 0;
    virtual const StructCollection& Struct() const = 0;
    virtual FeatureCollection& Feature() = 0;
    virtual const FeatureCollection& Feature() const = 0;

public:
	// Properties
    virtual Units* getUnits() const = 0;
    virtual void setUnits(Units* value) = 0;
    
    
    
protected:
};
}; // namespace : LX
#endif
