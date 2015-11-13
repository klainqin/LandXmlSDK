#if !defined(__SOURCEDATA_H)
#define __SOURCEDATA_H

#include "SourceData.h"
#include "LXTypes.h"

namespace LX
{

class ChainCollection;
class PointFiles;
class Boundaries;
class Breaklines;
class Contours;
class DataPointsCollection;
class FeatureCollection;

// Class : SourceData
class SourceData : public Object
{

public:
	virtual void toXml (IStream& stream) = 0;
public:
	// Collections
    virtual ChainCollection& Chain() = 0;
    virtual const ChainCollection& Chain() const = 0;
    virtual DataPointsCollection& DataPoints() = 0;
    virtual const DataPointsCollection& DataPoints() const = 0;
    virtual FeatureCollection& Feature() = 0;
    virtual const FeatureCollection& Feature() const = 0;

public:
	// Properties
    virtual PointFiles* getPointFiles() const = 0;
    virtual void setPointFiles(PointFiles* value) = 0;
    
    virtual Boundaries* getBoundaries() const = 0;
    virtual void setBoundaries(Boundaries* value) = 0;
    
    virtual Breaklines* getBreaklines() const = 0;
    virtual void setBreaklines(Breaklines* value) = 0;
    
    virtual Contours* getContours() const = 0;
    virtual void setContours(Contours* value) = 0;
    
    
    
protected:
};
}; // namespace : LX
#endif
