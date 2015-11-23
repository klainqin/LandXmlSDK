#if !defined(__CROSSSECTTMPL_H)
#define __CROSSSECTTMPL_H

#include "CrossSect.h"
#include "LXTypesTmpl.h"

namespace LX
{

class CrossSectSurfCollection;
class DesignCrossSectSurfCollection;
class FeatureCollection;

// Class : CrossSect
template<class T>
class CrossSectTmpl : public ObjectTmpl<T>, public IIdentifiable<String>
{

public:
	virtual void toXml (IStream& stream);
public:
	// Constructors
    CrossSectTmpl (DocumentImpl* pDoc);

public:
	// Destructors
    virtual ~CrossSectTmpl ();
public:
	// Collections
    virtual CrossSectSurfCollection& CrossSectSurf();
    virtual const CrossSectSurfCollection& CrossSectSurf() const;
    virtual DesignCrossSectSurfCollection& DesignCrossSectSurf();
    virtual const DesignCrossSectSurfCollection& DesignCrossSectSurf() const;
    virtual FeatureCollection& Feature();
    virtual const FeatureCollection& Feature() const;

    virtual bool getObjectId(const String*& pId) const;
    virtual ValueObject* id () const;
    
public:
	// Properties

    virtual double getSta() const;
    virtual void setSta(double value);
    virtual bool hasValue_Sta() const;
    virtual void resetValue_Sta();
    
    virtual String getName() const;
    virtual void setName(String value);
    virtual bool hasValue_Name() const;
    virtual void resetValue_Name();
    
    virtual String getDesc() const;
    virtual void setDesc(String value);
    virtual bool hasValue_Desc() const;
    virtual void resetValue_Desc();
    
    virtual double getAngleSkew() const;
    virtual void setAngleSkew(double value);
    virtual bool hasValue_AngleSkew() const;
    virtual void resetValue_AngleSkew();
    
    virtual double getAreaCut() const;
    virtual void setAreaCut(double value);
    virtual bool hasValue_AreaCut() const;
    virtual void resetValue_AreaCut();
    
    virtual double getAreaFill() const;
    virtual void setAreaFill(double value);
    virtual bool hasValue_AreaFill() const;
    virtual void resetValue_AreaFill();
    
    virtual double getCentroidCut() const;
    virtual void setCentroidCut(double value);
    virtual bool hasValue_CentroidCut() const;
    virtual void resetValue_CentroidCut();
    
    virtual double getCentroidFill() const;
    virtual void setCentroidFill(double value);
    virtual bool hasValue_CentroidFill() const;
    virtual void resetValue_CentroidFill();
    
    virtual String getSectType() const;
    virtual void setSectType(String value);
    virtual bool hasValue_SectType() const;
    virtual void resetValue_SectType();
    
    virtual double getVolumeCut() const;
    virtual void setVolumeCut(double value);
    virtual bool hasValue_VolumeCut() const;
    virtual void resetValue_VolumeCut();
    
    virtual double getVolumeFill() const;
    virtual void setVolumeFill(double value);
    virtual bool hasValue_VolumeFill() const;
    virtual void resetValue_VolumeFill();
    

    virtual Object::ValidityEnum validate(IValidationEventSink *pEventSink) const;

protected:
    CrossSectSurfCollection *m_CrossSectSurf;
    DesignCrossSectSurfCollection *m_DesignCrossSectSurf;
    FeatureCollection *m_Feature;
    double m_Sta;
    bool m_bSta_valueSet;
    String m_Name;
    bool m_bName_valueSet;
    String m_Desc;
    bool m_bDesc_valueSet;
    double m_AngleSkew;
    bool m_bAngleSkew_valueSet;
    double m_AreaCut;
    bool m_bAreaCut_valueSet;
    double m_AreaFill;
    bool m_bAreaFill_valueSet;
    double m_CentroidCut;
    bool m_bCentroidCut_valueSet;
    double m_CentroidFill;
    bool m_bCentroidFill_valueSet;
    String m_SectType;
    bool m_bSectType_valueSet;
    double m_VolumeCut;
    bool m_bVolumeCut_valueSet;
    double m_VolumeFill;
    bool m_bVolumeFill_valueSet;
};
}; // namespace : LX
#endif
