#if !defined(__TURNSPEEDTMPL_H)
#define __TURNSPEEDTMPL_H

#include "TurnSpeed.h"
#include "LXTypesTmpl.h"

namespace LX
{


// Class : TurnSpeed
template<class T>
class TurnSpeedTmpl : public ObjectTmpl<T>
{

public:
	virtual void toXml (IStream& stream);
public:
	// Constructors
    TurnSpeedTmpl (DocumentImpl* pDoc);

public:
	// Destructors
    virtual ~TurnSpeedTmpl ();
public:
	// Collections

public:
	// Properties

    virtual double getStation() const;
    virtual void setStation(double value);
    virtual bool hasValue_Station() const;
    virtual void resetValue_Station();
    
    virtual int getLegNumber() const;
    virtual void setLegNumber(int value);
    virtual bool hasValue_LegNumber() const;
    virtual void resetValue_LegNumber();
    
    virtual double getSpeed() const;
    virtual void setSpeed(double value);
    virtual bool hasValue_Speed() const;
    virtual void resetValue_Speed();
    

    virtual Object::ValidityEnum validate(IValidationEventSink *pEventSink) const;

protected:
    double m_Station;
    bool m_bStation_valueSet;
    int m_LegNumber;
    bool m_bLegNumber_valueSet;
    double m_Speed;
    bool m_bSpeed_valueSet;
};
}; // namespace : LX
#endif
