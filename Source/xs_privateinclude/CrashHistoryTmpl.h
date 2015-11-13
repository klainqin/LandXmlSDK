#if !defined(__CRASHHISTORYTMPL_H)
#define __CRASHHISTORYTMPL_H

#include "CrashHistory.h"
#include "LXTypesTmpl.h"

namespace LX
{


// Class : CrashHistory
template<class T>
class CrashHistoryTmpl : public ObjectTmpl<T>
{

public:
	virtual void toXml (IStream& stream);
public:
	// Constructors
    CrashHistoryTmpl<T> (DocumentImpl* pDoc);

public:
	// Destructors
    virtual ~CrashHistoryTmpl ();
public:
	// Collections

public:
	// Properties

    virtual String getYear() const;
    virtual void setYear(String value);
    virtual bool hasValue_Year() const;
    virtual void resetValue_Year();
    
    virtual double getLocation_1() const;
    virtual void setLocation_1(double value);
    virtual bool hasValue_Location_1() const;
    virtual void resetValue_Location_1();
    
    virtual double getLocation_2() const;
    virtual void setLocation_2(double value);
    virtual bool hasValue_Location_2() const;
    virtual void resetValue_Location_2();
    
    virtual EnumCrashSeverityType::Values getSeverity() const;
    virtual void setSeverity(EnumCrashSeverityType::Values value);
    virtual bool hasValue_Severity() const;
    virtual void resetValue_Severity();
    
    virtual EnumCrashIntersectionRelation::Values getIntersectionRelation() const;
    virtual void setIntersectionRelation(EnumCrashIntersectionRelation::Values value);
    virtual bool hasValue_IntersectionRelation() const;
    virtual void resetValue_IntersectionRelation();
    
    virtual double getIntersectionLocation() const;
    virtual void setIntersectionLocation(double value);
    virtual bool hasValue_IntersectionLocation() const;
    virtual void resetValue_IntersectionLocation();
    

    virtual Object::ValidityEnum validate(IValidationEventSink *pEventSink) const;

protected:
    String m_Year;
    bool m_bYear_valueSet;
    double m_Location_1;
    bool m_bLocation_1_valueSet;
    double m_Location_2;
    bool m_bLocation_2_valueSet;
    EnumCrashSeverityType::Values m_Severity;
    bool m_bSeverity_valueSet;
    EnumCrashIntersectionRelation::Values m_IntersectionRelation;
    bool m_bIntersectionRelation_valueSet;
    double m_IntersectionLocation;
    bool m_bIntersectionLocation_valueSet;
};
}; // namespace : LX
#endif
