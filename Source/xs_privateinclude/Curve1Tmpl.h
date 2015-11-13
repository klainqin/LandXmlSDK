#if !defined(__CURVE1TMPL_H)
#define __CURVE1TMPL_H

#include "Curve1.h"
#include "LXTypesTmpl.h"

namespace LX
{

class Curve;

// Class : Curve1
template<class T>
class Curve1Tmpl : public ObjectTmpl<T>
{

public:
	virtual void toXml (IStream& stream);
public:
	// Constructors
    Curve1Tmpl<T> (DocumentImpl* pDoc);

public:
	// Destructors
    virtual ~Curve1Tmpl ();
public:
	// Collections

public:
	// Properties
    virtual Curve* getCurve() const;
    virtual void setCurve(Curve* value);



    virtual Object::ValidityEnum validate(IValidationEventSink *pEventSink) const;

protected:
    Curve *m_Curve;
};
}; // namespace : LX
#endif
