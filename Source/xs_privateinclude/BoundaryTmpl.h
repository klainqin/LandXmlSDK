#if !defined(__BOUNDARYTMPL_H)
#define __BOUNDARYTMPL_H

#include "Boundary.h"
#include "LXTypesTmpl.h"

namespace LX
{

class FeatureCollection;

// Class : Boundary
template<class T>
class BoundaryTmpl : public ObjectTmpl<T>, public IIdentifiable<String>
{

public:
	// Classes

public:
	virtual void toXml (IStream& stream);
public:
	// Constructors
    BoundaryTmpl<T> (DocumentImpl* pDoc);

public:
	// Destructors
    virtual ~BoundaryTmpl ();
public:
	// Collections
    virtual FeatureCollection& Feature();
    virtual const FeatureCollection& Feature() const;

    virtual bool getObjectId(const String*& pId) const;
    virtual ValueObject* id () const;
    
public:
	// Properties
    virtual Object* getPntList() const;
    virtual void setPntList(Object* value);


    virtual EnumSurfBndType::Values getBndType() const;
    virtual void setBndType(EnumSurfBndType::Values value);
    virtual bool hasValue_BndType() const;
    virtual void resetValue_BndType();
    
    virtual bool getEdgeTrim() const;
    virtual void setEdgeTrim(bool value);
    virtual bool hasValue_EdgeTrim() const;
    virtual void resetValue_EdgeTrim();
    
    virtual double getArea() const;
    virtual void setArea(double value);
    virtual bool hasValue_Area() const;
    virtual void resetValue_Area();
    
    virtual String getDesc() const;
    virtual void setDesc(String value);
    virtual bool hasValue_Desc() const;
    virtual void resetValue_Desc();
    
    virtual String getName() const;
    virtual void setName(String value);
    virtual bool hasValue_Name() const;
    virtual void resetValue_Name();
    
    virtual EnumStateType::Values getState() const;
    virtual void setState(EnumStateType::Values value);
    virtual bool hasValue_State() const;
    virtual void resetValue_State();
    

    virtual Object::ValidityEnum validate(IValidationEventSink *pEventSink) const;

protected:
    Object *m_PntList;
    FeatureCollection *m_Feature;
    EnumSurfBndType::Values m_BndType;
    bool m_bBndType_valueSet;
    bool m_EdgeTrim;
    bool m_bEdgeTrim_valueSet;
    double m_Area;
    bool m_bArea_valueSet;
    String m_Desc;
    bool m_bDesc_valueSet;
    String m_Name;
    bool m_bName_valueSet;
    EnumStateType::Values m_State;
    bool m_bState_valueSet;
};
}; // namespace : LX
#endif
