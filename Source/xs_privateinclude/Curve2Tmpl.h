#if !defined(__CURVE2TMPL_H)
#define __CURVE2TMPL_H

#include "Curve2.h"
#include "LXTypesTmpl.h"

namespace LX
{

class Curve;

// Class : Curve2
template<class T>
class Curve2Tmpl : public ObjectTmpl<T>
{

public:
	virtual void toXml (IStream& stream);
public:
	// Constructors
    Curve2Tmpl<T> (DocumentImpl* pDoc);

public:
	// Destructors
    virtual ~Curve2Tmpl ();
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
