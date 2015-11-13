#if !defined(__SPEEDS_H)
#define __SPEEDS_H

#include "Speeds.h"
#include "LXTypes.h"

namespace LX
{

class DesignSpeedCollection;
class DesignSpeed85thCollection;
class PostedSpeedCollection;
class FeatureCollection;

// Class : Speeds
class Speeds : public Object
{

public:
	virtual void toXml (IStream& stream) = 0;
public:
	// Collections
    virtual DesignSpeedCollection& DesignSpeed() = 0;
    virtual const DesignSpeedCollection& DesignSpeed() const = 0;
    virtual DesignSpeed85thCollection& DesignSpeed85th() = 0;
    virtual const DesignSpeed85thCollection& DesignSpeed85th() const = 0;
    virtual PostedSpeedCollection& PostedSpeed() = 0;
    virtual const PostedSpeedCollection& PostedSpeed() const = 0;
    virtual FeatureCollection& Feature() = 0;
    virtual const FeatureCollection& Feature() const = 0;

public:
	// Properties
    
    
protected:
};
}; // namespace : LX
#endif
