#if !defined(__MONUMENTTMPL_H)
#define __MONUMENTTMPL_H

#include "Monument.h"
#include "LXTypesTmpl.h"

namespace LX
{


// Class : Monument
template<class T>
class MonumentTmpl : public ObjectTmpl<T>, public IIdentifiable<String>
{

public:
	virtual void toXml (IStream& stream);
public:
	// Constructors
    MonumentTmpl (DocumentImpl* pDoc);

public:
	// Destructors
    virtual ~MonumentTmpl ();
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
    
    virtual String getPntRef() const;
    virtual void setPntRef(String value);
    virtual bool hasValue_PntRef() const;
    virtual void resetValue_PntRef();
    
    virtual String getFeatureRef() const;
    virtual void setFeatureRef(String value);
    virtual bool hasValue_FeatureRef() const;
    virtual void resetValue_FeatureRef();
    
    virtual String getDesc() const;
    virtual void setDesc(String value);
    virtual bool hasValue_Desc() const;
    virtual void resetValue_Desc();
    
    virtual String getState() const;
    virtual void setState(String value);
    virtual bool hasValue_State() const;
    virtual void resetValue_State();
    
    virtual String getType() const;
    virtual void setType(String value);
    virtual bool hasValue_Type() const;
    virtual void resetValue_Type();
    
    virtual String getCondition() const;
    virtual void setCondition(String value);
    virtual bool hasValue_Condition() const;
    virtual void resetValue_Condition();
    
    virtual EnumMonumentCategory::Values getCategory() const;
    virtual void setCategory(EnumMonumentCategory::Values value);
    virtual bool hasValue_Category() const;
    virtual void resetValue_Category();
    
    virtual EnumBeaconType::Values getBeacon() const;
    virtual void setBeacon(EnumBeaconType::Values value);
    virtual bool hasValue_Beacon() const;
    virtual void resetValue_Beacon();
    
    virtual EnumBeaconProtectionType::Values getBeaconProtection() const;
    virtual void setBeaconProtection(EnumBeaconProtectionType::Values value);
    virtual bool hasValue_BeaconProtection() const;
    virtual void resetValue_BeaconProtection();
    
    virtual String getOID() const;
    virtual void setOID(String value);
    virtual bool hasValue_OID() const;
    virtual void resetValue_OID();
    
    virtual String getReference() const;
    virtual void setReference(String value);
    virtual bool hasValue_Reference() const;
    virtual void resetValue_Reference();
    
    virtual String getOriginSurvey() const;
    virtual void setOriginSurvey(String value);
    virtual bool hasValue_OriginSurvey() const;
    virtual void resetValue_OriginSurvey();
    

    virtual Object::ValidityEnum validate(IValidationEventSink *pEventSink) const;

protected:
    String m_Name;
    bool m_bName_valueSet;
    String m_PntRef;
    bool m_bPntRef_valueSet;
    String m_FeatureRef;
    bool m_bFeatureRef_valueSet;
    String m_Desc;
    bool m_bDesc_valueSet;
    String m_State;
    bool m_bState_valueSet;
    String m_Type;
    bool m_bType_valueSet;
    String m_Condition;
    bool m_bCondition_valueSet;
    EnumMonumentCategory::Values m_Category;
    bool m_bCategory_valueSet;
    EnumBeaconType::Values m_Beacon;
    bool m_bBeacon_valueSet;
    EnumBeaconProtectionType::Values m_BeaconProtection;
    bool m_bBeaconProtection_valueSet;
    String m_OID;
    bool m_bOID_valueSet;
    String m_Reference;
    bool m_bReference_valueSet;
    String m_OriginSurvey;
    bool m_bOriginSurvey_valueSet;
};
}; // namespace : LX
#endif
