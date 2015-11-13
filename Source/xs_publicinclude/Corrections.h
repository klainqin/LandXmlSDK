#if !defined(__CORRECTIONS_H)
#define __CORRECTIONS_H

#include "Corrections.h"
#include "LXTypes.h"

namespace LX
{


// Class : Corrections
class Corrections : public Object
{

public:
	virtual void toXml (IStream& stream) = 0;
public:
	// Collections

public:
	// Properties
    
    virtual double getRefractionCoefficient() const = 0;
    virtual void setRefractionCoefficient(double value) = 0;
    virtual bool hasValue_RefractionCoefficient() const = 0;
    virtual void resetValue_RefractionCoefficient() = 0;
    
    virtual bool getApplyRefractionCoefficient() const = 0;
    virtual void setApplyRefractionCoefficient(bool value) = 0;
    virtual bool hasValue_ApplyRefractionCoefficient() const = 0;
    virtual void resetValue_ApplyRefractionCoefficient() = 0;
    
    virtual double getSphericity() const = 0;
    virtual void setSphericity(double value) = 0;
    virtual bool hasValue_Sphericity() const = 0;
    virtual void resetValue_Sphericity() = 0;
    
    virtual double getPrismEccentricity() const = 0;
    virtual void setPrismEccentricity(double value) = 0;
    virtual bool hasValue_PrismEccentricity() const = 0;
    virtual void resetValue_PrismEccentricity() = 0;
    
    
protected:
};
}; // namespace : LX
#endif
