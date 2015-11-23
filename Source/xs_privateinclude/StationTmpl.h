#if !defined(__STATIONTMPL_H)
#define __STATIONTMPL_H

#include "Station.h"
#include "LXTypesTmpl.h"

namespace LX
{


// Class : Station
template<class T>
class StationTmpl : public DoubleObjectTmpl<T>
{

public:
	virtual void toXml (IStream& stream);
public:
	// Constructors
    StationTmpl (DocumentImpl* pDoc);

public:
	// Destructors
    virtual ~StationTmpl ();
public:
	// Collections

public:
	// Properties


    virtual Object::ValidityEnum validate(IValidationEventSink *pEventSink) const;

protected:
};
}; // namespace : LX
#endif
