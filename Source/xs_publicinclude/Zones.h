#if !defined(__ZONES_H)
#define __ZONES_H

#include "Zones.h"
#include "LXTypes.h"

namespace LX
{

class ZoneCollection;
class ZoneHingeCollection;
class FeatureCollection;

// Class : Zones
class Zones : public Object
{

public:
	virtual void toXml (IStream& stream) = 0;
public:
	// Collections
    virtual ZoneCollection& Zone() = 0;
    virtual const ZoneCollection& Zone() const = 0;
    virtual ZoneHingeCollection& ZoneHinge() = 0;
    virtual const ZoneHingeCollection& ZoneHinge() const = 0;
    virtual FeatureCollection& Feature() = 0;
    virtual const FeatureCollection& Feature() const = 0;

public:
	// Properties
    
    virtual EnumSideofRoadType::Values getSide() const = 0;
    virtual void setSide(EnumSideofRoadType::Values value) = 0;
    virtual bool hasValue_Side() const = 0;
    virtual void resetValue_Side() = 0;
    
    virtual String getDesc() const = 0;
    virtual void setDesc(String value) = 0;
    virtual bool hasValue_Desc() const = 0;
    virtual void resetValue_Desc() = 0;
    
    virtual String getName() const = 0;
    virtual void setName(String value) = 0;
    virtual bool hasValue_Name() const = 0;
    virtual void resetValue_Name() = 0;
    
    virtual EnumStateType::Values getState() const = 0;
    virtual void setState(EnumStateType::Values value) = 0;
    virtual bool hasValue_State() const = 0;
    virtual void resetValue_State() = 0;
    
    
protected:
};
}; // namespace : LX
#endif
