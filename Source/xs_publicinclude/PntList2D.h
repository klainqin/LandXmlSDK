#if !defined(__PNTLIST2D_H)
#define __PNTLIST2D_H

#include "PntList2D.h"
#include "LXTypes.h"

namespace LX
{


// Class : PntList2D
class PntList2D : public DoubleCollection
{

public:
	virtual void toXml (IStream& stream) = 0;
public:
	// Collections

public:
	// Properties
    
    
protected:
};
}; // namespace : LX
#endif
