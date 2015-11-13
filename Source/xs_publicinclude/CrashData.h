#if !defined(__CRASHDATA_H)
#define __CRASHDATA_H

#include "CrashData.h"
#include "LXTypes.h"

namespace LX
{


// Class : CrashData
class CrashData : public Object
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
