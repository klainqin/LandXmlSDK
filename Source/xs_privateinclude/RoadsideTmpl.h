#if !defined(__ROADSIDETMPL_H)
#define __ROADSIDETMPL_H

#include "Roadside.h"
#include "LXTypesTmpl.h"

namespace LX
{


// Class : Roadside
template<class T>
class RoadsideTmpl : public ObjectTmpl<T>
{

public:
	virtual void toXml (IStream& stream);
public:
	// Constructors
    RoadsideTmpl<T> (DocumentImpl* pDoc);

public:
	// Destructors
    virtual ~RoadsideTmpl ();
public:
	// Collections

public:
	// Properties


    virtual Object::ValidityEnum validate(IValidationEventSink *pEventSink) const;

protected:
};
}; // namespace : LX
#endif
