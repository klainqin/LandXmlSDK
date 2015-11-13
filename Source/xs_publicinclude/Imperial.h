#if !defined(__IMPERIAL_H)
#define __IMPERIAL_H

#include "Imperial.h"
#include "LXTypes.h"

namespace LX
{


// Class : Imperial
class Imperial : public Object
{

public:
	virtual void toXml (IStream& stream) = 0;
public:
	// Collections

public:
	// Properties
    
    virtual EnumImpArea::Values getAreaUnit() const = 0;
    virtual void setAreaUnit(EnumImpArea::Values value) = 0;
    virtual bool hasValue_AreaUnit() const = 0;
    virtual void resetValue_AreaUnit() = 0;
    
    virtual EnumImpLinear::Values getLinearUnit() const = 0;
    virtual void setLinearUnit(EnumImpLinear::Values value) = 0;
    virtual bool hasValue_LinearUnit() const = 0;
    virtual void resetValue_LinearUnit() = 0;
    
    virtual EnumImpVolume::Values getVolumeUnit() const = 0;
    virtual void setVolumeUnit(EnumImpVolume::Values value) = 0;
    virtual bool hasValue_VolumeUnit() const = 0;
    virtual void resetValue_VolumeUnit() = 0;
    
    virtual EnumImpTemperature::Values getTemperatureUnit() const = 0;
    virtual void setTemperatureUnit(EnumImpTemperature::Values value) = 0;
    virtual bool hasValue_TemperatureUnit() const = 0;
    virtual void resetValue_TemperatureUnit() = 0;
    
    virtual EnumImpPressure::Values getPressureUnit() const = 0;
    virtual void setPressureUnit(EnumImpPressure::Values value) = 0;
    virtual bool hasValue_PressureUnit() const = 0;
    virtual void resetValue_PressureUnit() = 0;
    
    virtual EnumImpDiameter::Values getDiameterUnit() const = 0;
    virtual void setDiameterUnit(EnumImpDiameter::Values value) = 0;
    virtual bool hasValue_DiameterUnit() const = 0;
    virtual void resetValue_DiameterUnit() = 0;
    
    virtual EnumImpWidth::Values getWidthUnit() const = 0;
    virtual void setWidthUnit(EnumImpWidth::Values value) = 0;
    virtual bool hasValue_WidthUnit() const = 0;
    virtual void resetValue_WidthUnit() = 0;
    
    virtual EnumImpHeight::Values getHeightUnit() const = 0;
    virtual void setHeightUnit(EnumImpHeight::Values value) = 0;
    virtual bool hasValue_HeightUnit() const = 0;
    virtual void resetValue_HeightUnit() = 0;
    
    virtual EnumImpVelocity::Values getVelocityUnit() const = 0;
    virtual void setVelocityUnit(EnumImpVelocity::Values value) = 0;
    virtual bool hasValue_VelocityUnit() const = 0;
    virtual void resetValue_VelocityUnit() = 0;
    
    virtual EnumImpFlow::Values getFlowUnit() const = 0;
    virtual void setFlowUnit(EnumImpFlow::Values value) = 0;
    virtual bool hasValue_FlowUnit() const = 0;
    virtual void resetValue_FlowUnit() = 0;
    
    virtual EnumAngularType::Values getAngularUnit() const = 0;
    virtual void setAngularUnit(EnumAngularType::Values value) = 0;
    virtual bool hasValue_AngularUnit() const = 0;
    virtual void resetValue_AngularUnit() = 0;
    
    virtual EnumAngularType::Values getDirectionUnit() const = 0;
    virtual void setDirectionUnit(EnumAngularType::Values value) = 0;
    virtual bool hasValue_DirectionUnit() const = 0;
    virtual void resetValue_DirectionUnit() = 0;
    
    virtual EnumLatLongAngularType::Values getLatLongAngularUnit() const = 0;
    virtual void setLatLongAngularUnit(EnumLatLongAngularType::Values value) = 0;
    virtual bool hasValue_LatLongAngularUnit() const = 0;
    virtual void resetValue_LatLongAngularUnit() = 0;
    
    virtual EnumElevationType::Values getElevationUnit() const = 0;
    virtual void setElevationUnit(EnumElevationType::Values value) = 0;
    virtual bool hasValue_ElevationUnit() const = 0;
    virtual void resetValue_ElevationUnit() = 0;
    
    
protected:
};
}; // namespace : LX
#endif
