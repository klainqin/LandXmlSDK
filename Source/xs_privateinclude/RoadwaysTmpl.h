#if !defined(__ROADWAYSTMPL_H)
#define __ROADWAYSTMPL_H

#include "Roadways.h"
#include "LXTypesTmpl.h"

namespace LX
{

class RoadwayCollection;
class IntersectionsCollection;
class FeatureCollection;

// Class : Roadways
template<class T>
class RoadwaysTmpl : public ObjectTmpl<T>, public IIdentifiable<String>
{

public:
	virtual void toXml (IStream& stream);
public:
	// Constructors
    RoadwaysTmpl (DocumentImpl* pDoc);

public:
	// Destructors
    virtual ~RoadwaysTmpl ();
public:
	// Collections
    virtual RoadwayCollection& Roadway();
    virtual const RoadwayCollection& Roadway() const;
    virtual IntersectionsCollection& Intersections();
    virtual const IntersectionsCollection& Intersections() const;
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
    

    virtual Object::ValidityEnum validate(IValidationEventSink *pEventSink) const;

protected:
    RoadwayCollection *m_Roadway;
    IntersectionsCollection *m_Intersections;
    FeatureCollection *m_Feature;
    String m_Name;
    bool m_bName_valueSet;
    String m_Desc;
    bool m_bDesc_valueSet;
    EnumStateType::Values m_State;
    bool m_bState_valueSet;
};
}; // namespace : LX
#endif
