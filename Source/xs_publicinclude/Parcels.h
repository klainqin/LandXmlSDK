#if !defined(__PARCELS_H)
#define __PARCELS_H

#include "Parcels.h"
#include "LXTypes.h"

namespace LX
{

class ParcelCollection;
class FeatureCollection;

// Class : Parcels
class Parcels : public Object
{

public:
	virtual void toXml (IStream& stream) = 0;
public:
	// Collections
    virtual ParcelCollection& Parcel() = 0;
    virtual const ParcelCollection& Parcel() const = 0;
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
