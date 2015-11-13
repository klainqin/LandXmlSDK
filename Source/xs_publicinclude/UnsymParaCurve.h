#if !defined(__UNSYMPARACURVE_H)
#define __UNSYMPARACURVE_H

#include "UnsymParaCurve.h"
#include "LXTypes.h"

namespace LX
{


// Class : UnsymParaCurve
class UnsymParaCurve : public DoubleCollection
{

public:
	virtual void toXml (IStream& stream) = 0;
public:
	// Collections

public:
	// Properties
    
    virtual double getLengthIn() const = 0;
    virtual void setLengthIn(double value) = 0;
    virtual bool hasValue_LengthIn() const = 0;
    virtual void resetValue_LengthIn() = 0;
    
    virtual double getLengthOut() const = 0;
    virtual void setLengthOut(double value) = 0;
    virtual bool hasValue_LengthOut() const = 0;
    virtual void resetValue_LengthOut() = 0;
    
    virtual String getDesc() const = 0;
    virtual void setDesc(String value) = 0;
    virtual bool hasValue_Desc() const = 0;
    virtual void resetValue_Desc() = 0;
    
    
protected:
};
}; // namespace : LX
#endif
