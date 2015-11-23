#if !defined(__BACKSIGHTPOINTTMPL_H)
#define __BACKSIGHTPOINTTMPL_H

#include "BacksightPoint.h"
#include "LXTypesTmpl.h"
#include "PointTypeImpl.h"

namespace LX
{


// Class : BacksightPoint
template<class T>
class BacksightPointTmpl : public PointTypeTmpl<T>
{

public:
	virtual void toXml (IStream& stream);
public:
	// Constructors
    BacksightPointTmpl (DocumentImpl* pDoc);

public:
	// Destructors
    virtual ~BacksightPointTmpl ();
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
