#if !defined(__TESTOBSERVATION_H)
#define __TESTOBSERVATION_H

#include "TestObservation.h"
#include "LXTypes.h"
#include "RawObservationType.h"

namespace LX
{


// Class : TestObservation
class TestObservation : public RawObservationType
{

public:
	virtual void toXml (IStream& stream) = 0;
public:
	// Collections

public:
	// Properties
    
    virtual double getSetup1RodA() const = 0;
    virtual void setSetup1RodA(double value) = 0;
    virtual bool hasValue_Setup1RodA() const = 0;
    virtual void resetValue_Setup1RodA() = 0;
    
    virtual double getSetup1RodB() const = 0;
    virtual void setSetup1RodB(double value) = 0;
    virtual bool hasValue_Setup1RodB() const = 0;
    virtual void resetValue_Setup1RodB() = 0;
    
    virtual double getSetup2RodA() const = 0;
    virtual void setSetup2RodA(double value) = 0;
    virtual bool hasValue_Setup2RodA() const = 0;
    virtual void resetValue_Setup2RodA() = 0;
    
    virtual double getSetup2RodB() const = 0;
    virtual void setSetup2RodB(double value) = 0;
    virtual bool hasValue_Setup2RodB() const = 0;
    virtual void resetValue_Setup2RodB() = 0;
    
    
protected:
};
}; // namespace : LX
#endif
