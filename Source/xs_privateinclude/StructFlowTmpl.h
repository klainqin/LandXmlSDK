#if !defined(__STRUCTFLOWTMPL_H)
#define __STRUCTFLOWTMPL_H

#include "StructFlow.h"
#include "LXTypesTmpl.h"

namespace LX
{

class FeatureCollection;

// Class : StructFlow
template<class T>
class StructFlowTmpl : public ObjectTmpl<T>
{

public:
	virtual void toXml (IStream& stream);
public:
	// Constructors
    StructFlowTmpl (DocumentImpl* pDoc);

public:
	// Destructors
    virtual ~StructFlowTmpl ();
public:
	// Collections
    virtual FeatureCollection& Feature();
    virtual const FeatureCollection& Feature() const;

public:
	// Properties

    virtual double getLossIn() const;
    virtual void setLossIn(double value);
    virtual bool hasValue_LossIn() const;
    virtual void resetValue_LossIn();
    
    virtual double getLossOut() const;
    virtual void setLossOut(double value);
    virtual bool hasValue_LossOut() const;
    virtual void resetValue_LossOut();
    
    virtual String getDesc() const;
    virtual void setDesc(String value);
    virtual bool hasValue_Desc() const;
    virtual void resetValue_Desc();
    
    virtual double getHglIn() const;
    virtual void setHglIn(double value);
    virtual bool hasValue_HglIn() const;
    virtual void resetValue_HglIn();
    
    virtual double getHglOut() const;
    virtual void setHglOut(double value);
    virtual bool hasValue_HglOut() const;
    virtual void resetValue_HglOut();
    
    virtual double getLocalDepression() const;
    virtual void setLocalDepression(double value);
    virtual bool hasValue_LocalDepression() const;
    virtual void resetValue_LocalDepression();
    
    virtual double getSlopeSurf() const;
    virtual void setSlopeSurf(double value);
    virtual bool hasValue_SlopeSurf() const;
    virtual void resetValue_SlopeSurf();
    
    virtual double getSlopeGutter() const;
    virtual void setSlopeGutter(double value);
    virtual bool hasValue_SlopeGutter() const;
    virtual void resetValue_SlopeGutter();
    
    virtual double getWidthGutter() const;
    virtual void setWidthGutter(double value);
    virtual bool hasValue_WidthGutter() const;
    virtual void resetValue_WidthGutter();
    

    virtual Object::ValidityEnum validate(IValidationEventSink *pEventSink) const;

protected:
    FeatureCollection *m_Feature;
    double m_LossIn;
    bool m_bLossIn_valueSet;
    double m_LossOut;
    bool m_bLossOut_valueSet;
    String m_Desc;
    bool m_bDesc_valueSet;
    double m_HglIn;
    bool m_bHglIn_valueSet;
    double m_HglOut;
    bool m_bHglOut_valueSet;
    double m_LocalDepression;
    bool m_bLocalDepression_valueSet;
    double m_SlopeSurf;
    bool m_bSlopeSurf_valueSet;
    double m_SlopeGutter;
    bool m_bSlopeGutter_valueSet;
    double m_WidthGutter;
    bool m_bWidthGutter_valueSet;
};
}; // namespace : LX
#endif
