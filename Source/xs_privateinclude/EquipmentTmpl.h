#if !defined(__EQUIPMENTTMPL_H)
#define __EQUIPMENTTMPL_H

#include "Equipment.h"
#include "LXTypesTmpl.h"

namespace LX
{


// Class : Equipment
template<class T>
class EquipmentTmpl : public ObjectTmpl<T>
{

public:
	// Classes

public:
	virtual void toXml (IStream& stream);
public:
	// Constructors
    EquipmentTmpl<T> (DocumentImpl* pDoc);

public:
	// Destructors
    virtual ~EquipmentTmpl ();
public:
	// Collections

public:
	// Properties
    virtual Object* getEquipmentDetails() const;
    virtual void setEquipmentDetails(Object* value);



    virtual Object::ValidityEnum validate(IValidationEventSink *pEventSink) const;

protected:
    Object *m_EquipmentDetails;
};
}; // namespace : LX
#endif
