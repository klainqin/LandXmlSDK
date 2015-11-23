#if !defined(__PNTSTMPL_H)
#define __PNTSTMPL_H

#include "Pnts.h"
#include "LXTypesTmpl.h"

namespace LX
{

class PCollection;

// Class : Pnts
template<class T>
class PntsTmpl : public ObjectTmpl<T>
{

public:
	virtual void toXml (IStream& stream);
public:
	// Constructors
    PntsTmpl (DocumentImpl* pDoc);

public:
	// Destructors
    virtual ~PntsTmpl ();
public:
	// Collections
    virtual PCollection& P();
    virtual const PCollection& P() const;

public:
	// Properties


    virtual Object::ValidityEnum validate(IValidationEventSink *pEventSink) const;

protected:
    PCollection *m_P;
};
}; // namespace : LX
#endif
