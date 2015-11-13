#if !defined(__DEFINITIONTMPL_H)
#define __DEFINITIONTMPL_H

#include "Definition.h"
#include "LXTypesTmpl.h"

namespace LX
{

class Pnts;
class FacesCollection;
class FeatureCollection;

// Class : Definition
template<class T>
class DefinitionTmpl : public ObjectTmpl<T>
{

public:
	virtual void toXml (IStream& stream);
public:
	// Constructors
    DefinitionTmpl<T> (DocumentImpl* pDoc);

public:
	// Destructors
    virtual ~DefinitionTmpl ();
public:
	// Collections
    virtual FacesCollection& Faces();
    virtual const FacesCollection& Faces() const;
    virtual FeatureCollection& Feature();
    virtual const FeatureCollection& Feature() const;

public:
	// Properties
    virtual Pnts* getPnts() const;
    virtual void setPnts(Pnts* value);


    virtual EnumSurfTypeEnum::Values getSurfType() const;
    virtual void setSurfType(EnumSurfTypeEnum::Values value);
    virtual bool hasValue_SurfType() const;
    virtual void resetValue_SurfType();
    
    virtual double getArea2DSurf() const;
    virtual void setArea2DSurf(double value);
    virtual bool hasValue_Area2DSurf() const;
    virtual void resetValue_Area2DSurf();
    
    virtual double getArea3DSurf() const;
    virtual void setArea3DSurf(double value);
    virtual bool hasValue_Area3DSurf() const;
    virtual void resetValue_Area3DSurf();
    
    virtual double getElevMax() const;
    virtual void setElevMax(double value);
    virtual bool hasValue_ElevMax() const;
    virtual void resetValue_ElevMax();
    
    virtual double getElevMin() const;
    virtual void setElevMin(double value);
    virtual bool hasValue_ElevMin() const;
    virtual void resetValue_ElevMin();
    

    virtual Object::ValidityEnum validate(IValidationEventSink *pEventSink) const;

protected:
    Pnts *m_Pnts;
    FacesCollection *m_Faces;
    FeatureCollection *m_Feature;
    EnumSurfTypeEnum::Values m_SurfType;
    bool m_bSurfType_valueSet;
    double m_Area2DSurf;
    bool m_bArea2DSurf_valueSet;
    double m_Area3DSurf;
    bool m_bArea3DSurf_valueSet;
    double m_ElevMax;
    bool m_bElevMax_valueSet;
    double m_ElevMin;
    bool m_bElevMin_valueSet;
};
}; // namespace : LX
#endif
