#if !defined(__CGPOINTTMPL_H)
#define __CGPOINTTMPL_H

#include "CgPoint.h"
#include "LXTypesTmpl.h"
#include "PointTypeImpl.h"

namespace LX
{

class CgPoint;

// Class : CgPoint
template<class T>
class CgPointTmpl : public PointTypeTmpl<T>
{

public:
	virtual void toXml (IStream& stream);
public:
	// Constructors
    CgPointTmpl (DocumentImpl* pDoc);

public:
	// Destructors
    virtual ~CgPointTmpl ();
public:
	// Collections

    virtual bool getObjectId(const String*& pId) const;
    virtual ValueObject* id () const;
    
public:
	// Properties

    virtual String getOID() const;
    virtual void setOID(String value);
    virtual bool hasValue_OID() const;
    virtual void resetValue_OID();
    
    virtual String getSurveyOrder() const;
    virtual void setSurveyOrder(String value);
    virtual bool hasValue_SurveyOrder() const;
    virtual void resetValue_SurveyOrder();
    
    virtual EnumSurvPntType::Values getPntSurv() const;
    virtual void setPntSurv(EnumSurvPntType::Values value);
    virtual bool hasValue_PntSurv() const;
    virtual void resetValue_PntSurv();
    
    virtual unsigned int getZoneNumber() const;
    virtual void setZoneNumber(unsigned int value);
    virtual bool hasValue_ZoneNumber() const;
    virtual void resetValue_ZoneNumber();
    
    virtual String getSurveyHorizontalOrder() const;
    virtual void setSurveyHorizontalOrder(String value);
    virtual bool hasValue_SurveyHorizontalOrder() const;
    virtual void resetValue_SurveyHorizontalOrder();
    
    virtual String getSurveyVerticalOrder() const;
    virtual void setSurveyVerticalOrder(String value);
    virtual bool hasValue_SurveyVerticalOrder() const;
    virtual void resetValue_SurveyVerticalOrder();
    
    virtual double getLocalUncertainity() const;
    virtual void setLocalUncertainity(double value);
    virtual bool hasValue_LocalUncertainity() const;
    virtual void resetValue_LocalUncertainity();
    
    virtual double getPositionalUncertainity() const;
    virtual void setPositionalUncertainity(double value);
    virtual bool hasValue_PositionalUncertainity() const;
    virtual void resetValue_PositionalUncertainity();
    

public:
	// Resolvers
    virtual CgPoint* resolvePntRef();
    virtual const DoubleCollection& resolveCoor() const;
    virtual Object::ValidityEnum validate(IValidationEventSink *pEventSink) const;

protected:
    String m_OID;
    bool m_bOID_valueSet;
    String m_SurveyOrder;
    bool m_bSurveyOrder_valueSet;
    EnumSurvPntType::Values m_PntSurv;
    bool m_bPntSurv_valueSet;
    unsigned int m_ZoneNumber;
    bool m_bZoneNumber_valueSet;
    String m_SurveyHorizontalOrder;
    bool m_bSurveyHorizontalOrder_valueSet;
    String m_SurveyVerticalOrder;
    bool m_bSurveyVerticalOrder_valueSet;
    double m_LocalUncertainity;
    bool m_bLocalUncertainity_valueSet;
    double m_PositionalUncertainity;
    bool m_bPositionalUncertainity_valueSet;
};
}; // namespace : LX
#endif
