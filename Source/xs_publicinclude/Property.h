#if !defined(__PROPERTY_H)
#define __PROPERTY_H

#include "Property.h"
#include "LXTypes.h"

namespace LX
{


// Class : Property
class Property : public Object
{

public:
	virtual void toXml (IStream& stream) = 0;
public:
	// Collections

public:
	// Properties
    
    virtual String getLabel() const = 0;
    virtual void setLabel(String value) = 0;
    virtual bool hasValue_Label() const = 0;
    virtual void resetValue_Label() = 0;
    
    virtual String getValue() const = 0;
    virtual void setValue(String value) = 0;
    virtual bool hasValue_Value() const = 0;
    virtual void resetValue_Value() = 0;
    
    
protected:
};
}; // namespace : LX
#endif
