#if !defined(__ROADSIGN_H)
#define __ROADSIGN_H

#include "RoadSign.h"
#include "LXTypes.h"

namespace LX
{


// Class : RoadSign
class RoadSign : public Object
{

public:
	virtual void toXml (IStream& stream) = 0;
public:
	// Collections

public:
	// Properties
    
    virtual String getMUTCDCode() const = 0;
    virtual void setMUTCDCode(String value) = 0;
    virtual bool hasValue_MUTCDCode() const = 0;
    virtual void resetValue_MUTCDCode() = 0;
    
    virtual double getStation() const = 0;
    virtual void setStation(double value) = 0;
    virtual bool hasValue_Station() const = 0;
    virtual void resetValue_Station() = 0;
    
    virtual double getOffset() const = 0;
    virtual void setOffset(double value) = 0;
    virtual bool hasValue_Offset() const = 0;
    virtual void resetValue_Offset() = 0;
    
    virtual EnumSideofRoadType::Values getSideofRoad() const = 0;
    virtual void setSideofRoad(EnumSideofRoadType::Values value) = 0;
    virtual bool hasValue_SideofRoad() const = 0;
    virtual void resetValue_SideofRoad() = 0;
    
    virtual EnumRoadSignType::Values getType() const = 0;
    virtual void setType(EnumRoadSignType::Values value) = 0;
    virtual bool hasValue_Type() const = 0;
    virtual void resetValue_Type() = 0;
    
    virtual double getMountHeight() const = 0;
    virtual void setMountHeight(double value) = 0;
    virtual bool hasValue_MountHeight() const = 0;
    virtual void resetValue_MountHeight() = 0;
    
    virtual double getWidth() const = 0;
    virtual void setWidth(double value) = 0;
    virtual bool hasValue_Width() const = 0;
    virtual void resetValue_Width() = 0;
    
    virtual double getHeight() const = 0;
    virtual void setHeight(double value) = 0;
    virtual bool hasValue_Height() const = 0;
    virtual void resetValue_Height() = 0;
    
    
protected:
};
}; // namespace : LX
#endif
