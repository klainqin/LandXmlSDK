#if !defined(__THRULANETMPL_H)
#define __THRULANETMPL_H

#include "ThruLane.h"
#include "LXTypesTmpl.h"

namespace LX
{

class FeatureCollection;

// Class : ThruLane
template<class T>
class ThruLaneTmpl : public ObjectTmpl<T>
{

public:
	virtual void toXml (IStream& stream);
public:
	// Constructors
    ThruLaneTmpl (DocumentImpl* pDoc);

public:
	// Destructors
    virtual ~ThruLaneTmpl ();
public:
	// Collections
    virtual FeatureCollection& Feature();
    virtual const FeatureCollection& Feature() const;

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
    
    virtual double getWidth() const;
    virtual void setWidth(double value);
    virtual bool hasValue_Width() const;
    virtual void resetValue_Width();
    
    virtual EnumSideofRoadType::Values getSideofRoad() const;
    virtual void setSideofRoad(EnumSideofRoadType::Values value);
    virtual bool hasValue_SideofRoad() const;
    virtual void resetValue_SideofRoad();
    

    virtual Object::ValidityEnum validate(IValidationEventSink *pEventSink) const;

protected:
    FeatureCollection *m_Feature;
    double m_StaStart;
    bool m_bStaStart_valueSet;
    double m_StaEnd;
    bool m_bStaEnd_valueSet;
    double m_Width;
    bool m_bWidth_valueSet;
    EnumSideofRoadType::Values m_SideofRoad;
    bool m_bSideofRoad_valueSet;
};
}; // namespace : LX
#endif
