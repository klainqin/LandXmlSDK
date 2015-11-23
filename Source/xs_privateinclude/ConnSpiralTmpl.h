#if !defined(__CONNSPIRALTMPL_H)
#define __CONNSPIRALTMPL_H

#include "ConnSpiral.h"
#include "LXTypesTmpl.h"

namespace LX
{

class Spiral;

// Class : ConnSpiral
template<class T>
class ConnSpiralTmpl : public ObjectTmpl<T>
{

public:
	virtual void toXml (IStream& stream);
public:
	// Constructors
    ConnSpiralTmpl (DocumentImpl* pDoc);

public:
	// Destructors
    virtual ~ConnSpiralTmpl ();
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
