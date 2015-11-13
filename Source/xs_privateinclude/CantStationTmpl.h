#if !defined(__CANTSTATIONTMPL_H)
#define __CANTSTATIONTMPL_H

#include "CantStation.h"
#include "LXTypesTmpl.h"

namespace LX
{


// Class : CantStation
template<class T>
class CantStationTmpl : public ObjectTmpl<T>
{

public:
	virtual void toXml (IStream& stream);
public:
	// Constructors
    CantStationTmpl<T> (DocumentImpl* pDoc);

public:
	// Destructors
    virtual ~CantStationTmpl ();
public:
	// Collections

public:
	// Properties

    virtual double getStation() const;
    virtual void setStation(double value);
    virtual bool hasValue_Station() const;
    virtual void resetValue_Station();
    
    virtual double getEquilibriumCant() const;
    virtual void setEquilibriumCant(double value);
    virtual bool hasValue_EquilibriumCant() const;
    virtual void resetValue_EquilibriumCant();
    
    virtual double getAppliedCant() const;
    virtual void setAppliedCant(double value);
    virtual bool hasValue_AppliedCant() const;
    virtual void resetValue_AppliedCant();
    
    virtual double getCantDeficiency() const;
    virtual void setCantDeficiency(double value);
    virtual bool hasValue_CantDeficiency() const;
    virtual void resetValue_CantDeficiency();
    
    virtual double getCantExcess() const;
    virtual void setCantExcess(double value);
    virtual bool hasValue_CantExcess() const;
    virtual void resetValue_CantExcess();
    
    virtual double getRateOfChangeOfAppliedCantOverTime() const;
    virtual void setRateOfChangeOfAppliedCantOverTime(double value);
    virtual bool hasValue_RateOfChangeOfAppliedCantOverTime() const;
    virtual void resetValue_RateOfChangeOfAppliedCantOverTime();
    
    virtual double getRateOfChangeOfAppliedCantOverLength() const;
    virtual void setRateOfChangeOfAppliedCantOverLength(double value);
    virtual bool hasValue_RateOfChangeOfAppliedCantOverLength() const;
    virtual void resetValue_RateOfChangeOfAppliedCantOverLength();
    
    virtual double getRateOfChangeOfCantDeficiencyOverTime() const;
    virtual void setRateOfChangeOfCantDeficiencyOverTime(double value);
    virtual bool hasValue_RateOfChangeOfCantDeficiencyOverTime() const;
    virtual void resetValue_RateOfChangeOfCantDeficiencyOverTime();
    
    virtual double getCantGradient() const;
    virtual void setCantGradient(double value);
    virtual bool hasValue_CantGradient() const;
    virtual void resetValue_CantGradient();
    
    virtual double getSpeed() const;
    virtual void setSpeed(double value);
    virtual bool hasValue_Speed() const;
    virtual void resetValue_Speed();
    
    virtual EnumSpiralType::Values getTransitionType() const;
    virtual void setTransitionType(EnumSpiralType::Values value);
    virtual bool hasValue_TransitionType() const;
    virtual void resetValue_TransitionType();
    
    virtual EnumClockwise::Values getCurvature() const;
    virtual void setCurvature(EnumClockwise::Values value);
    virtual bool hasValue_Curvature() const;
    virtual void resetValue_Curvature();
    
    virtual bool getAdverse() const;
    virtual void setAdverse(bool value);
    virtual bool hasValue_Adverse() const;
    virtual void resetValue_Adverse();
    

    virtual Object::ValidityEnum validate(IValidationEventSink *pEventSink) const;

protected:
    double m_Station;
    bool m_bStation_valueSet;
    double m_EquilibriumCant;
    bool m_bEquilibriumCant_valueSet;
    double m_AppliedCant;
    bool m_bAppliedCant_valueSet;
    double m_CantDeficiency;
    bool m_bCantDeficiency_valueSet;
    double m_CantExcess;
    bool m_bCantExcess_valueSet;
    double m_RateOfChangeOfAppliedCantOverTime;
    bool m_bRateOfChangeOfAppliedCantOverTime_valueSet;
    double m_RateOfChangeOfAppliedCantOverLength;
    bool m_bRateOfChangeOfAppliedCantOverLength_valueSet;
    double m_RateOfChangeOfCantDeficiencyOverTime;
    bool m_bRateOfChangeOfCantDeficiencyOverTime_valueSet;
    double m_CantGradient;
    bool m_bCantGradient_valueSet;
    double m_Speed;
    bool m_bSpeed_valueSet;
    EnumSpiralType::Values m_TransitionType;
    bool m_bTransitionType_valueSet;
    EnumClockwise::Values m_Curvature;
    bool m_bCurvature_valueSet;
    bool m_Adverse;
    bool m_bAdverse_valueSet;
};
}; // namespace : LX
#endif
