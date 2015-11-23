#if !defined(__TESTOBSERVATIONTMPL_H)
#define __TESTOBSERVATIONTMPL_H

#include "TestObservation.h"
#include "LXTypesTmpl.h"
#include "RawObservationTypeImpl.h"

namespace LX
{


// Class : TestObservation
template<class T>
class TestObservationTmpl : public RawObservationTypeTmpl<T>
{

public:
	virtual void toXml (IStream& stream);
public:
	// Constructors
    TestObservationTmpl (DocumentImpl* pDoc);

public:
	// Destructors
    virtual ~TestObservationTmpl ();
public:
	// Collections

public:
	// Properties

    virtual double getSetup1RodA() const;
    virtual void setSetup1RodA(double value);
    virtual bool hasValue_Setup1RodA() const;
    virtual void resetValue_Setup1RodA();
    
    virtual double getSetup1RodB() const;
    virtual void setSetup1RodB(double value);
    virtual bool hasValue_Setup1RodB() const;
    virtual void resetValue_Setup1RodB();
    
    virtual double getSetup2RodA() const;
    virtual void setSetup2RodA(double value);
    virtual bool hasValue_Setup2RodA() const;
    virtual void resetValue_Setup2RodA();
    
    virtual double getSetup2RodB() const;
    virtual void setSetup2RodB(double value);
    virtual bool hasValue_Setup2RodB() const;
    virtual void resetValue_Setup2RodB();
    

    virtual Object::ValidityEnum validate(IValidationEventSink *pEventSink) const;

protected:
    double m_Setup1RodA;
    bool m_bSetup1RodA_valueSet;
    double m_Setup1RodB;
    bool m_bSetup1RodB_valueSet;
    double m_Setup2RodA;
    bool m_bSetup2RodA_valueSet;
    double m_Setup2RodB;
    bool m_bSetup2RodB_valueSet;
};
}; // namespace : LX
#endif
