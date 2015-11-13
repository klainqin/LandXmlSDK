#if !defined(__CONTOUR_H)
#define __CONTOUR_H

#include "Contour.h"
#include "LXTypes.h"

namespace LX
{

class PntList2D;
class FeatureCollection;

// Class : Contour
class Contour : public Object
{

public:
	virtual void toXml (IStream& stream) = 0;
public:
	// Collections
    virtual FeatureCollection& Feature() = 0;
    virtual const FeatureCollection& Feature() const = 0;

public:
	// Properties
    virtual PntList2D* getPntList2D() const = 0;
    virtual void setPntList2D(PntList2D* value) = 0;
    
    
    virtual double getElev() const = 0;
    virtual void setElev(double value) = 0;
    virtual bool hasValue_Elev() const = 0;
    virtual void resetValue_Elev() = 0;
    
    
protected:
};
}; // namespace : LX
#endif
