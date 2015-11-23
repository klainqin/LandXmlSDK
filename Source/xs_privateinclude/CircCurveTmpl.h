#if !defined(__CIRCCURVETMPL_H)
#define __CIRCCURVETMPL_H

#include "CircCurve.h"
#include "LXTypesTmpl.h"

namespace LX
{


// Class : CircCurve
template<class T>
class CircCurveTmpl : public DoubleCollectionTmpl<T>
{

public:
	virtual void toXml (IStream& stream);
public:
	// Constructors
    CircCurveTmpl (DocumentImpl* pDoc);

public:
	// Destructors
    virtual ~CircCurveTmpl ();
public:
	// Collections

public:
	// Properties

    virtual double getLength() const;
    virtual void setLength(double value);
    virtual bool hasValue_Length() const;
    virtual void resetValue_Length();
    
    virtual double getRadius() const;
    virtual void setRadius(double value);
    virtual bool hasValue_Radius() const;
    virtual void resetValue_Radius();
    
    virtual String getDesc() const;
    virtual void setDesc(String value);
    virtual bool hasValue_Desc() const;
    virtual void resetValue_Desc();
    

    virtual Object::ValidityEnum validate(IValidationEventSink *pEventSink) const;

protected:
    double m_Length;
    bool m_bLength_valueSet;
    double m_Radius;
    bool m_bRadius_valueSet;
    String m_Desc;
    bool m_bDesc_valueSet;
};
}; // namespace : LX
#endif
