#if !defined(__DEFINITION_H)
#define __DEFINITION_H

#include "Definition.h"
#include "LXTypes.h"

namespace LX
{

class Pnts;
class FacesCollection;
class FeatureCollection;

// Class : Definition
class Definition : public Object
{

public:
	virtual void toXml (IStream& stream) = 0;
public:
	// Collections
    virtual FacesCollection& Faces() = 0;
    virtual const FacesCollection& Faces() const = 0;
    virtual FeatureCollection& Feature() = 0;
    virtual const FeatureCollection& Feature() const = 0;

public:
	// Properties
    virtual Pnts* getPnts() const = 0;
    virtual void setPnts(Pnts* value) = 0;
    
    
    virtual EnumSurfTypeEnum::Values getSurfType() const = 0;
    virtual void setSurfType(EnumSurfTypeEnum::Values value) = 0;
    virtual bool hasValue_SurfType() const = 0;
    virtual void resetValue_SurfType() = 0;
    
    virtual double getArea2DSurf() const = 0;
    virtual void setArea2DSurf(double value) = 0;
    virtual bool hasValue_Area2DSurf() const = 0;
    virtual void resetValue_Area2DSurf() = 0;
    
    virtual double getArea3DSurf() const = 0;
    virtual void setArea3DSurf(double value) = 0;
    virtual bool hasValue_Area3DSurf() const = 0;
    virtual void resetValue_Area3DSurf() = 0;
    
    virtual double getElevMax() const = 0;
    virtual void setElevMax(double value) = 0;
    virtual bool hasValue_ElevMax() const = 0;
    virtual void resetValue_ElevMax() = 0;
    
    virtual double getElevMin() const = 0;
    virtual void setElevMin(double value) = 0;
    virtual bool hasValue_ElevMin() const = 0;
    virtual void resetValue_ElevMin() = 0;
    
    
protected:
};
}; // namespace : LX
#endif
