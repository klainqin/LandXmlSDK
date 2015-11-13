#if !defined(__FIELDNOTETMPL_H)
#define __FIELDNOTETMPL_H

#include "FieldNote.h"
#include "LXTypesTmpl.h"

namespace LX
{


// Class : FieldNote
template<class T>
class FieldNoteTmpl : public StringObjectTmpl<T>
{

public:
	virtual void toXml (IStream& stream);
public:
	// Constructors
    FieldNoteTmpl<T> (DocumentImpl* pDoc);

public:
	// Destructors
    virtual ~FieldNoteTmpl ();
public:
	// Collections

public:
	// Properties


    virtual Object::ValidityEnum validate(IValidationEventSink *pEventSink) const;

protected:
};
}; // namespace : LX
#endif
