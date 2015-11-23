#if !defined(__PARACURVETMPL_H)
#define __PARACURVETMPL_H

#include "ParaCurve.h"
#include "LXTypesTmpl.h"

namespace LX
{


// Class : ParaCurve
template<class T>
class ParaCurveTmpl : public DoubleCollectionTmpl<T>
{

public:
	virtual void toXml (IStream& stream);
public:
	// Constructors
    ParaCurveTmpl (DocumentImpl* pDoc);

public:
	// Destructors
    virtual ~ParaCurveTmpl ();
public:
	// Collections

public:
	// Properties

    virtual double getLength() const;
    virtual void setLength(double value);
    virtual bool hasValue_Length() const;
    virtual void resetValue_Length();
    
    virtual String getDesc() const;
    virtual void setDesc(String value);
    virtual bool hasValue_Desc() const;
    virtual void resetValue_Desc();
    

    virtual Object::ValidityEnum validate(IValidationEventSink *pEventSink) const;

protected:
    double m_Length;
    bool m_bLength_valueSet;
    String m_Desc;
    bool m_bDesc_valueSet;
};
}; // namespace : LX
#endif
