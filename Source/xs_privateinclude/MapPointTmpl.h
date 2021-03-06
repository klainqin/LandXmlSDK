#if !defined(__MAPPOINTTMPL_H)
#define __MAPPOINTTMPL_H

#include "MapPoint.h"
#include "LXTypesTmpl.h"
#include "PointTypeImpl.h"

namespace LX
{


// Class : MapPoint
template<class T>
class MapPointTmpl : public PointTypeTmpl<T>
{

public:
	virtual void toXml (IStream& stream);
public:
	// Constructors
    MapPointTmpl (DocumentImpl* pDoc);

public:
	// Destructors
    virtual ~MapPointTmpl ();
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
