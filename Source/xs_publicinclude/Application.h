#if !defined(__APPLICATION_H)
#define __APPLICATION_H

#include "Application.h"
#include "LXTypes.h"

namespace LX
{

class AuthorCollection;

// Class : Application
class Application : public Object
{

public:
	virtual void toXml (IStream& stream) = 0;
public:
	// Collections
    virtual AuthorCollection& Author() = 0;
    virtual const AuthorCollection& Author() const = 0;

public:
	// Properties
    
    virtual String getName() const = 0;
    virtual void setName(String value) = 0;
    virtual bool hasValue_Name() const = 0;
    virtual void resetValue_Name() = 0;
    
    virtual String getDesc() const = 0;
    virtual void setDesc(String value) = 0;
    virtual bool hasValue_Desc() const = 0;
    virtual void resetValue_Desc() = 0;
    
    virtual String getManufacturer() const = 0;
    virtual void setManufacturer(String value) = 0;
    virtual bool hasValue_Manufacturer() const = 0;
    virtual void resetValue_Manufacturer() = 0;
    
    virtual String getVersion() const = 0;
    virtual void setVersion(String value) = 0;
    virtual bool hasValue_Version() const = 0;
    virtual void resetValue_Version() = 0;
    
    virtual String getManufacturerURL() const = 0;
    virtual void setManufacturerURL(String value) = 0;
    virtual bool hasValue_ManufacturerURL() const = 0;
    virtual void resetValue_ManufacturerURL() = 0;
    
    virtual String getTimeStamp() const = 0;
    virtual void setTimeStamp(String value) = 0;
    virtual bool hasValue_TimeStamp() const = 0;
    virtual void resetValue_TimeStamp() = 0;
    
    
protected:
};
}; // namespace : LX
#endif
