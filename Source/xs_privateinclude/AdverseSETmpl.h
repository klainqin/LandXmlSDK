#if !defined(__ADVERSESETMPL_H)
#define __ADVERSESETMPL_H

#include "AdverseSE.h"
#include "LXTypesTmpl.h"

namespace LX
{


// Class : AdverseSE
template<class T>
class AdverseSETmpl : public EnumAdverseSETypeTmpl<T>
{

public:
	virtual void toXml (IStream& stream);
public:
	// Constructors
    AdverseSETmpl<T> (DocumentImpl* pDoc);

public:
	// Destructors
    virtual ~AdverseSETmpl ();
public:
	// Collections

public:
	// Properties


    virtual Object::ValidityEnum validate(IValidationEventSink *pEventSink) const;

protected:
};
}; // namespace : LX
#endif
