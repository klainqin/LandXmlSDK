#if !defined(__SURFVOLUMESTMPL_H)
#define __SURFVOLUMESTMPL_H

#include "SurfVolumes.h"
#include "LXTypesTmpl.h"

namespace LX
{

class SurfVolumeCollection;
class FeatureCollection;

// Class : SurfVolumes
template<class T>
class SurfVolumesTmpl : public ObjectTmpl<T>, public IIdentifiable<String>
{

public:
	virtual void toXml (IStream& stream);
public:
	// Constructors
    SurfVolumesTmpl<T> (DocumentImpl* pDoc);

public:
	// Destructors
    virtual ~SurfVolumesTmpl ();
public:
	// Collections
    virtual SurfVolumeCollection& SurfVolume();
    virtual const SurfVolumeCollection& SurfVolume() const;
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
    
    virtual EnumSurfVolCMethodType::Values getSurfVolCalcMethod() const;
    virtual void setSurfVolCalcMethod(EnumSurfVolCMethodType::Values value);
    virtual bool hasValue_SurfVolCalcMethod() const;
    virtual void resetValue_SurfVolCalcMethod();
    

    virtual Object::ValidityEnum validate(IValidationEventSink *pEventSink) const;

protected:
    SurfVolumeCollection *m_SurfVolume;
    FeatureCollection *m_Feature;
    String m_Desc;
    bool m_bDesc_valueSet;
    String m_Name;
    bool m_bName_valueSet;
    EnumSurfVolCMethodType::Values m_SurfVolCalcMethod;
    bool m_bSurfVolCalcMethod_valueSet;
};
}; // namespace : LX
#endif
