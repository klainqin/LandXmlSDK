#if !defined(__POINTTYPE3DREQTMPL_H)
#define __POINTTYPE3DREQTMPL_H

#include "PointType3dReq.h"
#include "LXTypesTmpl.h"

namespace LX
{


// Class : PointType3dReq
template<class T>
class PointType3dReqTmpl : public DoubleCollectionTmpl<T>, public IIdentifiable<String>
{

public:
	virtual void toXml (IStream& stream);
public:
	// Constructors
    PointType3dReqTmpl<T> (DocumentImpl* pDoc);

public:
	// Destructors
    virtual ~PointType3dReqTmpl ();
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
};
}; // namespace : LX
#endif
