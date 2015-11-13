#if !defined(__CRASHDATATMPL_H)
#define __CRASHDATATMPL_H

#include "CrashData.h"
#include "LXTypesTmpl.h"

namespace LX
{


// Class : CrashData
template<class T>
class CrashDataTmpl : public ObjectTmpl<T>
{

public:
	virtual void toXml (IStream& stream);
public:
	// Constructors
    CrashDataTmpl<T> (DocumentImpl* pDoc);

public:
	// Destructors
    virtual ~CrashDataTmpl ();
public:
	// Collections

public:
	// Properties


    virtual Object::ValidityEnum validate(IValidationEventSink *pEventSink) const;

protected:
};
}; // namespace : LX
#endif
