#if !defined(__CONTOURSTMPL_H)
#define __CONTOURSTMPL_H

#include "Contours.h"
#include "LXTypesTmpl.h"

namespace LX
{

class ContourCollection;
class FeatureCollection;

// Class : Contours
template<class T>
class ContoursTmpl : public ObjectTmpl<T>
{

public:
	virtual void toXml (IStream& stream);
public:
	// Constructors
    ContoursTmpl (DocumentImpl* pDoc);

public:
	// Destructors
    virtual ~ContoursTmpl ();
public:
	// Collections
    virtual ContourCollection& Contour();
    virtual const ContourCollection& Contour() const;
    virtual FeatureCollection& Feature();
    virtual const FeatureCollection& Feature() const;

public:
	// Properties


    virtual Object::ValidityEnum validate(IValidationEventSink *pEventSink) const;

protected:
    ContourCollection *m_Contour;
    FeatureCollection *m_Feature;
};
}; // namespace : LX
#endif
