#if !defined(__CONTROLCHECKSTMPL_H)
#define __CONTROLCHECKSTMPL_H

#include "ControlChecks.h"
#include "LXTypesTmpl.h"

namespace LX
{


// Class : ControlChecks
template<class T>
class ControlChecksTmpl : public ObjectTmpl<T>
{

public:
	virtual void toXml (IStream& stream);
public:
	// Constructors
    ControlChecksTmpl (DocumentImpl* pDoc);

public:
	// Destructors
    virtual ~ControlChecksTmpl ();
public:
	// Collections

public:
	// Properties


    virtual Object::ValidityEnum validate(IValidationEventSink *pEventSink) const;

protected:
};
}; // namespace : LX
#endif
