#if !defined(__SURFVOLUME_H)
#define __SURFVOLUME_H

#include "SurfVolume.h"
#include "LXTypes.h"

namespace LX
{

class FeatureCollection;

// Class : SurfVolume
class SurfVolume : public Object
{

public:
	virtual void toXml (IStream& stream) = 0;
public:
	// Collections
    virtual FeatureCollection& Feature() = 0;
    virtual const FeatureCollection& Feature() const = 0;

public:
	// Properties
    
    virtual String getSurfBase() const = 0;
    virtual void setSurfBase(String value) = 0;
    virtual bool hasValue_SurfBase() const = 0;
    virtual void resetValue_SurfBase() = 0;
    
    virtual String getSurfCompare() const = 0;
    virtual void setSurfCompare(String value) = 0;
    virtual bool hasValue_SurfCompare() const = 0;
    virtual void resetValue_SurfCompare() = 0;
    
    virtual double getVolCut() const = 0;
    virtual void setVolCut(double value) = 0;
    virtual bool hasValue_VolCut() const = 0;
    virtual void resetValue_VolCut() = 0;
    
    virtual double getVolFill() const = 0;
    virtual void setVolFill(double value) = 0;
    virtual bool hasValue_VolFill() const = 0;
    virtual void resetValue_VolFill() = 0;
    
    virtual double getVolTotal() const = 0;
    virtual void setVolTotal(double value) = 0;
    virtual bool hasValue_VolTotal() const = 0;
    virtual void resetValue_VolTotal() = 0;
    
    virtual String getDesc() const = 0;
    virtual void setDesc(String value) = 0;
    virtual bool hasValue_Desc() const = 0;
    virtual void resetValue_Desc() = 0;
    
    virtual String getName() const = 0;
    virtual void setName(String value) = 0;
    virtual bool hasValue_Name() const = 0;
    virtual void resetValue_Name() = 0;
    
    
protected:
};
}; // namespace : LX
#endif
