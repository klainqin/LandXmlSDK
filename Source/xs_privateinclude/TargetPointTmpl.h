#if !defined(__TARGETPOINTTMPL_H)
#define __TARGETPOINTTMPL_H

#include "TargetPoint.h"
#include "LXTypesTmpl.h"
#include "PointTypeImpl.h"

namespace LX
{


// Class : TargetPoint
template<class T>
class TargetPointTmpl : public PointTypeTmpl<T>
{

public:
	virtual void toXml (IStream& stream);
public:
	// Constructors
    TargetPointTmpl (DocumentImpl* pDoc);

public:
	// Destructors
    virtual ~TargetPointTmpl ();
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
