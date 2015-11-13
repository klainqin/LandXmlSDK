#if !defined(__F_H)
#define __F_H

#include "F.h"
#include "LXTypes.h"

namespace LX
{


// Class : F
class F : public IntegerCollection
{

public:
	virtual void toXml (IStream& stream) = 0;
public:
	// Collections

public:
	// Properties
    virtual IntegerCollection* getN() const = 0;
    virtual void setN(IntegerCollection* value) = 0;
    
    
    virtual int getI() const = 0;
    virtual void setI(int value) = 0;
    virtual bool hasValue_I() const = 0;
    virtual void resetValue_I() = 0;
    
    virtual unsigned int getB() const = 0;
    virtual void setB(unsigned int value) = 0;
    virtual bool hasValue_B() const = 0;
    virtual void resetValue_B() = 0;
    
    
protected:
};
}; // namespace : LX
#endif
