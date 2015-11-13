#if !defined(__GPSQCINFOLEVEL1_H)
#define __GPSQCINFOLEVEL1_H

#include "GPSQCInfoLevel1.h"
#include "LXTypes.h"

namespace LX
{


// Class : GPSQCInfoLevel1
class GPSQCInfoLevel1 : public Object
{

public:
	virtual void toXml (IStream& stream) = 0;
public:
	// Collections

public:
	// Properties
    
    virtual EnumGPSSolutionTypeEnum::Values getGPSSolnType() const = 0;
    virtual void setGPSSolnType(EnumGPSSolutionTypeEnum::Values value) = 0;
    virtual bool hasValue_GPSSolnType() const = 0;
    virtual void resetValue_GPSSolnType() = 0;
    
    virtual EnumGPSSolutionFrequencyEnum::Values getGPSSolnFreq() const = 0;
    virtual void setGPSSolnFreq(EnumGPSSolutionFrequencyEnum::Values value) = 0;
    virtual bool hasValue_GPSSolnFreq() const = 0;
    virtual void resetValue_GPSSolnFreq() = 0;
    
    virtual int getNbrSatellites() const = 0;
    virtual void setNbrSatellites(int value) = 0;
    virtual bool hasValue_NbrSatellites() const = 0;
    virtual void resetValue_NbrSatellites() = 0;
    
    virtual double getRDOP() const = 0;
    virtual void setRDOP(double value) = 0;
    virtual bool hasValue_RDOP() const = 0;
    virtual void resetValue_RDOP() = 0;
    
    
protected:
};
}; // namespace : LX
#endif
