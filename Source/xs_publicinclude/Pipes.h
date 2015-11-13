#if !defined(__PIPES_H)
#define __PIPES_H

#include "Pipes.h"
#include "LXTypes.h"

namespace LX
{

class Units;
class PipeCollection;
class FeatureCollection;

// Class : Pipes
class Pipes : public Object
{

public:
	virtual void toXml (IStream& stream) = 0;
public:
	// Collections
    virtual PipeCollection& Pipe() = 0;
    virtual const PipeCollection& Pipe() const = 0;
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
