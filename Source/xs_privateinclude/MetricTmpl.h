#if !defined(__METRICTMPL_H)
#define __METRICTMPL_H

#include "Metric.h"
#include "LXTypesTmpl.h"

namespace LX
{


// Class : Metric
template<class T>
class MetricTmpl : public ObjectTmpl<T>
{

public:
	virtual void toXml (IStream& stream);
public:
	// Constructors
    MetricTmpl (DocumentImpl* pDoc);

public:
	// Destructors
    virtual ~MetricTmpl ();
public:
	// Collections

public:
	// Properties

    virtual EnumMetArea::Values getAreaUnit() const;
    virtual void setAreaUnit(EnumMetArea::Values value);
    virtual bool hasValue_AreaUnit() const;
    virtual void resetValue_AreaUnit();
    
    virtual EnumMetLinear::Values getLinearUnit() const;
    virtual void setLinearUnit(EnumMetLinear::Values value);
    virtual bool hasValue_LinearUnit() const;
    virtual void resetValue_LinearUnit();
    
    virtual EnumMetVolume::Values getVolumeUnit() const;
    virtual void setVolumeUnit(EnumMetVolume::Values value);
    virtual bool hasValue_VolumeUnit() const;
    virtual void resetValue_VolumeUnit();
    
    virtual EnumMetTemperature::Values getTemperatureUnit() const;
    virtual void setTemperatureUnit(EnumMetTemperature::Values value);
    virtual bool hasValue_TemperatureUnit() const;
    virtual void resetValue_TemperatureUnit();
    
    virtual EnumMetPressure::Values getPressureUnit() const;
    virtual void setPressureUnit(EnumMetPressure::Values value);
    virtual bool hasValue_PressureUnit() const;
    virtual void resetValue_PressureUnit();
    
    virtual EnumMetDiameter::Values getDiameterUnit() const;
    virtual void setDiameterUnit(EnumMetDiameter::Values value);
    virtual bool hasValue_DiameterUnit() const;
    virtual void resetValue_DiameterUnit();
    
    virtual EnumMetWidth::Values getWidthUnit() const;
    virtual void setWidthUnit(EnumMetWidth::Values value);
    virtual bool hasValue_WidthUnit() const;
    virtual void resetValue_WidthUnit();
    
    virtual EnumMetHeight::Values getHeightUnit() const;
    virtual void setHeightUnit(EnumMetHeight::Values value);
    virtual bool hasValue_HeightUnit() const;
    virtual void resetValue_HeightUnit();
    
    virtual EnumMetVelocity::Values getVelocityUnit() const;
    virtual void setVelocityUnit(EnumMetVelocity::Values value);
    virtual bool hasValue_VelocityUnit() const;
    virtual void resetValue_VelocityUnit();
    
    virtual EnumMetFlow::Values getFlowUnit() const;
    virtual void setFlowUnit(EnumMetFlow::Values value);
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
    EnumMetArea::Values m_AreaUnit;
    bool m_bAreaUnit_valueSet;
    EnumMetLinear::Values m_LinearUnit;
    bool m_bLinearUnit_valueSet;
    EnumMetVolume::Values m_VolumeUnit;
    bool m_bVolumeUnit_valueSet;
    EnumMetTemperature::Values m_TemperatureUnit;
    bool m_bTemperatureUnit_valueSet;
    EnumMetPressure::Values m_PressureUnit;
    bool m_bPressureUnit_valueSet;
    EnumMetDiameter::Values m_DiameterUnit;
    bool m_bDiameterUnit_valueSet;
    EnumMetWidth::Values m_WidthUnit;
    bool m_bWidthUnit_valueSet;
    EnumMetHeight::Values m_HeightUnit;
    bool m_bHeightUnit_valueSet;
    EnumMetVelocity::Values m_VelocityUnit;
    bool m_bVelocityUnit_valueSet;
    EnumMetFlow::Values m_FlowUnit;
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
