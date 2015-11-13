#if !defined(__STAEQUATIONTMPL_H)
#define __STAEQUATIONTMPL_H

#include "StaEquation.h"
#include "LXTypesTmpl.h"

namespace LX
{

class FeatureCollection;

// Class : StaEquation
template<class T>
class StaEquationTmpl : public ObjectTmpl<T>
{

public:
	virtual void toXml (IStream& stream);
public:
	// Constructors
    StaEquationTmpl<T> (DocumentImpl* pDoc);

public:
	// Destructors
    virtual ~StaEquationTmpl ();
public:
	// Collections
    virtual FeatureCollection& Feature();
    virtual const FeatureCollection& Feature() const;

public:
	// Properties

    virtual double getStaAhead() const;
    virtual void setStaAhead(double value);
    virtual bool hasValue_StaAhead() const;
    virtual void resetValue_StaAhead();
    
    virtual double getStaBack() const;
    virtual void setStaBack(double value);
    virtual bool hasValue_StaBack() const;
    virtual void resetValue_StaBack();
    
    virtual double getStaInternal() const;
    virtual void setStaInternal(double value);
    virtual bool hasValue_StaInternal() const;
    virtual void resetValue_StaInternal();
    
    virtual EnumStationIncrementDirectionType::Values getStaIncrement() const;
    virtual void setStaIncrement(EnumStationIncrementDirectionType::Values value);
    virtual bool hasValue_StaIncrement() const;
    virtual void resetValue_StaIncrement();
    
    virtual String getDesc() const;
    virtual void setDesc(String value);
    virtual bool hasValue_Desc() const;
    virtual void resetValue_Desc();
    

    virtual Object::ValidityEnum validate(IValidationEventSink *pEventSink) const;

protected:
    FeatureCollection *m_Feature;
    double m_StaAhead;
    bool m_bStaAhead_valueSet;
    double m_StaBack;
    bool m_bStaBack_valueSet;
    double m_StaInternal;
    bool m_bStaInternal_valueSet;
    EnumStationIncrementDirectionType::Values m_StaIncrement;
    bool m_bStaIncrement_valueSet;
    String m_Desc;
    bool m_bDesc_valueSet;
};
}; // namespace : LX
#endif
