#if !defined(__PARCELTMPL_H)
#define __PARCELTMPL_H

#include "Parcel.h"
#include "LXTypesTmpl.h"

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
template<class T>
class ParcelTmpl : public ObjectTmpl<T>, public IIdentifiable<String>
{

public:
	virtual void toXml (IStream& stream);
public:
	// Constructors
    ParcelTmpl (DocumentImpl* pDoc);

public:
	// Destructors
    virtual ~ParcelTmpl ();
public:
	// Collections
    virtual TitleCollection& Title();
    virtual const TitleCollection& Title() const;
    virtual ExclusionsCollection& Exclusions();
    virtual const ExclusionsCollection& Exclusions() const;
    virtual LocationAddressCollection& LocationAddress();
    virtual const LocationAddressCollection& LocationAddress() const;
    virtual FeatureCollection& Feature();
    virtual const FeatureCollection& Feature() const;

    virtual bool getObjectId(const String*& pId) const;
    virtual ValueObject* id () const;
    
public:
	// Properties
    virtual Center* getCenter() const;
    virtual void setCenter(Center* value);

    virtual CoordGeom* getCoordGeom() const;
    virtual void setCoordGeom(CoordGeom* value);

    virtual VolumeGeom* getVolumeGeom() const;
    virtual void setVolumeGeom(VolumeGeom* value);

    virtual Parcels* getParcels() const;
    virtual void setParcels(Parcels* value);


    virtual String getName() const;
    virtual void setName(String value);
    virtual bool hasValue_Name() const;
    virtual void resetValue_Name();
    
    virtual String getOID() const;
    virtual void setOID(String value);
    virtual bool hasValue_OID() const;
    virtual void resetValue_OID();
    
    virtual double getArea() const;
    virtual void setArea(double value);
    virtual bool hasValue_Area() const;
    virtual void resetValue_Area();
    
    virtual String getDesc() const;
    virtual void setDesc(String value);
    virtual bool hasValue_Desc() const;
    virtual void resetValue_Desc();
    
    virtual double getDirClosure() const;
    virtual void setDirClosure(double value);
    virtual bool hasValue_DirClosure() const;
    virtual void resetValue_DirClosure();
    
    virtual double getDistClosure() const;
    virtual void setDistClosure(double value);
    virtual bool hasValue_DistClosure() const;
    virtual void resetValue_DistClosure();
    
    virtual String getOwner() const;
    virtual void setOwner(String value);
    virtual bool hasValue_Owner() const;
    virtual void resetValue_Owner();
    
    virtual String getParcelType() const;
    virtual void setParcelType(String value);
    virtual bool hasValue_ParcelType() const;
    virtual void resetValue_ParcelType();
    
    virtual double getSetbackFront() const;
    virtual void setSetbackFront(double value);
    virtual bool hasValue_SetbackFront() const;
    virtual void resetValue_SetbackFront();
    
    virtual double getSetbackRear() const;
    virtual void setSetbackRear(double value);
    virtual bool hasValue_SetbackRear() const;
    virtual void resetValue_SetbackRear();
    
    virtual double getSetbackSide() const;
    virtual void setSetbackSide(double value);
    virtual bool hasValue_SetbackSide() const;
    virtual void resetValue_SetbackSide();
    
    virtual EnumParcelStateType::Values getState() const;
    virtual void setState(EnumParcelStateType::Values value);
    virtual bool hasValue_State() const;
    virtual void resetValue_State();
    
    virtual String getTaxId() const;
    virtual void setTaxId(String value);
    virtual bool hasValue_TaxId() const;
    virtual void resetValue_TaxId();
    
    virtual String getClass() const;
    virtual void setClass(String value);
    virtual bool hasValue_Class() const;
    virtual void resetValue_Class();
    
    virtual String getUseOfParcel() const;
    virtual void setUseOfParcel(String value);
    virtual bool hasValue_UseOfParcel() const;
    virtual void resetValue_UseOfParcel();
    
    virtual String getParcelFormat() const;
    virtual void setParcelFormat(String value);
    virtual bool hasValue_ParcelFormat() const;
    virtual void resetValue_ParcelFormat();
    
    virtual String getBuildingNo() const;
    virtual void setBuildingNo(String value);
    virtual bool hasValue_BuildingNo() const;
    virtual void resetValue_BuildingNo();
    
    virtual String getBuildingLevelNo() const;
    virtual void setBuildingLevelNo(String value);
    virtual bool hasValue_BuildingLevelNo() const;
    virtual void resetValue_BuildingLevelNo();
    
    virtual String getVolume() const;
    virtual void setVolume(String value);
    virtual bool hasValue_Volume() const;
    virtual void resetValue_Volume();
    
    virtual String getPclRef() const;
    virtual void setPclRef(String value);
    virtual bool hasValue_PclRef() const;
    virtual void resetValue_PclRef();
    
    virtual String getLotEntitlements() const;
    virtual void setLotEntitlements(String value);
    virtual bool hasValue_LotEntitlements() const;
    virtual void resetValue_LotEntitlements();
    
    virtual String getLiabilityApportionment() const;
    virtual void setLiabilityApportionment(String value);
    virtual bool hasValue_LiabilityApportionment() const;
    virtual void resetValue_LiabilityApportionment();
    

    virtual Object::ValidityEnum validate(IValidationEventSink *pEventSink) const;

protected:
    Center *m_Center;
    CoordGeom *m_CoordGeom;
    VolumeGeom *m_VolumeGeom;
    Parcels *m_Parcels;
    TitleCollection *m_Title;
    ExclusionsCollection *m_Exclusions;
    LocationAddressCollection *m_LocationAddress;
    FeatureCollection *m_Feature;
    String m_Name;
    bool m_bName_valueSet;
    String m_OID;
    bool m_bOID_valueSet;
    double m_Area;
    bool m_bArea_valueSet;
    String m_Desc;
    bool m_bDesc_valueSet;
    double m_DirClosure;
    bool m_bDirClosure_valueSet;
    double m_DistClosure;
    bool m_bDistClosure_valueSet;
    String m_Owner;
    bool m_bOwner_valueSet;
    String m_ParcelType;
    bool m_bParcelType_valueSet;
    double m_SetbackFront;
    bool m_bSetbackFront_valueSet;
    double m_SetbackRear;
    bool m_bSetbackRear_valueSet;
    double m_SetbackSide;
    bool m_bSetbackSide_valueSet;
    EnumParcelStateType::Values m_State;
    bool m_bState_valueSet;
    String m_TaxId;
    bool m_bTaxId_valueSet;
    String m_Class;
    bool m_bClass_valueSet;
    String m_UseOfParcel;
    bool m_bUseOfParcel_valueSet;
    String m_ParcelFormat;
    bool m_bParcelFormat_valueSet;
    String m_BuildingNo;
    bool m_bBuildingNo_valueSet;
    String m_BuildingLevelNo;
    bool m_bBuildingLevelNo_valueSet;
    String m_Volume;
    bool m_bVolume_valueSet;
    String m_PclRef;
    bool m_bPclRef_valueSet;
    String m_LotEntitlements;
    bool m_bLotEntitlements_valueSet;
    String m_LiabilityApportionment;
    bool m_bLiabilityApportionment_valueSet;
};
}; // namespace : LX
#endif
