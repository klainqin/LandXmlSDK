#if !defined(__PLANFEATURESTMPL_H)
#define __PLANFEATURESTMPL_H

#include "PlanFeatures.h"
#include "LXTypesTmpl.h"

namespace LX
{

class PlanFeatureCollection;
class FeatureCollection;

// Class : PlanFeatures
template<class T>
class PlanFeaturesTmpl : public ObjectTmpl<T>, public IIdentifiable<String>
{

public:
	virtual void toXml (IStream& stream);
public:
	// Constructors
    PlanFeaturesTmpl (DocumentImpl* pDoc);

public:
	// Destructors
    virtual ~PlanFeaturesTmpl ();
public:
	// Collections
    virtual PlanFeatureCollection& PlanFeature();
    virtual const PlanFeatureCollection& PlanFeature() const;
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
    

    virtual Object::ValidityEnum validate(IValidationEventSink *pEventSink) const;

protected:
    PlanFeatureCollection *m_PlanFeature;
    FeatureCollection *m_Feature;
    String m_Desc;
    bool m_bDesc_valueSet;
    String m_Name;
    bool m_bName_valueSet;
    EnumStateType::Values m_State;
    bool m_bState_valueSet;
};
}; // namespace : LX
#endif
