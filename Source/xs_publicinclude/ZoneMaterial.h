#if !defined(__ZONEMATERIAL_H)
#define __ZONEMATERIAL_H

#include "ZoneMaterial.h"
#include "LXTypes.h"

namespace LX
{


// Class : ZoneMaterial
class ZoneMaterial : public Object
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
    
    virtual EnumZoneMaterialType::Values getMaterial() const = 0;
    virtual void setMaterial(EnumZoneMaterialType::Values value) = 0;
    virtual bool hasValue_Material() const = 0;
    virtual void resetValue_Material() = 0;
    
    
protected:
};
}; // namespace : LX
#endif
