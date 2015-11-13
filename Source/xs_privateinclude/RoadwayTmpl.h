#if !defined(__ROADWAYTMPL_H)
#define __ROADWAYTMPL_H

#include "Roadway.h"
#include "LXTypesTmpl.h"

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
template<class T>
class RoadwayTmpl : public ObjectTmpl<T>, public IIdentifiable<String>
{

public:
	virtual void toXml (IStream& stream);
public:
	// Constructors
    RoadwayTmpl<T> (DocumentImpl* pDoc);

public:
	// Destructors
    virtual ~RoadwayTmpl ();
public:
	// Collections
    virtual ClassificationCollection& Classification();
    virtual const ClassificationCollection& Classification() const;
    virtual LanesCollection& Lanes();
    virtual const LanesCollection& Lanes() const;
    virtual RoadsideCollection& Roadside();
    virtual const RoadsideCollection& Roadside() const;
    virtual SpeedsCollection& Speeds();
    virtual const SpeedsCollection& Speeds() const;
    virtual NoPassingZoneCollection& NoPassingZone();
    virtual const NoPassingZoneCollection& NoPassingZone() const;
    virtual TrafficVolumeCollection& TrafficVolume();
    virtual const TrafficVolumeCollection& TrafficVolume() const;
    virtual CrashDataCollection& CrashData();
    virtual const CrashDataCollection& CrashData() const;
    virtual DecisionSightDistanceCollection& DecisionSightDistance();
    virtual const DecisionSightDistanceCollection& DecisionSightDistance() const;
    virtual BridgeElementCollection& BridgeElement();
    virtual const BridgeElementCollection& BridgeElement() const;
    virtual PlanFeatureCollection& PlanFeature();
    virtual const PlanFeatureCollection& PlanFeature() const;
    virtual FeatureCollection& Feature();
    virtual const FeatureCollection& Feature() const;

    virtual bool getObjectId(const String*& pId) const;
    virtual ValueObject* id () const;
    
public:
	// Properties
    virtual StringCollection* getAlignmentRefs() const;
    virtual void setAlignmentRefs(StringCollection* value);

    virtual StringCollection* getSurfaceRefs() const;
    virtual void setSurfaceRefs(StringCollection* value);

    virtual StringCollection* getGradeModelRefs() const;
    virtual void setGradeModelRefs(StringCollection* value);


    virtual String getName() const;
    virtual void setName(String value);
    virtual bool hasValue_Name() const;
    virtual void resetValue_Name();
    
    virtual double getStaStart() const;
    virtual void setStaStart(double value);
    virtual bool hasValue_StaStart() const;
    virtual void resetValue_StaStart();
    
    virtual double getStaEnd() const;
    virtual void setStaEnd(double value);
    virtual bool hasValue_StaEnd() const;
    virtual void resetValue_StaEnd();
    
    virtual String getDesc() const;
    virtual void setDesc(String value);
    virtual bool hasValue_Desc() const;
    virtual void resetValue_Desc();
    
    virtual EnumRoadTerrainType::Values getRoadTerrain() const;
    virtual void setRoadTerrain(EnumRoadTerrainType::Values value);
    virtual bool hasValue_RoadTerrain() const;
    virtual void resetValue_RoadTerrain();
    
    virtual EnumStateType::Values getState() const;
    virtual void setState(EnumStateType::Values value);
    virtual bool hasValue_State() const;
    virtual void resetValue_State();
    

    virtual Object::ValidityEnum validate(IValidationEventSink *pEventSink) const;

protected:
    ClassificationCollection *m_Classification;
    LanesCollection *m_Lanes;
    RoadsideCollection *m_Roadside;
    SpeedsCollection *m_Speeds;
    NoPassingZoneCollection *m_NoPassingZone;
    TrafficVolumeCollection *m_TrafficVolume;
    CrashDataCollection *m_CrashData;
    DecisionSightDistanceCollection *m_DecisionSightDistance;
    BridgeElementCollection *m_BridgeElement;
    PlanFeatureCollection *m_PlanFeature;
    FeatureCollection *m_Feature;
    String m_Name;
    bool m_bName_valueSet;
    StringCollection *m_AlignmentRefs;
    StringCollection *m_SurfaceRefs;
    StringCollection *m_GradeModelRefs;
    double m_StaStart;
    bool m_bStaStart_valueSet;
    double m_StaEnd;
    bool m_bStaEnd_valueSet;
    String m_Desc;
    bool m_bDesc_valueSet;
    EnumRoadTerrainType::Values m_RoadTerrain;
    bool m_bRoadTerrain_valueSet;
    EnumStateType::Values m_State;
    bool m_bState_valueSet;
};
}; // namespace : LX
#endif
