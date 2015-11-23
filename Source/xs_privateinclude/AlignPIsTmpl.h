#if !defined(__ALIGNPISTMPL_H)
#define __ALIGNPISTMPL_H

#include "AlignPIs.h"
#include "LXTypesTmpl.h"

namespace LX
{

class AlignPICollection;

// Class : AlignPIs
template<class T>
class AlignPIsTmpl : public ObjectTmpl<T>
{

public:
	virtual void toXml (IStream& stream);
public:
	// Constructors
    AlignPIsTmpl (DocumentImpl* pDoc);

public:
	// Destructors
    virtual ~AlignPIsTmpl ();
public:
	// Collections
    virtual AlignPICollection& AlignPI();
    virtual const AlignPICollection& AlignPI() const;

public:
	// Properties


    virtual Object::ValidityEnum validate(IValidationEventSink *pEventSink) const;

protected:
    AlignPICollection *m_AlignPI;
};
}; // namespace : LX
#endif
