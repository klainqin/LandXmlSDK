#if !defined(__REDHORIZONTALPOSITION_H)
#define __REDHORIZONTALPOSITION_H

#include "RedHorizontalPosition.h"
#include "LXTypes.h"

namespace LX
{


// Class : RedHorizontalPosition
class RedHorizontalPosition : public Object
{

public:
	virtual void toXml (IStream& stream) = 0;
public:
	// Collections

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
    
    virtual String getState() const = 0;
    virtual void setState(String value) = 0;
    virtual bool hasValue_State() const = 0;
    virtual void resetValue_State() = 0;
    
    virtual String getOID() const = 0;
    virtual void setOID(String value) = 0;
    virtual bool hasValue_OID() const = 0;
    virtual void resetValue_OID() = 0;
    
    virtual EnumPurposeType::Values getPurpose() const = 0;
    virtual void setPurpose(EnumPurposeType::Values value) = 0;
    virtual bool hasValue_Purpose() const = 0;
    virtual void resetValue_Purpose() = 0;
    
    virtual String getSetupID() const = 0;
    virtual void setSetupID(String value) = 0;
    virtual bool hasValue_SetupID() const = 0;
    virtual void resetValue_SetupID() = 0;
    
    virtual String getDate() const = 0;
    virtual void setDate(String value) = 0;
    virtual bool hasValue_Date() const = 0;
    virtual void resetValue_Date() = 0;
    
    virtual String getEquipmentUsed() const = 0;
    virtual void setEquipmentUsed(String value) = 0;
    virtual bool hasValue_EquipmentUsed() const = 0;
    virtual void resetValue_EquipmentUsed() = 0;
    
    virtual String getHorizontalDatum() const = 0;
    virtual void setHorizontalDatum(String value) = 0;
    virtual bool hasValue_HorizontalDatum() const = 0;
    virtual void resetValue_HorizontalDatum() = 0;
    
    virtual String getHorizontalAdjustment() const = 0;
    virtual void setHorizontalAdjustment(String value) = 0;
    virtual bool hasValue_HorizontalAdjustment() const = 0;
    virtual void resetValue_HorizontalAdjustment() = 0;
    
    virtual String getLatitude() const = 0;
    virtual void setLatitude(String value) = 0;
    virtual bool hasValue_Latitude() const = 0;
    virtual void resetValue_Latitude() = 0;
    
    virtual String getLongitude() const = 0;
    virtual void setLongitude(String value) = 0;
    virtual bool hasValue_Longitude() const = 0;
    virtual void resetValue_Longitude() = 0;
    
    virtual String getHorizontalFix() const = 0;
    virtual void setHorizontalFix(String value) = 0;
    virtual bool hasValue_HorizontalFix() const = 0;
    virtual void resetValue_HorizontalFix() = 0;
    
    virtual String getCurrencyDate() const = 0;
    virtual void setCurrencyDate(String value) = 0;
    virtual bool hasValue_CurrencyDate() const = 0;
    virtual void resetValue_CurrencyDate() = 0;
    
    virtual double getLocalUncertainity() const = 0;
    virtual void setLocalUncertainity(double value) = 0;
    virtual bool hasValue_LocalUncertainity() const = 0;
    virtual void resetValue_LocalUncertainity() = 0;
    
    virtual String getClass() const = 0;
    virtual void setClass(String value) = 0;
    virtual bool hasValue_Class() const = 0;
    virtual void resetValue_Class() = 0;
    
    virtual String getOrder() const = 0;
    virtual void setOrder(String value) = 0;
    virtual bool hasValue_Order() const = 0;
    virtual void resetValue_Order() = 0;
    
    virtual double getPositionalUncertainity() const = 0;
    virtual void setPositionalUncertainity(double value) = 0;
    virtual bool hasValue_PositionalUncertainity() const = 0;
    virtual void resetValue_PositionalUncertainity() = 0;
    
    
protected:
};
}; // namespace : LX
#endif
