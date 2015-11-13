#if !defined(__WATERSHEDSTMPL_H)
#define __WATERSHEDSTMPL_H

#include "Watersheds.h"
#include "LXTypesTmpl.h"

namespace LX
{

class WatershedCollection;
class FeatureCollection;

// Class : Watersheds
template<class T>
class WatershedsTmpl : public ObjectTmpl<T>
{

public:
	virtual void toXml (IStream& stream);
public:
	// Constructors
    WatershedsTmpl<T> (DocumentImpl* pDoc);

public:
	// Destructors
    virtual ~WatershedsTmpl ();
public:
	// Collections
    virtual WatershedCollection& Watershed();
    virtual const WatershedCollection& Watershed() const;
    virtual FeatureCollection& Feature();
    virtual const FeatureCollection& Feature() const;

public:
	// Properties


    virtual Object::ValidityEnum validate(IValidationEventSink *pEventSink) const;

protected:
    WatershedCollection *m_Watershed;
    FeatureCollection *m_Feature;
};
}; // namespace : LX
#endif
