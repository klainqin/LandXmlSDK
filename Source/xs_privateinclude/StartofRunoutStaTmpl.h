#if !defined(__STARTOFRUNOUTSTATMPL_H)
#define __STARTOFRUNOUTSTATMPL_H

#include "StartofRunoutSta.h"
#include "LXTypesTmpl.h"

namespace LX
{


// Class : StartofRunoutSta
template<class T>
class StartofRunoutStaTmpl : public DoubleObjectTmpl<T>
{

public:
	virtual void toXml (IStream& stream);
public:
	// Constructors
    StartofRunoutStaTmpl<T> (DocumentImpl* pDoc);

public:
	// Destructors
    virtual ~StartofRunoutStaTmpl ();
public:
	// Collections

public:
	// Properties


    virtual Object::ValidityEnum validate(IValidationEventSink *pEventSink) const;

protected:
};
}; // namespace : LX
#endif
