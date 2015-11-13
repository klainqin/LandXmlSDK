#if !defined(__ZONE_H)
#define __ZONE_H

#include "Zone.h"
#include "LXTypes.h"

namespace LX
{

class ZoneWidthCollection;
class ZoneSlopeCollection;
class ZoneCutFillCollection;
class ZoneMaterialCollection;
class ZoneCrossSectStructureCollection;
class FeatureCollection;

// Class : Zone
class Zone : public Object
{

public:
	virtual void toXml (IStream& stream) = 0;
public:
	// Collections
    virtual ZoneWidthCollection& ZoneWidth() = 0;
    virtual const ZoneWidthCollection& ZoneWidth() const = 0;
    virtual ZoneSlopeCollection& ZoneSlope() = 0;
    virtual const ZoneSlopeCollection& ZoneSlope() const = 0;
    virtual ZoneCutFillCollection& ZoneCutFill() = 0;
    virtual const ZoneCutFillCollection& ZoneCutFill() const = 0;
    virtual ZoneMaterialCollection& ZoneMaterial() = 0;
    virtual const ZoneMaterialCollection& ZoneMaterial() const = 0;
    virtual ZoneCrossSectStructureCollection& ZoneCrossSectStructure() = 0;
    virtual const ZoneCrossSectStructureCollection& ZoneCrossSectStructure() const = 0;
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
    
    virtual int getPriority() const = 0;
    virtual void setPriority(int value) = 0;
    virtual bool hasValue_Priority() const = 0;
    virtual void resetValue_Priority() = 0;
    
    virtual EnumZoneCategoryType::Values getCategory() const = 0;
    virtual void setCategory(EnumZoneCategoryType::Values value) = 0;
    virtual bool hasValue_Category() const = 0;
    virtual void resetValue_Category() = 0;
    
    virtual double getStaStart() const = 0;
    virtual void setStaStart(double value) = 0;
    virtual bool hasValue_StaStart() const = 0;
    virtual void resetValue_StaStart() = 0;
    
    virtual double getStaEnd() const = 0;
    virtual void setStaEnd(double value) = 0;
    virtual bool hasValue_StaEnd() const = 0;
    virtual void resetValue_StaEnd() = 0;
    
    virtual double getStartWidth() const = 0;
    virtual void setStartWidth(double value) = 0;
    virtual bool hasValue_StartWidth() const = 0;
    virtual void resetValue_StartWidth() = 0;
    
    virtual double getStartVertValue() const = 0;
    virtual void setStartVertValue(double value) = 0;
    virtual bool hasValue_StartVertValue() const = 0;
    virtual void resetValue_StartVertValue() = 0;
    
    virtual EnumZoneVertType::Values getStartVertType() const = 0;
    virtual void setStartVertType(EnumZoneVertType::Values value) = 0;
    virtual bool hasValue_StartVertType() const = 0;
    virtual void resetValue_StartVertType() = 0;
    
    virtual double getEndWidth() const = 0;
    virtual void setEndWidth(double value) = 0;
    virtual bool hasValue_EndWidth() const = 0;
    virtual void resetValue_EndWidth() = 0;
    
    virtual double getEndVertValue() const = 0;
    virtual void setEndVertValue(double value) = 0;
    virtual bool hasValue_EndVertValue() const = 0;
    virtual void resetValue_EndVertValue() = 0;
    
    virtual EnumZoneVertType::Values getEndVertType() const = 0;
    virtual void setEndVertType(EnumZoneVertType::Values value) = 0;
    virtual bool hasValue_EndVertType() const = 0;
    virtual void resetValue_EndVertType() = 0;
    
    
protected:
};
}; // namespace : LX
#endif
