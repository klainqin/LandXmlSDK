#if !defined(__INLETSTRUCTTMPL_H)
#define __INLETSTRUCTTMPL_H

#include "InletStruct.h"
#include "LXTypesTmpl.h"

namespace LX
{

class FeatureCollection;

// Class : InletStruct
template<class T>
class InletStructTmpl : public ObjectTmpl<T>
{

public:
	virtual void toXml (IStream& stream);
public:
	// Constructors
    InletStructTmpl (DocumentImpl* pDoc);

public:
	// Destructors
    virtual ~InletStructTmpl ();
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
