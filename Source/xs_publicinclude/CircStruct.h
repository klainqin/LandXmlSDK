#if !defined(__CIRCSTRUCT_H)
#define __CIRCSTRUCT_H

#include "CircStruct.h"
#include "LXTypes.h"

namespace LX
{

class FeatureCollection;

// Class : CircStruct
class CircStruct : public Object
{

public:
	virtual void toXml (IStream& stream) = 0;
public:
	// Collections
    virtual FeatureCollection& Feature() = 0;
    virtual const FeatureCollection& Feature() const = 0;

public:
	// Properties
    
    virtual double getDiameter() const = 0;
    virtual void setDiameter(double value) = 0;
    virtual bool hasValue_Diameter() const = 0;
    virtual void resetValue_Diameter() = 0;
    
    virtual String getDesc() const = 0;
    virtual void setDesc(String value) = 0;
    virtual bool hasValue_Desc() const = 0;
    virtual void resetValue_Desc() = 0;
    
    virtual String getInletCase() const = 0;
    virtual void setInletCase(String value) = 0;
    virtual bool hasValue_InletCase() const = 0;
    virtual void resetValue_InletCase() = 0;
    
    virtual double getLossCoeff() const = 0;
    virtual void setLossCoeff(double value) = 0;
    virtual bool hasValue_LossCoeff() const = 0;
    virtual void resetValue_LossCoeff() = 0;
    
    virtual String getMaterial() const = 0;
    virtual void setMaterial(String value) = 0;
    virtual bool hasValue_Material() const = 0;
    virtual void resetValue_Material() = 0;
    
    virtual double getThickness() const = 0;
    virtual void setThickness(double value) = 0;
    virtual bool hasValue_Thickness() const = 0;
    virtual void resetValue_Thickness() = 0;
    
    
protected:
};
}; // namespace : LX
#endif
