#if !defined(__BEGINRUNOFFSTATMPL_H)
#define __BEGINRUNOFFSTATMPL_H

#include "BeginRunoffSta.h"
#include "LXTypesTmpl.h"

namespace LX
{


// Class : BeginRunoffSta
template<class T>
class BeginRunoffStaTmpl : public DoubleObjectTmpl<T>
{

public:
	virtual void toXml (IStream& stream);
public:
	// Constructors
    BeginRunoffStaTmpl (DocumentImpl* pDoc);

public:
	// Destructors
    virtual ~BeginRunoffStaTmpl ();
public:
	// Collections

public:
	// Properties


    virtual Object::ValidityEnum validate(IValidationEventSink *pEventSink) const;

protected:
};
}; // namespace : LX
#endif
