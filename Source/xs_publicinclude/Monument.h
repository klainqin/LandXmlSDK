#if !defined(__MONUMENT_H)
#define __MONUMENT_H

#include "Monument.h"
#include "LXTypes.h"

namespace LX
{


// Class : Monument
class Monument : public Object
{

public:
	virtual void toXml (IStream& stream) = 0;
public:
	// Collections

public:
	// Properties
    
    virtual String getName() const = 0;
    virtual void setName(String value) = 0;
    virtual bool hasValue_Name() const = 0;
    virtual void resetValue_Name() = 0;
    
    virtual String getPntRef() const = 0;
    virtual void setPntRef(String value) = 0;
    virtual bool hasValue_PntRef() const = 0;
    virtual void resetValue_PntRef() = 0;
    
    virtual String getFeatureRef() const = 0;
    virtual void setFeatureRef(String value) = 0;
    virtual bool hasValue_FeatureRef() const = 0;
    virtual void resetValue_FeatureRef() = 0;
    
    virtual String getDesc() const = 0;
    virtual void setDesc(String value) = 0;
    virtual bool hasValue_Desc() const = 0;
    virtual void resetValue_Desc() = 0;
    
    virtual String getState() const = 0;
    virtual void setState(String value) = 0;
    virtual bool hasValue_State() const = 0;
    virtual void resetValue_State() = 0;
    
    virtual String getType() const = 0;
    virtual void setType(String value) = 0;
    virtual bool hasValue_Type() const = 0;
    virtual void resetValue_Type() = 0;
    
    virtual String getCondition() const = 0;
    virtual void setCondition(String value) = 0;
    virtual bool hasValue_Condition() const = 0;
    virtual void resetValue_Condition() = 0;
    
    virtual EnumMonumentCategory::Values getCategory() const = 0;
    virtual void setCategory(EnumMonumentCategory::Values value) = 0;
    virtual bool hasValue_Category() const = 0;
    virtual void resetValue_Category() = 0;
    
    virtual EnumBeaconType::Values getBeacon() const = 0;
    virtual void setBeacon(EnumBeaconType::Values value) = 0;
    virtual bool hasValue_Beacon() const = 0;
    virtual void resetValue_Beacon() = 0;
    
    virtual EnumBeaconProtectionType::Values getBeaconProtection() const = 0;
    virtual void setBeaconProtection(EnumBeaconProtectionType::Values value) = 0;
    virtual bool hasValue_BeaconProtection() const = 0;
    virtual void resetValue_BeaconProtection() = 0;
    
    virtual String getOID() const = 0;
    virtual void setOID(String value) = 0;
    virtual bool hasValue_OID() const = 0;
    virtual void resetValue_OID() = 0;
    
    virtual String getReference() const = 0;
    virtual void setReference(String value) = 0;
    virtual bool hasValue_Reference() const = 0;
    virtual void resetValue_Reference() = 0;
    
    virtual String getOriginSurvey() const = 0;
    virtual void setOriginSurvey(String value) = 0;
    virtual bool hasValue_OriginSurvey() const = 0;
    virtual void resetValue_OriginSurvey() = 0;
    
    
protected:
};
}; // namespace : LX
#endif
