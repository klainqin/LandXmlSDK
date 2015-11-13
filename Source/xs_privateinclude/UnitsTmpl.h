#if !defined(__UNITSTMPL_H)
#define __UNITSTMPL_H

#include "Units.h"
#include "LXTypesTmpl.h"

namespace LX
{


// Class : Units
template<class T>
class UnitsTmpl : public ObjectTmpl<T>
{

public:
	// Classes

public:
	virtual void toXml (IStream& stream);
public:
	// Constructors
    UnitsTmpl<T> (DocumentImpl* pDoc);

public:
	// Destructors
    virtual ~UnitsTmpl ();
public:
	// Collections

public:
	// Properties
    virtual Object* getSelectedUnits() const;
    virtual void setSelectedUnits(Object* value);



    virtual Object::ValidityEnum validate(IValidationEventSink *pEventSink) const;

protected:
    Object *m_SelectedUnits;
};
}; // namespace : LX
#endif
