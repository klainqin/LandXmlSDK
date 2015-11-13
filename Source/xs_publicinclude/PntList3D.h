#if !defined(__PNTLIST3D_H)
#define __PNTLIST3D_H

#include "PntList3D.h"
#include "LXTypes.h"

namespace LX
{


// Class : PntList3D
class PntList3D : public DoubleCollection
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
