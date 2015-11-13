#if !defined(__CORRECTIONSTMPL_H)
#define __CORRECTIONSTMPL_H

#include "Corrections.h"
#include "LXTypesTmpl.h"

namespace LX
{


// Class : Corrections
template<class T>
class CorrectionsTmpl : public ObjectTmpl<T>
{

public:
	virtual void toXml (IStream& stream);
public:
	// Constructors
    CorrectionsTmpl<T> (DocumentImpl* pDoc);

public:
	// Destructors
    virtual ~CorrectionsTmpl ();
public:
	// Collections

public:
	// Properties

    virtual double getRefractionCoefficient() const;
    virtual void setRefractionCoefficient(double value);
    virtual bool hasValue_RefractionCoefficient() const;
    virtual void resetValue_RefractionCoefficient();
    
    virtual bool getApplyRefractionCoefficient() const;
    virtual void setApplyRefractionCoefficient(bool value);
    virtual bool hasValue_ApplyRefractionCoefficient() const;
    virtual void resetValue_ApplyRefractionCoefficient();
    
    virtual double getSphericity() const;
    virtual void setSphericity(double value);
    virtual bool hasValue_Sphericity() const;
    virtual void resetValue_Sphericity();
    
    virtual double getPrismEccentricity() const;
    virtual void setPrismEccentricity(double value);
    virtual bool hasValue_PrismEccentricity() const;
    virtual void resetValue_PrismEccentricity();
    

    virtual Object::ValidityEnum validate(IValidationEventSink *pEventSink) const;

protected:
    double m_RefractionCoefficient;
    bool m_bRefractionCoefficient_valueSet;
    bool m_ApplyRefractionCoefficient;
    bool m_bApplyRefractionCoefficient_valueSet;
    double m_Sphericity;
    bool m_bSphericity_valueSet;
    double m_PrismEccentricity;
    bool m_bPrismEccentricity_valueSet;
};
}; // namespace : LX
#endif
