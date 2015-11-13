#if !defined(__BREAKLINES_H)
#define __BREAKLINES_H

#include "Breaklines.h"
#include "LXTypes.h"

namespace LX
{

class BreaklineCollection;
class RetWallCollection;
class FeatureCollection;

// Class : Breaklines
class Breaklines : public Object
{

public:
	virtual void toXml (IStream& stream) = 0;
public:
	// Collections
    virtual BreaklineCollection& Breakline() = 0;
    virtual const BreaklineCollection& Breakline() const = 0;
    virtual RetWallCollection& RetWall() = 0;
    virtual const RetWallCollection& RetWall() const = 0;
    virtual FeatureCollection& Feature() = 0;
    virtual const FeatureCollection& Feature() const = 0;

public:
	// Properties
    
    
protected:
};
}; // namespace : LX
#endif
