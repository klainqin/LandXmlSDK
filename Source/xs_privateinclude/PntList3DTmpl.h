#if !defined(__PNTLIST3DTMPL_H)
#define __PNTLIST3DTMPL_H

#include "PntList3D.h"
#include "LXTypesTmpl.h"

namespace LX
{


// Class : PntList3D
template<class T>
class PntList3DTmpl : public DoubleCollectionTmpl<T>
{

public:
	virtual void toXml (IStream& stream);
public:
	// Constructors
    PntList3DTmpl<T> (DocumentImpl* pDoc);

public:
	// Destructors
    virtual ~PntList3DTmpl ();
public:
	// Collections

public:
	// Properties


    virtual Object::ValidityEnum validate(IValidationEventSink *pEventSink) const;

protected:
};
}; // namespace : LX
#endif
