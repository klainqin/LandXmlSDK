#if !defined(__GRADESURFACE_H)
#define __GRADESURFACE_H

#include "GradeSurface.h"
#include "LXTypes.h"

namespace LX
{

class Start;
class ZonesCollection;
class FeatureCollection;

// Class : GradeSurface
class GradeSurface : public Object
{

public:
	virtual void toXml (IStream& stream) = 0;
public:
	// Collections
    virtual ZonesCollection& Zones() = 0;
    virtual const ZonesCollection& Zones() const = 0;
    virtual FeatureCollection& Feature() = 0;
    virtual const FeatureCollection& Feature() const = 0;

public:
	// Properties
    virtual Start* getStart() const = 0;
    virtual void setStart(Start* value) = 0;
    
    virtual StringCollection* getSurfaceRefs() const = 0;
    virtual void setSurfaceRefs(StringCollection* value) = 0;
    
    virtual StringCollection* getCgPointRefs() const = 0;
    virtual void setCgPointRefs(StringCollection* value) = 0;
    
    
    virtual String getAlignmentRef() const = 0;
    virtual void setAlignmentRef(String value) = 0;
    virtual bool hasValue_AlignmentRef() const = 0;
    virtual void resetValue_AlignmentRef() = 0;
    
    virtual String getStationAlignmentRef() const = 0;
    virtual void setStationAlignmentRef(String value) = 0;
    virtual bool hasValue_StationAlignmentRef() const = 0;
    virtual void resetValue_StationAlignmentRef() = 0;
    
    virtual EnumZoneSurfaceType::Values getSurfaceType() const = 0;
    virtual void setSurfaceType(EnumZoneSurfaceType::Values value) = 0;
    virtual bool hasValue_SurfaceType() const = 0;
    virtual void resetValue_SurfaceType() = 0;
    
    virtual String getSurfaceRef() const = 0;
    virtual void setSurfaceRef(String value) = 0;
    virtual bool hasValue_SurfaceRef() const = 0;
    virtual void resetValue_SurfaceRef() = 0;
    
    virtual String getName() const = 0;
    virtual void setName(String value) = 0;
    virtual bool hasValue_Name() const = 0;
    virtual void resetValue_Name() = 0;
    
    virtual String getDesc() const = 0;
    virtual void setDesc(String value) = 0;
    virtual bool hasValue_Desc() const = 0;
    virtual void resetValue_Desc() = 0;
    
    virtual EnumStateType::Values getState() const = 0;
    virtual void setState(EnumStateType::Values value) = 0;
    virtual bool hasValue_State() const = 0;
    virtual void resetValue_State() = 0;
    
    
protected:
};
}; // namespace : LX
#endif
