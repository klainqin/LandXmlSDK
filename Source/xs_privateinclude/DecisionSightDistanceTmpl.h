#if !defined(__DECISIONSIGHTDISTANCETMPL_H)
#define __DECISIONSIGHTDISTANCETMPL_H

#include "DecisionSightDistance.h"
#include "LXTypesTmpl.h"

namespace LX
{


// Class : DecisionSightDistance
template<class T>
class DecisionSightDistanceTmpl : public ObjectTmpl<T>
{

public:
	virtual void toXml (IStream& stream);
public:
	// Constructors
    DecisionSightDistanceTmpl (DocumentImpl* pDoc);

public:
	// Destructors
    virtual ~DecisionSightDistanceTmpl ();
public:
	// Collections

public:
	// Properties

    virtual double getStation() const;
    virtual void setStation(double value);
    virtual bool hasValue_Station() const;
    virtual void resetValue_Station();
    
    virtual EnumManeuverType::Values getManeuver() const;
    virtual void setManeuver(EnumManeuverType::Values value);
    virtual bool hasValue_Maneuver() const;
    virtual void resetValue_Maneuver();
    

    virtual Object::ValidityEnum validate(IValidationEventSink *pEventSink) const;

protected:
    double m_Station;
    bool m_bStation_valueSet;
    EnumManeuverType::Values m_Maneuver;
    bool m_bManeuver_valueSet;
};
}; // namespace : LX
#endif
