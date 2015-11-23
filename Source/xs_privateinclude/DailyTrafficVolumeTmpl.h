#if !defined(__DAILYTRAFFICVOLUMETMPL_H)
#define __DAILYTRAFFICVOLUMETMPL_H

#include "DailyTrafficVolume.h"
#include "LXTypesTmpl.h"

namespace LX
{

class FeatureCollection;

// Class : DailyTrafficVolume
template<class T>
class DailyTrafficVolumeTmpl : public ObjectTmpl<T>
{

public:
	virtual void toXml (IStream& stream);
public:
	// Constructors
    DailyTrafficVolumeTmpl (DocumentImpl* pDoc);

public:
	// Destructors
    virtual ~DailyTrafficVolumeTmpl ();
public:
	// Collections
    virtual FeatureCollection& Feature();
    virtual const FeatureCollection& Feature() const;

public:
	// Properties

    virtual double getStaStart() const;
    virtual void setStaStart(double value);
    virtual bool hasValue_StaStart() const;
    virtual void resetValue_StaStart();
    
    virtual double getStaEnd() const;
    virtual void setStaEnd(double value);
    virtual bool hasValue_StaEnd() const;
    virtual void resetValue_StaEnd();
    
    virtual double getADT() const;
    virtual void setADT(double value);
    virtual bool hasValue_ADT() const;
    virtual void resetValue_ADT();
    
    virtual String getYear() const;
    virtual void setYear(String value);
    virtual bool hasValue_Year() const;
    virtual void resetValue_Year();
    
    virtual double getEscFactor() const;
    virtual void setEscFactor(double value);
    virtual bool hasValue_EscFactor() const;
    virtual void resetValue_EscFactor();
    

    virtual Object::ValidityEnum validate(IValidationEventSink *pEventSink) const;

protected:
    FeatureCollection *m_Feature;
    double m_StaStart;
    bool m_bStaStart_valueSet;
    double m_StaEnd;
    bool m_bStaEnd_valueSet;
    double m_ADT;
    bool m_bADT_valueSet;
    String m_Year;
    bool m_bYear_valueSet;
    double m_EscFactor;
    bool m_bEscFactor_valueSet;
};
}; // namespace : LX
#endif
