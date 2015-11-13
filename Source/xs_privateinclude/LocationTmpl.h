#if !defined(__LOCATIONTMPL_H)
#define __LOCATIONTMPL_H

#include "Location.h"
#include "LXTypesTmpl.h"
#include "PointTypeImpl.h"

namespace LX
{


// Class : Location
template<class T>
class LocationTmpl : public PointTypeTmpl<T>
{

public:
	virtual void toXml (IStream& stream);
public:
	// Constructors
    LocationTmpl<T> (DocumentImpl* pDoc);

public:
	// Destructors
    virtual ~LocationTmpl ();
public:
	// Collections

    virtual bool getObjectId(const String*& pId) const;
    virtual ValueObject* id () const;
    
public:
	// Properties


    virtual Object::ValidityEnum validate(IValidationEventSink *pEventSink) const;

protected:
};
}; // namespace : LX
#endif
