#if !defined(__PARCEL_H)
#define __PARCEL_H

#include "Parcel.h"
#include "LXTypes.h"

namespace LX
{

class Center;
class CoordGeom;
class VolumeGeom;
class Parcels;
class TitleCollection;
class ExclusionsCollection;
class LocationAddressCollection;
class FeatureCollection;

// Class : Parcel
class Parcel : public Object
{

public:
	virtual void toXml (IStream& stream) = 0;
public:
	// Collections
    virtual TitleCollection& Title() = 0;
    virtual const TitleCollection& Title() const = 0;
    virtual ExclusionsCollection& Exclusions() = 0;
    virtual const ExclusionsCollection& Exclusions() const = 0;
    virtual LocationAddressCollection& LocationAddress() = 0;
    virtual const LocationAddressCollection& LocationAddress() const = 0;
    virtual FeatureCollection& Feature() = 0;
    virtual const FeatureCollection& Feature() const = 0;

public:
	// Properties
    virtual Center* getCenter() const = 0;
    virtual void setCenter(Center* value) = 0;
    
    virtual CoordGeom* getCoordGeom() const = 0;
    virtual void setCoordGeom(CoordGeom* value) = 0;
    
    virtual VolumeGeom* getVolumeGeom() const = 0;
    virtual void setVolumeGeom(VolumeGeom* value) = 0;
    
    virtual Parcels* getParcels() const = 0;
    virtual void setParcels(Parcels* value) = 0;
    
    
    virtual String getName() const = 0;
    virtual void setName(String value) = 0;
    virtual bool hasValue_Name() const = 0;
    virtual void resetValue_Name() = 0;
    
    virtual String getOID() const = 0;
    virtual void setOID(String value) = 0;
    virtual bool hasValue_OID() const = 0;
    virtual void resetValue_OID() = 0;
    
    virtual double getArea() const = 0;
    virtual void setArea(double value) = 0;
    virtual bool hasValue_Area() const = 0;
    virtual void resetValue_Area() = 0;
    
    virtual String getDesc() const = 0;
    virtual void setDesc(String value) = 0;
    virtual bool hasValue_Desc() const = 0;
    virtual void resetValue_Desc() = 0;
    
    virtual double getDirClosure() const = 0;
    virtual void setDirClosure(double value) = 0;
    virtual bool hasValue_DirClosure() const = 0;
    virtual void resetValue_DirClosure() = 0;
    
    virtual double getDistClosure() const = 0;
    virtual void setDistClosure(double value) = 0;
    virtual bool hasValue_DistClosure() const = 0;
    virtual void resetValue_DistClosure() = 0;
    
    virtual String getOwner() const = 0;
    virtual void setOwner(String value) = 0;
    virtual bool hasValue_Owner() const = 0;
    virtual void resetValue_Owner() = 0;
    
    virtual String getParcelType() const = 0;
    virtual void setParcelType(String value) = 0;
    virtual bool hasValue_ParcelType() const = 0;
    virtual void resetValue_ParcelType() = 0;
    
    virtual double getSetbackFront() const = 0;
    virtual void setSetbackFront(double value) = 0;
    virtual bool hasValue_SetbackFront() const = 0;
    virtual void resetValue_SetbackFront() = 0;
    
    virtual double getSetbackRear() const = 0;
    virtual void setSetbackRear(double value) = 0;
    virtual bool hasValue_SetbackRear() const = 0;
    virtual void resetValue_SetbackRear() = 0;
    
    virtual double getSetbackSide() const = 0;
    virtual void setSetbackSide(double value) = 0;
    virtual bool hasValue_SetbackSide() const = 0;
    virtual void resetValue_SetbackSide() = 0;
    
    virtual EnumParcelStateType::Values getState() const = 0;
    virtual void setState(EnumParcelStateType::Values value) = 0;
    virtual bool hasValue_State() const = 0;
    virtual void resetValue_State() = 0;
    
    virtual String getTaxId() const = 0;
    virtual void setTaxId(String value) = 0;
    virtual bool hasValue_TaxId() const = 0;
    virtual void resetValue_TaxId() = 0;
    
    virtual String getClass() const = 0;
    virtual void setClass(String value) = 0;
    virtual bool hasValue_Class() const = 0;
    virtual void resetValue_Class() = 0;
    
    virtual String getUseOfParcel() const = 0;
    virtual void setUseOfParcel(String value) = 0;
    virtual bool hasValue_UseOfParcel() const = 0;
    virtual void resetValue_UseOfParcel() = 0;
    
    virtual String getParcelFormat() const = 0;
    virtual void setParcelFormat(String value) = 0;
    virtual bool hasValue_ParcelFormat() const = 0;
    virtual void resetValue_ParcelFormat() = 0;
    
    virtual String getBuildingNo() const = 0;
    virtual void setBuildingNo(String value) = 0;
    virtual bool hasValue_BuildingNo() const = 0;
    virtual void resetValue_BuildingNo() = 0;
    
    virtual String getBuildingLevelNo() const = 0;
    virtual void setBuildingLevelNo(String value) = 0;
    virtual bool hasValue_BuildingLevelNo() const = 0;
    virtual void resetValue_BuildingLevelNo() = 0;
    
    virtual String getVolume() const = 0;
    virtual void setVolume(String value) = 0;
    virtual bool hasValue_Volume() const = 0;
    virtual void resetValue_Volume() = 0;
    
    virtual String getPclRef() const = 0;
    virtual void setPclRef(String value) = 0;
    virtual bool hasValue_PclRef() const = 0;
    virtual void resetValue_PclRef() = 0;
    
    virtual String getLotEntitlements() const = 0;
    virtual void setLotEntitlements(String value) = 0;
    virtual bool hasValue_LotEntitlements() const = 0;
    virtual void resetValue_LotEntitlements() = 0;
    
    virtual String getLiabilityApportionment() const = 0;
    virtual void setLiabilityApportionment(String value) = 0;
    virtual bool hasValue_LiabilityApportionment() const = 0;
    virtual void resetValue_LiabilityApportionment() = 0;
    
    
protected:
};
}; // namespace : LX
#endif
