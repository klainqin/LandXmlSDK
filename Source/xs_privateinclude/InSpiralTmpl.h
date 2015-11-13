#if !defined(__INSPIRALTMPL_H)
#define __INSPIRALTMPL_H

#include "InSpiral.h"
#include "LXTypesTmpl.h"

namespace LX
{

class Spiral;

// Class : InSpiral
template<class T>
class InSpiralTmpl : public ObjectTmpl<T>
{

public:
	virtual void toXml (IStream& stream);
public:
	// Constructors
    InSpiralTmpl<T> (DocumentImpl* pDoc);

public:
	// Destructors
    virtual ~InSpiralTmpl ();
public:
	// Collections

public:
	// Properties
    virtual Spiral* getSpiral() const;
    virtual void setSpiral(Spiral* value);



    virtual Object::ValidityEnum validate(IValidationEventSink *pEventSink) const;

protected:
    Spiral *m_Spiral;
};
}; // namespace : LX
#endif
