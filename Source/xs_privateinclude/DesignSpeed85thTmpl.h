#if !defined(__DESIGNSPEED85THTMPL_H)
#define __DESIGNSPEED85THTMPL_H

#include "DesignSpeed85th.h"
#include "LXTypesTmpl.h"

namespace LX
{

class FeatureCollection;

// Class : DesignSpeed85th
template<class T>
class DesignSpeed85thTmpl : public ObjectTmpl<T>
{

public:
	virtual void toXml (IStream& stream);
public:
	// Constructors
    DesignSpeed85thTmpl<T> (DocumentImpl* pDoc);

public:
	// Destructors
    virtual ~DesignSpeed85thTmpl ();
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
    
    virtual EnumSideofRoadType::Values getSideofRoad() const;
    virtual void setSideofRoad(EnumSideofRoadType::Values value);
    virtual bool hasValue_SideofRoad() const;
    virtual void resetValue_SideofRoad();
    
    virtual double getSpeed() const;
    virtual void setSpeed(double value);
    virtual bool hasValue_Speed() const;
    virtual void resetValue_Speed();
    

    virtual Object::ValidityEnum validate(IValidationEventSink *pEventSink) const;

protected:
    FeatureCollection *m_Feature;
    double m_StaStart;
    bool m_bStaStart_valueSet;
    double m_StaEnd;
    bool m_bStaEnd_valueSet;
    EnumSideofRoadType::Values m_SideofRoad;
    bool m_bSideofRoad_valueSet;
    double m_Speed;
    bool m_bSpeed_valueSet;
};
}; // namespace : LX
#endif
