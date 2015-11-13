#if !defined(__OBSTRUCTIONOFFSETTMPL_H)
#define __OBSTRUCTIONOFFSETTMPL_H

#include "ObstructionOffset.h"
#include "LXTypesTmpl.h"

namespace LX
{


// Class : ObstructionOffset
template<class T>
class ObstructionOffsetTmpl : public ObjectTmpl<T>
{

public:
	virtual void toXml (IStream& stream);
public:
	// Constructors
    ObstructionOffsetTmpl<T> (DocumentImpl* pDoc);

public:
	// Destructors
    virtual ~ObstructionOffsetTmpl ();
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
    
    virtual double getOffset() const;
    virtual void setOffset(double value);
    virtual bool hasValue_Offset() const;
    virtual void resetValue_Offset();
    
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
    double m_Offset;
    bool m_bOffset_valueSet;
    EnumSideofRoadType::Values m_SideofRoad;
    bool m_bSideofRoad_valueSet;
};
}; // namespace : LX
#endif
