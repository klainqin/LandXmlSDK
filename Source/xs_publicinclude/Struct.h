#if !defined(__STRUCT_H)
#define __STRUCT_H

#include "Struct.h"
#include "LXTypes.h"

namespace LX
{

class Center;
class InvertCollection;
class StructFlow;
class FeatureCollection;

// Class : Struct
class Struct : public Object
{

public:
	// Classes

public:
	virtual void toXml (IStream& stream) = 0;
public:
	// Collections
    virtual InvertCollection& Invert() = 0;
    virtual const InvertCollection& Invert() const = 0;
    virtual FeatureCollection& Feature() = 0;
    virtual const FeatureCollection& Feature() const = 0;

public:
	// Properties
    virtual Center* getCenter() const = 0;
    virtual void setCenter(Center* value) = 0;
    
    virtual Object* getStructGeom() const = 0;
    virtual void setStructGeom(Object* value) = 0;
    
    virtual StructFlow* getStructFlow() const = 0;
    virtual void setStructFlow(StructFlow* value) = 0;
    
    
    virtual String getName() const = 0;
    virtual void setName(String value) = 0;
    virtual bool hasValue_Name() const = 0;
    virtual void resetValue_Name() = 0;
    
    virtual String getDesc() const = 0;
    virtual void setDesc(String value) = 0;
    virtual bool hasValue_Desc() const = 0;
    virtual void resetValue_Desc() = 0;
    
    virtual double getElevRim() const = 0;
    virtual void setElevRim(double value) = 0;
    virtual bool hasValue_ElevRim() const = 0;
    virtual void resetValue_ElevRim() = 0;
    
    virtual double getElevSump() const = 0;
    virtual void setElevSump(double value) = 0;
    virtual bool hasValue_ElevSump() const = 0;
    virtual void resetValue_ElevSump() = 0;
    
    virtual String getOID() const = 0;
    virtual void setOID(String value) = 0;
    virtual bool hasValue_OID() const = 0;
    virtual void resetValue_OID() = 0;
    
    virtual EnumStateType::Values getState() const = 0;
    virtual void setState(EnumStateType::Values value) = 0;
    virtual bool hasValue_State() const = 0;
    virtual void resetValue_State() = 0;
    
    
protected:
};
}; // namespace : LX
#endif
