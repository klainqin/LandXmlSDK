#if !defined(__BOUNDARIESTMPL_H)
#define __BOUNDARIESTMPL_H

#include "Boundaries.h"
#include "LXTypesTmpl.h"

namespace LX
{

class BoundaryCollection;
class FeatureCollection;

// Class : Boundaries
template<class T>
class BoundariesTmpl : public ObjectTmpl<T>
{

public:
	virtual void toXml (IStream& stream);
public:
	// Constructors
    BoundariesTmpl (DocumentImpl* pDoc);

public:
	// Destructors
    virtual ~BoundariesTmpl ();
public:
	// Collections
    virtual BoundaryCollection& Boundary();
    virtual const BoundaryCollection& Boundary() const;
    virtual FeatureCollection& Feature();
    virtual const FeatureCollection& Feature() const;

public:
	// Properties


    virtual Object::ValidityEnum validate(IValidationEventSink *pEventSink) const;

protected:
    BoundaryCollection *m_Boundary;
    FeatureCollection *m_Feature;
};
}; // namespace : LX
#endif
