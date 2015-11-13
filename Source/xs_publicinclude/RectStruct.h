#if !defined(__RECTSTRUCT_H)
#define __RECTSTRUCT_H

#include "RectStruct.h"
#include "LXTypes.h"

namespace LX
{

class FeatureCollection;

// Class : RectStruct
class RectStruct : public Object
{

public:
	virtual void toXml (IStream& stream) = 0;
public:
	// Collections
    virtual FeatureCollection& Feature() = 0;
    virtual const FeatureCollection& Feature() const = 0;

public:
	// Properties
    
    virtual double getLength() const = 0;
    virtual void setLength(double value) = 0;
    virtual bool hasValue_Length() const = 0;
    virtual void resetValue_Length() = 0;
    
    virtual double getLengthDir() const = 0;
    virtual void setLengthDir(double value) = 0;
    virtual bool hasValue_LengthDir() const = 0;
    virtual void resetValue_LengthDir() = 0;
    
    virtual double getWidth() const = 0;
    virtual void setWidth(double value) = 0;
    virtual bool hasValue_Width() const = 0;
    virtual void resetValue_Width() = 0;
    
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
