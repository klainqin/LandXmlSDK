#if !defined(__START_H)
#define __START_H

#include "Start.h"
#include "LXTypes.h"
#include "PointType.h"

namespace LX
{

class CgPoint;

// Class : Start
class Start : public PointType
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
