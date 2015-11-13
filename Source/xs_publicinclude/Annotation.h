#if !defined(__ANNOTATION_H)
#define __ANNOTATION_H

#include "Annotation.h"
#include "LXTypes.h"

namespace LX
{


// Class : Annotation
class Annotation : public Object
{

public:
	virtual void toXml (IStream& stream) = 0;
public:
	// Collections

public:
	// Properties
    virtual StringCollection* getPclRef() const = 0;
    virtual void setPclRef(StringCollection* value) = 0;
    
    
    virtual String getType() const = 0;
    virtual void setType(String value) = 0;
    virtual bool hasValue_Type() const = 0;
    virtual void resetValue_Type() = 0;
    
    virtual String getName() const = 0;
    virtual void setName(String value) = 0;
    virtual bool hasValue_Name() const = 0;
    virtual void resetValue_Name() = 0;
    
    virtual String getDesc() const = 0;
    virtual void setDesc(String value) = 0;
    virtual bool hasValue_Desc() const = 0;
    virtual void resetValue_Desc() = 0;
    
    
protected:
};
}; // namespace : LX
#endif
