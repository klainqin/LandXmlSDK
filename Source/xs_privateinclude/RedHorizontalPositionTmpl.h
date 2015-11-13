#if !defined(__REDHORIZONTALPOSITIONTMPL_H)
#define __REDHORIZONTALPOSITIONTMPL_H

#include "RedHorizontalPosition.h"
#include "LXTypesTmpl.h"

namespace LX
{


// Class : RedHorizontalPosition
template<class T>
class RedHorizontalPositionTmpl : public ObjectTmpl<T>, public IIdentifiable<String>
{

public:
	virtual void toXml (IStream& stream);
public:
	// Constructors
    RedHorizontalPositionTmpl<T> (DocumentImpl* pDoc);

public:
	// Destructors
    virtual ~RedHorizontalPositionTmpl ();
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
    
    virtual String getHorizontalDatum() const;
    virtual void setHorizontalDatum(String value);
    virtual bool hasValue_HorizontalDatum() const;
    virtual void resetValue_HorizontalDatum();
    
    virtual String getHorizontalAdjustment() const;
    virtual void setHorizontalAdjustment(String value);
    virtual bool hasValue_HorizontalAdjustment() const;
    virtual void resetValue_HorizontalAdjustment();
    
    virtual String getLatitude() const;
    virtual void setLatitude(String value);
    virtual bool hasValue_Latitude() const;
    virtual void resetValue_Latitude();
    
    virtual String getLongitude() const;
    virtual void setLongitude(String value);
    virtual bool hasValue_Longitude() const;
    virtual void resetValue_Longitude();
    
    virtual String getHorizontalFix() const;
    virtual void setHorizontalFix(String value);
    virtual bool hasValue_HorizontalFix() const;
    virtual void resetValue_HorizontalFix();
    
    virtual String getCurrencyDate() const;
    virtual void setCurrencyDate(String value);
    virtual bool hasValue_CurrencyDate() const;
    virtual void resetValue_CurrencyDate();
    
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
    String m_HorizontalDatum;
    bool m_bHorizontalDatum_valueSet;
    String m_HorizontalAdjustment;
    bool m_bHorizontalAdjustment_valueSet;
    String m_Latitude;
    bool m_bLatitude_valueSet;
    String m_Longitude;
    bool m_bLongitude_valueSet;
    String m_HorizontalFix;
    bool m_bHorizontalFix_valueSet;
    String m_CurrencyDate;
    bool m_bCurrencyDate_valueSet;
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
