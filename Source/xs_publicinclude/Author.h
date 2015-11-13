#if !defined(__AUTHOR_H)
#define __AUTHOR_H

#include "Author.h"
#include "LXTypes.h"

namespace LX
{


// Class : Author
class Author : public Object
{

public:
	virtual void toXml (IStream& stream) = 0;
public:
	// Collections

public:
	// Properties
    
    virtual String getCreatedBy() const = 0;
    virtual void setCreatedBy(String value) = 0;
    virtual bool hasValue_CreatedBy() const = 0;
    virtual void resetValue_CreatedBy() = 0;
    
    virtual String getCreatedByEmail() const = 0;
    virtual void setCreatedByEmail(String value) = 0;
    virtual bool hasValue_CreatedByEmail() const = 0;
    virtual void resetValue_CreatedByEmail() = 0;
    
    virtual String getCompany() const = 0;
    virtual void setCompany(String value) = 0;
    virtual bool hasValue_Company() const = 0;
    virtual void resetValue_Company() = 0;
    
    virtual String getCompanyURL() const = 0;
    virtual void setCompanyURL(String value) = 0;
    virtual bool hasValue_CompanyURL() const = 0;
    virtual void resetValue_CompanyURL() = 0;
    
    virtual String getTimeStamp() const = 0;
    virtual void setTimeStamp(String value) = 0;
    virtual bool hasValue_TimeStamp() const = 0;
    virtual void resetValue_TimeStamp() = 0;
    
    
protected:
};
}; // namespace : LX
#endif
