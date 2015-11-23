#if !defined(__BEGINRUNOUTSTATMPL_H)
#define __BEGINRUNOUTSTATMPL_H

#include "BeginRunoutSta.h"
#include "LXTypesTmpl.h"

namespace LX
{


// Class : BeginRunoutSta
template<class T>
class BeginRunoutStaTmpl : public DoubleObjectTmpl<T>
{

public:
	virtual void toXml (IStream& stream);
public:
	// Constructors
    BeginRunoutStaTmpl (DocumentImpl* pDoc);

public:
	// Destructors
    virtual ~BeginRunoutStaTmpl ();
public:
	// Collections

public:
	// Properties


    virtual Object::ValidityEnum validate(IValidationEventSink *pEventSink) const;

protected:
};
}; // namespace : LX
#endif
