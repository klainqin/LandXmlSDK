#if !defined(__AMENDMENT_H)
#define __AMENDMENT_H

#include "Amendment.h"
#include "LXTypes.h"

namespace LX
{

class AmendmentItemCollection;

// Class : Amendment
class Amendment : public Object
{

public:
	virtual void toXml (IStream& stream) = 0;
public:
	// Collections
    virtual AmendmentItemCollection& AmendmentItem() = 0;
    virtual const AmendmentItemCollection& AmendmentItem() const = 0;

public:
	// Properties
    
    virtual String getDealingNumber() const = 0;
    virtual void setDealingNumber(String value) = 0;
    virtual bool hasValue_DealingNumber() const = 0;
    virtual void resetValue_DealingNumber() = 0;
    
    virtual String getAmendmentDate() const = 0;
    virtual void setAmendmentDate(String value) = 0;
    virtual bool hasValue_AmendmentDate() const = 0;
    virtual void resetValue_AmendmentDate() = 0;
    
    virtual String getComments() const = 0;
    virtual void setComments(String value) = 0;
    virtual bool hasValue_Comments() const = 0;
    virtual void resetValue_Comments() = 0;
    
    
protected:
};
}; // namespace : LX
#endif
