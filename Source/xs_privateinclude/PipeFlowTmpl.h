#if !defined(__PIPEFLOWTMPL_H)
#define __PIPEFLOWTMPL_H

#include "PipeFlow.h"
#include "LXTypesTmpl.h"

namespace LX
{

class FeatureCollection;

// Class : PipeFlow
template<class T>
class PipeFlowTmpl : public ObjectTmpl<T>
{

public:
	virtual void toXml (IStream& stream);
public:
	// Constructors
    PipeFlowTmpl<T> (DocumentImpl* pDoc);

public:
	// Destructors
    virtual ~PipeFlowTmpl ();
public:
	// Collections
    virtual FeatureCollection& Feature();
    virtual const FeatureCollection& Feature() const;

public:
	// Properties

    virtual double getFlowIn() const;
    virtual void setFlowIn(double value);
    virtual bool hasValue_FlowIn() const;
    virtual void resetValue_FlowIn();
    
    virtual double getAreaCatchment() const;
    virtual void setAreaCatchment(double value);
    virtual bool hasValue_AreaCatchment() const;
    virtual void resetValue_AreaCatchment();
    
    virtual String getDesc() const;
    virtual void setDesc(String value);
    virtual bool hasValue_Desc() const;
    virtual void resetValue_Desc();
    
    virtual double getDepthCritical() const;
    virtual void setDepthCritical(double value);
    virtual bool hasValue_DepthCritical() const;
    virtual void resetValue_DepthCritical();
    
    virtual double getHglDown() const;
    virtual void setHglDown(double value);
    virtual bool hasValue_HglDown() const;
    virtual void resetValue_HglDown();
    
    virtual double getHglUp() const;
    virtual void setHglUp(double value);
    virtual bool hasValue_HglUp() const;
    virtual void resetValue_HglUp();
    
    virtual double getIntensity() const;
    virtual void setIntensity(double value);
    virtual bool hasValue_Intensity() const;
    virtual void resetValue_Intensity();
    
    virtual double getRunoffCoeff() const;
    virtual void setRunoffCoeff(double value);
    virtual bool hasValue_RunoffCoeff() const;
    virtual void resetValue_RunoffCoeff();
    
    virtual double getSlopeCritical() const;
    virtual void setSlopeCritical(double value);
    virtual bool hasValue_SlopeCritical() const;
    virtual void resetValue_SlopeCritical();
    
    virtual double getTimeInlet() const;
    virtual void setTimeInlet(double value);
    virtual bool hasValue_TimeInlet() const;
    virtual void resetValue_TimeInlet();
    
    virtual double getVelocityCritical() const;
    virtual void setVelocityCritical(double value);
    virtual bool hasValue_VelocityCritical() const;
    virtual void resetValue_VelocityCritical();
    

    virtual Object::ValidityEnum validate(IValidationEventSink *pEventSink) const;

protected:
    FeatureCollection *m_Feature;
    double m_FlowIn;
    bool m_bFlowIn_valueSet;
    double m_AreaCatchment;
    bool m_bAreaCatchment_valueSet;
    String m_Desc;
    bool m_bDesc_valueSet;
    double m_DepthCritical;
    bool m_bDepthCritical_valueSet;
    double m_HglDown;
    bool m_bHglDown_valueSet;
    double m_HglUp;
    bool m_bHglUp_valueSet;
    double m_Intensity;
    bool m_bIntensity_valueSet;
    double m_RunoffCoeff;
    bool m_bRunoffCoeff_valueSet;
    double m_SlopeCritical;
    bool m_bSlopeCritical_valueSet;
    double m_TimeInlet;
    bool m_bTimeInlet_valueSet;
    double m_VelocityCritical;
    bool m_bVelocityCritical_valueSet;
};
}; // namespace : LX
#endif
