#if !defined(__POINTTYPETMPL_H)
#define __POINTTYPETMPL_H

#include "PointType.h"
#include "LXTypesTmpl.h"

namespace LX
{


// Class : PointType
template<class T>
class PointTypeTmpl : public DoubleCollectionTmpl<T>, public IIdentifiable<String>
{

public:
	virtual void toXml (IStream& stream);
public:
	// Constructors
    PointTypeTmpl<T> (DocumentImpl* pDoc);

public:
	// Destructors
    virtual ~PointTypeTmpl ();
public:
	// Collections

    virtual bool getObjectId(const String*& pId) const;
    virtual ValueObject* id () const;
    
public:
	// Properties

    virtual String getName() const;
    virtual void setName(String value);
    virtual bool hasValue_Name() const;
    virtual void resetValue_Name();
    
    virtual String getDesc() const;
    virtual void setDesc(String value);
    virtual bool hasValue_Desc() const;
    virtual void resetValue_Desc();
    
    virtual String getCode() const;
    virtual void setCode(String value);
    virtual bool hasValue_Code() const;
    virtual void resetValue_Code();
    
    virtual EnumStateType::Values getState() const;
    virtual void setState(EnumStateType::Values value);
    virtual bool hasValue_State() const;
    virtual void resetValue_State();
    
    virtual String getPntRef() const;
    virtual void setPntRef(String value);
    virtual bool hasValue_PntRef() const;
    virtual void resetValue_PntRef();
    
    virtual String getFeatureRef() const;
    virtual void setFeatureRef(String value);
    virtual bool hasValue_FeatureRef() const;
    virtual void resetValue_FeatureRef();
    
    virtual EnumPointGeometryType::Values getPointGeometry() const;
    virtual void setPointGeometry(EnumPointGeometryType::Values value);
    virtual bool hasValue_PointGeometry() const;
    virtual void resetValue_PointGeometry();
    
    virtual EnumDTMAttributeType::Values getDTMAttribute() const;
    virtual void setDTMAttribute(EnumDTMAttributeType::Values value);
    virtual bool hasValue_DTMAttribute() const;
    virtual void resetValue_DTMAttribute();
    
    virtual String getTimeStamp() const;
    virtual void setTimeStamp(String value);
    virtual bool hasValue_TimeStamp() const;
    virtual void resetValue_TimeStamp();
    
    virtual EnumSurveyRoleType::Values getRole() const;
    virtual void setRole(EnumSurveyRoleType::Values value);
    virtual bool hasValue_Role() const;
    virtual void resetValue_Role();
    
    virtual String getDeterminedTimeStamp() const;
    virtual void setDeterminedTimeStamp(String value);
    virtual bool hasValue_DeterminedTimeStamp() const;
    virtual void resetValue_DeterminedTimeStamp();
    
    virtual double getEllipsoidHeight() const;
    virtual void setEllipsoidHeight(double value);
    virtual bool hasValue_EllipsoidHeight() const;
    virtual void resetValue_EllipsoidHeight();
    
    virtual double getLatitude() const;
    virtual void setLatitude(double value);
    virtual bool hasValue_Latitude() const;
    virtual void resetValue_Latitude();
    
    virtual double getLongitude() const;
    virtual void setLongitude(double value);
    virtual bool hasValue_Longitude() const;
    virtual void resetValue_Longitude();
    
    virtual String getZone() const;
    virtual void setZone(String value);
    virtual bool hasValue_Zone() const;
    virtual void resetValue_Zone();
    
    virtual double getNorthingStdError() const;
    virtual void setNorthingStdError(double value);
    virtual bool hasValue_NorthingStdError() const;
    virtual void resetValue_NorthingStdError();
    
    virtual double getEastingStdError() const;
    virtual void setEastingStdError(double value);
    virtual bool hasValue_EastingStdError() const;
    virtual void resetValue_EastingStdError();
    
    virtual double getElevationStdError() const;
    virtual void setElevationStdError(double value);
    virtual bool hasValue_ElevationStdError() const;
    virtual void resetValue_ElevationStdError();
    

    virtual Object::ValidityEnum validate(IValidationEventSink *pEventSink) const;

protected:
    String m_Name;
    bool m_bName_valueSet;
    String m_Desc;
    bool m_bDesc_valueSet;
    String m_Code;
    bool m_bCode_valueSet;
    EnumStateType::Values m_State;
    bool m_bState_valueSet;
    String m_PntRef;
    bool m_bPntRef_valueSet;
    String m_FeatureRef;
    bool m_bFeatureRef_valueSet;
    EnumPointGeometryType::Values m_PointGeometry;
    bool m_bPointGeometry_valueSet;
    EnumDTMAttributeType::Values m_DTMAttribute;
    bool m_bDTMAttribute_valueSet;
    String m_TimeStamp;
    bool m_bTimeStamp_valueSet;
    EnumSurveyRoleType::Values m_Role;
    bool m_bRole_valueSet;
    String m_DeterminedTimeStamp;
    bool m_bDeterminedTimeStamp_valueSet;
    double m_EllipsoidHeight;
    bool m_bEllipsoidHeight_valueSet;
    double m_Latitude;
    bool m_bLatitude_valueSet;
    double m_Longitude;
    bool m_bLongitude_valueSet;
    String m_Zone;
    bool m_bZone_valueSet;
    double m_NorthingStdError;
    bool m_bNorthingStdError_valueSet;
    double m_EastingStdError;
    bool m_bEastingStdError_valueSet;
    double m_ElevationStdError;
    bool m_bElevationStdError_valueSet;
};
}; // namespace : LX
#endif
