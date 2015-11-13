#if !defined(__ADMINISTRATIVEDATE_H)
#define __ADMINISTRATIVEDATE_H

#include "AdministrativeDate.h"
#include "LXTypes.h"

namespace LX
{


// Class : AdministrativeDate
class AdministrativeDate : public Object
{

public:
	virtual void toXml (IStream& stream) = 0;
public:
	// Collections

public:
	// Properties
    
    virtual String getAdminDateType() const = 0;
    virtual void setAdminDateType(String value) = 0;
    virtual bool hasValue_AdminDateType() const = 0;
    virtual void resetValue_AdminDateType() = 0;
    
    virtual String getAdminDate() const = 0;
    virtual void setAdminDate(String value) = 0;
    virtual bool hasValue_AdminDate() const = 0;
    virtual void resetValue_AdminDate() = 0;
    
    
protected:
};
}; // namespace : LX
#endif
