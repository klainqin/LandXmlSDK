#if !defined(__ROADWAY_H)
#define __ROADWAY_H

#include "Roadway.h"
#include "LXTypes.h"

namespace LX
{

class ClassificationCollection;
class LanesCollection;
class RoadsideCollection;
class SpeedsCollection;
class NoPassingZoneCollection;
class TrafficVolumeCollection;
class CrashDataCollection;
class DecisionSightDistanceCollection;
class BridgeElementCollection;
class PlanFeatureCollection;
class FeatureCollection;

// Class : Roadway
class Roadway : public Object
{

public:
	virtual void toXml (IStream& stream) = 0;
public:
	// Collections
    virtual ClassificationCollection& Classification() = 0;
    virtual const ClassificationCollection& Classification() const = 0;
    virtual LanesCollection& Lanes() = 0;
    virtual const LanesCollection& Lanes() const = 0;
    virtual RoadsideCollection& Roadside() = 0;
    virtual const RoadsideCollection& Roadside() const = 0;
    virtual SpeedsCollection& Speeds() = 0;
    virtual const SpeedsCollection& Speeds() const = 0;
    virtual NoPassingZoneCollection& NoPassingZone() = 0;
    virtual const NoPassingZoneCollection& NoPassingZone() const = 0;
    virtual TrafficVolumeCollection& TrafficVolume() = 0;
    virtual const TrafficVolumeCollection& TrafficVolume() const = 0;
    virtual CrashDataCollection& CrashData() = 0;
    virtual const CrashDataCollection& CrashData() const = 0;
    virtual DecisionSightDistanceCollection& DecisionSightDistance() = 0;
    virtual const DecisionSightDistanceCollection& DecisionSightDistance() const = 0;
    virtual BridgeElementCollection& BridgeElement() = 0;
    virtual const BridgeElementCollection& BridgeElement() const = 0;
    virtual PlanFeatureCollection& PlanFeature() = 0;
    virtual const PlanFeatureCollection& PlanFeature() const = 0;
    virtual FeatureCollection& Feature() = 0;
    virtual const FeatureCollection& Feature() const = 0;

public:
	// Properties
    virtual StringCollection* getAlignmentRefs() const = 0;
    virtual void setAlignmentRefs(StringCollection* value) = 0;
    
    virtual StringCollection* getSurfaceRefs() const = 0;
    virtual void setSurfaceRefs(StringCollection* value) = 0;
    
    virtual StringCollection* getGradeModelRefs() const = 0;
    virtual void setGradeModelRefs(StringCollection* value) = 0;
    
    
    virtual String getName() const = 0;
    virtual void setName(String value) = 0;
    virtual bool hasValue_Name() const = 0;
    virtual void resetValue_Name() = 0;
    
    virtual double getStaStart() const = 0;
    virtual void setStaStart(double value) = 0;
    virtual bool hasValue_StaStart() const = 0;
    virtual void resetValue_StaStart() = 0;
    
    virtual double getStaEnd() const = 0;
    virtual void setStaEnd(double value) = 0;
    virtual bool hasValue_StaEnd() const = 0;
    virtual void resetValue_StaEnd() = 0;
    
    virtual String getDesc() const = 0;
    virtual void setDesc(String value) = 0;
    virtual bool hasValue_Desc() const = 0;
    virtual void resetValue_Desc() = 0;
    
    virtual EnumRoadTerrainType::Values getRoadTerrain() const = 0;
    virtual void setRoadTerrain(EnumRoadTerrainType::Values value) = 0;
    virtual bool hasValue_RoadTerrain() const = 0;
    virtual void resetValue_RoadTerrain() = 0;
    
    virtual EnumStateType::Values getState() const = 0;
    virtual void setState(EnumStateType::Values value) = 0;
    virtual bool hasValue_State() const = 0;
    virtual void resetValue_State() = 0;
    
    
protected:
};
}; // namespace : LX
#endif
