#if !defined(__STRUCTSTMPL_H)
#define __STRUCTSTMPL_H

#include "Structs.h"
#include "LXTypesTmpl.h"

namespace LX
{

class Units;
class StructCollection;
class FeatureCollection;

// Class : Structs
template<class T>
class StructsTmpl : public ObjectTmpl<T>
{

public:
	virtual void toXml (IStream& stream);
public:
	// Constructors
    StructsTmpl<T> (DocumentImpl* pDoc);

public:
	// Destructors
    virtual ~StructsTmpl ();
public:
	// Collections
    virtual StructCollection& Struct();
    virtual const StructCollection& Struct() const;
    virtual FeatureCollection& Feature();
    virtual const FeatureCollection& Feature() const;

public:
	// Properties
    virtual Units* getUnits() const;
    virtual void setUnits(Units* value);



    virtual Object::ValidityEnum validate(IValidationEventSink *pEventSink) const;

protected:
    Units *m_Units;
    StructCollection *m_Struct;
    FeatureCollection *m_Feature;
};
}; // namespace : LX
#endif
