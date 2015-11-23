#if !defined(__ALIGNPITMPL_H)
#define __ALIGNPITMPL_H

#include "AlignPI.h"
#include "LXTypesTmpl.h"

namespace LX
{


// Class : AlignPI
template<class T>
class AlignPITmpl : public ObjectTmpl<T>
{

public:
	// Classes

public:
	virtual void toXml (IStream& stream);
public:
	// Constructors
    AlignPITmpl (DocumentImpl* pDoc);

public:
	// Destructors
    virtual ~AlignPITmpl ();
public:
	// Collections
    virtual ObjectCollection& PIList();
    virtual const ObjectCollection& PIList() const;

public:
	// Properties


    virtual Object::ValidityEnum validate(IValidationEventSink *pEventSink) const;

protected:
    ObjectCollection *m_PIList;
};
}; // namespace : LX
#endif
