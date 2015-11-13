#if !defined(__BREAKLINESTMPL_H)
#define __BREAKLINESTMPL_H

#include "Breaklines.h"
#include "LXTypesTmpl.h"

namespace LX
{

class BreaklineCollection;
class RetWallCollection;
class FeatureCollection;

// Class : Breaklines
template<class T>
class BreaklinesTmpl : public ObjectTmpl<T>
{

public:
	virtual void toXml (IStream& stream);
public:
	// Constructors
    BreaklinesTmpl<T> (DocumentImpl* pDoc);

public:
	// Destructors
    virtual ~BreaklinesTmpl ();
public:
	// Collections
    virtual BreaklineCollection& Breakline();
    virtual const BreaklineCollection& Breakline() const;
    virtual RetWallCollection& RetWall();
    virtual const RetWallCollection& RetWall() const;
    virtual FeatureCollection& Feature();
    virtual const FeatureCollection& Feature() const;

public:
	// Properties


    virtual Object::ValidityEnum validate(IValidationEventSink *pEventSink) const;

protected:
    BreaklineCollection *m_Breakline;
    RetWallCollection *m_RetWall;
    FeatureCollection *m_Feature;
};
}; // namespace : LX
#endif
