#if !defined(__OUTSPIRALTMPL_H)
#define __OUTSPIRALTMPL_H

#include "OutSpiral.h"
#include "LXTypesTmpl.h"

namespace LX
{

class Spiral;

// Class : OutSpiral
template<class T>
class OutSpiralTmpl : public ObjectTmpl<T>
{

public:
	virtual void toXml (IStream& stream);
public:
	// Constructors
    OutSpiralTmpl (DocumentImpl* pDoc);

public:
	// Destructors
    virtual ~OutSpiralTmpl ();
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
