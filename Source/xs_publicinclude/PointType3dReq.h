#if !defined(__POINTTYPE3DREQ_H)
#define __POINTTYPE3DREQ_H

#include "PointType3dReq.h"
#include "LXTypes.h"

namespace LX
{


// Class : PointType3dReq
class PointType3dReq : public DoubleCollection
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
    
    virtual String getPntRef() const = 0;
    virtual void setPntRef(String value) = 0;
    virtual bool hasValue_PntRef() const = 0;
    virtual void resetValue_PntRef() = 0;
    
    virtual String getFeatureRef() const = 0;
    virtual void setFeatureRef(String value) = 0;
    virtual bool hasValue_FeatureRef() const = 0;
    virtual void resetValue_FeatureRef() = 0;
    
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
    
    
protected:
};
}; // namespace : LX
#endif
