#if !defined(__HAZARDRATING_H)
#define __HAZARDRATING_H

#include "HazardRating.h"
#include "LXTypes.h"

namespace LX
{


// Class : HazardRating
class HazardRating : public Object
{

public:
	virtual void toXml (IStream& stream) = 0;
public:
	// Collections

public:
	// Properties
    
    virtual double getStaStart() const = 0;
    virtual void setStaStart(double value) = 0;
    virtual bool hasValue_StaStart() const = 0;
    virtual void resetValue_StaStart() = 0;
    
    virtual double getStaEnd() const = 0;
    virtual void setStaEnd(double value) = 0;
    virtual bool hasValue_StaEnd() const = 0;
    virtual void resetValue_StaEnd() = 0;
    
    virtual int getRating() const = 0;
    virtual void setRating(int value) = 0;
    virtual bool hasValue_Rating() const = 0;
    virtual void resetValue_Rating() = 0;
    
    
protected:
};
}; // namespace : LX
#endif
