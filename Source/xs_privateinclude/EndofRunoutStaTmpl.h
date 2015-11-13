#if !defined(__ENDOFRUNOUTSTATMPL_H)
#define __ENDOFRUNOUTSTATMPL_H

#include "EndofRunoutSta.h"
#include "LXTypesTmpl.h"

namespace LX
{


// Class : EndofRunoutSta
template<class T>
class EndofRunoutStaTmpl : public DoubleObjectTmpl<T>
{

public:
	virtual void toXml (IStream& stream);
public:
	// Constructors
    EndofRunoutStaTmpl<T> (DocumentImpl* pDoc);

public:
	// Destructors
    virtual ~EndofRunoutStaTmpl ();
public:
	// Collections

public:
	// Properties


    virtual Object::ValidityEnum validate(IValidationEventSink *pEventSink) const;

protected:
};
}; // namespace : LX
#endif
