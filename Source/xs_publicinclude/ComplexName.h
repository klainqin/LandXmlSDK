#if !defined(__COMPLEXNAME_H)
#define __COMPLEXNAME_H

#include "ComplexName.h"
#include "LXTypes.h"

namespace LX
{


// Class : ComplexName
class ComplexName : public Object
{

public:
	virtual void toXml (IStream& stream) = 0;
public:
	// Collections

public:
	// Properties
    
    virtual String getDesc() const = 0;
    virtual void setDesc(String value) = 0;
    virtual bool hasValue_Desc() const = 0;
    virtual void resetValue_Desc() = 0;
    
    virtual int getPriority() const = 0;
    virtual void setPriority(int value) = 0;
    virtual bool hasValue_Priority() const = 0;
    virtual void resetValue_Priority() = 0;
    
    
protected:
};
}; // namespace : LX
#endif
