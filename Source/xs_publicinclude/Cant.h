#if !defined(__CANT_H)
#define __CANT_H

#include "Cant.h"
#include "LXTypes.h"

namespace LX
{

class CantStationCollection;
class SpeedStationCollection;
class FeatureCollection;

// Class : Cant
class Cant : public Object
{

public:
	virtual void toXml (IStream& stream) = 0;
public:
	// Collections
    virtual CantStationCollection& CantStation() = 0;
    virtual const CantStationCollection& CantStation() const = 0;
    virtual SpeedStationCollection& SpeedStation() = 0;
    virtual const SpeedStationCollection& SpeedStation() const = 0;
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
    
    virtual double getEquilibriumConstant() const = 0;
    virtual void setEquilibriumConstant(double value) = 0;
    virtual bool hasValue_EquilibriumConstant() const = 0;
    virtual void resetValue_EquilibriumConstant() = 0;
    
    virtual double getAppliedCantConstant() const = 0;
    virtual void setAppliedCantConstant(double value) = 0;
    virtual bool hasValue_AppliedCantConstant() const = 0;
    virtual void resetValue_AppliedCantConstant() = 0;
    
    virtual double getGauge() const = 0;
    virtual void setGauge(double value) = 0;
    virtual bool hasValue_Gauge() const = 0;
    virtual void resetValue_Gauge() = 0;
    
    virtual String getRotationPoint() const = 0;
    virtual void setRotationPoint(String value) = 0;
    virtual bool hasValue_RotationPoint() const = 0;
    virtual void resetValue_RotationPoint() = 0;
    
    
protected:
};
}; // namespace : LX
#endif
