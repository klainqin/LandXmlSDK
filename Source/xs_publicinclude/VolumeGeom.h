#if !defined(__VOLUMEGEOM_H)
#define __VOLUMEGEOM_H

#include "VolumeGeom.h"
#include "LXTypes.h"

namespace LX
{

class CoordGeomCollection;

// Class : VolumeGeom
class VolumeGeom : public Object
{

public:
	virtual void toXml (IStream& stream) = 0;
public:
	// Collections
    virtual CoordGeomCollection& CoordGeom() = 0;
    virtual const CoordGeomCollection& CoordGeom() const = 0;

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
    
    virtual String getOID() const = 0;
    virtual void setOID(String value) = 0;
    virtual bool hasValue_OID() const = 0;
    virtual void resetValue_OID() = 0;
    
    
protected:
};
}; // namespace : LX
#endif
