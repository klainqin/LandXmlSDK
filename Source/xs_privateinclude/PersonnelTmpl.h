#if !defined(__PERSONNELTMPL_H)
#define __PERSONNELTMPL_H

#include "Personnel.h"
#include "LXTypesTmpl.h"

namespace LX
{


// Class : Personnel
template<class T>
class PersonnelTmpl : public ObjectTmpl<T>, public IIdentifiable<String>
{

public:
	virtual void toXml (IStream& stream);
public:
	// Constructors
    PersonnelTmpl<T> (DocumentImpl* pDoc);

public:
	// Destructors
    virtual ~PersonnelTmpl ();
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
    
    virtual String getRole() const;
    virtual void setRole(String value);
    virtual bool hasValue_Role() const;
    virtual void resetValue_Role();
    
    virtual String getRegType() const;
    virtual void setRegType(String value);
    virtual bool hasValue_RegType() const;
    virtual void resetValue_RegType();
    
    virtual String getRegNumber() const;
    virtual void setRegNumber(String value);
    virtual bool hasValue_RegNumber() const;
    virtual void resetValue_RegNumber();
    

    virtual Object::ValidityEnum validate(IValidationEventSink *pEventSink) const;

protected:
    String m_Name;
    bool m_bName_valueSet;
    String m_Role;
    bool m_bRole_valueSet;
    String m_RegType;
    bool m_bRegType_valueSet;
    String m_RegNumber;
    bool m_bRegNumber_valueSet;
};
}; // namespace : LX
#endif
