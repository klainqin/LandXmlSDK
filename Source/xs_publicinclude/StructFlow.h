#if !defined(__STRUCTFLOW_H)
#define __STRUCTFLOW_H

#include "StructFlow.h"
#include "LXTypes.h"

namespace LX
{

class FeatureCollection;

// Class : StructFlow
class StructFlow : public Object
{

public:
	virtual void toXml (IStream& stream) = 0;
public:
	// Collections
    virtual FeatureCollection& Feature() = 0;
    virtual const FeatureCollection& Feature() const = 0;

public:
	// Properties
    
    virtual double getLossIn() const = 0;
    virtual void setLossIn(double value) = 0;
    virtual bool hasValue_LossIn() const = 0;
    virtual void resetValue_LossIn() = 0;
    
    virtual double getLossOut() const = 0;
    virtual void setLossOut(double value) = 0;
    virtual bool hasValue_LossOut() const = 0;
    virtual void resetValue_LossOut() = 0;
    
    virtual String getDesc() const = 0;
    virtual void setDesc(String value) = 0;
    virtual bool hasValue_Desc() const = 0;
    virtual void resetValue_Desc() = 0;
    
    virtual double getHglIn() const = 0;
    virtual void setHglIn(double value) = 0;
    virtual bool hasValue_HglIn() const = 0;
    virtual void resetValue_HglIn() = 0;
    
    virtual double getHglOut() const = 0;
    virtual void setHglOut(double value) = 0;
    virtual bool hasValue_HglOut() const = 0;
    virtual void resetValue_HglOut() = 0;
    
    virtual double getLocalDepression() const = 0;
    virtual void setLocalDepression(double value) = 0;
    virtual bool hasValue_LocalDepression() const = 0;
    virtual void resetValue_LocalDepression() = 0;
    
    virtual double getSlopeSurf() const = 0;
    virtual void setSlopeSurf(double value) = 0;
    virtual bool hasValue_SlopeSurf() const = 0;
    virtual void resetValue_SlopeSurf() = 0;
    
    virtual double getSlopeGutter() const = 0;
    virtual void setSlopeGutter(double value) = 0;
    virtual bool hasValue_SlopeGutter() const = 0;
    virtual void resetValue_SlopeGutter() = 0;
    
    virtual double getWidthGutter() const = 0;
    virtual void setWidthGutter(double value) = 0;
    virtual bool hasValue_WidthGutter() const = 0;
    virtual void resetValue_WidthGutter() = 0;
    
    
protected:
};
}; // namespace : LX
#endif
