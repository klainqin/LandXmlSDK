#if !defined(__CROSSSECT_H)
#define __CROSSSECT_H

#include "CrossSect.h"
#include "LXTypes.h"

namespace LX
{

class CrossSectSurfCollection;
class DesignCrossSectSurfCollection;
class FeatureCollection;

// Class : CrossSect
class CrossSect : public Object
{

public:
	virtual void toXml (IStream& stream) = 0;
public:
	// Collections
    virtual CrossSectSurfCollection& CrossSectSurf() = 0;
    virtual const CrossSectSurfCollection& CrossSectSurf() const = 0;
    virtual DesignCrossSectSurfCollection& DesignCrossSectSurf() = 0;
    virtual const DesignCrossSectSurfCollection& DesignCrossSectSurf() const = 0;
    virtual FeatureCollection& Feature() = 0;
    virtual const FeatureCollection& Feature() const = 0;

public:
	// Properties
    
    virtual double getSta() const = 0;
    virtual void setSta(double value) = 0;
    virtual bool hasValue_Sta() const = 0;
    virtual void resetValue_Sta() = 0;
    
    virtual String getName() const = 0;
    virtual void setName(String value) = 0;
    virtual bool hasValue_Name() const = 0;
    virtual void resetValue_Name() = 0;
    
    virtual String getDesc() const = 0;
    virtual void setDesc(String value) = 0;
    virtual bool hasValue_Desc() const = 0;
    virtual void resetValue_Desc() = 0;
    
    virtual double getAngleSkew() const = 0;
    virtual void setAngleSkew(double value) = 0;
    virtual bool hasValue_AngleSkew() const = 0;
    virtual void resetValue_AngleSkew() = 0;
    
    virtual double getAreaCut() const = 0;
    virtual void setAreaCut(double value) = 0;
    virtual bool hasValue_AreaCut() const = 0;
    virtual void resetValue_AreaCut() = 0;
    
    virtual double getAreaFill() const = 0;
    virtual void setAreaFill(double value) = 0;
    virtual bool hasValue_AreaFill() const = 0;
    virtual void resetValue_AreaFill() = 0;
    
    virtual double getCentroidCut() const = 0;
    virtual void setCentroidCut(double value) = 0;
    virtual bool hasValue_CentroidCut() const = 0;
    virtual void resetValue_CentroidCut() = 0;
    
    virtual double getCentroidFill() const = 0;
    virtual void setCentroidFill(double value) = 0;
    virtual bool hasValue_CentroidFill() const = 0;
    virtual void resetValue_CentroidFill() = 0;
    
    virtual String getSectType() const = 0;
    virtual void setSectType(String value) = 0;
    virtual bool hasValue_SectType() const = 0;
    virtual void resetValue_SectType() = 0;
    
    virtual double getVolumeCut() const = 0;
    virtual void setVolumeCut(double value) = 0;
    virtual bool hasValue_VolumeCut() const = 0;
    virtual void resetValue_VolumeCut() = 0;
    
    virtual double getVolumeFill() const = 0;
    virtual void setVolumeFill(double value) = 0;
    virtual bool hasValue_VolumeFill() const = 0;
    virtual void resetValue_VolumeFill() = 0;
    
    
protected:
};
}; // namespace : LX
#endif
