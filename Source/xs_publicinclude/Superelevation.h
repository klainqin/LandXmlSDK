#if !defined(__SUPERELEVATION_H)
#define __SUPERELEVATION_H

#include "Superelevation.h"
#include "LXTypes.h"

namespace LX
{

class BeginRunoutStaCollection;
class BeginRunoffStaCollection;
class FullSuperStaCollection;
class FullSuperelevCollection;
class RunoffStaCollection;
class StartofRunoutStaCollection;
class EndofRunoutStaCollection;
class AdverseSECollection;
class FeatureCollection;

// Class : Superelevation
class Superelevation : public Object
{

public:
	virtual void toXml (IStream& stream) = 0;
public:
	// Collections
    virtual BeginRunoutStaCollection& BeginRunoutSta() = 0;
    virtual const BeginRunoutStaCollection& BeginRunoutSta() const = 0;
    virtual BeginRunoffStaCollection& BeginRunoffSta() = 0;
    virtual const BeginRunoffStaCollection& BeginRunoffSta() const = 0;
    virtual FullSuperStaCollection& FullSuperSta() = 0;
    virtual const FullSuperStaCollection& FullSuperSta() const = 0;
    virtual FullSuperelevCollection& FullSuperelev() = 0;
    virtual const FullSuperelevCollection& FullSuperelev() const = 0;
    virtual RunoffStaCollection& RunoffSta() = 0;
    virtual const RunoffStaCollection& RunoffSta() const = 0;
    virtual StartofRunoutStaCollection& StartofRunoutSta() = 0;
    virtual const StartofRunoutStaCollection& StartofRunoutSta() const = 0;
    virtual EndofRunoutStaCollection& EndofRunoutSta() = 0;
    virtual const EndofRunoutStaCollection& EndofRunoutSta() const = 0;
    virtual AdverseSECollection& AdverseSE() = 0;
    virtual const AdverseSECollection& AdverseSE() const = 0;
    virtual FeatureCollection& Feature() = 0;
    virtual const FeatureCollection& Feature() const = 0;

public:
	// Properties
    
    virtual double getStaStart() const = 0;
    virtual void setStaStart(double value) = 0;
    virtual bool hasValue_StaStart() const = 0;
    virtual void resetValue_StaStart() = 0;
    
    virtual double getStaEnd() const = 0;
    virtual void setStaEnd(double value) = 0;
    virtual bool hasValue_StaEnd() const = 0;
    virtual void resetValue_StaEnd() = 0;
    
    
protected:
};
}; // namespace : LX
#endif
