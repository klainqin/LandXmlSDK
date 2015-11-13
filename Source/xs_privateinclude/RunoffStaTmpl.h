#if !defined(__RUNOFFSTATMPL_H)
#define __RUNOFFSTATMPL_H

#include "RunoffSta.h"
#include "LXTypesTmpl.h"

namespace LX
{


// Class : RunoffSta
template<class T>
class RunoffStaTmpl : public DoubleObjectTmpl<T>
{

public:
	virtual void toXml (IStream& stream);
public:
	// Constructors
    RunoffStaTmpl<T> (DocumentImpl* pDoc);

public:
	// Destructors
    virtual ~RunoffStaTmpl ();
public:
	// Collections

public:
	// Properties


    virtual Object::ValidityEnum validate(IValidationEventSink *pEventSink) const;

protected:
};
}; // namespace : LX
#endif
