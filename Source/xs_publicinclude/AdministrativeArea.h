#if !defined(__ADMINISTRATIVEAREA_H)
#define __ADMINISTRATIVEAREA_H

#include "AdministrativeArea.h"
#include "LXTypes.h"

namespace LX
{


// Class : AdministrativeArea
class AdministrativeArea : public Object
{

public:
	virtual void toXml (IStream& stream) = 0;
public:
	// Collections

public:
	// Properties
    virtual StringCollection* getPclRef() const = 0;
    virtual void setPclRef(StringCollection* value) = 0;
    
    
    virtual String getAdminAreaType() const = 0;
    virtual void setAdminAreaType(String value) = 0;
    virtual bool hasValue_AdminAreaType() const = 0;
    virtual void resetValue_AdminAreaType() = 0;
    
    virtual String getAdminAreaName() const = 0;
    virtual void setAdminAreaName(String value) = 0;
    virtual bool hasValue_AdminAreaName() const = 0;
    virtual void resetValue_AdminAreaName() = 0;
    
    virtual String getAdminAreaCode() const = 0;
    virtual void setAdminAreaCode(String value) = 0;
    virtual bool hasValue_AdminAreaCode() const = 0;
    virtual void resetValue_AdminAreaCode() = 0;
    
    
protected:
};
}; // namespace : LX
#endif
