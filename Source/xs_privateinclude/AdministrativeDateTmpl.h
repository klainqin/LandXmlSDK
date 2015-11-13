#if !defined(__ADMINISTRATIVEDATETMPL_H)
#define __ADMINISTRATIVEDATETMPL_H

#include "AdministrativeDate.h"
#include "LXTypesTmpl.h"

namespace LX
{


// Class : AdministrativeDate
template<class T>
class AdministrativeDateTmpl : public ObjectTmpl<T>
{

public:
	virtual void toXml (IStream& stream);
public:
	// Constructors
    AdministrativeDateTmpl<T> (DocumentImpl* pDoc);

public:
	// Destructors
    virtual ~AdministrativeDateTmpl ();
public:
	// Collections

public:
	// Properties

    virtual String getAdminDateType() const;
    virtual void setAdminDateType(String value);
    virtual bool hasValue_AdminDateType() const;
    virtual void resetValue_AdminDateType();
    
    virtual String getAdminDate() const;
    virtual void setAdminDate(String value);
    virtual bool hasValue_AdminDate() const;
    virtual void resetValue_AdminDate();
    

    virtual Object::ValidityEnum validate(IValidationEventSink *pEventSink) const;

protected:
    String m_AdminDateType;
    bool m_bAdminDateType_valueSet;
    String m_AdminDate;
    bool m_bAdminDate_valueSet;
};
}; // namespace : LX
#endif
