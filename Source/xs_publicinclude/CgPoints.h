#if !defined(__CGPOINTS_H)
#define __CGPOINTS_H

#include "CgPoints.h"
#include "LXTypes.h"

namespace LX
{

class CgPointCollection;
class CgPointsCollection;
class FeatureCollection;

// Class : CgPoints
class CgPoints : public Object
{

public:
	virtual void toXml (IStream& stream) = 0;
public:
	// Collections
    virtual CgPointCollection& CgPoint() = 0;
    virtual const CgPointCollection& CgPoint() const = 0;
    virtual CgPointsCollection& SubCgPoints() = 0;
    virtual const CgPointsCollection& SubCgPoints() const = 0;
    virtual FeatureCollection& Feature() = 0;
    virtual const FeatureCollection& Feature() const = 0;

public:
	// Properties
    
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
    
    virtual String getCode() const = 0;
    virtual void setCode(String value) = 0;
    virtual bool hasValue_Code() const = 0;
    virtual void resetValue_Code() = 0;
    
    virtual unsigned int getZoneNumber() const = 0;
    virtual void setZoneNumber(unsigned int value) = 0;
    virtual bool hasValue_ZoneNumber() const = 0;
    virtual void resetValue_ZoneNumber() = 0;
    
    virtual EnumDTMAttributeType::Values getDTMAttribute() const = 0;
    virtual void setDTMAttribute(EnumDTMAttributeType::Values value) = 0;
    virtual bool hasValue_DTMAttribute() const = 0;
    virtual void resetValue_DTMAttribute() = 0;
    
    
protected:
};
}; // namespace : LX
#endif
