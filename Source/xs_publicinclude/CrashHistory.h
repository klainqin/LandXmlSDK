#if !defined(__CRASHHISTORY_H)
#define __CRASHHISTORY_H

#include "CrashHistory.h"
#include "LXTypes.h"

namespace LX
{


// Class : CrashHistory
class CrashHistory : public Object
{

public:
	virtual void toXml (IStream& stream) = 0;
public:
	// Collections

public:
	// Properties
    
    virtual String getYear() const = 0;
    virtual void setYear(String value) = 0;
    virtual bool hasValue_Year() const = 0;
    virtual void resetValue_Year() = 0;
    
    virtual double getLocation_1() const = 0;
    virtual void setLocation_1(double value) = 0;
    virtual bool hasValue_Location_1() const = 0;
    virtual void resetValue_Location_1() = 0;
    
    virtual double getLocation_2() const = 0;
    virtual void setLocation_2(double value) = 0;
    virtual bool hasValue_Location_2() const = 0;
    virtual void resetValue_Location_2() = 0;
    
    virtual EnumCrashSeverityType::Values getSeverity() const = 0;
    virtual void setSeverity(EnumCrashSeverityType::Values value) = 0;
    virtual bool hasValue_Severity() const = 0;
    virtual void resetValue_Severity() = 0;
    
    virtual EnumCrashIntersectionRelation::Values getIntersectionRelation() const = 0;
    virtual void setIntersectionRelation(EnumCrashIntersectionRelation::Values value) = 0;
    virtual bool hasValue_IntersectionRelation() const = 0;
    virtual void resetValue_IntersectionRelation() = 0;
    
    virtual double getIntersectionLocation() const = 0;
    virtual void setIntersectionLocation(double value) = 0;
    virtual bool hasValue_IntersectionLocation() const = 0;
    virtual void resetValue_IntersectionLocation() = 0;
    
    
protected:
};
}; // namespace : LX
#endif
