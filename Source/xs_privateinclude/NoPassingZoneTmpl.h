#if !defined(__NOPASSINGZONETMPL_H)
#define __NOPASSINGZONETMPL_H

#include "NoPassingZone.h"
#include "LXTypesTmpl.h"

namespace LX
{


// Class : NoPassingZone
template<class T>
class NoPassingZoneTmpl : public ObjectTmpl<T>
{

public:
	virtual void toXml (IStream& stream);
public:
	// Constructors
    NoPassingZoneTmpl<T> (DocumentImpl* pDoc);

public:
	// Destructors
    virtual ~NoPassingZoneTmpl ();
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
    
    virtual EnumSideofRoadType::Values getSideofRoad() const;
    virtual void setSideofRoad(EnumSideofRoadType::Values value);
    virtual bool hasValue_SideofRoad() const;
    virtual void resetValue_SideofRoad();
    

    virtual Object::ValidityEnum validate(IValidationEventSink *pEventSink) const;

protected:
    double m_StaStart;
    bool m_bStaStart_valueSet;
    double m_StaEnd;
    bool m_bStaEnd_valueSet;
    EnumSideofRoadType::Values m_SideofRoad;
    bool m_bSideofRoad_valueSet;
};
}; // namespace : LX
#endif
