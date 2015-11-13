#if !defined(__CROSSSECTSTMPL_H)
#define __CROSSSECTSTMPL_H

#include "CrossSects.h"
#include "LXTypesTmpl.h"

namespace LX
{

class CrossSectCollection;
class FeatureCollection;

// Class : CrossSects
template<class T>
class CrossSectsTmpl : public ObjectTmpl<T>, public IIdentifiable<String>
{

public:
	virtual void toXml (IStream& stream);
public:
	// Constructors
    CrossSectsTmpl<T> (DocumentImpl* pDoc);

public:
	// Destructors
    virtual ~CrossSectsTmpl ();
public:
	// Collections
    virtual CrossSectCollection& CrossSect();
    virtual const CrossSectCollection& CrossSect() const;
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
    
    virtual EnumXsVolCalcMethodType::Values getCalcMethod() const;
    virtual void setCalcMethod(EnumXsVolCalcMethodType::Values value);
    virtual bool hasValue_CalcMethod() const;
    virtual void resetValue_CalcMethod();
    
    virtual bool getCurveCorrection() const;
    virtual void setCurveCorrection(bool value);
    virtual bool hasValue_CurveCorrection() const;
    virtual void resetValue_CurveCorrection();
    
    virtual double getSwellFactor() const;
    virtual void setSwellFactor(double value);
    virtual bool hasValue_SwellFactor() const;
    virtual void resetValue_SwellFactor();
    
    virtual double getShrinkFactor() const;
    virtual void setShrinkFactor(double value);
    virtual bool hasValue_ShrinkFactor() const;
    virtual void resetValue_ShrinkFactor();
    

    virtual Object::ValidityEnum validate(IValidationEventSink *pEventSink) const;

protected:
    CrossSectCollection *m_CrossSect;
    FeatureCollection *m_Feature;
    String m_Desc;
    bool m_bDesc_valueSet;
    String m_Name;
    bool m_bName_valueSet;
    EnumStateType::Values m_State;
    bool m_bState_valueSet;
    EnumXsVolCalcMethodType::Values m_CalcMethod;
    bool m_bCalcMethod_valueSet;
    bool m_CurveCorrection;
    bool m_bCurveCorrection_valueSet;
    double m_SwellFactor;
    bool m_bSwellFactor_valueSet;
    double m_ShrinkFactor;
    bool m_bShrinkFactor_valueSet;
};
}; // namespace : LX
#endif
