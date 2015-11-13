#if !defined(__POINTTYPE_H)
#define __POINTTYPE_H

#include "PointType.h"
#include "LXTypes.h"

namespace LX
{


// Class : PointType
class PointType : public DoubleCollection
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
    
    virtual String getDeterminedTimeStamp() const = 0;
    virtual void setDeterminedTimeStamp(String value) = 0;
    virtual bool hasValue_DeterminedTimeStamp() const = 0;
    virtual void resetValue_DeterminedTimeStamp() = 0;
    
    virtual double getEllipsoidHeight() const = 0;
    virtual void setEllipsoidHeight(double value) = 0;
    virtual bool hasValue_EllipsoidHeight() const = 0;
    virtual void resetValue_EllipsoidHeight() = 0;
    
    virtual double getLatitude() const = 0;
    virtual void setLatitude(double value) = 0;
    virtual bool hasValue_Latitude() const = 0;
    virtual void resetValue_Latitude() = 0;
    
    virtual double getLongitude() const = 0;
    virtual void setLongitude(double value) = 0;
    virtual bool hasValue_Longitude() const = 0;
    virtual void resetValue_Longitude() = 0;
    
    virtual String getZone() const = 0;
    virtual void setZone(String value) = 0;
    virtual bool hasValue_Zone() const = 0;
    virtual void resetValue_Zone() = 0;
    
    virtual double getNorthingStdError() const = 0;
    virtual void setNorthingStdError(double value) = 0;
    virtual bool hasValue_NorthingStdError() const = 0;
    virtual void resetValue_NorthingStdError() = 0;
    
    virtual double getEastingStdError() const = 0;
    virtual void setEastingStdError(double value) = 0;
    virtual bool hasValue_EastingStdError() const = 0;
    virtual void resetValue_EastingStdError() = 0;
    
    virtual double getElevationStdError() const = 0;
    virtual void setElevationStdError(double value) = 0;
    virtual bool hasValue_ElevationStdError() const = 0;
    virtual void resetValue_ElevationStdError() = 0;
    
    
protected:
};
}; // namespace : LX
#endif
