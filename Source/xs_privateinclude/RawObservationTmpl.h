#if !defined(__RAWOBSERVATIONTMPL_H)
#define __RAWOBSERVATIONTMPL_H

#include "RawObservation.h"
#include "LXTypesTmpl.h"
#include "RawObservationTypeImpl.h"

namespace LX
{


// Class : RawObservation
template<class T>
class RawObservationTmpl : public RawObservationTypeTmpl<T>
{

public:
	virtual void toXml (IStream& stream);
public:
	// Constructors
    RawObservationTmpl (DocumentImpl* pDoc);

public:
	// Destructors
    virtual ~RawObservationTmpl ();
public:
	// Collections

public:
	// Properties


    virtual Object::ValidityEnum validate(IValidationEventSink *pEventSink) const;

protected:
};
}; // namespace : LX
#endif
