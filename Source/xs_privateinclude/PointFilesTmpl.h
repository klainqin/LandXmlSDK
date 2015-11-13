#if !defined(__POINTFILESTMPL_H)
#define __POINTFILESTMPL_H

#include "PointFiles.h"
#include "LXTypesTmpl.h"

namespace LX
{

class PointFileCollection;
class FeatureCollection;

// Class : PointFiles
template<class T>
class PointFilesTmpl : public ObjectTmpl<T>
{

public:
	virtual void toXml (IStream& stream);
public:
	// Constructors
    PointFilesTmpl<T> (DocumentImpl* pDoc);

public:
	// Destructors
    virtual ~PointFilesTmpl ();
public:
	// Collections
    virtual PointFileCollection& PointFile();
    virtual const PointFileCollection& PointFile() const;
    virtual FeatureCollection& Feature();
    virtual const FeatureCollection& Feature() const;

public:
	// Properties


    virtual Object::ValidityEnum validate(IValidationEventSink *pEventSink) const;

protected:
    PointFileCollection *m_PointFile;
    FeatureCollection *m_Feature;
};
}; // namespace : LX
#endif
