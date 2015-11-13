#if !defined(__CONTOURS_H)
#define __CONTOURS_H

#include "Contours.h"
#include "LXTypes.h"

namespace LX
{

class ContourCollection;
class FeatureCollection;

// Class : Contours
class Contours : public Object
{

public:
	virtual void toXml (IStream& stream) = 0;
public:
	// Collections
    virtual ContourCollection& Contour() = 0;
    virtual const ContourCollection& Contour() const = 0;
    virtual FeatureCollection& Feature() = 0;
    virtual const FeatureCollection& Feature() const = 0;

public:
	// Properties
    
    
protected:
};
}; // namespace : LX
#endif
