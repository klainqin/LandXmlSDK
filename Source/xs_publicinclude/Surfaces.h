#if !defined(__SURFACES_H)
#define __SURFACES_H

#include "Surfaces.h"
#include "LXTypes.h"

namespace LX
{

class SurfaceCollection;
class SurfVolumesCollection;
class FeatureCollection;

// Class : Surfaces
class Surfaces : public Object
{

public:
	virtual void toXml (IStream& stream) = 0;
public:
	// Collections
    virtual SurfaceCollection& Surface() = 0;
    virtual const SurfaceCollection& Surface() const = 0;
    virtual SurfVolumesCollection& SurfVolumes() = 0;
    virtual const SurfVolumesCollection& SurfVolumes() const = 0;
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
    
    
protected:
};
}; // namespace : LX
#endif
