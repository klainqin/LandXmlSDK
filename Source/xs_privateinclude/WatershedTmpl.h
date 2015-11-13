#if !defined(__WATERSHEDTMPL_H)
#define __WATERSHEDTMPL_H

#include "Watershed.h"
#include "LXTypesTmpl.h"

namespace LX
{

class OutletCollection;
class FeatureCollection;

// Class : Watershed
template<class T>
class WatershedTmpl : public ObjectTmpl<T>, public IIdentifiable<String>
{

public:
	// Classes

public:
	virtual void toXml (IStream& stream);
public:
	// Constructors
    WatershedTmpl<T> (DocumentImpl* pDoc);

public:
	// Destructors
    virtual ~WatershedTmpl ();
public:
	// Collections
    virtual OutletCollection& Outlet();
    virtual const OutletCollection& Outlet() const;
    virtual FeatureCollection& Feature();
    virtual const FeatureCollection& Feature() const;

    virtual bool getObjectId(const String*& pId) const;
    virtual ValueObject* id () const;
    
public:
	// Properties
    virtual Object* getPntList() const;
    virtual void setPntList(Object* value);


    virtual String getName() const;
    virtual void setName(String value);
    virtual bool hasValue_Name() const;
    virtual void resetValue_Name();
    
    virtual double getArea() const;
    virtual void setArea(double value);
    virtual bool hasValue_Area() const;
    virtual void resetValue_Area();
    
    virtual String getDesc() const;
    virtual void setDesc(String value);
    virtual bool hasValue_Desc() const;
    virtual void resetValue_Desc();
    

    virtual Object::ValidityEnum validate(IValidationEventSink *pEventSink) const;

protected:
    Object *m_PntList;
    OutletCollection *m_Outlet;
    FeatureCollection *m_Feature;
    String m_Name;
    bool m_bName_valueSet;
    double m_Area;
    bool m_bArea_valueSet;
    String m_Desc;
    bool m_bDesc_valueSet;
};
}; // namespace : LX
#endif
