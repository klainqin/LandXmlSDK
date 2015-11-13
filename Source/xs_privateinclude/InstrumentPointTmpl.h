#if !defined(__INSTRUMENTPOINTTMPL_H)
#define __INSTRUMENTPOINTTMPL_H

#include "InstrumentPoint.h"
#include "LXTypesTmpl.h"
#include "PointTypeImpl.h"

namespace LX
{


// Class : InstrumentPoint
template<class T>
class InstrumentPointTmpl : public PointTypeTmpl<T>
{

public:
	virtual void toXml (IStream& stream);
public:
	// Constructors
    InstrumentPointTmpl<T> (DocumentImpl* pDoc);

public:
	// Destructors
    virtual ~InstrumentPointTmpl ();
public:
	// Collections

    virtual bool getObjectId(const String*& pId) const;
    virtual ValueObject* id () const;
    
public:
	// Properties


    virtual Object::ValidityEnum validate(IValidationEventSink *pEventSink) const;

protected:
};
}; // namespace : LX
#endif