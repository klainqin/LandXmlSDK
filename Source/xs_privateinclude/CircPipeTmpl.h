#if !defined(__CIRCPIPETMPL_H)
#define __CIRCPIPETMPL_H

#include "CircPipe.h"
#include "LXTypesTmpl.h"

namespace LX
{

class FeatureCollection;

// Class : CircPipe
template<class T>
class CircPipeTmpl : public ObjectTmpl<T>
{

public:
	virtual void toXml (IStream& stream);
public:
	// Constructors
    CircPipeTmpl<T> (DocumentImpl* pDoc);

public:
	// Destructors
    virtual ~CircPipeTmpl ();
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
    
    virtual double getHazenWilliams() const;
    virtual void setHazenWilliams(double value);
    virtual bool hasValue_HazenWilliams() const;
    virtual void resetValue_HazenWilliams();
    
    virtual double getMannings() const;
    virtual void setMannings(double value);
    virtual bool hasValue_Mannings() const;
    virtual void resetValue_Mannings();
    
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
    double m_HazenWilliams;
    bool m_bHazenWilliams_valueSet;
    double m_Mannings;
    bool m_bMannings_valueSet;
    String m_Material;
    bool m_bMaterial_valueSet;
    double m_Thickness;
    bool m_bThickness_valueSet;
};
}; // namespace : LX
#endif
