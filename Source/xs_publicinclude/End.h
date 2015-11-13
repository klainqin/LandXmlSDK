#if !defined(__END_H)
#define __END_H

#include "End.h"
#include "LXTypes.h"
#include "PointType.h"

namespace LX
{

class CgPoint;

// Class : End
class End : public PointType
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
