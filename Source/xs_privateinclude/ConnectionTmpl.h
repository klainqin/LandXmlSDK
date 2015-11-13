#if !defined(__CONNECTIONTMPL_H)
#define __CONNECTIONTMPL_H

#include "Connection.h"
#include "LXTypesTmpl.h"

namespace LX
{

class FeatureCollection;

// Class : Connection
template<class T>
class ConnectionTmpl : public ObjectTmpl<T>
{

public:
	virtual void toXml (IStream& stream);
public:
	// Constructors
    ConnectionTmpl<T> (DocumentImpl* pDoc);

public:
	// Destructors
    virtual ~ConnectionTmpl ();
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
