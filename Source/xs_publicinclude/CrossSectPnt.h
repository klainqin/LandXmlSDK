#if !defined(__CROSSSECTPNT_H)
#define __CROSSSECTPNT_H

#include "CrossSectPnt.h"
#include "LXTypes.h"
#include "PointType.h"

namespace LX
{


// Class : CrossSectPnt
class CrossSectPnt : public PointType
{

public:
	virtual void toXml (IStream& stream) = 0;
public:
	// Collections

public:
	// Properties
    
    virtual EnumDataFormatType::Values getDataFormat() const = 0;
    virtual void setDataFormat(EnumDataFormatType::Values value) = 0;
    virtual bool hasValue_DataFormat() const = 0;
    virtual void resetValue_DataFormat() = 0;
    
    virtual String getAlignRef() const = 0;
    virtual void setAlignRef(String value) = 0;
    virtual bool hasValue_AlignRef() const = 0;
    virtual void resetValue_AlignRef() = 0;
    
    virtual double getAlignRefStation() const = 0;
    virtual void setAlignRefStation(double value) = 0;
    virtual bool hasValue_AlignRefStation() const = 0;
    virtual void resetValue_AlignRefStation() = 0;
    
    virtual String getPlanFeatureRef() const = 0;
    virtual void setPlanFeatureRef(String value) = 0;
    virtual bool hasValue_PlanFeatureRef() const = 0;
    virtual void resetValue_PlanFeatureRef() = 0;
    
    virtual double getPlanFeatureRefStation() const = 0;
    virtual void setPlanFeatureRefStation(double value) = 0;
    virtual bool hasValue_PlanFeatureRefStation() const = 0;
    virtual void resetValue_PlanFeatureRefStation() = 0;
    
    virtual String getParcelRef() const = 0;
    virtual void setParcelRef(String value) = 0;
    virtual bool hasValue_ParcelRef() const = 0;
    virtual void resetValue_ParcelRef() = 0;
    
    virtual double getParcelRefStation() const = 0;
    virtual void setParcelRefStation(double value) = 0;
    virtual bool hasValue_ParcelRefStation() const = 0;
    virtual void resetValue_ParcelRefStation() = 0;
    
    
protected:
};
}; // namespace : LX
#endif
