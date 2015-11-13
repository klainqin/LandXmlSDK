#if !defined(__AMENDMENTITEM_H)
#define __AMENDMENTITEM_H

#include "AmendmentItem.h"
#include "LXTypes.h"

namespace LX
{


// Class : AmendmentItem
class AmendmentItem : public Object
{

public:
	virtual void toXml (IStream& stream) = 0;
public:
	// Collections

public:
	// Properties
    
    virtual String getElementName() const = 0;
    virtual void setElementName(String value) = 0;
    virtual bool hasValue_ElementName() const = 0;
    virtual void resetValue_ElementName() = 0;
    
    virtual String getOldName() const = 0;
    virtual void setOldName(String value) = 0;
    virtual bool hasValue_OldName() const = 0;
    virtual void resetValue_OldName() = 0;
    
    virtual String getNewName() const = 0;
    virtual void setNewName(String value) = 0;
    virtual bool hasValue_NewName() const = 0;
    virtual void resetValue_NewName() = 0;
    
    
protected:
};
}; // namespace : LX
#endif
