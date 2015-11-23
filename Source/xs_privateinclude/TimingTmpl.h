#if !defined(__TIMINGTMPL_H)
#define __TIMINGTMPL_H

#include "Timing.h"
#include "LXTypesTmpl.h"

namespace LX
{


// Class : Timing
template<class T>
class TimingTmpl : public ObjectTmpl<T>
{

public:
	virtual void toXml (IStream& stream);
public:
	// Constructors
    TimingTmpl (DocumentImpl* pDoc);

public:
	// Destructors
    virtual ~TimingTmpl ();
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
    
    virtual double getProtectedTurnPercent() const;
    virtual void setProtectedTurnPercent(double value);
    virtual bool hasValue_ProtectedTurnPercent() const;
    virtual void resetValue_ProtectedTurnPercent();
    
    virtual double getUnprotectedTurnPercent() const;
    virtual void setUnprotectedTurnPercent(double value);
    virtual bool hasValue_UnprotectedTurnPercent() const;
    virtual void resetValue_UnprotectedTurnPercent();
    

    virtual Object::ValidityEnum validate(IValidationEventSink *pEventSink) const;

protected:
    double m_Station;
    bool m_bStation_valueSet;
    int m_LegNumber;
    bool m_bLegNumber_valueSet;
    double m_ProtectedTurnPercent;
    bool m_bProtectedTurnPercent_valueSet;
    double m_UnprotectedTurnPercent;
    bool m_bUnprotectedTurnPercent_valueSet;
};
}; // namespace : LX
#endif
