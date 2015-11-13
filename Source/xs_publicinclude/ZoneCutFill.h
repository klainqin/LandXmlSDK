#if !defined(__ZONECUTFILL_H)
#define __ZONECUTFILL_H

#include "ZoneCutFill.h"
#include "LXTypes.h"

namespace LX
{


// Class : ZoneCutFill
class ZoneCutFill : public Object
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
    
    virtual double getCutSlope() const = 0;
    virtual void setCutSlope(double value) = 0;
    virtual bool hasValue_CutSlope() const = 0;
    virtual void resetValue_CutSlope() = 0;
    
    virtual double getFillSlope() const = 0;
    virtual void setFillSlope(double value) = 0;
    virtual bool hasValue_FillSlope() const = 0;
    virtual void resetValue_FillSlope() = 0;
    
    
protected:
};
}; // namespace : LX
#endif
