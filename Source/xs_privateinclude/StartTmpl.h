#if !defined(__STARTTMPL_H)
#define __STARTTMPL_H

#include "Start.h"
#include "LXTypesTmpl.h"
#include "PointTypeImpl.h"

namespace LX
{

class CgPoint;

// Class : Start
template<class T>
class StartTmpl : public PointTypeTmpl<T>
{

public:
	virtual void toXml (IStream& stream);
public:
	// Constructors
    StartTmpl<T> (DocumentImpl* pDoc);

public:
	// Destructors
    virtual ~StartTmpl ();
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
