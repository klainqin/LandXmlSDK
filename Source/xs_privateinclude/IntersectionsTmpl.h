#if !defined(__INTERSECTIONSTMPL_H)
#define __INTERSECTIONSTMPL_H

#include "Intersections.h"
#include "LXTypesTmpl.h"

namespace LX
{


// Class : Intersections
template<class T>
class IntersectionsTmpl : public ObjectTmpl<T>
{

public:
	virtual void toXml (IStream& stream);
public:
	// Constructors
    IntersectionsTmpl<T> (DocumentImpl* pDoc);

public:
	// Destructors
    virtual ~IntersectionsTmpl ();
public:
	// Collections

public:
	// Properties


    virtual Object::ValidityEnum validate(IValidationEventSink *pEventSink) const;

protected:
};
}; // namespace : LX
#endif
