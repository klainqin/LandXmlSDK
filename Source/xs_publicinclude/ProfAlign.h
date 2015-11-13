#if !defined(__PROFALIGN_H)
#define __PROFALIGN_H

#include "ProfAlign.h"
#include "LXTypes.h"

namespace LX
{


// Class : ProfAlign
class ProfAlign : public Object
{

public:
	// Classes

public:
	virtual void toXml (IStream& stream) = 0;
public:
	// Collections
    virtual ObjectCollection& VertGeomList() = 0;
    virtual const ObjectCollection& VertGeomList() const = 0;

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
    
    virtual EnumStateType::Values getState() const = 0;
    virtual void setState(EnumStateType::Values value) = 0;
    virtual bool hasValue_State() const = 0;
    virtual void resetValue_State() = 0;
    
    
protected:
};
}; // namespace : LX
#endif
