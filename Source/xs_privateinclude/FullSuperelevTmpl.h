#if !defined(__FULLSUPERELEVTMPL_H)
#define __FULLSUPERELEVTMPL_H

#include "FullSuperelev.h"
#include "LXTypesTmpl.h"

namespace LX
{


// Class : FullSuperelev
template<class T>
class FullSuperelevTmpl : public DoubleObjectTmpl<T>
{

public:
	virtual void toXml (IStream& stream);
public:
	// Constructors
    FullSuperelevTmpl<T> (DocumentImpl* pDoc);

public:
	// Destructors
    virtual ~FullSuperelevTmpl ();
public:
	// Collections

public:
	// Properties


    virtual Object::ValidityEnum validate(IValidationEventSink *pEventSink) const;

protected:
};
}; // namespace : LX
#endif
