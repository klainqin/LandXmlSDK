#if !defined(__REDVERTICALOBSERVATION_H)
#define __REDVERTICALOBSERVATION_H

#include "RedVerticalObservation.h"
#include "LXTypes.h"

namespace LX
{


// Class : RedVerticalObservation
class RedVerticalObservation : public Object
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
    
    virtual double getHeight() const = 0;
    virtual void setHeight(double value) = 0;
    virtual bool hasValue_Height() const = 0;
    virtual void resetValue_Height() = 0;
    
    virtual String getVerticalAdjustment() const = 0;
    virtual void setVerticalAdjustment(String value) = 0;
    virtual bool hasValue_VerticalAdjustment() const = 0;
    virtual void resetValue_VerticalAdjustment() = 0;
    
    virtual String getVerticalFix() const = 0;
    virtual void setVerticalFix(String value) = 0;
    virtual bool hasValue_VerticalFix() const = 0;
    virtual void resetValue_VerticalFix() = 0;
    
    virtual double getGeosphoid() const = 0;
    virtual void setGeosphoid(double value) = 0;
    virtual bool hasValue_Geosphoid() const = 0;
    virtual void resetValue_Geosphoid() = 0;
    
    virtual String getGsDatum() const = 0;
    virtual void setGsDatum(String value) = 0;
    virtual bool hasValue_GsDatum() const = 0;
    virtual void resetValue_GsDatum() = 0;
    
    virtual String getGsModel() const = 0;
    virtual void setGsModel(String value) = 0;
    virtual bool hasValue_GsModel() const = 0;
    virtual void resetValue_GsModel() = 0;
    
    virtual String getGsMethod() const = 0;
    virtual void setGsMethod(String value) = 0;
    virtual bool hasValue_GsMethod() const = 0;
    virtual void resetValue_GsMethod() = 0;
    
    virtual String getOriginMark() const = 0;
    virtual void setOriginMark(String value) = 0;
    virtual bool hasValue_OriginMark() const = 0;
    virtual void resetValue_OriginMark() = 0;
    
    virtual String getVerticalDatum() const = 0;
    virtual void setVerticalDatum(String value) = 0;
    virtual bool hasValue_VerticalDatum() const = 0;
    virtual void resetValue_VerticalDatum() = 0;
    
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
