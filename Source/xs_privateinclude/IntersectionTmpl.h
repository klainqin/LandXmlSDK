#if !defined(__INTERSECTIONTMPL_H)
#define __INTERSECTIONTMPL_H

#include "Intersection.h"
#include "LXTypesTmpl.h"

namespace LX
{


// Class : Intersection
template<class T>
class IntersectionTmpl : public ObjectTmpl<T>
{

public:
	virtual void toXml (IStream& stream);
public:
	// Constructors
    IntersectionTmpl<T> (DocumentImpl* pDoc);

public:
	// Destructors
    virtual ~IntersectionTmpl ();
public:
	// Collections

public:
	// Properties

    virtual String getRoadwayRef() const;
    virtual void setRoadwayRef(String value);
    virtual bool hasValue_RoadwayRef() const;
    virtual void resetValue_RoadwayRef();
    
    virtual double getRoadwayPI() const;
    virtual void setRoadwayPI(double value);
    virtual bool hasValue_RoadwayPI() const;
    virtual void resetValue_RoadwayPI();
    
    virtual String getIntersectingRoadwayRef() const;
    virtual void setIntersectingRoadwayRef(String value);
    virtual bool hasValue_IntersectingRoadwayRef() const;
    virtual void resetValue_IntersectingRoadwayRef();
    
    virtual double getIntersectRoadwayPI() const;
    virtual void setIntersectRoadwayPI(double value);
    virtual bool hasValue_IntersectRoadwayPI() const;
    virtual void resetValue_IntersectRoadwayPI();
    
    virtual EnumIntersectionConstructionType::Values getContructionType() const;
    virtual void setContructionType(EnumIntersectionConstructionType::Values value);
    virtual bool hasValue_ContructionType() const;
    virtual void resetValue_ContructionType();
    

    virtual Object::ValidityEnum validate(IValidationEventSink *pEventSink) const;

protected:
    String m_RoadwayRef;
    bool m_bRoadwayRef_valueSet;
    double m_RoadwayPI;
    bool m_bRoadwayPI_valueSet;
    String m_IntersectingRoadwayRef;
    bool m_bIntersectingRoadwayRef_valueSet;
    double m_IntersectRoadwayPI;
    bool m_bIntersectRoadwayPI_valueSet;
    EnumIntersectionConstructionType::Values m_ContructionType;
    bool m_bContructionType_valueSet;
};
}; // namespace : LX
#endif
