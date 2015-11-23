#if !defined(__TURNRESTRICTIONTMPL_H)
#define __TURNRESTRICTIONTMPL_H

#include "TurnRestriction.h"
#include "LXTypesTmpl.h"

namespace LX
{


// Class : TurnRestriction
template<class T>
class TurnRestrictionTmpl : public ObjectTmpl<T>
{

public:
	virtual void toXml (IStream& stream);
public:
	// Constructors
    TurnRestrictionTmpl (DocumentImpl* pDoc);

public:
	// Destructors
    virtual ~TurnRestrictionTmpl ();
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
    
    virtual EnumTrafficTurnRestriction::Values getType() const;
    virtual void setType(EnumTrafficTurnRestriction::Values value);
    virtual bool hasValue_Type() const;
    virtual void resetValue_Type();
    

    virtual Object::ValidityEnum validate(IValidationEventSink *pEventSink) const;

protected:
    double m_Station;
    bool m_bStation_valueSet;
    int m_LegNumber;
    bool m_bLegNumber_valueSet;
    EnumTrafficTurnRestriction::Values m_Type;
    bool m_bType_valueSet;
};
}; // namespace : LX
#endif
