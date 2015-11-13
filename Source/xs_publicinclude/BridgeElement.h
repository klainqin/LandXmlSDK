#if !defined(__BRIDGEELEMENT_H)
#define __BRIDGEELEMENT_H

#include "BridgeElement.h"
#include "LXTypes.h"

namespace LX
{


// Class : BridgeElement
class BridgeElement : public Object
{

public:
	virtual void toXml (IStream& stream) = 0;
public:
	// Collections

public:
	// Properties
    
    virtual double getStaStart() const = 0;
    virtual void setStaStart(double value) = 0;
    virtual bool hasValue_StaStart() const = 0;
    virtual void resetValue_StaStart() = 0;
    
    virtual double getStaEnd() const = 0;
    virtual void setStaEnd(double value) = 0;
    virtual bool hasValue_StaEnd() const = 0;
    virtual void resetValue_StaEnd() = 0;
    
    virtual double getWidth() const = 0;
    virtual void setWidth(double value) = 0;
    virtual bool hasValue_Width() const = 0;
    virtual void resetValue_Width() = 0;
    
    virtual EnumBridgeProjectType::Values getProjectType() const = 0;
    virtual void setProjectType(EnumBridgeProjectType::Values value) = 0;
    virtual bool hasValue_ProjectType() const = 0;
    virtual void resetValue_ProjectType() = 0;
    
    
protected:
};
}; // namespace : LX
#endif
