#if !defined(__CGPOINTSTMPL_H)
#define __CGPOINTSTMPL_H

#include "CgPoints.h"
#include "LXTypesTmpl.h"

namespace LX
{

class CgPointCollection;
class CgPointsCollection;
class FeatureCollection;

// Class : CgPoints
template<class T>
class CgPointsTmpl : public ObjectTmpl<T>, public IIdentifiable<String>
{

public:
	virtual void toXml (IStream& stream);
public:
	// Constructors
    CgPointsTmpl (DocumentImpl* pDoc);

public:
	// Destructors
    virtual ~CgPointsTmpl ();
public:
	// Collections
    virtual CgPointCollection& CgPoint();
    virtual const CgPointCollection& CgPoint() const;
    virtual CgPointsCollection& SubCgPoints();
    virtual const CgPointsCollection& SubCgPoints() const;
    virtual FeatureCollection& Feature();
    virtual const FeatureCollection& Feature() const;

    virtual bool getObjectId(const String*& pId) const;
    virtual ValueObject* id () const;
    
public:
	// Properties

    virtual String getDesc() const;
    virtual void setDesc(String value);
    virtual bool hasValue_Desc() const;
    virtual void resetValue_Desc();
    
    virtual String getName() const;
    virtual void setName(String value);
    virtual bool hasValue_Name() const;
    virtual void resetValue_Name();
    
    virtual EnumStateType::Values getState() const;
    virtual void setState(EnumStateType::Values value);
    virtual bool hasValue_State() const;
    virtual void resetValue_State();
    
    virtual String getCode() const;
    virtual void setCode(String value);
    virtual bool hasValue_Code() const;
    virtual void resetValue_Code();
    
    virtual unsigned int getZoneNumber() const;
    virtual void setZoneNumber(unsigned int value);
    virtual bool hasValue_ZoneNumber() const;
    virtual void resetValue_ZoneNumber();
    
    virtual EnumDTMAttributeType::Values getDTMAttribute() const;
    virtual void setDTMAttribute(EnumDTMAttributeType::Values value);
    virtual bool hasValue_DTMAttribute() const;
    virtual void resetValue_DTMAttribute();
    

    virtual Object::ValidityEnum validate(IValidationEventSink *pEventSink) const;

protected:
    CgPointCollection *m_CgPoint;
    CgPointsCollection *m_SubCgPoints;
    FeatureCollection *m_Feature;
    String m_Desc;
    bool m_bDesc_valueSet;
    String m_Name;
    bool m_bName_valueSet;
    EnumStateType::Values m_State;
    bool m_bState_valueSet;
    String m_Code;
    bool m_bCode_valueSet;
    unsigned int m_ZoneNumber;
    bool m_bZoneNumber_valueSet;
    EnumDTMAttributeType::Values m_DTMAttribute;
    bool m_bDTMAttribute_valueSet;
};
}; // namespace : LX
#endif
