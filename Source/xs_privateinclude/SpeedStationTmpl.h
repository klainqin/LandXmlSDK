#if !defined(__SPEEDSTATIONTMPL_H)
#define __SPEEDSTATIONTMPL_H

#include "SpeedStation.h"
#include "LXTypesTmpl.h"

namespace LX
{


// Class : SpeedStation
template<class T>
class SpeedStationTmpl : public ObjectTmpl<T>
{

public:
	virtual void toXml (IStream& stream);
public:
	// Constructors
    SpeedStationTmpl<T> (DocumentImpl* pDoc);

public:
	// Destructors
    virtual ~SpeedStationTmpl ();
public:
	// Collections

public:
	// Properties

    virtual double getStation() const;
    virtual void setStation(double value);
    virtual bool hasValue_Station() const;
    virtual void resetValue_Station();
    
    virtual double getSpeed() const;
    virtual void setSpeed(double value);
    virtual bool hasValue_Speed() const;
    virtual void resetValue_Speed();
    

    virtual Object::ValidityEnum validate(IValidationEventSink *pEventSink) const;

protected:
    double m_Station;
    bool m_bStation_valueSet;
    double m_Speed;
    bool m_bSpeed_valueSet;
};
}; // namespace : LX
#endif
