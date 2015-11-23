#if !defined(__FULLSUPERSTATMPL_H)
#define __FULLSUPERSTATMPL_H

#include "FullSuperSta.h"
#include "LXTypesTmpl.h"

namespace LX
{


// Class : FullSuperSta
template<class T>
class FullSuperStaTmpl : public DoubleObjectTmpl<T>
{

public:
	virtual void toXml (IStream& stream);
public:
	// Constructors
    FullSuperStaTmpl (DocumentImpl* pDoc);

public:
	// Destructors
    virtual ~FullSuperStaTmpl ();
public:
	// Collections

public:
	// Properties


    virtual Object::ValidityEnum validate(IValidationEventSink *pEventSink) const;

protected:
};
}; // namespace : LX
#endif
