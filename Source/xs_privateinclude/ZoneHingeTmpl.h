#if !defined(__ZONEHINGETMPL_H)
#define __ZONEHINGETMPL_H

#include "ZoneHinge.h"
#include "LXTypesTmpl.h"

namespace LX
{

class FeatureCollection;

// Class : ZoneHinge
template<class T>
class ZoneHingeTmpl : public ObjectTmpl<T>
{

public:
	virtual void toXml (IStream& stream);
public:
	// Constructors
    ZoneHingeTmpl<T> (DocumentImpl* pDoc);

public:
	// Destructors
    virtual ~ZoneHingeTmpl ();
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
    
    virtual EnumZoneHingeType::Values getHingeType() const;
    virtual void setHingeType(EnumZoneHingeType::Values value);
    virtual bool hasValue_HingeType() const;
    virtual void resetValue_HingeType();
    
    virtual int getZonePriorityRef() const;
    virtual void setZonePriorityRef(int value);
    virtual bool hasValue_ZonePriorityRef() const;
    virtual void resetValue_ZonePriorityRef();
    

    virtual Object::ValidityEnum validate(IValidationEventSink *pEventSink) const;

protected:
    FeatureCollection *m_Feature;
    double m_StaStart;
    bool m_bStaStart_valueSet;
    double m_StaEnd;
    bool m_bStaEnd_valueSet;
    EnumZoneHingeType::Values m_HingeType;
    bool m_bHingeType_valueSet;
    int m_ZonePriorityRef;
    bool m_bZonePriorityRef_valueSet;
};
}; // namespace : LX
#endif
