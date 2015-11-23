#if !defined(__ENDTMPL_H)
#define __ENDTMPL_H

#include "End.h"
#include "LXTypesTmpl.h"
#include "PointTypeImpl.h"

namespace LX
{

class CgPoint;

// Class : End
template<class T>
class EndTmpl : public PointTypeTmpl<T>
{

public:
	virtual void toXml (IStream& stream);
public:
	// Constructors
    EndTmpl (DocumentImpl* pDoc);

public:
	// Destructors
    virtual ~EndTmpl ();
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
