#if !defined(__EXCLUSIONSTMPL_H)
#define __EXCLUSIONSTMPL_H

#include "Exclusions.h"
#include "LXTypesTmpl.h"

namespace LX
{


// Class : Exclusions
template<class T>
class ExclusionsTmpl : public ObjectTmpl<T>
{

public:
	virtual void toXml (IStream& stream);
public:
	// Constructors
    ExclusionsTmpl (DocumentImpl* pDoc);

public:
	// Destructors
    virtual ~ExclusionsTmpl ();
public:
	// Collections

public:
	// Properties

    virtual String getExclusionType() const;
    virtual void setExclusionType(String value);
    virtual bool hasValue_ExclusionType() const;
    virtual void resetValue_ExclusionType();
    
    virtual double getArea() const;
    virtual void setArea(double value);
    virtual bool hasValue_Area() const;
    virtual void resetValue_Area();
    

    virtual Object::ValidityEnum validate(IValidationEventSink *pEventSink) const;

protected:
    String m_ExclusionType;
    bool m_bExclusionType_valueSet;
    double m_Area;
    bool m_bArea_valueSet;
};
}; // namespace : LX
#endif
