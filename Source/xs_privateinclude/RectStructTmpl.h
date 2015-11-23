#if !defined(__RECTSTRUCTTMPL_H)
#define __RECTSTRUCTTMPL_H

#include "RectStruct.h"
#include "LXTypesTmpl.h"

namespace LX
{

class FeatureCollection;

// Class : RectStruct
template<class T>
class RectStructTmpl : public ObjectTmpl<T>
{

public:
	virtual void toXml (IStream& stream);
public:
	// Constructors
    RectStructTmpl (DocumentImpl* pDoc);

public:
	// Destructors
    virtual ~RectStructTmpl ();
public:
	// Collections
    virtual FeatureCollection& Feature();
    virtual const FeatureCollection& Feature() const;

public:
	// Properties

    virtual double getLength() const;
    virtual void setLength(double value);
    virtual bool hasValue_Length() const;
    virtual void resetValue_Length();
    
    virtual double getLengthDir() const;
    virtual void setLengthDir(double value);
    virtual bool hasValue_LengthDir() const;
    virtual void resetValue_LengthDir();
    
    virtual double getWidth() const;
    virtual void setWidth(double value);
    virtual bool hasValue_Width() const;
    virtual void resetValue_Width();
    
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
    double m_Length;
    bool m_bLength_valueSet;
    double m_LengthDir;
    bool m_bLengthDir_valueSet;
    double m_Width;
    bool m_bWidth_valueSet;
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
