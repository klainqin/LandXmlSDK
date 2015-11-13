#if !defined(__IMPERIALTMPL_H)
#define __IMPERIALTMPL_H

#include "Imperial.h"
#include "LXTypesTmpl.h"

namespace LX
{


// Class : Imperial
template<class T>
class ImperialTmpl : public ObjectTmpl<T>
{

public:
	virtual void toXml (IStream& stream);
public:
	// Constructors
    ImperialTmpl<T> (DocumentImpl* pDoc);

public:
	// Destructors
    virtual ~ImperialTmpl ();
public:
	// Collections

public:
	// Properties

    virtual EnumImpArea::Values getAreaUnit() const;
    virtual void setAreaUnit(EnumImpArea::Values value);
    virtual bool hasValue_AreaUnit() const;
    virtual void resetValue_AreaUnit();
    
    virtual EnumImpLinear::Values getLinearUnit() const;
    virtual void setLinearUnit(EnumImpLinear::Values value);
    virtual bool hasValue_LinearUnit() const;
    virtual void resetValue_LinearUnit();
    
    virtual EnumImpVolume::Values getVolumeUnit() const;
    virtual void setVolumeUnit(EnumImpVolume::Values value);
    virtual bool hasValue_VolumeUnit() const;
    virtual void resetValue_VolumeUnit();
    
    virtual EnumImpTemperature::Values getTemperatureUnit() const;
    virtual void setTemperatureUnit(EnumImpTemperature::Values value);
    virtual bool hasValue_TemperatureUnit() const;
    virtual void resetValue_TemperatureUnit();
    
    virtual EnumImpPressure::Values getPressureUnit() const;
    virtual void setPressureUnit(EnumImpPressure::Values value);
    virtual bool hasValue_PressureUnit() const;
    virtual void resetValue_PressureUnit();
    
    virtual EnumImpDiameter::Values getDiameterUnit() const;
    virtual void setDiameterUnit(EnumImpDiameter::Values value);
    virtual bool hasValue_DiameterUnit() const;
    virtual void resetValue_DiameterUnit();
    
    virtual EnumImpWidth::Values getWidthUnit() const;
    virtual void setWidthUnit(EnumImpWidth::Values value);
    virtual bool hasValue_WidthUnit() const;
    virtual void resetValue_WidthUnit();
    
    virtual EnumImpHeight::Values getHeightUnit() const;
    virtual void setHeightUnit(EnumImpHeight::Values value);
    virtual bool hasValue_HeightUnit() const;
    virtual void resetValue_HeightUnit();
    
    virtual EnumImpVelocity::Values getVelocityUnit() const;
    virtual void setVelocityUnit(EnumImpVelocity::Values value);
    virtual bool hasValue_VelocityUnit() const;
    virtual void resetValue_VelocityUnit();
    
    virtual EnumImpFlow::Values getFlowUnit() const;
    virtual void setFlowUnit(EnumImpFlow::Values value);
    virtual bool hasValue_FlowUnit() const;
    virtual void resetValue_FlowUnit();
    
    virtual EnumAngularType::Values getAngularUnit() const;
    virtual void setAngularUnit(EnumAngularType::Values value);
    virtual bool hasValue_AngularUnit() const;
    virtual void resetValue_AngularUnit();
    
    virtual EnumAngularType::Values getDirectionUnit() const;
    virtual void setDirectionUnit(EnumAngularType::Values value);
    virtual bool hasValue_DirectionUnit() const;
    virtual void resetValue_DirectionUnit();
    
    virtual EnumLatLongAngularType::Values getLatLongAngularUnit() const;
    virtual void setLatLongAngularUnit(EnumLatLongAngularType::Values value);
    virtual bool hasValue_LatLongAngularUnit() const;
    virtual void resetValue_LatLongAngularUnit();
    
    virtual EnumElevationType::Values getElevationUnit() const;
    virtual void setElevationUnit(EnumElevationType::Values value);
    virtual bool hasValue_ElevationUnit() const;
    virtual void resetValue_ElevationUnit();
    

    virtual Object::ValidityEnum validate(IValidationEventSink *pEventSink) const;

protected:
    EnumImpArea::Values m_AreaUnit;
    bool m_bAreaUnit_valueSet;
    EnumImpLinear::Values m_LinearUnit;
    bool m_bLinearUnit_valueSet;
    EnumImpVolume::Values m_VolumeUnit;
    bool m_bVolumeUnit_valueSet;
    EnumImpTemperature::Values m_TemperatureUnit;
    bool m_bTemperatureUnit_valueSet;
    EnumImpPressure::Values m_PressureUnit;
    bool m_bPressureUnit_valueSet;
    EnumImpDiameter::Values m_DiameterUnit;
    bool m_bDiameterUnit_valueSet;
    EnumImpWidth::Values m_WidthUnit;
    bool m_bWidthUnit_valueSet;
    EnumImpHeight::Values m_HeightUnit;
    bool m_bHeightUnit_valueSet;
    EnumImpVelocity::Values m_VelocityUnit;
    bool m_bVelocityUnit_valueSet;
    EnumImpFlow::Values m_FlowUnit;
    bool m_bFlowUnit_valueSet;
    EnumAngularType::Values m_AngularUnit;
    bool m_bAngularUnit_valueSet;
    EnumAngularType::Values m_DirectionUnit;
    bool m_bDirectionUnit_valueSet;
    EnumLatLongAngularType::Values m_LatLongAngularUnit;
    bool m_bLatLongAngularUnit_valueSet;
    EnumElevationType::Values m_ElevationUnit;
    bool m_bElevationUnit_valueSet;
};
}; // namespace : LX
#endif
