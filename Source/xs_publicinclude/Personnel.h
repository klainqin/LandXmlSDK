#if !defined(__PERSONNEL_H)
#define __PERSONNEL_H

#include "Personnel.h"
#include "LXTypes.h"

namespace LX
{


// Class : Personnel
class Personnel : public Object
{

public:
	virtual void toXml (IStream& stream) = 0;
public:
	// Collections

public:
	// Properties
    
    virtual String getName() const = 0;
    virtual void setName(String value) = 0;
    virtual bool hasValue_Name() const = 0;
    virtual void resetValue_Name() = 0;
    
    virtual String getRole() const = 0;
    virtual void setRole(String value) = 0;
    virtual bool hasValue_Role() const = 0;
    virtual void resetValue_Role() = 0;
    
    virtual String getRegType() const = 0;
    virtual void setRegType(String value) = 0;
    virtual bool hasValue_RegType() const = 0;
    virtual void resetValue_RegType() = 0;
    
    virtual String getRegNumber() const = 0;
    virtual void setRegNumber(String value) = 0;
    virtual bool hasValue_RegNumber() const = 0;
    virtual void resetValue_RegNumber() = 0;
    
    
protected:
};
}; // namespace : LX
#endif
