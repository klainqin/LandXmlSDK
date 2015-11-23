#if !defined(__SUPERELEVATIONTMPL_H)
#define __SUPERELEVATIONTMPL_H

#include "Superelevation.h"
#include "LXTypesTmpl.h"

namespace LX
{

class BeginRunoutStaCollection;
class BeginRunoffStaCollection;
class FullSuperStaCollection;
class FullSuperelevCollection;
class RunoffStaCollection;
class StartofRunoutStaCollection;
class EndofRunoutStaCollection;
class AdverseSECollection;
class FeatureCollection;

// Class : Superelevation
template<class T>
class SuperelevationTmpl : public ObjectTmpl<T>
{

public:
	virtual void toXml (IStream& stream);
public:
	// Constructors
    SuperelevationTmpl (DocumentImpl* pDoc);

public:
	// Destructors
    virtual ~SuperelevationTmpl ();
public:
	// Collections
    virtual BeginRunoutStaCollection& BeginRunoutSta();
    virtual const BeginRunoutStaCollection& BeginRunoutSta() const;
    virtual BeginRunoffStaCollection& BeginRunoffSta();
    virtual const BeginRunoffStaCollection& BeginRunoffSta() const;
    virtual FullSuperStaCollection& FullSuperSta();
    virtual const FullSuperStaCollection& FullSuperSta() const;
    virtual FullSuperelevCollection& FullSuperelev();
    virtual const FullSuperelevCollection& FullSuperelev() const;
    virtual RunoffStaCollection& RunoffSta();
    virtual const RunoffStaCollection& RunoffSta() const;
    virtual StartofRunoutStaCollection& StartofRunoutSta();
    virtual const StartofRunoutStaCollection& StartofRunoutSta() const;
    virtual EndofRunoutStaCollection& EndofRunoutSta();
    virtual const EndofRunoutStaCollection& EndofRunoutSta() const;
    virtual AdverseSECollection& AdverseSE();
    virtual const AdverseSECollection& AdverseSE() const;
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
    

    virtual Object::ValidityEnum validate(IValidationEventSink *pEventSink) const;

protected:
    BeginRunoutStaCollection *m_BeginRunoutSta;
    BeginRunoffStaCollection *m_BeginRunoffSta;
    FullSuperStaCollection *m_FullSuperSta;
    FullSuperelevCollection *m_FullSuperelev;
    RunoffStaCollection *m_RunoffSta;
    StartofRunoutStaCollection *m_StartofRunoutSta;
    EndofRunoutStaCollection *m_EndofRunoutSta;
    AdverseSECollection *m_AdverseSE;
    FeatureCollection *m_Feature;
    double m_StaStart;
    bool m_bStaStart_valueSet;
    double m_StaEnd;
    bool m_bStaEnd_valueSet;
};
}; // namespace : LX
#endif
