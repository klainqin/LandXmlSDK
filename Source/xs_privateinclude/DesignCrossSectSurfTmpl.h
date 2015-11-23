#if !defined(__DESIGNCROSSSECTSURFTMPL_H)
#define __DESIGNCROSSSECTSURFTMPL_H

#include "DesignCrossSectSurf.h"
#include "LXTypesTmpl.h"

namespace LX
{

class CrossSectPntCollection;
class FeatureCollection;

// Class : DesignCrossSectSurf
template<class T>
class DesignCrossSectSurfTmpl : public ObjectTmpl<T>, public IIdentifiable<String>
{

public:
	virtual void toXml (IStream& stream);
public:
	// Constructors
    DesignCrossSectSurfTmpl (DocumentImpl* pDoc);

public:
	// Destructors
    virtual ~DesignCrossSectSurfTmpl ();
public:
	// Collections
    virtual CrossSectPntCollection& CrossSectPnt();
    virtual const CrossSectPntCollection& CrossSectPnt() const;
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
    
    virtual EnumSideofRoadType::Values getSide() const;
    virtual void setSide(EnumSideofRoadType::Values value);
    virtual bool hasValue_Side() const;
    virtual void resetValue_Side();
    
    virtual String getMaterial() const;
    virtual void setMaterial(String value);
    virtual bool hasValue_Material() const;
    virtual void resetValue_Material();
    
    virtual bool getClosedArea() const;
    virtual void setClosedArea(bool value);
    virtual bool hasValue_ClosedArea() const;
    virtual void resetValue_ClosedArea();
    
    virtual double getTypicalThickness() const;
    virtual void setTypicalThickness(double value);
    virtual bool hasValue_TypicalThickness() const;
    virtual void resetValue_TypicalThickness();
    
    virtual double getTypicalWidth() const;
    virtual void setTypicalWidth(double value);
    virtual bool hasValue_TypicalWidth() const;
    virtual void resetValue_TypicalWidth();
    
    virtual double getArea() const;
    virtual void setArea(double value);
    virtual bool hasValue_Area() const;
    virtual void resetValue_Area();
    
    virtual double getVolume() const;
    virtual void setVolume(double value);
    virtual bool hasValue_Volume() const;
    virtual void resetValue_Volume();
    

    virtual Object::ValidityEnum validate(IValidationEventSink *pEventSink) const;

protected:
    CrossSectPntCollection *m_CrossSectPnt;
    FeatureCollection *m_Feature;
    String m_Name;
    bool m_bName_valueSet;
    String m_Desc;
    bool m_bDesc_valueSet;
    EnumStateType::Values m_State;
    bool m_bState_valueSet;
    EnumSideofRoadType::Values m_Side;
    bool m_bSide_valueSet;
    String m_Material;
    bool m_bMaterial_valueSet;
    bool m_ClosedArea;
    bool m_bClosedArea_valueSet;
    double m_TypicalThickness;
    bool m_bTypicalThickness_valueSet;
    double m_TypicalWidth;
    bool m_bTypicalWidth_valueSet;
    double m_Area;
    bool m_bArea_valueSet;
    double m_Volume;
    bool m_bVolume_valueSet;
};
}; // namespace : LX
#endif
