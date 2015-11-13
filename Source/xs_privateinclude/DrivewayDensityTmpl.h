#if !defined(__DRIVEWAYDENSITYTMPL_H)
#define __DRIVEWAYDENSITYTMPL_H

#include "DrivewayDensity.h"
#include "LXTypesTmpl.h"

namespace LX
{


// Class : DrivewayDensity
template<class T>
class DrivewayDensityTmpl : public ObjectTmpl<T>
{

public:
	virtual void toXml (IStream& stream);
public:
	// Constructors
    DrivewayDensityTmpl<T> (DocumentImpl* pDoc);

public:
	// Destructors
    virtual ~DrivewayDensityTmpl ();
public:
	// Collections

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
    
    virtual int getDensity() const;
    virtual void setDensity(int value);
    virtual bool hasValue_Density() const;
    virtual void resetValue_Density();
    

    virtual Object::ValidityEnum validate(IValidationEventSink *pEventSink) const;

protected:
    double m_StaStart;
    bool m_bStaStart_valueSet;
    double m_StaEnd;
    bool m_bStaEnd_valueSet;
    int m_Density;
    bool m_bDensity_valueSet;
};
}; // namespace : LX
#endif
