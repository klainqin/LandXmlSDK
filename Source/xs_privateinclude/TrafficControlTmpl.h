#if !defined(__TRAFFICCONTROLTMPL_H)
#define __TRAFFICCONTROLTMPL_H

#include "TrafficControl.h"
#include "LXTypesTmpl.h"

namespace LX
{


// Class : TrafficControl
template<class T>
class TrafficControlTmpl : public ObjectTmpl<T>
{

public:
	virtual void toXml (IStream& stream);
public:
	// Constructors
    TrafficControlTmpl (DocumentImpl* pDoc);

public:
	// Destructors
    virtual ~TrafficControlTmpl ();
public:
	// Collections

public:
	// Properties

    virtual double getStation() const;
    virtual void setStation(double value);
    virtual bool hasValue_Station() const;
    virtual void resetValue_Station();
    
    virtual double getSignalPeriod() const;
    virtual void setSignalPeriod(double value);
    virtual bool hasValue_SignalPeriod() const;
    virtual void resetValue_SignalPeriod();
    
    virtual EnumTrafficControlPosition::Values getControlPosition() const;
    virtual void setControlPosition(EnumTrafficControlPosition::Values value);
    virtual bool hasValue_ControlPosition() const;
    virtual void resetValue_ControlPosition();
    
    virtual EnumTrafficControlType::Values getControlType() const;
    virtual void setControlType(EnumTrafficControlType::Values value);
    virtual bool hasValue_ControlType() const;
    virtual void resetValue_ControlType();
    

    virtual Object::ValidityEnum validate(IValidationEventSink *pEventSink) const;

protected:
    double m_Station;
    bool m_bStation_valueSet;
    double m_SignalPeriod;
    bool m_bSignalPeriod_valueSet;
    EnumTrafficControlPosition::Values m_ControlPosition;
    bool m_bControlPosition_valueSet;
    EnumTrafficControlType::Values m_ControlType;
    bool m_bControlType_valueSet;
};
}; // namespace : LX
#endif
