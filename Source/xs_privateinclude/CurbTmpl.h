#if !defined(__CURBTMPL_H)
#define __CURBTMPL_H

#include "Curb.h"
#include "LXTypesTmpl.h"

namespace LX
{


// Class : Curb
template<class T>
class CurbTmpl : public ObjectTmpl<T>
{

public:
	virtual void toXml (IStream& stream);
public:
	// Constructors
    CurbTmpl (DocumentImpl* pDoc);

public:
	// Destructors
    virtual ~CurbTmpl ();
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
    
    virtual EnumCurbType::Values getType() const;
    virtual void setType(EnumCurbType::Values value);
    virtual bool hasValue_Type() const;
    virtual void resetValue_Type();
    

    virtual Object::ValidityEnum validate(IValidationEventSink *pEventSink) const;

protected:
    double m_StaStart;
    bool m_bStaStart_valueSet;
    double m_StaEnd;
    bool m_bStaEnd_valueSet;
    EnumSideofRoadType::Values m_SideofRoad;
    bool m_bSideofRoad_valueSet;
    EnumCurbType::Values m_Type;
    bool m_bType_valueSet;
};
}; // namespace : LX
#endif
