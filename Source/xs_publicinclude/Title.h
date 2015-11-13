#if !defined(__TITLE_H)
#define __TITLE_H

#include "Title.h"
#include "LXTypes.h"

namespace LX
{


// Class : Title
class Title : public Object
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
    
    virtual String getTitleType() const = 0;
    virtual void setTitleType(String value) = 0;
    virtual bool hasValue_TitleType() const = 0;
    virtual void resetValue_TitleType() = 0;
    
    
protected:
};
}; // namespace : LX
#endif
