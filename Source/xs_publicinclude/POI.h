#if !defined(__POI_H)
#define __POI_H

#include "POI.h"
#include "LXTypes.h"
#include "PointType.h"

namespace LX
{

class CgPoint;

// Class : POI
class POI : public PointType
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
