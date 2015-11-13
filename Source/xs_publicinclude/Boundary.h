#if !defined(__BOUNDARY_H)
#define __BOUNDARY_H

#include "Boundary.h"
#include "LXTypes.h"

namespace LX
{

class FeatureCollection;

// Class : Boundary
class Boundary : public Object
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
    virtual Object* getPntList() const = 0;
    virtual void setPntList(Object* value) = 0;
    
    
    virtual EnumSurfBndType::Values getBndType() const = 0;
    virtual void setBndType(EnumSurfBndType::Values value) = 0;
    virtual bool hasValue_BndType() const = 0;
    virtual void resetValue_BndType() = 0;
    
    virtual bool getEdgeTrim() const = 0;
    virtual void setEdgeTrim(bool value) = 0;
    virtual bool hasValue_EdgeTrim() const = 0;
    virtual void resetValue_EdgeTrim() = 0;
    
    virtual double getArea() const = 0;
    virtual void setArea(double value) = 0;
    virtual bool hasValue_Area() const = 0;
    virtual void resetValue_Area() = 0;
    
    virtual String getDesc() const = 0;
    virtual void setDesc(String value) = 0;
    virtual bool hasValue_Desc() const = 0;
    virtual void resetValue_Desc() = 0;
    
    virtual String getName() const = 0;
    virtual void setName(String value) = 0;
    virtual bool hasValue_Name() const = 0;
    virtual void resetValue_Name() = 0;
    
    virtual EnumStateType::Values getState() const = 0;
    virtual void setState(EnumStateType::Values value) = 0;
    virtual bool hasValue_State() const = 0;
    virtual void resetValue_State() = 0;
    
    
protected:
};
}; // namespace : LX
#endif
