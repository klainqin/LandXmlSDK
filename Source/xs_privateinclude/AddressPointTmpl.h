#if !defined(__ADDRESSPOINTTMPL_H)
#define __ADDRESSPOINTTMPL_H

#include "AddressPoint.h"
#include "LXTypesTmpl.h"
#include "PointTypeImpl.h"

namespace LX
{


// Class : AddressPoint
template<class T>
class AddressPointTmpl : public PointTypeTmpl<T>
{

public:
	virtual void toXml (IStream& stream);
public:
	// Constructors
    AddressPointTmpl<T> (DocumentImpl* pDoc);

public:
	// Destructors
    virtual ~AddressPointTmpl ();
public:
	// Collections

    virtual bool getObjectId(const String*& pId) const;
    virtual ValueObject* id () const;
    
public:
	// Properties

    virtual String getAddressPointType() const;
    virtual void setAddressPointType(String value);
    virtual bool hasValue_AddressPointType() const;
    virtual void resetValue_AddressPointType();
    

    virtual Object::ValidityEnum validate(IValidationEventSink *pEventSink) const;

protected:
    String m_AddressPointType;
    bool m_bAddressPointType_valueSet;
};
}; // namespace : LX
#endif
