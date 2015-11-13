#if !defined(__RAWOBSERVATION_H)
#define __RAWOBSERVATION_H

#include "RawObservation.h"
#include "LXTypes.h"
#include "RawObservationType.h"

namespace LX
{


// Class : RawObservation
class RawObservation : public RawObservationType
{

public:
	virtual void toXml (IStream& stream) = 0;
public:
	// Collections

public:
	// Properties
    
    
protected:
};
}; // namespace : LX
#endif
