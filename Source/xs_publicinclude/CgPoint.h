#if !defined(__CGPOINT_H)
#define __CGPOINT_H

#include "CgPoint.h"
#include "LXTypes.h"
#include "PointType.h"

namespace LX
{

class CgPoint;

// Class : CgPoint
class CgPoint : public PointType
{

public:
	virtual void toXml (IStream& stream) = 0;
public:
	// Collections

public:
	// Properties
    
    virtual String getOID() const = 0;
    virtual void setOID(String value) = 0;
    virtual bool hasValue_OID() const = 0;
    virtual void resetValue_OID() = 0;
    
    virtual String getSurveyOrder() const = 0;
    virtual void setSurveyOrder(String value) = 0;
    virtual bool hasValue_SurveyOrder() const = 0;
    virtual void resetValue_SurveyOrder() = 0;
    
    virtual EnumSurvPntType::Values getPntSurv() const = 0;
    virtual void setPntSurv(EnumSurvPntType::Values value) = 0;
    virtual bool hasValue_PntSurv() const = 0;
    virtual void resetValue_PntSurv() = 0;
    
    virtual unsigned int getZoneNumber() const = 0;
    virtual void setZoneNumber(unsigned int value) = 0;
    virtual bool hasValue_ZoneNumber() const = 0;
    virtual void resetValue_ZoneNumber() = 0;
    
    virtual String getSurveyHorizontalOrder() const = 0;
    virtual void setSurveyHorizontalOrder(String value) = 0;
    virtual bool hasValue_SurveyHorizontalOrder() const = 0;
    virtual void resetValue_SurveyHorizontalOrder() = 0;
    
    virtual String getSurveyVerticalOrder() const = 0;
    virtual void setSurveyVerticalOrder(String value) = 0;
    virtual bool hasValue_SurveyVerticalOrder() const = 0;
    virtual void resetValue_SurveyVerticalOrder() = 0;
    
    virtual double getLocalUncertainity() const = 0;
    virtual void setLocalUncertainity(double value) = 0;
    virtual bool hasValue_LocalUncertainity() const = 0;
    virtual void resetValue_LocalUncertainity() = 0;
    
    virtual double getPositionalUncertainity() const = 0;
    virtual void setPositionalUncertainity(double value) = 0;
    virtual bool hasValue_PositionalUncertainity() const = 0;
    virtual void resetValue_PositionalUncertainity() = 0;
    
    
public:
	// Resolvers
    virtual CgPoint* resolvePntRef() = 0;
    virtual const DoubleCollection& resolveCoor() const = 0;
protected:
};
}; // namespace : LX
#endif
