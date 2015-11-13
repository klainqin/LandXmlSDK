#if !defined(__POINTFILES_H)
#define __POINTFILES_H

#include "PointFiles.h"
#include "LXTypes.h"

namespace LX
{

class PointFileCollection;
class FeatureCollection;

// Class : PointFiles
class PointFiles : public Object
{

public:
	virtual void toXml (IStream& stream) = 0;
public:
	// Collections
    virtual PointFileCollection& PointFile() = 0;
    virtual const PointFileCollection& PointFile() const = 0;
    virtual FeatureCollection& Feature() = 0;
    virtual const FeatureCollection& Feature() const = 0;

public:
	// Properties
    
    
protected:
};
}; // namespace : LX
#endif
