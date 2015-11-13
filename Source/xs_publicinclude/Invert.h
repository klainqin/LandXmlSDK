#if !defined(__INVERT_H)
#define __INVERT_H

#include "Invert.h"
#include "LXTypes.h"

namespace LX
{

class Pipe;

// Class : Invert
class Invert : public Object
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
    
    virtual double getElev() const = 0;
    virtual void setElev(double value) = 0;
    virtual bool hasValue_Elev() const = 0;
    virtual void resetValue_Elev() = 0;
    
    virtual EnumInOut::Values getFlowDir() const = 0;
    virtual void setFlowDir(EnumInOut::Values value) = 0;
    virtual bool hasValue_FlowDir() const = 0;
    virtual void resetValue_FlowDir() = 0;
    
    virtual String getRefPipe() const = 0;
    virtual void setRefPipe(String value) = 0;
    virtual bool hasValue_RefPipe() const = 0;
    virtual void resetValue_RefPipe() = 0;
    
    
public:
	// Resolvers
    virtual Pipe* resolveRefPipe() = 0;
protected:
};
}; // namespace : LX
#endif
