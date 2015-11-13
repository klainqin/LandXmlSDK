#if !defined(__TURNLANETMPL_H)
#define __TURNLANETMPL_H

#include "TurnLane.h"
#include "LXTypesTmpl.h"

namespace LX
{


// Class : TurnLane
template<class T>
class TurnLaneTmpl : public ObjectTmpl<T>
{

public:
	virtual void toXml (IStream& stream);
public:
	// Constructors
    TurnLaneTmpl<T> (DocumentImpl* pDoc);

public:
	// Destructors
    virtual ~TurnLaneTmpl ();
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
    
    virtual double getWidth() const;
    virtual void setWidth(double value);
    virtual bool hasValue_Width() const;
    virtual void resetValue_Width();
    
    virtual EnumSideofRoadType::Values getSideofRoad() const;
    virtual void setSideofRoad(EnumSideofRoadType::Values value);
    virtual bool hasValue_SideofRoad() const;
    virtual void resetValue_SideofRoad();
    
    virtual EnumTurnLaneType::Values getType() const;
    virtual void setType(EnumTurnLaneType::Values value);
    virtual bool hasValue_Type() const;
    virtual void resetValue_Type();
    
    virtual EnumLaneTaperType::Values getTaperType() const;
    virtual void setTaperType(EnumLaneTaperType::Values value);
    virtual bool hasValue_TaperType() const;
    virtual void resetValue_TaperType();
    
    virtual double getTaperTangentLength() const;
    virtual void setTaperTangentLength(double value);
    virtual bool hasValue_TaperTangentLength() const;
    virtual void resetValue_TaperTangentLength();
    

    virtual Object::ValidityEnum validate(IValidationEventSink *pEventSink) const;

protected:
    double m_StaStart;
    bool m_bStaStart_valueSet;
    double m_StaEnd;
    bool m_bStaEnd_valueSet;
    double m_BeginFullWidthSta;
    bool m_bBeginFullWidthSta_valueSet;
    double m_Width;
    bool m_bWidth_valueSet;
    EnumSideofRoadType::Values m_SideofRoad;
    bool m_bSideofRoad_valueSet;
    EnumTurnLaneType::Values m_Type;
    bool m_bType_valueSet;
    EnumLaneTaperType::Values m_TaperType;
    bool m_bTaperType_valueSet;
    double m_TaperTangentLength;
    bool m_bTaperTangentLength_valueSet;
};
}; // namespace : LX
#endif
