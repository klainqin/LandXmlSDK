#if !defined(__CHAIN_H)
#define __CHAIN_H

#include "Chain.h"
#include "LXTypes.h"

namespace LX
{


// Class : Chain
class Chain : public StringCollection
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
    
    virtual String getDesc() const = 0;
    virtual void setDesc(String value) = 0;
    virtual bool hasValue_Desc() const = 0;
    virtual void resetValue_Desc() = 0;
    
    virtual String getCode() const = 0;
    virtual void setCode(String value) = 0;
    virtual bool hasValue_Code() const = 0;
    virtual void resetValue_Code() = 0;
    
    virtual EnumStateType::Values getState() const = 0;
    virtual void setState(EnumStateType::Values value) = 0;
    virtual bool hasValue_State() const = 0;
    virtual void resetValue_State() = 0;
    
    virtual EnumPointGeometryType::Values getPointGeometry() const = 0;
    virtual void setPointGeometry(EnumPointGeometryType::Values value) = 0;
    virtual bool hasValue_PointGeometry() const = 0;
    virtual void resetValue_PointGeometry() = 0;
    
    virtual EnumDTMAttributeType::Values getDTMAttribute() const = 0;
    virtual void setDTMAttribute(EnumDTMAttributeType::Values value) = 0;
    virtual bool hasValue_DTMAttribute() const = 0;
    virtual void resetValue_DTMAttribute() = 0;
    
    virtual String getTimeStamp() const = 0;
    virtual void setTimeStamp(String value) = 0;
    virtual bool hasValue_TimeStamp() const = 0;
    virtual void resetValue_TimeStamp() = 0;
    
    virtual EnumSurveyRoleType::Values getRole() const = 0;
    virtual void setRole(EnumSurveyRoleType::Values value) = 0;
    virtual bool hasValue_Role() const = 0;
    virtual void resetValue_Role() = 0;
    
    virtual double getStation() const = 0;
    virtual void setStation(double value) = 0;
    virtual bool hasValue_Station() const = 0;
    virtual void resetValue_Station() = 0;
    
    virtual String getZone() const = 0;
    virtual void setZone(String value) = 0;
    virtual bool hasValue_Zone() const = 0;
    virtual void resetValue_Zone() = 0;
    
    virtual EnumObservationStatusType::Values getStatus() const = 0;
    virtual void setStatus(EnumObservationStatusType::Values value) = 0;
    virtual bool hasValue_Status() const = 0;
    virtual void resetValue_Status() = 0;
    
    
protected:
};
}; // namespace : LX
#endif
