#if !defined(__ALIGNPI_H)
#define __ALIGNPI_H

#include "AlignPI.h"
#include "LXTypes.h"

namespace LX
{


// Class : AlignPI
class AlignPI : public Object
{

public:
	// Classes

public:
	virtual void toXml (IStream& stream) = 0;
public:
	// Collections
    virtual ObjectCollection& PIList() = 0;
    virtual const ObjectCollection& PIList() const = 0;

public:
	// Properties
    
    
protected:
};
}; // namespace : LX
#endif
