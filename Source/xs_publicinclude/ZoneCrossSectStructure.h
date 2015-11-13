#if !defined(__ZONECROSSSECTSTRUCTURE_H)
#define __ZONECROSSSECTSTRUCTURE_H

#include "ZoneCrossSectStructure.h"
#include "LXTypes.h"

namespace LX
{

class PntList2D;
class FeatureCollection;

// Class : ZoneCrossSectStructure
class ZoneCrossSectStructure : public Object
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
    
    virtual DoubleCollection* getInnerConnectPnt() const = 0;
    virtual void setInnerConnectPnt(DoubleCollection* value) = 0;
    
    virtual DoubleCollection* getOuterConnectPnt() const = 0;
    virtual void setOuterConnectPnt(DoubleCollection* value) = 0;
    
    
    virtual String getName() const = 0;
    virtual void setName(String value) = 0;
    virtual bool hasValue_Name() const = 0;
    virtual void resetValue_Name() = 0;
    
    virtual EnumZoneOffsetType::Values getOffsetMode() const = 0;
    virtual void setOffsetMode(EnumZoneOffsetType::Values value) = 0;
    virtual bool hasValue_OffsetMode() const = 0;
    virtual void resetValue_OffsetMode() = 0;
    
    virtual double getStartOffset() const = 0;
    virtual void setStartOffset(double value) = 0;
    virtual bool hasValue_StartOffset() const = 0;
    virtual void resetValue_StartOffset() = 0;
    
    virtual double getStartOffsetElev() const = 0;
    virtual void setStartOffsetElev(double value) = 0;
    virtual bool hasValue_StartOffsetElev() const = 0;
    virtual void resetValue_StartOffsetElev() = 0;
    
    virtual double getEndOffset() const = 0;
    virtual void setEndOffset(double value) = 0;
    virtual bool hasValue_EndOffset() const = 0;
    virtual void resetValue_EndOffset() = 0;
    
    virtual double getEndOffsetElev() const = 0;
    virtual void setEndOffsetElev(double value) = 0;
    virtual bool hasValue_EndOffsetElev() const = 0;
    virtual void resetValue_EndOffsetElev() = 0;
    
    virtual EnumZoneTransitionType::Values getTransition() const = 0;
    virtual void setTransition(EnumZoneTransitionType::Values value) = 0;
    virtual bool hasValue_Transition() const = 0;
    virtual void resetValue_Transition() = 0;
    
    virtual EnumZonePlacementType::Values getPlacement() const = 0;
    virtual void setPlacement(EnumZonePlacementType::Values value) = 0;
    virtual bool hasValue_Placement() const = 0;
    virtual void resetValue_Placement() = 0;
    
    virtual String getCatalogReference() const = 0;
    virtual void setCatalogReference(String value) = 0;
    virtual bool hasValue_CatalogReference() const = 0;
    virtual void resetValue_CatalogReference() = 0;
    
    
protected:
};
}; // namespace : LX
#endif
