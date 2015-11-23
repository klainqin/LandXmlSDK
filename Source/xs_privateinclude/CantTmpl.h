#if !defined(__CANTTMPL_H)
#define __CANTTMPL_H

#include "Cant.h"
#include "LXTypesTmpl.h"

namespace LX
{

class CantStationCollection;
class SpeedStationCollection;
class FeatureCollection;

// Class : Cant
template<class T>
class CantTmpl : public ObjectTmpl<T>, public IIdentifiable<String>
{

public:
	virtual void toXml (IStream& stream);
public:
	// Constructors
    CantTmpl (DocumentImpl* pDoc);

public:
	// Destructors
    virtual ~CantTmpl ();
public:
	// Collections
    virtual CantStationCollection& CantStation();
    virtual const CantStationCollection& CantStation() const;
    virtual SpeedStationCollection& SpeedStation();
    virtual const SpeedStationCollection& SpeedStation() const;
    virtual FeatureCollection& Feature();
    virtual const FeatureCollection& Feature() const;

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
    
    virtual EnumStateType::Values getState() const;
    virtual void setState(EnumStateType::Values value);
    virtual bool hasValue_State() const;
    virtual void resetValue_State();
    
    virtual double getEquilibriumConstant() const;
    virtual void setEquilibriumConstant(double value);
    virtual bool hasValue_EquilibriumConstant() const;
    virtual void resetValue_EquilibriumConstant();
    
    virtual double getAppliedCantConstant() const;
    virtual void setAppliedCantConstant(double value);
    virtual bool hasValue_AppliedCantConstant() const;
    virtual void resetValue_AppliedCantConstant();
    
    virtual double getGauge() const;
    virtual void setGauge(double value);
    virtual bool hasValue_Gauge() const;
    virtual void resetValue_Gauge();
    
    virtual String getRotationPoint() const;
    virtual void setRotationPoint(String value);
    virtual bool hasValue_RotationPoint() const;
    virtual void resetValue_RotationPoint();
    

    virtual Object::ValidityEnum validate(IValidationEventSink *pEventSink) const;

protected:
    CantStationCollection *m_CantStation;
    SpeedStationCollection *m_SpeedStation;
    FeatureCollection *m_Feature;
    String m_Name;
    bool m_bName_valueSet;
    String m_Desc;
    bool m_bDesc_valueSet;
    EnumStateType::Values m_State;
    bool m_bState_valueSet;
    double m_EquilibriumConstant;
    bool m_bEquilibriumConstant_valueSet;
    double m_AppliedCantConstant;
    bool m_bAppliedCantConstant_valueSet;
    double m_Gauge;
    bool m_bGauge_valueSet;
    String m_RotationPoint;
    bool m_bRotationPoint_valueSet;
};
}; // namespace : LX
#endif
