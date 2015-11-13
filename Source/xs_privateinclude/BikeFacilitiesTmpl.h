#if !defined(__BIKEFACILITIESTMPL_H)
#define __BIKEFACILITIESTMPL_H

#include "BikeFacilities.h"
#include "LXTypesTmpl.h"

namespace LX
{


// Class : BikeFacilities
template<class T>
class BikeFacilitiesTmpl : public ObjectTmpl<T>
{

public:
	virtual void toXml (IStream& stream);
public:
	// Constructors
    BikeFacilitiesTmpl<T> (DocumentImpl* pDoc);

public:
	// Destructors
    virtual ~BikeFacilitiesTmpl ();
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
