#if !defined(__AUTHORTMPL_H)
#define __AUTHORTMPL_H

#include "Author.h"
#include "LXTypesTmpl.h"

namespace LX
{


// Class : Author
template<class T>
class AuthorTmpl : public ObjectTmpl<T>
{

public:
	virtual void toXml (IStream& stream);
public:
	// Constructors
    AuthorTmpl (DocumentImpl* pDoc);

public:
	// Destructors
    virtual ~AuthorTmpl ();
public:
	// Collections

public:
	// Properties

    virtual String getCreatedBy() const;
    virtual void setCreatedBy(String value);
    virtual bool hasValue_CreatedBy() const;
    virtual void resetValue_CreatedBy();
    
    virtual String getCreatedByEmail() const;
    virtual void setCreatedByEmail(String value);
    virtual bool hasValue_CreatedByEmail() const;
    virtual void resetValue_CreatedByEmail();
    
    virtual String getCompany() const;
    virtual void setCompany(String value);
    virtual bool hasValue_Company() const;
    virtual void resetValue_Company();
    
    virtual String getCompanyURL() const;
    virtual void setCompanyURL(String value);
    virtual bool hasValue_CompanyURL() const;
    virtual void resetValue_CompanyURL();
    
    virtual String getTimeStamp() const;
    virtual void setTimeStamp(String value);
    virtual bool hasValue_TimeStamp() const;
    virtual void resetValue_TimeStamp();
    

    virtual Object::ValidityEnum validate(IValidationEventSink *pEventSink) const;

protected:
    String m_CreatedBy;
    bool m_bCreatedBy_valueSet;
    String m_CreatedByEmail;
    bool m_bCreatedByEmail_valueSet;
    String m_Company;
    bool m_bCompany_valueSet;
    String m_CompanyURL;
    bool m_bCompanyURL_valueSet;
    String m_TimeStamp;
    bool m_bTimeStamp_valueSet;
};
}; // namespace : LX
#endif
