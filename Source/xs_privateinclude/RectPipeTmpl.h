#if !defined(__RECTPIPETMPL_H)
#define __RECTPIPETMPL_H

#include "RectPipe.h"
#include "LXTypesTmpl.h"

namespace LX
{

class FeatureCollection;

// Class : RectPipe
template<class T>
class RectPipeTmpl : public ObjectTmpl<T>
{

public:
	virtual void toXml (IStream& stream);
public:
	// Constructors
    RectPipeTmpl<T> (DocumentImpl* pDoc);

public:
	// Destructors
    virtual ~RectPipeTmpl ();
public:
	// Collections
    virtual FeatureCollection& Feature();
    virtual const FeatureCollection& Feature() const;

public:
	// Properties

    virtual double getHeight() const;
    virtual void setHeight(double value);
    virtual bool hasValue_Height() const;
    virtual void resetValue_Height();
    
    virtual double getWidth() const;
    virtual void setWidth(double value);
    virtual bool hasValue_Width() const;
    virtual void resetValue_Width();
    
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
    double m_Height;
    bool m_bHeight_valueSet;
    double m_Width;
    bool m_bWidth_valueSet;
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
