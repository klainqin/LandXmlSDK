#if !defined(__DESIGNSPEEDTMPL_H)
#define __DESIGNSPEEDTMPL_H

#include "DesignSpeed.h"
#include "LXTypesTmpl.h"

namespace LX
{

class FeatureCollection;

// Class : DesignSpeed
template<class T>
class DesignSpeedTmpl : public ObjectTmpl<T>
{

public:
	virtual void toXml (IStream& stream);
public:
	// Constructors
    DesignSpeedTmpl<T> (DocumentImpl* pDoc);

public:
	// Destructors
    virtual ~DesignSpeedTmpl ();
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
    
    virtual double getSpeed() const;
    virtual void setSpeed(double value);
    virtual bool hasValue_Speed() const;
    virtual void resetValue_Speed();
    

    virtual Object::ValidityEnum validate(IValidationEventSink *pEventSink) const;

protected:
    FeatureCollection *m_Feature;
    double m_StaStart;
    bool m_bStaStart_valueSet;
    double m_StaEnd;
    bool m_bStaEnd_valueSet;
    double m_Speed;
    bool m_bSpeed_valueSet;
};
}; // namespace : LX
#endif
