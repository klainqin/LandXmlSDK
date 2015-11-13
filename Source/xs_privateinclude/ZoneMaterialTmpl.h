#if !defined(__ZONEMATERIALTMPL_H)
#define __ZONEMATERIALTMPL_H

#include "ZoneMaterial.h"
#include "LXTypesTmpl.h"

namespace LX
{


// Class : ZoneMaterial
template<class T>
class ZoneMaterialTmpl : public ObjectTmpl<T>
{

public:
	virtual void toXml (IStream& stream);
public:
	// Constructors
    ZoneMaterialTmpl<T> (DocumentImpl* pDoc);

public:
	// Destructors
    virtual ~ZoneMaterialTmpl ();
public:
	// Collections

public:
	// Properties

    virtual double getStaStart() const;
    virtual void setStaStart(double value);
    virtual bool hasValue_StaStart() const;
    virtual void resetValue_StaStart();
    
    virtual double getStaEnd() const;
    virtual void setStaEnd(double value);
    virtual bool hasValue_StaEnd() const;
    virtual void resetValue_StaEnd();
    
    virtual EnumZoneMaterialType::Values getMaterial() const;
    virtual void setMaterial(EnumZoneMaterialType::Values value);
    virtual bool hasValue_Material() const;
    virtual void resetValue_Material();
    

    virtual Object::ValidityEnum validate(IValidationEventSink *pEventSink) const;

protected:
    double m_StaStart;
    bool m_bStaStart_valueSet;
    double m_StaEnd;
    bool m_bStaEnd_valueSet;
    EnumZoneMaterialType::Values m_Material;
    bool m_bMaterial_valueSet;
};
}; // namespace : LX
#endif
