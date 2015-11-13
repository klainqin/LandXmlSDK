#if !defined(__SURFVOLUMETMPL_H)
#define __SURFVOLUMETMPL_H

#include "SurfVolume.h"
#include "LXTypesTmpl.h"

namespace LX
{

class FeatureCollection;

// Class : SurfVolume
template<class T>
class SurfVolumeTmpl : public ObjectTmpl<T>, public IIdentifiable<String>
{

public:
	virtual void toXml (IStream& stream);
public:
	// Constructors
    SurfVolumeTmpl<T> (DocumentImpl* pDoc);

public:
	// Destructors
    virtual ~SurfVolumeTmpl ();
public:
	// Collections
    virtual FeatureCollection& Feature();
    virtual const FeatureCollection& Feature() const;

    virtual bool getObjectId(const String*& pId) const;
    virtual ValueObject* id () const;
    
public:
	// Properties

    virtual String getSurfBase() const;
    virtual void setSurfBase(String value);
    virtual bool hasValue_SurfBase() const;
    virtual void resetValue_SurfBase();
    
    virtual String getSurfCompare() const;
    virtual void setSurfCompare(String value);
    virtual bool hasValue_SurfCompare() const;
    virtual void resetValue_SurfCompare();
    
    virtual double getVolCut() const;
    virtual void setVolCut(double value);
    virtual bool hasValue_VolCut() const;
    virtual void resetValue_VolCut();
    
    virtual double getVolFill() const;
    virtual void setVolFill(double value);
    virtual bool hasValue_VolFill() const;
    virtual void resetValue_VolFill();
    
    virtual double getVolTotal() const;
    virtual void setVolTotal(double value);
    virtual bool hasValue_VolTotal() const;
    virtual void resetValue_VolTotal();
    
    virtual String getDesc() const;
    virtual void setDesc(String value);
    virtual bool hasValue_Desc() const;
    virtual void resetValue_Desc();
    
    virtual String getName() const;
    virtual void setName(String value);
    virtual bool hasValue_Name() const;
    virtual void resetValue_Name();
    

    virtual Object::ValidityEnum validate(IValidationEventSink *pEventSink) const;

protected:
    FeatureCollection *m_Feature;
    String m_SurfBase;
    bool m_bSurfBase_valueSet;
    String m_SurfCompare;
    bool m_bSurfCompare_valueSet;
    double m_VolCut;
    bool m_bVolCut_valueSet;
    double m_VolFill;
    bool m_bVolFill_valueSet;
    double m_VolTotal;
    bool m_bVolTotal_valueSet;
    String m_Desc;
    bool m_bDesc_valueSet;
    String m_Name;
    bool m_bName_valueSet;
};
}; // namespace : LX
#endif
