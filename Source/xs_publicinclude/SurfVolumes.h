#if !defined(__SURFVOLUMES_H)
#define __SURFVOLUMES_H

#include "SurfVolumes.h"
#include "LXTypes.h"

namespace LX
{

class SurfVolumeCollection;
class FeatureCollection;

// Class : SurfVolumes
class SurfVolumes : public Object
{

public:
	virtual void toXml (IStream& stream) = 0;
public:
	// Collections
    virtual SurfVolumeCollection& SurfVolume() = 0;
    virtual const SurfVolumeCollection& SurfVolume() const = 0;
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
    
    virtual EnumSurfVolCMethodType::Values getSurfVolCalcMethod() const = 0;
    virtual void setSurfVolCalcMethod(EnumSurfVolCMethodType::Values value) = 0;
    virtual bool hasValue_SurfVolCalcMethod() const = 0;
    virtual void resetValue_SurfVolCalcMethod() = 0;
    
    
protected:
};
}; // namespace : LX
#endif
