#if !defined(__WATERSHED_H)
#define __WATERSHED_H

#include "Watershed.h"
#include "LXTypes.h"

namespace LX
{

class OutletCollection;
class FeatureCollection;

// Class : Watershed
class Watershed : public Object
{

public:
	// Classes

public:
	virtual void toXml (IStream& stream) = 0;
public:
	// Collections
    virtual OutletCollection& Outlet() = 0;
    virtual const OutletCollection& Outlet() const = 0;
    virtual FeatureCollection& Feature() = 0;
    virtual const FeatureCollection& Feature() const = 0;

public:
	// Properties
    virtual Object* getPntList() const = 0;
    virtual void setPntList(Object* value) = 0;
    
    
    virtual String getName() const = 0;
    virtual void setName(String value) = 0;
    virtual bool hasValue_Name() const = 0;
    virtual void resetValue_Name() = 0;
    
    virtual double getArea() const = 0;
    virtual void setArea(double value) = 0;
    virtual bool hasValue_Area() const = 0;
    virtual void resetValue_Area() = 0;
    
    virtual String getDesc() const = 0;
    virtual void setDesc(String value) = 0;
    virtual bool hasValue_Desc() const = 0;
    virtual void resetValue_Desc() = 0;
    
    
protected:
};
}; // namespace : LX
#endif
