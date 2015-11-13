#if !defined(__PIPE_H)
#define __PIPE_H

#include "Pipe.h"
#include "LXTypes.h"

namespace LX
{

class Struct;
class Struct;
class PipeFlow;
class Center;
class FeatureCollection;

// Class : Pipe
class Pipe : public Object
{

public:
	// Classes

public:
	virtual void toXml (IStream& stream) = 0;
public:
	// Collections
    virtual FeatureCollection& Feature() = 0;
    virtual const FeatureCollection& Feature() const = 0;

public:
	// Properties
    virtual Object* getPipeGeom() const = 0;
    virtual void setPipeGeom(Object* value) = 0;
    
    virtual PipeFlow* getPipeFlow() const = 0;
    virtual void setPipeFlow(PipeFlow* value) = 0;
    
    virtual Center* getCenter() const = 0;
    virtual void setCenter(Center* value) = 0;
    
    
    virtual String getName() const = 0;
    virtual void setName(String value) = 0;
    virtual bool hasValue_Name() const = 0;
    virtual void resetValue_Name() = 0;
    
    virtual String getRefEnd() const = 0;
    virtual void setRefEnd(String value) = 0;
    virtual bool hasValue_RefEnd() const = 0;
    virtual void resetValue_RefEnd() = 0;
    
    virtual String getRefStart() const = 0;
    virtual void setRefStart(String value) = 0;
    virtual bool hasValue_RefStart() const = 0;
    virtual void resetValue_RefStart() = 0;
    
    virtual String getDesc() const = 0;
    virtual void setDesc(String value) = 0;
    virtual bool hasValue_Desc() const = 0;
    virtual void resetValue_Desc() = 0;
    
    virtual double getLength() const = 0;
    virtual void setLength(double value) = 0;
    virtual bool hasValue_Length() const = 0;
    virtual void resetValue_Length() = 0;
    
    virtual String getOID() const = 0;
    virtual void setOID(String value) = 0;
    virtual bool hasValue_OID() const = 0;
    virtual void resetValue_OID() = 0;
    
    virtual double getSlope() const = 0;
    virtual void setSlope(double value) = 0;
    virtual bool hasValue_Slope() const = 0;
    virtual void resetValue_Slope() = 0;
    
    virtual EnumStateType::Values getState() const = 0;
    virtual void setState(EnumStateType::Values value) = 0;
    virtual bool hasValue_State() const = 0;
    virtual void resetValue_State() = 0;
    
    
public:
	// Resolvers
    virtual Struct* resolveRefStart() = 0;
    virtual Struct* resolveRefEnd() = 0;
protected:
};
}; // namespace : LX
#endif
