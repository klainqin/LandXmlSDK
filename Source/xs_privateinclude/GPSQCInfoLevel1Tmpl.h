#if !defined(__GPSQCINFOLEVEL1TMPL_H)
#define __GPSQCINFOLEVEL1TMPL_H

#include "GPSQCInfoLevel1.h"
#include "LXTypesTmpl.h"

namespace LX
{


// Class : GPSQCInfoLevel1
template<class T>
class GPSQCInfoLevel1Tmpl : public ObjectTmpl<T>
{

public:
	virtual void toXml (IStream& stream);
public:
	// Constructors
    GPSQCInfoLevel1Tmpl<T> (DocumentImpl* pDoc);

public:
	// Destructors
    virtual ~GPSQCInfoLevel1Tmpl ();
public:
	// Collections

public:
	// Properties

    virtual EnumGPSSolutionTypeEnum::Values getGPSSolnType() const;
    virtual void setGPSSolnType(EnumGPSSolutionTypeEnum::Values value);
    virtual bool hasValue_GPSSolnType() const;
    virtual void resetValue_GPSSolnType();
    
    virtual EnumGPSSolutionFrequencyEnum::Values getGPSSolnFreq() const;
    virtual void setGPSSolnFreq(EnumGPSSolutionFrequencyEnum::Values value);
    virtual bool hasValue_GPSSolnFreq() const;
    virtual void resetValue_GPSSolnFreq();
    
    virtual int getNbrSatellites() const;
    virtual void setNbrSatellites(int value);
    virtual bool hasValue_NbrSatellites() const;
    virtual void resetValue_NbrSatellites();
    
    virtual double getRDOP() const;
    virtual void setRDOP(double value);
    virtual bool hasValue_RDOP() const;
    virtual void resetValue_RDOP();
    

    virtual Object::ValidityEnum validate(IValidationEventSink *pEventSink) const;

protected:
    EnumGPSSolutionTypeEnum::Values m_GPSSolnType;
    bool m_bGPSSolnType_valueSet;
    EnumGPSSolutionFrequencyEnum::Values m_GPSSolnFreq;
    bool m_bGPSSolnFreq_valueSet;
    int m_NbrSatellites;
    bool m_bNbrSatellites_valueSet;
    double m_RDOP;
    bool m_bRDOP_valueSet;
};
}; // namespace : LX
#endif
