#if !defined(__DITCH_H)
#define __DITCH_H

#include "Ditch.h"
#include "LXTypes.h"

namespace LX
{


// Class : Ditch
class Ditch : public Object
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
    
    virtual double getBottomWidth() const = 0;
    virtual void setBottomWidth(double value) = 0;
    virtual bool hasValue_BottomWidth() const = 0;
    virtual void resetValue_BottomWidth() = 0;
    
    virtual EnumDitchBottomShape::Values getBottomShape() const = 0;
    virtual void setBottomShape(EnumDitchBottomShape::Values value) = 0;
    virtual bool hasValue_BottomShape() const = 0;
    virtual void resetValue_BottomShape() = 0;
    
    
protected:
};
}; // namespace : LX
#endif
