#if !defined(__FULLSUPERELEV_H)
#define __FULLSUPERELEV_H

#include "FullSuperelev.h"
#include "LXTypes.h"

namespace LX
{


// Class : FullSuperelev
class FullSuperelev : public DoubleObject
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
