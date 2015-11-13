#if !defined(__CANTSTATION_H)
#define __CANTSTATION_H

#include "CantStation.h"
#include "LXTypes.h"

namespace LX
{


// Class : CantStation
class CantStation : public Object
{

public:
	virtual void toXml (IStream& stream) = 0;
public:
	// Collections

public:
	// Properties
    
    virtual double getStation() const = 0;
    virtual void setStation(double value) = 0;
    virtual bool hasValue_Station() const = 0;
    virtual void resetValue_Station() = 0;
    
    virtual double getEquilibriumCant() const = 0;
    virtual void setEquilibriumCant(double value) = 0;
    virtual bool hasValue_EquilibriumCant() const = 0;
    virtual void resetValue_EquilibriumCant() = 0;
    
    virtual double getAppliedCant() const = 0;
    virtual void setAppliedCant(double value) = 0;
    virtual bool hasValue_AppliedCant() const = 0;
    virtual void resetValue_AppliedCant() = 0;
    
    virtual double getCantDeficiency() const = 0;
    virtual void setCantDeficiency(double value) = 0;
    virtual bool hasValue_CantDeficiency() const = 0;
    virtual void resetValue_CantDeficiency() = 0;
    
    virtual double getCantExcess() const = 0;
    virtual void setCantExcess(double value) = 0;
    virtual bool hasValue_CantExcess() const = 0;
    virtual void resetValue_CantExcess() = 0;
    
    virtual double getRateOfChangeOfAppliedCantOverTime() const = 0;
    virtual void setRateOfChangeOfAppliedCantOverTime(double value) = 0;
    virtual bool hasValue_RateOfChangeOfAppliedCantOverTime() const = 0;
    virtual void resetValue_RateOfChangeOfAppliedCantOverTime() = 0;
    
    virtual double getRateOfChangeOfAppliedCantOverLength() const = 0;
    virtual void setRateOfChangeOfAppliedCantOverLength(double value) = 0;
    virtual bool hasValue_RateOfChangeOfAppliedCantOverLength() const = 0;
    virtual void resetValue_RateOfChangeOfAppliedCantOverLength() = 0;
    
    virtual double getRateOfChangeOfCantDeficiencyOverTime() const = 0;
    virtual void setRateOfChangeOfCantDeficiencyOverTime(double value) = 0;
    virtual bool hasValue_RateOfChangeOfCantDeficiencyOverTime() const = 0;
    virtual void resetValue_RateOfChangeOfCantDeficiencyOverTime() = 0;
    
    virtual double getCantGradient() const = 0;
    virtual void setCantGradient(double value) = 0;
    virtual bool hasValue_CantGradient() const = 0;
    virtual void resetValue_CantGradient() = 0;
    
    virtual double getSpeed() const = 0;
    virtual void setSpeed(double value) = 0;
    virtual bool hasValue_Speed() const = 0;
    virtual void resetValue_Speed() = 0;
    
    virtual EnumSpiralType::Values getTransitionType() const = 0;
    virtual void setTransitionType(EnumSpiralType::Values value) = 0;
    virtual bool hasValue_TransitionType() const = 0;
    virtual void resetValue_TransitionType() = 0;
    
    virtual EnumClockwise::Values getCurvature() const = 0;
    virtual void setCurvature(EnumClockwise::Values value) = 0;
    virtual bool hasValue_Curvature() const = 0;
    virtual void resetValue_Curvature() = 0;
    
    virtual bool getAdverse() const = 0;
    virtual void setAdverse(bool value) = 0;
    virtual bool hasValue_Adverse() const = 0;
    virtual void resetValue_Adverse() = 0;
    
    
protected:
};
}; // namespace : LX
#endif
