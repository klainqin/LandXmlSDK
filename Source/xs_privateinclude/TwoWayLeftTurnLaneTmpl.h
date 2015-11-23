#if !defined(__TWOWAYLEFTTURNLANETMPL_H)
#define __TWOWAYLEFTTURNLANETMPL_H

#include "TwoWayLeftTurnLane.h"
#include "LXTypesTmpl.h"

namespace LX
{


// Class : TwoWayLeftTurnLane
template<class T>
class TwoWayLeftTurnLaneTmpl : public ObjectTmpl<T>
{

public:
	virtual void toXml (IStream& stream);
public:
	// Constructors
    TwoWayLeftTurnLaneTmpl (DocumentImpl* pDoc);

public:
	// Destructors
    virtual ~TwoWayLeftTurnLaneTmpl ();
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
    
    virtual double getBeginFullWidthSta() const;
    virtual void setBeginFullWidthSta(double value);
    virtual bool hasValue_BeginFullWidthSta() const;
    virtual void resetValue_BeginFullWidthSta();
    
    virtual double getEndFullWidthSta() const;
    virtual void setEndFullWidthSta(double value);
    virtual bool hasValue_EndFullWidthSta() const;
    virtual void resetValue_EndFullWidthSta();
    
    virtual double getStartOffset() const;
    virtual void setStartOffset(double value);
    virtual bool hasValue_StartOffset() const;
    virtual void resetValue_StartOffset();
    
    virtual double getEndOffset() const;
    virtual void setEndOffset(double value);
    virtual bool hasValue_EndOffset() const;
    virtual void resetValue_EndOffset();
    
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
    double m_BeginFullWidthSta;
    bool m_bBeginFullWidthSta_valueSet;
    double m_EndFullWidthSta;
    bool m_bEndFullWidthSta_valueSet;
    double m_StartOffset;
    bool m_bStartOffset_valueSet;
    double m_EndOffset;
    bool m_bEndOffset_valueSet;
    double m_Width;
    bool m_bWidth_valueSet;
    EnumSideofRoadType::Values m_SideofRoad;
    bool m_bSideofRoad_valueSet;
};
}; // namespace : LX
#endif
