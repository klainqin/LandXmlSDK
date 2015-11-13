#if !defined(__PIPEFLOW_H)
#define __PIPEFLOW_H

#include "PipeFlow.h"
#include "LXTypes.h"

namespace LX
{

class FeatureCollection;

// Class : PipeFlow
class PipeFlow : public Object
{

public:
	virtual void toXml (IStream& stream) = 0;
public:
	// Collections
    virtual FeatureCollection& Feature() = 0;
    virtual const FeatureCollection& Feature() const = 0;

public:
	// Properties
    
    virtual double getFlowIn() const = 0;
    virtual void setFlowIn(double value) = 0;
    virtual bool hasValue_FlowIn() const = 0;
    virtual void resetValue_FlowIn() = 0;
    
    virtual double getAreaCatchment() const = 0;
    virtual void setAreaCatchment(double value) = 0;
    virtual bool hasValue_AreaCatchment() const = 0;
    virtual void resetValue_AreaCatchment() = 0;
    
    virtual String getDesc() const = 0;
    virtual void setDesc(String value) = 0;
    virtual bool hasValue_Desc() const = 0;
    virtual void resetValue_Desc() = 0;
    
    virtual double getDepthCritical() const = 0;
    virtual void setDepthCritical(double value) = 0;
    virtual bool hasValue_DepthCritical() const = 0;
    virtual void resetValue_DepthCritical() = 0;
    
    virtual double getHglDown() const = 0;
    virtual void setHglDown(double value) = 0;
    virtual bool hasValue_HglDown() const = 0;
    virtual void resetValue_HglDown() = 0;
    
    virtual double getHglUp() const = 0;
    virtual void setHglUp(double value) = 0;
    virtual bool hasValue_HglUp() const = 0;
    virtual void resetValue_HglUp() = 0;
    
    virtual double getIntensity() const = 0;
    virtual void setIntensity(double value) = 0;
    virtual bool hasValue_Intensity() const = 0;
    virtual void resetValue_Intensity() = 0;
    
    virtual double getRunoffCoeff() const = 0;
    virtual void setRunoffCoeff(double value) = 0;
    virtual bool hasValue_RunoffCoeff() const = 0;
    virtual void resetValue_RunoffCoeff() = 0;
    
    virtual double getSlopeCritical() const = 0;
    virtual void setSlopeCritical(double value) = 0;
    virtual bool hasValue_SlopeCritical() const = 0;
    virtual void resetValue_SlopeCritical() = 0;
    
    virtual double getTimeInlet() const = 0;
    virtual void setTimeInlet(double value) = 0;
    virtual bool hasValue_TimeInlet() const = 0;
    virtual void resetValue_TimeInlet() = 0;
    
    virtual double getVelocityCritical() const = 0;
    virtual void setVelocityCritical(double value) = 0;
    virtual bool hasValue_VelocityCritical() const = 0;
    virtual void resetValue_VelocityCritical() = 0;
    
    
protected:
};
}; // namespace : LX
#endif
