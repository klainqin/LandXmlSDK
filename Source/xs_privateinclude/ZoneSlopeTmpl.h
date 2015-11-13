#if !defined(__ZONESLOPETMPL_H)
#define __ZONESLOPETMPL_H

#include "ZoneSlope.h"
#include "LXTypesTmpl.h"

namespace LX
{


// Class : ZoneSlope
template<class T>
class ZoneSlopeTmpl : public ObjectTmpl<T>
{

public:
	virtual void toXml (IStream& stream);
public:
	// Constructors
    ZoneSlopeTmpl<T> (DocumentImpl* pDoc);

public:
	// Destructors
    virtual ~ZoneSlopeTmpl ();
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
    
    virtual double getStartVertValue() const;
    virtual void setStartVertValue(double value);
    virtual bool hasValue_StartVertValue() const;
    virtual void resetValue_StartVertValue();
    
    virtual EnumZoneVertType::Values getStartVertType() const;
    virtual void setStartVertType(EnumZoneVertType::Values value);
    virtual bool hasValue_StartVertType() const;
    virtual void resetValue_StartVertType();
    
    virtual double getEndVertValue() const;
    virtual void setEndVertValue(double value);
    virtual bool hasValue_EndVertValue() const;
    virtual void resetValue_EndVertValue();
    
    virtual EnumZoneVertType::Values getEndVertType() const;
    virtual void setEndVertType(EnumZoneVertType::Values value);
    virtual bool hasValue_EndVertType() const;
    virtual void resetValue_EndVertType();
    
    virtual double getParabolicStartStation() const;
    virtual void setParabolicStartStation(double value);
    virtual bool hasValue_ParabolicStartStation() const;
    virtual void resetValue_ParabolicStartStation();
    
    virtual double getParabolicEndStation() const;
    virtual void setParabolicEndStation(double value);
    virtual bool hasValue_ParabolicEndStation() const;
    virtual void resetValue_ParabolicEndStation();
    

    virtual Object::ValidityEnum validate(IValidationEventSink *pEventSink) const;

protected:
    double m_StaStart;
    bool m_bStaStart_valueSet;
    double m_StaEnd;
    bool m_bStaEnd_valueSet;
    double m_StartVertValue;
    bool m_bStartVertValue_valueSet;
    EnumZoneVertType::Values m_StartVertType;
    bool m_bStartVertType_valueSet;
    double m_EndVertValue;
    bool m_bEndVertValue_valueSet;
    EnumZoneVertType::Values m_EndVertType;
    bool m_bEndVertType_valueSet;
    double m_ParabolicStartStation;
    bool m_bParabolicStartStation_valueSet;
    double m_ParabolicEndStation;
    bool m_bParabolicEndStation_valueSet;
};
}; // namespace : LX
#endif
