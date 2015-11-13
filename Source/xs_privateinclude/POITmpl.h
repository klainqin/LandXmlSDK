#if !defined(__POITMPL_H)
#define __POITMPL_H

#include "POI.h"
#include "LXTypesTmpl.h"
#include "PointTypeImpl.h"

namespace LX
{

class CgPoint;

// Class : POI
template<class T>
class POITmpl : public PointTypeTmpl<T>
{

public:
	virtual void toXml (IStream& stream);
public:
	// Constructors
    POITmpl<T> (DocumentImpl* pDoc);

public:
	// Destructors
    virtual ~POITmpl ();
public:
	// Collections

    virtual bool getObjectId(const String*& pId) const;
    virtual ValueObject* id () const;
    
public:
	// Properties


public:
	// Resolvers
    virtual CgPoint* resolvePntRef();
    virtual const DoubleCollection& resolveCoor() const;
    virtual Object::ValidityEnum validate(IValidationEventSink *pEventSink) const;

protected:
};
}; // namespace : LX
#endif
