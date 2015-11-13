#if !defined(__DESIGNCROSSSECTSURF_H)
#define __DESIGNCROSSSECTSURF_H

#include "DesignCrossSectSurf.h"
#include "LXTypes.h"

namespace LX
{

class CrossSectPntCollection;
class FeatureCollection;

// Class : DesignCrossSectSurf
class DesignCrossSectSurf : public Object
{

public:
	virtual void toXml (IStream& stream) = 0;
public:
	// Collections
    virtual CrossSectPntCollection& CrossSectPnt() = 0;
    virtual const CrossSectPntCollection& CrossSectPnt() const = 0;
    virtual FeatureCollection& Feature() = 0;
    virtual const FeatureCollection& Feature() const = 0;

public:
	// Properties
    
    virtual String getName() const = 0;
    virtual void setName(String value) = 0;
    virtual bool hasValue_Name() const = 0;
    virtual void resetValue_Name() = 0;
    
    virtual String getDesc() const = 0;
    virtual void setDesc(String value) = 0;
    virtual bool hasValue_Desc() const = 0;
    virtual void resetValue_Desc() = 0;
    
    virtual EnumStateType::Values getState() const = 0;
    virtual void setState(EnumStateType::Values value) = 0;
    virtual bool hasValue_State() const = 0;
    virtual void resetValue_State() = 0;
    
    virtual EnumSideofRoadType::Values getSide() const = 0;
    virtual void setSide(EnumSideofRoadType::Values value) = 0;
    virtual bool hasValue_Side() const = 0;
    virtual void resetValue_Side() = 0;
    
    virtual String getMaterial() const = 0;
    virtual void setMaterial(String value) = 0;
    virtual bool hasValue_Material() const = 0;
    virtual void resetValue_Material() = 0;
    
    virtual bool getClosedArea() const = 0;
    virtual void setClosedArea(bool value) = 0;
    virtual bool hasValue_ClosedArea() const = 0;
    virtual void resetValue_ClosedArea() = 0;
    
    virtual double getTypicalThickness() const = 0;
    virtual void setTypicalThickness(double value) = 0;
    virtual bool hasValue_TypicalThickness() const = 0;
    virtual void resetValue_TypicalThickness() = 0;
    
    virtual double getTypicalWidth() const = 0;
    virtual void setTypicalWidth(double value) = 0;
    virtual bool hasValue_TypicalWidth() const = 0;
    virtual void resetValue_TypicalWidth() = 0;
    
    virtual double getArea() const = 0;
    virtual void setArea(double value) = 0;
    virtual bool hasValue_Area() const = 0;
    virtual void resetValue_Area() = 0;
    
    virtual double getVolume() const = 0;
    virtual void setVolume(double value) = 0;
    virtual bool hasValue_Volume() const = 0;
    virtual void resetValue_Volume() = 0;
    
    
protected:
};
}; // namespace : LX
#endif
