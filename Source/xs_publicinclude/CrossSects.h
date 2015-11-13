#if !defined(__CROSSSECTS_H)
#define __CROSSSECTS_H

#include "CrossSects.h"
#include "LXTypes.h"

namespace LX
{

class CrossSectCollection;
class FeatureCollection;

// Class : CrossSects
class CrossSects : public Object
{

public:
	virtual void toXml (IStream& stream) = 0;
public:
	// Collections
    virtual CrossSectCollection& CrossSect() = 0;
    virtual const CrossSectCollection& CrossSect() const = 0;
    virtual FeatureCollection& Feature() = 0;
    virtual const FeatureCollection& Feature() const = 0;

public:
	// Properties
    
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
    
    virtual EnumXsVolCalcMethodType::Values getCalcMethod() const = 0;
    virtual void setCalcMethod(EnumXsVolCalcMethodType::Values value) = 0;
    virtual bool hasValue_CalcMethod() const = 0;
    virtual void resetValue_CalcMethod() = 0;
    
    virtual bool getCurveCorrection() const = 0;
    virtual void setCurveCorrection(bool value) = 0;
    virtual bool hasValue_CurveCorrection() const = 0;
    virtual void resetValue_CurveCorrection() = 0;
    
    virtual double getSwellFactor() const = 0;
    virtual void setSwellFactor(double value) = 0;
    virtual bool hasValue_SwellFactor() const = 0;
    virtual void resetValue_SwellFactor() = 0;
    
    virtual double getShrinkFactor() const = 0;
    virtual void setShrinkFactor(double value) = 0;
    virtual bool hasValue_ShrinkFactor() const = 0;
    virtual void resetValue_ShrinkFactor() = 0;
    
    
protected:
};
}; // namespace : LX
#endif
