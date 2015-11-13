#if !defined(__CENTERTMPL_H)
#define __CENTERTMPL_H

#include "Center.h"
#include "LXTypesTmpl.h"
#include "PointTypeImpl.h"

namespace LX
{

class CgPoint;

// Class : Center
template<class T>
class CenterTmpl : public PointTypeTmpl<T>
{

public:
	virtual void toXml (IStream& stream);
public:
	// Constructors
    CenterTmpl<T> (DocumentImpl* pDoc);

public:
	// Destructors
    virtual ~CenterTmpl ();
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
