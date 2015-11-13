#if !defined(__ADVERSESE_H)
#define __ADVERSESE_H

#include "AdverseSE.h"
#include "LXTypes.h"

namespace LX
{


// Class : AdverseSE
class AdverseSE : public EnumAdverseSEType
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
