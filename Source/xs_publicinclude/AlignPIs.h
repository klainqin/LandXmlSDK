#if !defined(__ALIGNPIS_H)
#define __ALIGNPIS_H

#include "AlignPIs.h"
#include "LXTypes.h"

namespace LX
{

class AlignPICollection;

// Class : AlignPIs
class AlignPIs : public Object
{

public:
	virtual void toXml (IStream& stream) = 0;
public:
	// Collections
    virtual AlignPICollection& AlignPI() = 0;
    virtual const AlignPICollection& AlignPI() const = 0;

public:
	// Properties
    
    
protected:
};
}; // namespace : LX
#endif
