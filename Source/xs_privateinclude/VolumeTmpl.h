#if !defined(__VOLUMETMPL_H)
#define __VOLUMETMPL_H

#include "Volume.h"
#include "LXTypesTmpl.h"

namespace LX
{


// Class : Volume
template<class T>
class VolumeTmpl : public ObjectTmpl<T>
{

public:
	virtual void toXml (IStream& stream);
public:
	// Constructors
    VolumeTmpl<T> (DocumentImpl* pDoc);

public:
	// Destructors
    virtual ~VolumeTmpl ();
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
    
    virtual double getTurnPercent() const;
    virtual void setTurnPercent(double value);
    virtual bool hasValue_TurnPercent() const;
    virtual void resetValue_TurnPercent();
    
    virtual double getPercentTrucks() const;
    virtual void setPercentTrucks(double value);
    virtual bool hasValue_PercentTrucks() const;
    virtual void resetValue_PercentTrucks();
    

    virtual Object::ValidityEnum validate(IValidationEventSink *pEventSink) const;

protected:
    double m_Station;
    bool m_bStation_valueSet;
    int m_LegNumber;
    bool m_bLegNumber_valueSet;
    double m_TurnPercent;
    bool m_bTurnPercent_valueSet;
    double m_PercentTrucks;
    bool m_bPercentTrucks_valueSet;
};
}; // namespace : LX
#endif
