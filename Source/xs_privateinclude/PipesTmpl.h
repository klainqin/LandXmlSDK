#if !defined(__PIPESTMPL_H)
#define __PIPESTMPL_H

#include "Pipes.h"
#include "LXTypesTmpl.h"

namespace LX
{

class Units;
class PipeCollection;
class FeatureCollection;

// Class : Pipes
template<class T>
class PipesTmpl : public ObjectTmpl<T>
{

public:
	virtual void toXml (IStream& stream);
public:
	// Constructors
    PipesTmpl<T> (DocumentImpl* pDoc);

public:
	// Destructors
    virtual ~PipesTmpl ();
public:
	// Collections
    virtual PipeCollection& Pipe();
    virtual const PipeCollection& Pipe() const;
    virtual FeatureCollection& Feature();
    virtual const FeatureCollection& Feature() const;

public:
	// Properties
    virtual Units* getUnits() const;
    virtual void setUnits(Units* value);



    virtual Object::ValidityEnum validate(IValidationEventSink *pEventSink) const;

protected:
    Units *m_Units;
    PipeCollection *m_Pipe;
    FeatureCollection *m_Feature;
};
}; // namespace : LX
#endif
