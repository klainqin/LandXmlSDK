#if !defined(__GPSQCINFOLEVEL2TMPL_H)
#define __GPSQCINFOLEVEL2TMPL_H

#include "GPSQCInfoLevel2.h"
#include "LXTypesTmpl.h"

namespace LX
{


// Class : GPSQCInfoLevel2
template<class T>
class GPSQCInfoLevel2Tmpl : public ObjectTmpl<T>
{

public:
	virtual void toXml (IStream& stream);
public:
	// Constructors
    GPSQCInfoLevel2Tmpl<T> (DocumentImpl* pDoc);

public:
	// Destructors
    virtual ~GPSQCInfoLevel2Tmpl ();
public:
	// Collections

public:
	// Properties

    virtual double getCovarianceXX() const;
    virtual void setCovarianceXX(double value);
    virtual bool hasValue_CovarianceXX() const;
    virtual void resetValue_CovarianceXX();
    
    virtual double getCovarianceXY() const;
    virtual void setCovarianceXY(double value);
    virtual bool hasValue_CovarianceXY() const;
    virtual void resetValue_CovarianceXY();
    
    virtual double getCovarianceXZ() const;
    virtual void setCovarianceXZ(double value);
    virtual bool hasValue_CovarianceXZ() const;
    virtual void resetValue_CovarianceXZ();
    
    virtual double getCovarianceYY() const;
    virtual void setCovarianceYY(double value);
    virtual bool hasValue_CovarianceYY() const;
    virtual void resetValue_CovarianceYY();
    
    virtual double getCovarianceYZ() const;
    virtual void setCovarianceYZ(double value);
    virtual bool hasValue_CovarianceYZ() const;
    virtual void resetValue_CovarianceYZ();
    
    virtual double getCovarianceZZ() const;
    virtual void setCovarianceZZ(double value);
    virtual bool hasValue_CovarianceZZ() const;
    virtual void resetValue_CovarianceZZ();
    
    virtual EnumGPSSolutionTypeEnum::Values getGPSSolnType() const;
    virtual void setGPSSolnType(EnumGPSSolutionTypeEnum::Values value);
    virtual bool hasValue_GPSSolnType() const;
    virtual void resetValue_GPSSolnType();
    
    virtual EnumGPSSolutionFrequencyEnum::Values getGPSSolnFreq() const;
    virtual void setGPSSolnFreq(EnumGPSSolutionFrequencyEnum::Values value);
    virtual bool hasValue_GPSSolnFreq() const;
    virtual void resetValue_GPSSolnFreq();
    
    virtual double getRMS() const;
    virtual void setRMS(double value);
    virtual bool hasValue_RMS() const;
    virtual void resetValue_RMS();
    
    virtual double getRatio() const;
    virtual void setRatio(double value);
    virtual bool hasValue_Ratio() const;
    virtual void resetValue_Ratio();
    
    virtual double getReferenceVariance() const;
    virtual void setReferenceVariance(double value);
    virtual bool hasValue_ReferenceVariance() const;
    virtual void resetValue_ReferenceVariance();
    
    virtual int getNbrSatellites() const;
    virtual void setNbrSatellites(int value);
    virtual bool hasValue_NbrSatellites() const;
    virtual void resetValue_NbrSatellites();
    
    virtual double getStartTime() const;
    virtual void setStartTime(double value);
    virtual bool hasValue_StartTime() const;
    virtual void resetValue_StartTime();
    
    virtual double getStopTime() const;
    virtual void setStopTime(double value);
    virtual bool hasValue_StopTime() const;
    virtual void resetValue_StopTime();
    

    virtual Object::ValidityEnum validate(IValidationEventSink *pEventSink) const;

protected:
    double m_CovarianceXX;
    bool m_bCovarianceXX_valueSet;
    double m_CovarianceXY;
    bool m_bCovarianceXY_valueSet;
    double m_CovarianceXZ;
    bool m_bCovarianceXZ_valueSet;
    double m_CovarianceYY;
    bool m_bCovarianceYY_valueSet;
    double m_CovarianceYZ;
    bool m_bCovarianceYZ_valueSet;
    double m_CovarianceZZ;
    bool m_bCovarianceZZ_valueSet;
    EnumGPSSolutionTypeEnum::Values m_GPSSolnType;
    bool m_bGPSSolnType_valueSet;
    EnumGPSSolutionFrequencyEnum::Values m_GPSSolnFreq;
    bool m_bGPSSolnFreq_valueSet;
    double m_RMS;
    bool m_bRMS_valueSet;
    double m_Ratio;
    bool m_bRatio_valueSet;
    double m_ReferenceVariance;
    bool m_bReferenceVariance_valueSet;
    int m_NbrSatellites;
    bool m_bNbrSatellites_valueSet;
    double m_StartTime;
    bool m_bStartTime_valueSet;
    double m_StopTime;
    bool m_bStopTime_valueSet;
};
}; // namespace : LX
#endif
