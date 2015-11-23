#if !defined(__CIRCSTRUCTTMPL_H)
#define __CIRCSTRUCTTMPL_H

#include "CircStruct.h"
#include "LXTypesTmpl.h"

namespace LX
{

class FeatureCollection;

// Class : CircStruct
template<class T>
class CircStructTmpl : public ObjectTmpl<T>
{

public:
	virtual void toXml (IStream& stream);
public:
	// Constructors
    CircStructTmpl (DocumentImpl* pDoc);

public:
	// Destructors
    virtual ~CircStructTmpl ();
public:
	// Collections
    virtual FeatureCollection& Feature();
    virtual const FeatureCollection& Feature() const;

public:
	// Properties

    virtual double getDiameter() const;
    virtual void setDiameter(double value);
    virtual bool hasValue_Diameter() const;
    virtual void resetValue_Diameter();
    
    virtual String getDesc() const;
    virtual void setDesc(String value);
    virtual bool hasValue_Desc() const;
    virtual void resetValue_Desc();
    
    virtual String getInletCase() const;
    virtual void setInletCase(String value);
    virtual bool hasValue_InletCase() const;
    virtual void resetValue_InletCase();
    
    virtual double getLossCoeff() const;
    virtual void setLossCoeff(double value);
    virtual bool hasValue_LossCoeff() const;
    virtual void resetValue_LossCoeff();
    
    virtual String getMaterial() const;
    virtual void setMaterial(String value);
    virtual bool hasValue_Material() const;
    virtual void resetValue_Material();
    
    virtual double getThickness() const;
    virtual void setThickness(double value);
    virtual bool hasValue_Thickness() const;
    virtual void resetValue_Thickness();
    

    virtual Object::ValidityEnum validate(IValidationEventSink *pEventSink) const;

protected:
    FeatureCollection *m_Feature;
    double m_Diameter;
    bool m_bDiameter_valueSet;
    String m_Desc;
    bool m_bDesc_valueSet;
    String m_InletCase;
    bool m_bInletCase_valueSet;
    double m_LossCoeff;
    bool m_bLossCoeff_valueSet;
    String m_Material;
    bool m_bMaterial_valueSet;
    double m_Thickness;
    bool m_bThickness_valueSet;
};
}; // namespace : LX
#endif
