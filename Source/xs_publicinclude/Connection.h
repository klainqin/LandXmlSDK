#if !defined(__CONNECTION_H)
#define __CONNECTION_H

#include "Connection.h"
#include "LXTypes.h"

namespace LX
{

class FeatureCollection;

// Class : Connection
class Connection : public Object
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
