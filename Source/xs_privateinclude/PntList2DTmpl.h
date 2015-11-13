#if !defined(__PNTLIST2DTMPL_H)
#define __PNTLIST2DTMPL_H

#include "PntList2D.h"
#include "LXTypesTmpl.h"

namespace LX
{


// Class : PntList2D
template<class T>
class PntList2DTmpl : public DoubleCollectionTmpl<T>
{

public:
	virtual void toXml (IStream& stream);
public:
	// Constructors
    PntList2DTmpl<T> (DocumentImpl* pDoc);

public:
	// Destructors
    virtual ~PntList2DTmpl ();
public:
	// Collections

public:
	// Properties


    virtual Object::ValidityEnum validate(IValidationEventSink *pEventSink) const;

protected:
};
}; // namespace : LX
#endif
