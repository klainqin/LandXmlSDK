#if !defined(__PVI_H)
#define __PVI_H

#include "PVI.h"
#include "LXTypes.h"

namespace LX
{


// Class : PVI
class PVI : public DoubleCollection
{

public:
	virtual void toXml (IStream& stream) = 0;
public:
	// Collections

public:
	// Properties
    
    virtual String getDesc() const = 0;
    virtual void setDesc(String value) = 0;
    virtual bool hasValue_Desc() const = 0;
    virtual void resetValue_Desc() = 0;
    
    
protected:
};
}; // namespace : LX
#endif
