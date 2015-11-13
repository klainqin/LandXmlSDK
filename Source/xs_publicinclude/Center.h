#if !defined(__CENTER_H)
#define __CENTER_H

#include "Center.h"
#include "LXTypes.h"
#include "PointType.h"

namespace LX
{

class CgPoint;

// Class : Center
class Center : public PointType
{

public:
	virtual void toXml (IStream& stream) = 0;
public:
	// Collections

public:
	// Properties
    
    
public:
	// Resolvers
    virtual CgPoint* resolvePntRef() = 0;
    virtual const DoubleCollection& resolveCoor() const = 0;
protected:
};
}; // namespace : LX
#endif
