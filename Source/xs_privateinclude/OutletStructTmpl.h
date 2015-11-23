#if !defined(__OUTLETSTRUCTTMPL_H)
#define __OUTLETSTRUCTTMPL_H

#include "OutletStruct.h"
#include "LXTypesTmpl.h"

namespace LX
{

class FeatureCollection;

// Class : OutletStruct
template<class T>
class OutletStructTmpl : public ObjectTmpl<T>
{

public:
	virtual void toXml (IStream& stream);
public:
	// Constructors
    OutletStructTmpl (DocumentImpl* pDoc);

public:
	// Destructors
    virtual ~OutletStructTmpl ();
public:
	// Collections
    virtual FeatureCollection& Feature();
    virtual const FeatureCollection& Feature() const;

public:
	// Properties


    virtual Object::ValidityEnum validate(IValidationEventSink *pEventSink) const;

protected:
    FeatureCollection *m_Feature;
};
}; // namespace : LX
#endif
