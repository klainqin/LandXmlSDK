#if !defined(__TURNRESTRICTION_H)
#define __TURNRESTRICTION_H

#include "TurnRestriction.h"
#include "LXTypes.h"

namespace LX
{


// Class : TurnRestriction
class TurnRestriction : public Object
{

public:
	virtual void toXml (IStream& stream) = 0;
public:
	// Collections

public:
	// Properties
    
    virtual double getStation() const = 0;
    virtual void setStation(double value) = 0;
    virtual bool hasValue_Station() const = 0;
    virtual void resetValue_Station() = 0;
    
    virtual int getLegNumber() const = 0;
    virtual void setLegNumber(int value) = 0;
    virtual bool hasValue_LegNumber() const = 0;
    virtual void resetValue_LegNumber() = 0;
    
    virtual EnumTrafficTurnRestriction::Values getType() const = 0;
    virtual void setType(EnumTrafficTurnRestriction::Values value) = 0;
    virtual bool hasValue_Type() const = 0;
    virtual void resetValue_Type() = 0;
    
    
protected:
};
}; // namespace : LX
#endif
