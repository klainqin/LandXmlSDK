#if !defined(__HEADOFPOWERTMPL_H)
#define __HEADOFPOWERTMPL_H

#include "HeadOfPower.h"
#include "LXTypesTmpl.h"

namespace LX
{


// Class : HeadOfPower
template<class T>
class HeadOfPowerTmpl : public ObjectTmpl<T>, public IIdentifiable<String>
{

public:
	virtual void toXml (IStream& stream);
public:
	// Constructors
    HeadOfPowerTmpl (DocumentImpl* pDoc);

public:
	// Destructors
    virtual ~HeadOfPowerTmpl ();
public:
	// Collections

    virtual bool getObjectId(const String*& pId) const;
    virtual ValueObject* id () const;
    
public:
	// Properties

    virtual String getName() const;
    virtual void setName(String value);
    virtual bool hasValue_Name() const;
    virtual void resetValue_Name();
    

    virtual Object::ValidityEnum validate(IValidationEventSink *pEventSink) const;

protected:
    String m_Name;
    bool m_bName_valueSet;
};
}; // namespace : LX
#endif
