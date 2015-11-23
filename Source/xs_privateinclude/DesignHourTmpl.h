#if !defined(__DESIGNHOURTMPL_H)
#define __DESIGNHOURTMPL_H

#include "DesignHour.h"
#include "LXTypesTmpl.h"

namespace LX
{

class FeatureCollection;

// Class : DesignHour
template<class T>
class DesignHourTmpl : public ObjectTmpl<T>
{

public:
	virtual void toXml (IStream& stream);
public:
	// Constructors
    DesignHourTmpl (DocumentImpl* pDoc);

public:
	// Destructors
    virtual ~DesignHourTmpl ();
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
    
    virtual double getVolume() const;
    virtual void setVolume(double value);
    virtual bool hasValue_Volume() const;
    virtual void resetValue_Volume();
    

    virtual Object::ValidityEnum validate(IValidationEventSink *pEventSink) const;

protected:
    FeatureCollection *m_Feature;
    double m_StaStart;
    bool m_bStaStart_valueSet;
    double m_StaEnd;
    bool m_bStaEnd_valueSet;
    double m_Volume;
    bool m_bVolume_valueSet;
};
}; // namespace : LX
#endif
