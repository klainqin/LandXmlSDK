#if !defined(__REDVERTICALOBSERVATIONTMPL_H)
#define __REDVERTICALOBSERVATIONTMPL_H

#include "RedVerticalObservation.h"
#include "LXTypesTmpl.h"

namespace LX
{


// Class : RedVerticalObservation
template<class T>
class RedVerticalObservationTmpl : public ObjectTmpl<T>, public IIdentifiable<String>
{

public:
	virtual void toXml (IStream& stream);
public:
	// Constructors
    RedVerticalObservationTmpl (DocumentImpl* pDoc);

public:
	// Destructors
    virtual ~RedVerticalObservationTmpl ();
public:
	// Collections

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
    
    virtual String getState() const;
    virtual void setState(String value);
    virtual bool hasValue_State() const;
    virtual void resetValue_State();
    
    virtual String getOID() const;
    virtual void setOID(String value);
    virtual bool hasValue_OID() const;
    virtual void resetValue_OID();
    
    virtual EnumPurposeType::Values getPurpose() const;
    virtual void setPurpose(EnumPurposeType::Values value);
    virtual bool hasValue_Purpose() const;
    virtual void resetValue_Purpose();
    
    virtual String getSetupID() const;
    virtual void setSetupID(String value);
    virtual bool hasValue_SetupID() const;
    virtual void resetValue_SetupID();
    
    virtual String getDate() const;
    virtual void setDate(String value);
    virtual bool hasValue_Date() const;
    virtual void resetValue_Date();
    
    virtual String getEquipmentUsed() const;
    virtual void setEquipmentUsed(String value);
    virtual bool hasValue_EquipmentUsed() const;
    virtual void resetValue_EquipmentUsed();
    
    virtual double getHeight() const;
    virtual void setHeight(double value);
    virtual bool hasValue_Height() const;
    virtual void resetValue_Height();
    
    virtual String getVerticalAdjustment() const;
    virtual void setVerticalAdjustment(String value);
    virtual bool hasValue_VerticalAdjustment() const;
    virtual void resetValue_VerticalAdjustment();
    
    virtual String getVerticalFix() const;
    virtual void setVerticalFix(String value);
    virtual bool hasValue_VerticalFix() const;
    virtual void resetValue_VerticalFix();
    
    virtual double getGeosphoid() const;
    virtual void setGeosphoid(double value);
    virtual bool hasValue_Geosphoid() const;
    virtual void resetValue_Geosphoid();
    
    virtual String getGsDatum() const;
    virtual void setGsDatum(String value);
    virtual bool hasValue_GsDatum() const;
    virtual void resetValue_GsDatum();
    
    virtual String getGsModel() const;
    virtual void setGsModel(String value);
    virtual bool hasValue_GsModel() const;
    virtual void resetValue_GsModel();
    
    virtual String getGsMethod() const;
    virtual void setGsMethod(String value);
    virtual bool hasValue_GsMethod() const;
    virtual void resetValue_GsMethod();
    
    virtual String getOriginMark() const;
    virtual void setOriginMark(String value);
    virtual bool hasValue_OriginMark() const;
    virtual void resetValue_OriginMark();
    
    virtual String getVerticalDatum() const;
    virtual void setVerticalDatum(String value);
    virtual bool hasValue_VerticalDatum() const;
    virtual void resetValue_VerticalDatum();
    
    virtual double getLocalUncertainity() const;
    virtual void setLocalUncertainity(double value);
    virtual bool hasValue_LocalUncertainity() const;
    virtual void resetValue_LocalUncertainity();
    
    virtual String getClass() const;
    virtual void setClass(String value);
    virtual bool hasValue_Class() const;
    virtual void resetValue_Class();
    
    virtual String getOrder() const;
    virtual void setOrder(String value);
    virtual bool hasValue_Order() const;
    virtual void resetValue_Order();
    
    virtual double getPositionalUncertainity() const;
    virtual void setPositionalUncertainity(double value);
    virtual bool hasValue_PositionalUncertainity() const;
    virtual void resetValue_PositionalUncertainity();
    

    virtual Object::ValidityEnum validate(IValidationEventSink *pEventSink) const;

protected:
    String m_Desc;
    bool m_bDesc_valueSet;
    String m_Name;
    bool m_bName_valueSet;
    String m_State;
    bool m_bState_valueSet;
    String m_OID;
    bool m_bOID_valueSet;
    EnumPurposeType::Values m_Purpose;
    bool m_bPurpose_valueSet;
    String m_SetupID;
    bool m_bSetupID_valueSet;
    String m_Date;
    bool m_bDate_valueSet;
    String m_EquipmentUsed;
    bool m_bEquipmentUsed_valueSet;
    double m_Height;
    bool m_bHeight_valueSet;
    String m_VerticalAdjustment;
    bool m_bVerticalAdjustment_valueSet;
    String m_VerticalFix;
    bool m_bVerticalFix_valueSet;
    double m_Geosphoid;
    bool m_bGeosphoid_valueSet;
    String m_GsDatum;
    bool m_bGsDatum_valueSet;
    String m_GsModel;
    bool m_bGsModel_valueSet;
    String m_GsMethod;
    bool m_bGsMethod_valueSet;
    String m_OriginMark;
    bool m_bOriginMark_valueSet;
    String m_VerticalDatum;
    bool m_bVerticalDatum_valueSet;
    double m_LocalUncertainity;
    bool m_bLocalUncertainity_valueSet;
    String m_Class;
    bool m_bClass_valueSet;
    String m_Order;
    bool m_bOrder_valueSet;
    double m_PositionalUncertainity;
    bool m_bPositionalUncertainity_valueSet;
};
}; // namespace : LX
#endif
