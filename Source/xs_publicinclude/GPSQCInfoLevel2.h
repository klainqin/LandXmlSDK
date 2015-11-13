#if !defined(__GPSQCINFOLEVEL2_H)
#define __GPSQCINFOLEVEL2_H

#include "GPSQCInfoLevel2.h"
#include "LXTypes.h"

namespace LX
{


// Class : GPSQCInfoLevel2
class GPSQCInfoLevel2 : public Object
{

public:
	virtual void toXml (IStream& stream) = 0;
public:
	// Collections

public:
	// Properties
    
    virtual double getCovarianceXX() const = 0;
    virtual void setCovarianceXX(double value) = 0;
    virtual bool hasValue_CovarianceXX() const = 0;
    virtual void resetValue_CovarianceXX() = 0;
    
    virtual double getCovarianceXY() const = 0;
    virtual void setCovarianceXY(double value) = 0;
    virtual bool hasValue_CovarianceXY() const = 0;
    virtual void resetValue_CovarianceXY() = 0;
    
    virtual double getCovarianceXZ() const = 0;
    virtual void setCovarianceXZ(double value) = 0;
    virtual bool hasValue_CovarianceXZ() const = 0;
    virtual void resetValue_CovarianceXZ() = 0;
    
    virtual double getCovarianceYY() const = 0;
    virtual void setCovarianceYY(double value) = 0;
    virtual bool hasValue_CovarianceYY() const = 0;
    virtual void resetValue_CovarianceYY() = 0;
    
    virtual double getCovarianceYZ() const = 0;
    virtual void setCovarianceYZ(double value) = 0;
    virtual bool hasValue_CovarianceYZ() const = 0;
    virtual void resetValue_CovarianceYZ() = 0;
    
    virtual double getCovarianceZZ() const = 0;
    virtual void setCovarianceZZ(double value) = 0;
    virtual bool hasValue_CovarianceZZ() const = 0;
    virtual void resetValue_CovarianceZZ() = 0;
    
    virtual EnumGPSSolutionTypeEnum::Values getGPSSolnType() const = 0;
    virtual void setGPSSolnType(EnumGPSSolutionTypeEnum::Values value) = 0;
    virtual bool hasValue_GPSSolnType() const = 0;
    virtual void resetValue_GPSSolnType() = 0;
    
    virtual EnumGPSSolutionFrequencyEnum::Values getGPSSolnFreq() const = 0;
    virtual void setGPSSolnFreq(EnumGPSSolutionFrequencyEnum::Values value) = 0;
    virtual bool hasValue_GPSSolnFreq() const = 0;
    virtual void resetValue_GPSSolnFreq() = 0;
    
    virtual double getRMS() const = 0;
    virtual void setRMS(double value) = 0;
    virtual bool hasValue_RMS() const = 0;
    virtual void resetValue_RMS() = 0;
    
    virtual double getRatio() const = 0;
    virtual void setRatio(double value) = 0;
    virtual bool hasValue_Ratio() const = 0;
    virtual void resetValue_Ratio() = 0;
    
    virtual double getReferenceVariance() const = 0;
    virtual void setReferenceVariance(double value) = 0;
    virtual bool hasValue_ReferenceVariance() const = 0;
    virtual void resetValue_ReferenceVariance() = 0;
    
    virtual int getNbrSatellites() const = 0;
    virtual void setNbrSatellites(int value) = 0;
    virtual bool hasValue_NbrSatellites() const = 0;
    virtual void resetValue_NbrSatellites() = 0;
    
    virtual double getStartTime() const = 0;
    virtual void setStartTime(double value) = 0;
    virtual bool hasValue_StartTime() const = 0;
    virtual void resetValue_StartTime() = 0;
    
    virtual double getStopTime() const = 0;
    virtual void setStopTime(double value) = 0;
    virtual bool hasValue_StopTime() const = 0;
    virtual void resetValue_StopTime() = 0;
    
    
protected:
};
}; // namespace : LX
#endif
