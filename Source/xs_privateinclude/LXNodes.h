#if !defined(__LXNODES_H)
#define __LXNODES_H

#include "lxtypes.h"
#include "ObjectNode.h"
#include "CollectionNode.h"

namespace LX
{

class DesignCrossSectSurfCollection;
class Units;
class VolumeCollection;
class ZonesCollection;
class SurfaceCollection;
class NoPassingZone;
class RectStruct;
class Cant;
class RoadSign;
class CantStation;
class ClimbLaneCollection;
class DataPointsCollection;
class AdministrativeAreaCollection;
class BacksightCollection;
class CrossSectCollection;
class PipeNetworkCollection;
class TestObservation;
class Superelevation;
class DocFileRef;
class RetWallPnt;
class AlignmentCollection;
class RoadwayCollection;
class InSpiral;
class Annotation;
class RawObservationCollection;
class Surfaces;
class RunoffStaCollection;
class OffsetLane;
class ZoneHingeCollection;
class TurnLaneCollection;
class Curve;
class PropertyCollection;
class ChainCollection;
class UnsymParaCurve;
class GPSVector;
class GradeSurfaceCollection;
class Pnts;
class CornerCollection;
class HazardRating;
class EndofRunoutStaCollection;
class Project;
class Application;
class AdverseSE;
class HeadOfPower;
class CrashData;
class CantStationCollection;
class MapPoint;
class NoPassingZoneCollection;
class CurbCollection;
class Center;
class ZoneWidthCollection;
class Parcels;
class LocationAddress;
class Intersections;
class Pipes;
class Spiral;
class RetWall;
class OffsetVals;
class Outlet;
class Equipment;
class ElliPipe;
class BridgeElement;
class CoordGeomCollection;
class VolumeGeom;
class PntList3D;
class ParcelCollection;
class MonumentsCollection;
class PipeNetworksCollection;
class SurveyCollection;
class Boundary;
class RedHorizontalPosition;
class TrafficVolume;
class Start;
class CircPipe;
class OutletCollection;
class InstrumentSetup;
class SurfVolumes;
class ZoneCutFillCollection;
class TurnSpeedCollection;
class FeatureCollection;
class HeadOfPowerCollection;
class PlanFeatures;
class RoadNameCollection;
class IntersectionCollection;
class BoundaryCollection;
class Boundaries;
class CrossSectPnt;
class AdministrativeDateCollection;
class CoordGeom;
class ObservationGroupCollection;
class AmendmentItem;
class Location;
class PipeCollection;
class TurnRestriction;
class DitchCollection;
class SurfVolumesCollection;
class AdministrativeArea;
class ClimbLane;
class ZoneCutFill;
class SpeedStation;
class DailyTrafficVolume;
class GPSPosition;
class ProfSurfCollection;
class ProfAlignCollection;
class Profile;
class PipeNetworks;
class RectPipe;
class ThruLane;
class ProfSurf;
class Author;
class CrossSectSurf;
class HazardRatingCollection;
class FullSuperelev;
class Roadway;
class SurfVolumeCollection;
class BreaklineCollection;
class EggPipe;
class Structs;
class SpeedStationCollection;
class Intersection;
class FieldNote;
class RoadSignCollection;
class AuthorCollection;
class BridgeElementCollection;
class SurfVolume;
class RoadsideCollection;
class GPSQCInfoLevel1;
class BikeFacilities;
class CgPoint;
class CrossSectSurfCollection;
class DrivewayDensity;
class Monuments;
class Corner;
class Volume;
class StartofRunoutStaCollection;
class DesignSpeedCollection;
class TargetSetupCollection;
class CircCurve;
class Title;
class DesignCrossSectSurf;
class RedVerticalObservation;
class CgPointCollection;
class ZoneCrossSectStructure;
class GPSPositionCollection;
class Classification;
class Zones;
class AlignPICollection;
class SurveyHeader;
class IntersectionsCollection;
class PostedSpeedCollection;
class LaserSetup;
class Property;
class PointFiles;
class PurposeOfSurveyCollection;
class ZoneSlope;
class PointResultsCollection;
class SurveyMonumentCollection;
class LanesCollection;
class DesignSpeed85thCollection;
class Ditch;
class Timing;
class GPSAntennaDetails;
class InstrumentPoint;
class ZoneCrossSectStructureCollection;
class TurnSpeed;
class TurnLane;
class ZoneCollection;
class TrafficVolumeCollection;
class FCollection;
class ProfAlign;
class RawObservationType;
class AddressPointCollection;
class Curve1;
class Parcel;
class Line;
class Breaklines;
class Feature;
class OutSpiral;
class Definition;
class PointFileCollection;
class F;
class LaserDetails;
class Speeds;
class OutletStruct;
class Breakline;
class Exclusions;
class PVI;
class TrafficControl;
class Watershed;
class Corrections;
class CgPointsCollection;
class LocationCollection;
class ReducedObservation;
class Watersheds;
class PlanFeatureCollection;
class CircStruct;
class FullSuperelevCollection;
class SpeedsCollection;
class InvertCollection;
class StartofRunoutSta;
class InletStruct;
class ControlChecks;
class FeatureDictionaryCollection;
class ReducedArcObservation;
class GradeModel;
class PlanFeaturesCollection;
class TargetPoint;
class DrivewayDensityCollection;
class BeginRunoutStaCollection;
class Curve2;
class DesignSpeed85th;
class PntList2D;
class MonumentCollection;
class GPSQCInfoLevel2;
class FacesCollection;
class BeginRunoffStaCollection;
class OffsetLaneCollection;
class GradeModelCollection;
class DocFileRefCollection;
class CrashHistory;
class TwoWayLeftTurnLaneCollection;
class SourceData;
class PlanFeature;
class ObstructionOffsetCollection;
class WatershedCollection;
class PntList2DCollection;
class Station;
class Invert;
class Contours;
class RoadwaysCollection;
class Lanes;
class TitleCollection;
class GPSSetupCollection;
class ZoneHinge;
class ZoneSlopeCollection;
class End;
class AlignPIs;
class AlignPI;
class DataPoints;
class FullSuperSta;
class Contour;
class AdministrativeDate;
class SurveyMonument;
class ObstructionOffset;
class GPSSetup;
class Backsight;
class PointType;
class CrossSects;
class Surface;
class Curb;
class Struct;
class CrossSectsCollection;
class TurnRestrictionCollection;
class WideningLane;
class SurveyorCertificate;
class ZoneMaterialCollection;
class P;
class WideningLaneCollection;
class IrregularLine;
class TrafficControlCollection;
class AdverseSECollection;
class TwoWayLeftTurnLane;
class PCollection;
class RawObservation;
class TargetSetup;
class Channel;
class PipeFlow;
class PassingLaneCollection;
class FieldNoteCollection;
class PointFile;
class BacksightPoint;
class LocationAddressCollection;
class PntList3DCollection;
class ExclusionsCollection;
class Personnel;
class Monument;
class ThruLaneCollection;
class AlignmentsCollection;
class Amendment;
class InstrumentDetails;
class StructFlow;
class ClassificationCollection;
class LandXML;
class AmendmentItemCollection;
class BikeFacilitiesCollection;
class Faces;
class DecisionSightDistance;
class Roadways;
class FeatureDictionary;
class ZoneWidth;
class CrashDataCollection;
class GPSVectorCollection;
class ParaCurve;
class InstrumentSetupCollection;
class RetWallPntCollection;
class CgPoints;
class ParcelsCollection;
class CrossSectPntCollection;
class CrashHistoryCollection;
class DesignHour;
class ConnSpiral;
class Alignment;
class POI;
class Alignments;
class Roadside;
class PeakHour;
class Chain;
class ObservationGroup;
class ComplexName;
class AddressPoint;
class PersonnelCollection;
class MapPointCollection;
class PointType3dReq;
class AnnotationCollection;
class PassingLane;
class ZoneMaterial;
class Metric;
class RetWallCollection;
class RunoffSta;
class ContourCollection;
class Pipe;
class EndofRunoutSta;
class BeginRunoffSta;
class PipeNetwork;
class DecisionSightDistanceCollection;
class StaEquationCollection;
class CoordinateSystem;
class AmendmentCollection;
class CrossSect;
class LaserSetupCollection;
class TimingCollection;
class PointResults;
class PostedSpeed;
class SuperelevationCollection;
class StructCollection;
class GPSReceiverDetails;
class PurposeOfSurvey;
class ProfileCollection;
class RoadName;
class Zone;
class StaEquation;
class SurfacesCollection;
class SurveyorCertificateCollection;
class GradeSurface;
class Survey;
class Imperial;
class FullSuperStaCollection;
class TestObservationCollection;
class BeginRunoutSta;
class ComplexNameCollection;
class ControlChecksCollection;
class DesignSpeed;
class Connection;
class DesignCrossSectSurfCollectionNode : public CollectionNode
{
public:
    DesignCrossSectSurfCollectionNode (Object& pLxObj);
    DesignCrossSectSurfCollectionNode (Object* pLxObj);
    String nodeName() const;
    ILxNode *findChild (const String& strChildName) const;
protected:
    void initialize (Object* pLxObj);
private:
    DesignCrossSectSurfCollection* m_pLxObj;
};

class UnitsNode : public ObjectNode
{
public:
    UnitsNode (Object* pLxObj);
    String nodeName() const;
    const Object* getValueObject () const;
    bool setValue (const String& strMemberName, const String* pstrValue);
    bool getValue (const String& strMemberName, String& strValue);
private:
    Units* m_pLxObj;
};

class VolumeCollectionNode : public CollectionNode
{
public:
    VolumeCollectionNode (Object& pLxObj);
    VolumeCollectionNode (Object* pLxObj);
    String nodeName() const;
    ILxNode *findChild (const String& strChildName) const;
protected:
    void initialize (Object* pLxObj);
private:
    VolumeCollection* m_pLxObj;
};

class ZonesCollectionNode : public CollectionNode
{
public:
    ZonesCollectionNode (Object& pLxObj);
    ZonesCollectionNode (Object* pLxObj);
    String nodeName() const;
    ILxNode *findChild (const String& strChildName) const;
protected:
    void initialize (Object* pLxObj);
private:
    ZonesCollection* m_pLxObj;
};

class SurfaceCollectionNode : public CollectionNode
{
public:
    SurfaceCollectionNode (Object& pLxObj);
    SurfaceCollectionNode (Object* pLxObj);
    String nodeName() const;
    ILxNode *findChild (const String& strChildName) const;
protected:
    void initialize (Object* pLxObj);
private:
    SurfaceCollection* m_pLxObj;
};

class NoPassingZoneNode : public ObjectNode
{
public:
    NoPassingZoneNode (Object* pLxObj);
    String nodeName() const;
    const Object* getValueObject () const;
    bool setValue (const String& strMemberName, const String* pstrValue);
    bool getValue (const String& strMemberName, String& strValue);
private:
    NoPassingZone* m_pLxObj;
};

class RectStructNode : public ObjectNode
{
public:
    RectStructNode (Object* pLxObj);
    String nodeName() const;
    const Object* getValueObject () const;
    bool setValue (const String& strMemberName, const String* pstrValue);
    bool getValue (const String& strMemberName, String& strValue);
private:
    RectStruct* m_pLxObj;
};

class CantNode : public ObjectNode
{
public:
    CantNode (Object* pLxObj);
    String nodeName() const;
    const Object* getValueObject () const;
    bool setValue (const String& strMemberName, const String* pstrValue);
    bool getValue (const String& strMemberName, String& strValue);
private:
    Cant* m_pLxObj;
};

class RoadSignNode : public ObjectNode
{
public:
    RoadSignNode (Object* pLxObj);
    String nodeName() const;
    const Object* getValueObject () const;
    bool setValue (const String& strMemberName, const String* pstrValue);
    bool getValue (const String& strMemberName, String& strValue);
private:
    RoadSign* m_pLxObj;
};

class CantStationNode : public ObjectNode
{
public:
    CantStationNode (Object* pLxObj);
    String nodeName() const;
    const Object* getValueObject () const;
    bool setValue (const String& strMemberName, const String* pstrValue);
    bool getValue (const String& strMemberName, String& strValue);
private:
    CantStation* m_pLxObj;
};

class ClimbLaneCollectionNode : public CollectionNode
{
public:
    ClimbLaneCollectionNode (Object& pLxObj);
    ClimbLaneCollectionNode (Object* pLxObj);
    String nodeName() const;
    ILxNode *findChild (const String& strChildName) const;
protected:
    void initialize (Object* pLxObj);
private:
    ClimbLaneCollection* m_pLxObj;
};

class DataPointsCollectionNode : public CollectionNode
{
public:
    DataPointsCollectionNode (Object& pLxObj);
    DataPointsCollectionNode (Object* pLxObj);
    String nodeName() const;
    ILxNode *findChild (const String& strChildName) const;
protected:
    void initialize (Object* pLxObj);
private:
    DataPointsCollection* m_pLxObj;
};

class AdministrativeAreaCollectionNode : public CollectionNode
{
public:
    AdministrativeAreaCollectionNode (Object& pLxObj);
    AdministrativeAreaCollectionNode (Object* pLxObj);
    String nodeName() const;
    ILxNode *findChild (const String& strChildName) const;
protected:
    void initialize (Object* pLxObj);
private:
    AdministrativeAreaCollection* m_pLxObj;
};

class BacksightCollectionNode : public CollectionNode
{
public:
    BacksightCollectionNode (Object& pLxObj);
    BacksightCollectionNode (Object* pLxObj);
    String nodeName() const;
    ILxNode *findChild (const String& strChildName) const;
protected:
    void initialize (Object* pLxObj);
private:
    BacksightCollection* m_pLxObj;
};

class CrossSectCollectionNode : public CollectionNode
{
public:
    CrossSectCollectionNode (Object& pLxObj);
    CrossSectCollectionNode (Object* pLxObj);
    String nodeName() const;
    ILxNode *findChild (const String& strChildName) const;
protected:
    void initialize (Object* pLxObj);
private:
    CrossSectCollection* m_pLxObj;
};

class PipeNetworkCollectionNode : public CollectionNode
{
public:
    PipeNetworkCollectionNode (Object& pLxObj);
    PipeNetworkCollectionNode (Object* pLxObj);
    String nodeName() const;
    ILxNode *findChild (const String& strChildName) const;
protected:
    void initialize (Object* pLxObj);
private:
    PipeNetworkCollection* m_pLxObj;
};

class TestObservationNode : public ObjectNode
{
public:
    TestObservationNode (Object* pLxObj);
    String nodeName() const;
    const Object* getValueObject () const;
    bool setValue (const String& strMemberName, const String* pstrValue);
    bool getValue (const String& strMemberName, String& strValue);
private:
    TestObservation* m_pLxObj;
};

class SuperelevationNode : public ObjectNode
{
public:
    SuperelevationNode (Object* pLxObj);
    String nodeName() const;
    const Object* getValueObject () const;
    bool setValue (const String& strMemberName, const String* pstrValue);
    bool getValue (const String& strMemberName, String& strValue);
private:
    Superelevation* m_pLxObj;
};

class DocFileRefNode : public ObjectNode
{
public:
    DocFileRefNode (Object* pLxObj);
    String nodeName() const;
    const Object* getValueObject () const;
    bool setValue (const String& strMemberName, const String* pstrValue);
    bool getValue (const String& strMemberName, String& strValue);
private:
    DocFileRef* m_pLxObj;
};

class RetWallPntNode : public ObjectNode
{
public:
    RetWallPntNode (Object* pLxObj);
    String nodeName() const;
    const Object* getValueObject () const;
    bool setValue (const String& strMemberName, const String* pstrValue);
    bool getValue (const String& strMemberName, String& strValue);
private:
    RetWallPnt* m_pLxObj;
};

class AlignmentCollectionNode : public CollectionNode
{
public:
    AlignmentCollectionNode (Object& pLxObj);
    AlignmentCollectionNode (Object* pLxObj);
    String nodeName() const;
    ILxNode *findChild (const String& strChildName) const;
protected:
    void initialize (Object* pLxObj);
private:
    AlignmentCollection* m_pLxObj;
};

class RoadwayCollectionNode : public CollectionNode
{
public:
    RoadwayCollectionNode (Object& pLxObj);
    RoadwayCollectionNode (Object* pLxObj);
    String nodeName() const;
    ILxNode *findChild (const String& strChildName) const;
protected:
    void initialize (Object* pLxObj);
private:
    RoadwayCollection* m_pLxObj;
};

class InSpiralNode : public ObjectNode
{
public:
    InSpiralNode (Object* pLxObj);
    String nodeName() const;
    const Object* getValueObject () const;
    bool setValue (const String& strMemberName, const String* pstrValue);
    bool getValue (const String& strMemberName, String& strValue);
private:
    InSpiral* m_pLxObj;
};

class AnnotationNode : public ObjectNode
{
public:
    AnnotationNode (Object* pLxObj);
    String nodeName() const;
    const Object* getValueObject () const;
    bool setValue (const String& strMemberName, const String* pstrValue);
    bool getValue (const String& strMemberName, String& strValue);
private:
    Annotation* m_pLxObj;
};

class RawObservationCollectionNode : public CollectionNode
{
public:
    RawObservationCollectionNode (Object& pLxObj);
    RawObservationCollectionNode (Object* pLxObj);
    String nodeName() const;
    ILxNode *findChild (const String& strChildName) const;
protected:
    void initialize (Object* pLxObj);
private:
    RawObservationCollection* m_pLxObj;
};

class SurfacesNode : public ObjectNode
{
public:
    SurfacesNode (Object* pLxObj);
    String nodeName() const;
    const Object* getValueObject () const;
    bool setValue (const String& strMemberName, const String* pstrValue);
    bool getValue (const String& strMemberName, String& strValue);
private:
    Surfaces* m_pLxObj;
};

class RunoffStaCollectionNode : public CollectionNode
{
public:
    RunoffStaCollectionNode (Object& pLxObj);
    RunoffStaCollectionNode (Object* pLxObj);
    String nodeName() const;
    ILxNode *findChild (const String& strChildName) const;
protected:
    void initialize (Object* pLxObj);
private:
    RunoffStaCollection* m_pLxObj;
};

class OffsetLaneNode : public ObjectNode
{
public:
    OffsetLaneNode (Object* pLxObj);
    String nodeName() const;
    const Object* getValueObject () const;
    bool setValue (const String& strMemberName, const String* pstrValue);
    bool getValue (const String& strMemberName, String& strValue);
private:
    OffsetLane* m_pLxObj;
};

class ZoneHingeCollectionNode : public CollectionNode
{
public:
    ZoneHingeCollectionNode (Object& pLxObj);
    ZoneHingeCollectionNode (Object* pLxObj);
    String nodeName() const;
    ILxNode *findChild (const String& strChildName) const;
protected:
    void initialize (Object* pLxObj);
private:
    ZoneHingeCollection* m_pLxObj;
};

class TurnLaneCollectionNode : public CollectionNode
{
public:
    TurnLaneCollectionNode (Object& pLxObj);
    TurnLaneCollectionNode (Object* pLxObj);
    String nodeName() const;
    ILxNode *findChild (const String& strChildName) const;
protected:
    void initialize (Object* pLxObj);
private:
    TurnLaneCollection* m_pLxObj;
};

class CurveNode : public ObjectNode
{
public:
    CurveNode (Object* pLxObj);
    String nodeName() const;
    const Object* getValueObject () const;
    bool setValue (const String& strMemberName, const String* pstrValue);
    bool getValue (const String& strMemberName, String& strValue);
private:
    Curve* m_pLxObj;
};

class PropertyCollectionNode : public CollectionNode
{
public:
    PropertyCollectionNode (Object& pLxObj);
    PropertyCollectionNode (Object* pLxObj);
    String nodeName() const;
    ILxNode *findChild (const String& strChildName) const;
protected:
    void initialize (Object* pLxObj);
private:
    PropertyCollection* m_pLxObj;
};

class ChainCollectionNode : public CollectionNode
{
public:
    ChainCollectionNode (Object& pLxObj);
    ChainCollectionNode (Object* pLxObj);
    String nodeName() const;
    ILxNode *findChild (const String& strChildName) const;
protected:
    void initialize (Object* pLxObj);
private:
    ChainCollection* m_pLxObj;
};

class UnsymParaCurveNode : public ObjectNode
{
public:
    UnsymParaCurveNode (Object* pLxObj);
    String nodeName() const;
    const Object* getValueObject () const;
    bool setValue (const String& strMemberName, const String* pstrValue);
    bool getValue (const String& strMemberName, String& strValue);
private:
    UnsymParaCurve* m_pLxObj;
};

class GPSVectorNode : public ObjectNode
{
public:
    GPSVectorNode (Object* pLxObj);
    String nodeName() const;
    const Object* getValueObject () const;
    bool setValue (const String& strMemberName, const String* pstrValue);
    bool getValue (const String& strMemberName, String& strValue);
private:
    GPSVector* m_pLxObj;
};

class GradeSurfaceCollectionNode : public CollectionNode
{
public:
    GradeSurfaceCollectionNode (Object& pLxObj);
    GradeSurfaceCollectionNode (Object* pLxObj);
    String nodeName() const;
    ILxNode *findChild (const String& strChildName) const;
protected:
    void initialize (Object* pLxObj);
private:
    GradeSurfaceCollection* m_pLxObj;
};

class PntsNode : public ObjectNode
{
public:
    PntsNode (Object* pLxObj);
    String nodeName() const;
    const Object* getValueObject () const;
    bool setValue (const String& strMemberName, const String* pstrValue);
    bool getValue (const String& strMemberName, String& strValue);
private:
    Pnts* m_pLxObj;
};

class CornerCollectionNode : public CollectionNode
{
public:
    CornerCollectionNode (Object& pLxObj);
    CornerCollectionNode (Object* pLxObj);
    String nodeName() const;
    ILxNode *findChild (const String& strChildName) const;
protected:
    void initialize (Object* pLxObj);
private:
    CornerCollection* m_pLxObj;
};

class HazardRatingNode : public ObjectNode
{
public:
    HazardRatingNode (Object* pLxObj);
    String nodeName() const;
    const Object* getValueObject () const;
    bool setValue (const String& strMemberName, const String* pstrValue);
    bool getValue (const String& strMemberName, String& strValue);
private:
    HazardRating* m_pLxObj;
};

class EndofRunoutStaCollectionNode : public CollectionNode
{
public:
    EndofRunoutStaCollectionNode (Object& pLxObj);
    EndofRunoutStaCollectionNode (Object* pLxObj);
    String nodeName() const;
    ILxNode *findChild (const String& strChildName) const;
protected:
    void initialize (Object* pLxObj);
private:
    EndofRunoutStaCollection* m_pLxObj;
};

class ProjectNode : public ObjectNode
{
public:
    ProjectNode (Object* pLxObj);
    String nodeName() const;
    const Object* getValueObject () const;
    bool setValue (const String& strMemberName, const String* pstrValue);
    bool getValue (const String& strMemberName, String& strValue);
private:
    Project* m_pLxObj;
};

class ApplicationNode : public ObjectNode
{
public:
    ApplicationNode (Object* pLxObj);
    String nodeName() const;
    const Object* getValueObject () const;
    bool setValue (const String& strMemberName, const String* pstrValue);
    bool getValue (const String& strMemberName, String& strValue);
private:
    Application* m_pLxObj;
};

class AdverseSENode : public ObjectNode
{
public:
    AdverseSENode (Object* pLxObj);
    String nodeName() const;
    const Object* getValueObject () const;
    bool setValue (const String& strMemberName, const String* pstrValue);
    bool getValue (const String& strMemberName, String& strValue);
private:
    AdverseSE* m_pLxObj;
};

class HeadOfPowerNode : public ObjectNode
{
public:
    HeadOfPowerNode (Object* pLxObj);
    String nodeName() const;
    const Object* getValueObject () const;
    bool setValue (const String& strMemberName, const String* pstrValue);
    bool getValue (const String& strMemberName, String& strValue);
private:
    HeadOfPower* m_pLxObj;
};

class CrashDataNode : public ObjectNode
{
public:
    CrashDataNode (Object* pLxObj);
    String nodeName() const;
    const Object* getValueObject () const;
    bool setValue (const String& strMemberName, const String* pstrValue);
    bool getValue (const String& strMemberName, String& strValue);
private:
    CrashData* m_pLxObj;
};

class CantStationCollectionNode : public CollectionNode
{
public:
    CantStationCollectionNode (Object& pLxObj);
    CantStationCollectionNode (Object* pLxObj);
    String nodeName() const;
    ILxNode *findChild (const String& strChildName) const;
protected:
    void initialize (Object* pLxObj);
private:
    CantStationCollection* m_pLxObj;
};

class MapPointNode : public ObjectNode
{
public:
    MapPointNode (Object* pLxObj);
    String nodeName() const;
    const Object* getValueObject () const;
    bool setValue (const String& strMemberName, const String* pstrValue);
    bool getValue (const String& strMemberName, String& strValue);
private:
    MapPoint* m_pLxObj;
};

class NoPassingZoneCollectionNode : public CollectionNode
{
public:
    NoPassingZoneCollectionNode (Object& pLxObj);
    NoPassingZoneCollectionNode (Object* pLxObj);
    String nodeName() const;
    ILxNode *findChild (const String& strChildName) const;
protected:
    void initialize (Object* pLxObj);
private:
    NoPassingZoneCollection* m_pLxObj;
};

class CurbCollectionNode : public CollectionNode
{
public:
    CurbCollectionNode (Object& pLxObj);
    CurbCollectionNode (Object* pLxObj);
    String nodeName() const;
    ILxNode *findChild (const String& strChildName) const;
protected:
    void initialize (Object* pLxObj);
private:
    CurbCollection* m_pLxObj;
};

class CenterNode : public ObjectNode
{
public:
    CenterNode (Object* pLxObj);
    String nodeName() const;
    const Object* getValueObject () const;
    bool setValue (const String& strMemberName, const String* pstrValue);
    bool getValue (const String& strMemberName, String& strValue);
private:
    Center* m_pLxObj;
};

class ZoneWidthCollectionNode : public CollectionNode
{
public:
    ZoneWidthCollectionNode (Object& pLxObj);
    ZoneWidthCollectionNode (Object* pLxObj);
    String nodeName() const;
    ILxNode *findChild (const String& strChildName) const;
protected:
    void initialize (Object* pLxObj);
private:
    ZoneWidthCollection* m_pLxObj;
};

class ParcelsNode : public ObjectNode
{
public:
    ParcelsNode (Object* pLxObj);
    String nodeName() const;
    const Object* getValueObject () const;
    bool setValue (const String& strMemberName, const String* pstrValue);
    bool getValue (const String& strMemberName, String& strValue);
private:
    Parcels* m_pLxObj;
};

class LocationAddressNode : public ObjectNode
{
public:
    LocationAddressNode (Object* pLxObj);
    String nodeName() const;
    const Object* getValueObject () const;
    bool setValue (const String& strMemberName, const String* pstrValue);
    bool getValue (const String& strMemberName, String& strValue);
private:
    LocationAddress* m_pLxObj;
};

class IntersectionsNode : public ObjectNode
{
public:
    IntersectionsNode (Object* pLxObj);
    String nodeName() const;
    const Object* getValueObject () const;
    bool setValue (const String& strMemberName, const String* pstrValue);
    bool getValue (const String& strMemberName, String& strValue);
private:
    Intersections* m_pLxObj;
};

class PipesNode : public ObjectNode
{
public:
    PipesNode (Object* pLxObj);
    String nodeName() const;
    const Object* getValueObject () const;
    bool setValue (const String& strMemberName, const String* pstrValue);
    bool getValue (const String& strMemberName, String& strValue);
private:
    Pipes* m_pLxObj;
};

class SpiralNode : public ObjectNode
{
public:
    SpiralNode (Object* pLxObj);
    String nodeName() const;
    const Object* getValueObject () const;
    bool setValue (const String& strMemberName, const String* pstrValue);
    bool getValue (const String& strMemberName, String& strValue);
private:
    Spiral* m_pLxObj;
};

class RetWallNode : public ObjectNode
{
public:
    RetWallNode (Object* pLxObj);
    String nodeName() const;
    const Object* getValueObject () const;
    bool setValue (const String& strMemberName, const String* pstrValue);
    bool getValue (const String& strMemberName, String& strValue);
private:
    RetWall* m_pLxObj;
};

class OffsetValsNode : public ObjectNode
{
public:
    OffsetValsNode (Object* pLxObj);
    String nodeName() const;
    const Object* getValueObject () const;
    bool setValue (const String& strMemberName, const String* pstrValue);
    bool getValue (const String& strMemberName, String& strValue);
private:
    OffsetVals* m_pLxObj;
};

class OutletNode : public ObjectNode
{
public:
    OutletNode (Object* pLxObj);
    String nodeName() const;
    const Object* getValueObject () const;
    bool setValue (const String& strMemberName, const String* pstrValue);
    bool getValue (const String& strMemberName, String& strValue);
private:
    Outlet* m_pLxObj;
};

class EquipmentNode : public ObjectNode
{
public:
    EquipmentNode (Object* pLxObj);
    String nodeName() const;
    const Object* getValueObject () const;
    bool setValue (const String& strMemberName, const String* pstrValue);
    bool getValue (const String& strMemberName, String& strValue);
private:
    Equipment* m_pLxObj;
};

class ElliPipeNode : public ObjectNode
{
public:
    ElliPipeNode (Object* pLxObj);
    String nodeName() const;
    const Object* getValueObject () const;
    bool setValue (const String& strMemberName, const String* pstrValue);
    bool getValue (const String& strMemberName, String& strValue);
private:
    ElliPipe* m_pLxObj;
};

class BridgeElementNode : public ObjectNode
{
public:
    BridgeElementNode (Object* pLxObj);
    String nodeName() const;
    const Object* getValueObject () const;
    bool setValue (const String& strMemberName, const String* pstrValue);
    bool getValue (const String& strMemberName, String& strValue);
private:
    BridgeElement* m_pLxObj;
};

class CoordGeomCollectionNode : public CollectionNode
{
public:
    CoordGeomCollectionNode (Object& pLxObj);
    CoordGeomCollectionNode (Object* pLxObj);
    String nodeName() const;
    ILxNode *findChild (const String& strChildName) const;
protected:
    void initialize (Object* pLxObj);
private:
    CoordGeomCollection* m_pLxObj;
};

class VolumeGeomNode : public ObjectNode
{
public:
    VolumeGeomNode (Object* pLxObj);
    String nodeName() const;
    const Object* getValueObject () const;
    bool setValue (const String& strMemberName, const String* pstrValue);
    bool getValue (const String& strMemberName, String& strValue);
private:
    VolumeGeom* m_pLxObj;
};

class PntList3DNode : public ObjectNode
{
public:
    PntList3DNode (Object* pLxObj);
    String nodeName() const;
    const Object* getValueObject () const;
    bool setValue (const String& strMemberName, const String* pstrValue);
    bool getValue (const String& strMemberName, String& strValue);
private:
    PntList3D* m_pLxObj;
};

class ParcelCollectionNode : public CollectionNode
{
public:
    ParcelCollectionNode (Object& pLxObj);
    ParcelCollectionNode (Object* pLxObj);
    String nodeName() const;
    ILxNode *findChild (const String& strChildName) const;
protected:
    void initialize (Object* pLxObj);
private:
    ParcelCollection* m_pLxObj;
};

class MonumentsCollectionNode : public CollectionNode
{
public:
    MonumentsCollectionNode (Object& pLxObj);
    MonumentsCollectionNode (Object* pLxObj);
    String nodeName() const;
    ILxNode *findChild (const String& strChildName) const;
protected:
    void initialize (Object* pLxObj);
private:
    MonumentsCollection* m_pLxObj;
};

class PipeNetworksCollectionNode : public CollectionNode
{
public:
    PipeNetworksCollectionNode (Object& pLxObj);
    PipeNetworksCollectionNode (Object* pLxObj);
    String nodeName() const;
    ILxNode *findChild (const String& strChildName) const;
protected:
    void initialize (Object* pLxObj);
private:
    PipeNetworksCollection* m_pLxObj;
};

class SurveyCollectionNode : public CollectionNode
{
public:
    SurveyCollectionNode (Object& pLxObj);
    SurveyCollectionNode (Object* pLxObj);
    String nodeName() const;
    ILxNode *findChild (const String& strChildName) const;
protected:
    void initialize (Object* pLxObj);
private:
    SurveyCollection* m_pLxObj;
};

class BoundaryNode : public ObjectNode
{
public:
    BoundaryNode (Object* pLxObj);
    String nodeName() const;
    const Object* getValueObject () const;
    bool setValue (const String& strMemberName, const String* pstrValue);
    bool getValue (const String& strMemberName, String& strValue);
private:
    Boundary* m_pLxObj;
};

class RedHorizontalPositionNode : public ObjectNode
{
public:
    RedHorizontalPositionNode (Object* pLxObj);
    String nodeName() const;
    const Object* getValueObject () const;
    bool setValue (const String& strMemberName, const String* pstrValue);
    bool getValue (const String& strMemberName, String& strValue);
private:
    RedHorizontalPosition* m_pLxObj;
};

class TrafficVolumeNode : public ObjectNode
{
public:
    TrafficVolumeNode (Object* pLxObj);
    String nodeName() const;
    const Object* getValueObject () const;
    bool setValue (const String& strMemberName, const String* pstrValue);
    bool getValue (const String& strMemberName, String& strValue);
private:
    TrafficVolume* m_pLxObj;
};

class StartNode : public ObjectNode
{
public:
    StartNode (Object* pLxObj);
    String nodeName() const;
    const Object* getValueObject () const;
    bool setValue (const String& strMemberName, const String* pstrValue);
    bool getValue (const String& strMemberName, String& strValue);
private:
    Start* m_pLxObj;
};

class CircPipeNode : public ObjectNode
{
public:
    CircPipeNode (Object* pLxObj);
    String nodeName() const;
    const Object* getValueObject () const;
    bool setValue (const String& strMemberName, const String* pstrValue);
    bool getValue (const String& strMemberName, String& strValue);
private:
    CircPipe* m_pLxObj;
};

class OutletCollectionNode : public CollectionNode
{
public:
    OutletCollectionNode (Object& pLxObj);
    OutletCollectionNode (Object* pLxObj);
    String nodeName() const;
    ILxNode *findChild (const String& strChildName) const;
protected:
    void initialize (Object* pLxObj);
private:
    OutletCollection* m_pLxObj;
};

class InstrumentSetupNode : public ObjectNode
{
public:
    InstrumentSetupNode (Object* pLxObj);
    String nodeName() const;
    const Object* getValueObject () const;
    bool setValue (const String& strMemberName, const String* pstrValue);
    bool getValue (const String& strMemberName, String& strValue);
private:
    InstrumentSetup* m_pLxObj;
};

class SurfVolumesNode : public ObjectNode
{
public:
    SurfVolumesNode (Object* pLxObj);
    String nodeName() const;
    const Object* getValueObject () const;
    bool setValue (const String& strMemberName, const String* pstrValue);
    bool getValue (const String& strMemberName, String& strValue);
private:
    SurfVolumes* m_pLxObj;
};

class ZoneCutFillCollectionNode : public CollectionNode
{
public:
    ZoneCutFillCollectionNode (Object& pLxObj);
    ZoneCutFillCollectionNode (Object* pLxObj);
    String nodeName() const;
    ILxNode *findChild (const String& strChildName) const;
protected:
    void initialize (Object* pLxObj);
private:
    ZoneCutFillCollection* m_pLxObj;
};

class TurnSpeedCollectionNode : public CollectionNode
{
public:
    TurnSpeedCollectionNode (Object& pLxObj);
    TurnSpeedCollectionNode (Object* pLxObj);
    String nodeName() const;
    ILxNode *findChild (const String& strChildName) const;
protected:
    void initialize (Object* pLxObj);
private:
    TurnSpeedCollection* m_pLxObj;
};

class FeatureCollectionNode : public CollectionNode
{
public:
    FeatureCollectionNode (Object& pLxObj);
    FeatureCollectionNode (Object* pLxObj);
    String nodeName() const;
    ILxNode *findChild (const String& strChildName) const;
protected:
    void initialize (Object* pLxObj);
private:
    FeatureCollection* m_pLxObj;
};

class HeadOfPowerCollectionNode : public CollectionNode
{
public:
    HeadOfPowerCollectionNode (Object& pLxObj);
    HeadOfPowerCollectionNode (Object* pLxObj);
    String nodeName() const;
    ILxNode *findChild (const String& strChildName) const;
protected:
    void initialize (Object* pLxObj);
private:
    HeadOfPowerCollection* m_pLxObj;
};

class PlanFeaturesNode : public ObjectNode
{
public:
    PlanFeaturesNode (Object* pLxObj);
    String nodeName() const;
    const Object* getValueObject () const;
    bool setValue (const String& strMemberName, const String* pstrValue);
    bool getValue (const String& strMemberName, String& strValue);
private:
    PlanFeatures* m_pLxObj;
};

class RoadNameCollectionNode : public CollectionNode
{
public:
    RoadNameCollectionNode (Object& pLxObj);
    RoadNameCollectionNode (Object* pLxObj);
    String nodeName() const;
    ILxNode *findChild (const String& strChildName) const;
protected:
    void initialize (Object* pLxObj);
private:
    RoadNameCollection* m_pLxObj;
};

class IntersectionCollectionNode : public CollectionNode
{
public:
    IntersectionCollectionNode (Object& pLxObj);
    IntersectionCollectionNode (Object* pLxObj);
    String nodeName() const;
    ILxNode *findChild (const String& strChildName) const;
protected:
    void initialize (Object* pLxObj);
private:
    IntersectionCollection* m_pLxObj;
};

class BoundaryCollectionNode : public CollectionNode
{
public:
    BoundaryCollectionNode (Object& pLxObj);
    BoundaryCollectionNode (Object* pLxObj);
    String nodeName() const;
    ILxNode *findChild (const String& strChildName) const;
protected:
    void initialize (Object* pLxObj);
private:
    BoundaryCollection* m_pLxObj;
};

class BoundariesNode : public ObjectNode
{
public:
    BoundariesNode (Object* pLxObj);
    String nodeName() const;
    const Object* getValueObject () const;
    bool setValue (const String& strMemberName, const String* pstrValue);
    bool getValue (const String& strMemberName, String& strValue);
private:
    Boundaries* m_pLxObj;
};

class CrossSectPntNode : public ObjectNode
{
public:
    CrossSectPntNode (Object* pLxObj);
    String nodeName() const;
    const Object* getValueObject () const;
    bool setValue (const String& strMemberName, const String* pstrValue);
    bool getValue (const String& strMemberName, String& strValue);
private:
    CrossSectPnt* m_pLxObj;
};

class AdministrativeDateCollectionNode : public CollectionNode
{
public:
    AdministrativeDateCollectionNode (Object& pLxObj);
    AdministrativeDateCollectionNode (Object* pLxObj);
    String nodeName() const;
    ILxNode *findChild (const String& strChildName) const;
protected:
    void initialize (Object* pLxObj);
private:
    AdministrativeDateCollection* m_pLxObj;
};

class CoordGeom_INNER_COLLECTION_1_70Node : public CollectionNode
{
public:
    CoordGeom_INNER_COLLECTION_1_70Node (Object& pLxObj);
    CoordGeom_INNER_COLLECTION_1_70Node (Object* pLxObj);
    String nodeName() const;
    ILxNode *findChild (const String& strChildName) const;
protected:
    void initialize (Object* pLxObj);
private:
    ObjectCollection* m_pLxObj;
};

class CoordGeomNode : public ObjectNode
{
public:
    CoordGeomNode (Object* pLxObj);
    String nodeName() const;
    const Object* getValueObject () const;
    bool setValue (const String& strMemberName, const String* pstrValue);
    bool getValue (const String& strMemberName, String& strValue);
private:
    CoordGeom* m_pLxObj;
};

class ObservationGroupCollectionNode : public CollectionNode
{
public:
    ObservationGroupCollectionNode (Object& pLxObj);
    ObservationGroupCollectionNode (Object* pLxObj);
    String nodeName() const;
    ILxNode *findChild (const String& strChildName) const;
protected:
    void initialize (Object* pLxObj);
private:
    ObservationGroupCollection* m_pLxObj;
};

class AmendmentItemNode : public ObjectNode
{
public:
    AmendmentItemNode (Object* pLxObj);
    String nodeName() const;
    const Object* getValueObject () const;
    bool setValue (const String& strMemberName, const String* pstrValue);
    bool getValue (const String& strMemberName, String& strValue);
private:
    AmendmentItem* m_pLxObj;
};

class LocationNode : public ObjectNode
{
public:
    LocationNode (Object* pLxObj);
    String nodeName() const;
    const Object* getValueObject () const;
    bool setValue (const String& strMemberName, const String* pstrValue);
    bool getValue (const String& strMemberName, String& strValue);
private:
    Location* m_pLxObj;
};

class PipeCollectionNode : public CollectionNode
{
public:
    PipeCollectionNode (Object& pLxObj);
    PipeCollectionNode (Object* pLxObj);
    String nodeName() const;
    ILxNode *findChild (const String& strChildName) const;
protected:
    void initialize (Object* pLxObj);
private:
    PipeCollection* m_pLxObj;
};

class TurnRestrictionNode : public ObjectNode
{
public:
    TurnRestrictionNode (Object* pLxObj);
    String nodeName() const;
    const Object* getValueObject () const;
    bool setValue (const String& strMemberName, const String* pstrValue);
    bool getValue (const String& strMemberName, String& strValue);
private:
    TurnRestriction* m_pLxObj;
};

class DitchCollectionNode : public CollectionNode
{
public:
    DitchCollectionNode (Object& pLxObj);
    DitchCollectionNode (Object* pLxObj);
    String nodeName() const;
    ILxNode *findChild (const String& strChildName) const;
protected:
    void initialize (Object* pLxObj);
private:
    DitchCollection* m_pLxObj;
};

class SurfVolumesCollectionNode : public CollectionNode
{
public:
    SurfVolumesCollectionNode (Object& pLxObj);
    SurfVolumesCollectionNode (Object* pLxObj);
    String nodeName() const;
    ILxNode *findChild (const String& strChildName) const;
protected:
    void initialize (Object* pLxObj);
private:
    SurfVolumesCollection* m_pLxObj;
};

class AdministrativeAreaNode : public ObjectNode
{
public:
    AdministrativeAreaNode (Object* pLxObj);
    String nodeName() const;
    const Object* getValueObject () const;
    bool setValue (const String& strMemberName, const String* pstrValue);
    bool getValue (const String& strMemberName, String& strValue);
private:
    AdministrativeArea* m_pLxObj;
};

class ClimbLaneNode : public ObjectNode
{
public:
    ClimbLaneNode (Object* pLxObj);
    String nodeName() const;
    const Object* getValueObject () const;
    bool setValue (const String& strMemberName, const String* pstrValue);
    bool getValue (const String& strMemberName, String& strValue);
private:
    ClimbLane* m_pLxObj;
};

class ZoneCutFillNode : public ObjectNode
{
public:
    ZoneCutFillNode (Object* pLxObj);
    String nodeName() const;
    const Object* getValueObject () const;
    bool setValue (const String& strMemberName, const String* pstrValue);
    bool getValue (const String& strMemberName, String& strValue);
private:
    ZoneCutFill* m_pLxObj;
};

class SpeedStationNode : public ObjectNode
{
public:
    SpeedStationNode (Object* pLxObj);
    String nodeName() const;
    const Object* getValueObject () const;
    bool setValue (const String& strMemberName, const String* pstrValue);
    bool getValue (const String& strMemberName, String& strValue);
private:
    SpeedStation* m_pLxObj;
};

class DailyTrafficVolumeNode : public ObjectNode
{
public:
    DailyTrafficVolumeNode (Object* pLxObj);
    String nodeName() const;
    const Object* getValueObject () const;
    bool setValue (const String& strMemberName, const String* pstrValue);
    bool getValue (const String& strMemberName, String& strValue);
private:
    DailyTrafficVolume* m_pLxObj;
};

class GPSPositionNode : public ObjectNode
{
public:
    GPSPositionNode (Object* pLxObj);
    String nodeName() const;
    const Object* getValueObject () const;
    bool setValue (const String& strMemberName, const String* pstrValue);
    bool getValue (const String& strMemberName, String& strValue);
private:
    GPSPosition* m_pLxObj;
};

class ProfSurfCollectionNode : public CollectionNode
{
public:
    ProfSurfCollectionNode (Object& pLxObj);
    ProfSurfCollectionNode (Object* pLxObj);
    String nodeName() const;
    ILxNode *findChild (const String& strChildName) const;
protected:
    void initialize (Object* pLxObj);
private:
    ProfSurfCollection* m_pLxObj;
};

class ProfAlignCollectionNode : public CollectionNode
{
public:
    ProfAlignCollectionNode (Object& pLxObj);
    ProfAlignCollectionNode (Object* pLxObj);
    String nodeName() const;
    ILxNode *findChild (const String& strChildName) const;
protected:
    void initialize (Object* pLxObj);
private:
    ProfAlignCollection* m_pLxObj;
};

class ProfileNode : public ObjectNode
{
public:
    ProfileNode (Object* pLxObj);
    String nodeName() const;
    const Object* getValueObject () const;
    bool setValue (const String& strMemberName, const String* pstrValue);
    bool getValue (const String& strMemberName, String& strValue);
private:
    Profile* m_pLxObj;
};

class PipeNetworksNode : public ObjectNode
{
public:
    PipeNetworksNode (Object* pLxObj);
    String nodeName() const;
    const Object* getValueObject () const;
    bool setValue (const String& strMemberName, const String* pstrValue);
    bool getValue (const String& strMemberName, String& strValue);
private:
    PipeNetworks* m_pLxObj;
};

class RectPipeNode : public ObjectNode
{
public:
    RectPipeNode (Object* pLxObj);
    String nodeName() const;
    const Object* getValueObject () const;
    bool setValue (const String& strMemberName, const String* pstrValue);
    bool getValue (const String& strMemberName, String& strValue);
private:
    RectPipe* m_pLxObj;
};

class ThruLaneNode : public ObjectNode
{
public:
    ThruLaneNode (Object* pLxObj);
    String nodeName() const;
    const Object* getValueObject () const;
    bool setValue (const String& strMemberName, const String* pstrValue);
    bool getValue (const String& strMemberName, String& strValue);
private:
    ThruLane* m_pLxObj;
};

class ProfSurfNode : public ObjectNode
{
public:
    ProfSurfNode (Object* pLxObj);
    String nodeName() const;
    const Object* getValueObject () const;
    bool setValue (const String& strMemberName, const String* pstrValue);
    bool getValue (const String& strMemberName, String& strValue);
private:
    ProfSurf* m_pLxObj;
};

class AuthorNode : public ObjectNode
{
public:
    AuthorNode (Object* pLxObj);
    String nodeName() const;
    const Object* getValueObject () const;
    bool setValue (const String& strMemberName, const String* pstrValue);
    bool getValue (const String& strMemberName, String& strValue);
private:
    Author* m_pLxObj;
};

class CrossSectSurfNode : public ObjectNode
{
public:
    CrossSectSurfNode (Object* pLxObj);
    String nodeName() const;
    const Object* getValueObject () const;
    bool setValue (const String& strMemberName, const String* pstrValue);
    bool getValue (const String& strMemberName, String& strValue);
private:
    CrossSectSurf* m_pLxObj;
};

class HazardRatingCollectionNode : public CollectionNode
{
public:
    HazardRatingCollectionNode (Object& pLxObj);
    HazardRatingCollectionNode (Object* pLxObj);
    String nodeName() const;
    ILxNode *findChild (const String& strChildName) const;
protected:
    void initialize (Object* pLxObj);
private:
    HazardRatingCollection* m_pLxObj;
};

class FullSuperelevNode : public ObjectNode
{
public:
    FullSuperelevNode (Object* pLxObj);
    String nodeName() const;
    const Object* getValueObject () const;
    bool setValue (const String& strMemberName, const String* pstrValue);
    bool getValue (const String& strMemberName, String& strValue);
private:
    FullSuperelev* m_pLxObj;
};

class RoadwayNode : public ObjectNode
{
public:
    RoadwayNode (Object* pLxObj);
    String nodeName() const;
    const Object* getValueObject () const;
    bool setValue (const String& strMemberName, const String* pstrValue);
    bool getValue (const String& strMemberName, String& strValue);
private:
    Roadway* m_pLxObj;
};

class SurfVolumeCollectionNode : public CollectionNode
{
public:
    SurfVolumeCollectionNode (Object& pLxObj);
    SurfVolumeCollectionNode (Object* pLxObj);
    String nodeName() const;
    ILxNode *findChild (const String& strChildName) const;
protected:
    void initialize (Object* pLxObj);
private:
    SurfVolumeCollection* m_pLxObj;
};

class BreaklineCollectionNode : public CollectionNode
{
public:
    BreaklineCollectionNode (Object& pLxObj);
    BreaklineCollectionNode (Object* pLxObj);
    String nodeName() const;
    ILxNode *findChild (const String& strChildName) const;
protected:
    void initialize (Object* pLxObj);
private:
    BreaklineCollection* m_pLxObj;
};

class EggPipeNode : public ObjectNode
{
public:
    EggPipeNode (Object* pLxObj);
    String nodeName() const;
    const Object* getValueObject () const;
    bool setValue (const String& strMemberName, const String* pstrValue);
    bool getValue (const String& strMemberName, String& strValue);
private:
    EggPipe* m_pLxObj;
};

class StructsNode : public ObjectNode
{
public:
    StructsNode (Object* pLxObj);
    String nodeName() const;
    const Object* getValueObject () const;
    bool setValue (const String& strMemberName, const String* pstrValue);
    bool getValue (const String& strMemberName, String& strValue);
private:
    Structs* m_pLxObj;
};

class SpeedStationCollectionNode : public CollectionNode
{
public:
    SpeedStationCollectionNode (Object& pLxObj);
    SpeedStationCollectionNode (Object* pLxObj);
    String nodeName() const;
    ILxNode *findChild (const String& strChildName) const;
protected:
    void initialize (Object* pLxObj);
private:
    SpeedStationCollection* m_pLxObj;
};

class IntersectionNode : public ObjectNode
{
public:
    IntersectionNode (Object* pLxObj);
    String nodeName() const;
    const Object* getValueObject () const;
    bool setValue (const String& strMemberName, const String* pstrValue);
    bool getValue (const String& strMemberName, String& strValue);
private:
    Intersection* m_pLxObj;
};

class FieldNoteNode : public ObjectNode
{
public:
    FieldNoteNode (Object* pLxObj);
    String nodeName() const;
    const Object* getValueObject () const;
    bool setValue (const String& strMemberName, const String* pstrValue);
    bool getValue (const String& strMemberName, String& strValue);
private:
    FieldNote* m_pLxObj;
};

class RoadSignCollectionNode : public CollectionNode
{
public:
    RoadSignCollectionNode (Object& pLxObj);
    RoadSignCollectionNode (Object* pLxObj);
    String nodeName() const;
    ILxNode *findChild (const String& strChildName) const;
protected:
    void initialize (Object* pLxObj);
private:
    RoadSignCollection* m_pLxObj;
};

class AuthorCollectionNode : public CollectionNode
{
public:
    AuthorCollectionNode (Object& pLxObj);
    AuthorCollectionNode (Object* pLxObj);
    String nodeName() const;
    ILxNode *findChild (const String& strChildName) const;
protected:
    void initialize (Object* pLxObj);
private:
    AuthorCollection* m_pLxObj;
};

class BridgeElementCollectionNode : public CollectionNode
{
public:
    BridgeElementCollectionNode (Object& pLxObj);
    BridgeElementCollectionNode (Object* pLxObj);
    String nodeName() const;
    ILxNode *findChild (const String& strChildName) const;
protected:
    void initialize (Object* pLxObj);
private:
    BridgeElementCollection* m_pLxObj;
};

class SurfVolumeNode : public ObjectNode
{
public:
    SurfVolumeNode (Object* pLxObj);
    String nodeName() const;
    const Object* getValueObject () const;
    bool setValue (const String& strMemberName, const String* pstrValue);
    bool getValue (const String& strMemberName, String& strValue);
private:
    SurfVolume* m_pLxObj;
};

class RoadsideCollectionNode : public CollectionNode
{
public:
    RoadsideCollectionNode (Object& pLxObj);
    RoadsideCollectionNode (Object* pLxObj);
    String nodeName() const;
    ILxNode *findChild (const String& strChildName) const;
protected:
    void initialize (Object* pLxObj);
private:
    RoadsideCollection* m_pLxObj;
};

class GPSQCInfoLevel1Node : public ObjectNode
{
public:
    GPSQCInfoLevel1Node (Object* pLxObj);
    String nodeName() const;
    const Object* getValueObject () const;
    bool setValue (const String& strMemberName, const String* pstrValue);
    bool getValue (const String& strMemberName, String& strValue);
private:
    GPSQCInfoLevel1* m_pLxObj;
};

class BikeFacilitiesNode : public ObjectNode
{
public:
    BikeFacilitiesNode (Object* pLxObj);
    String nodeName() const;
    const Object* getValueObject () const;
    bool setValue (const String& strMemberName, const String* pstrValue);
    bool getValue (const String& strMemberName, String& strValue);
private:
    BikeFacilities* m_pLxObj;
};

class CgPointNode : public ObjectNode
{
public:
    CgPointNode (Object* pLxObj);
    String nodeName() const;
    const Object* getValueObject () const;
    bool setValue (const String& strMemberName, const String* pstrValue);
    bool getValue (const String& strMemberName, String& strValue);
private:
    CgPoint* m_pLxObj;
};

class CrossSectSurfCollectionNode : public CollectionNode
{
public:
    CrossSectSurfCollectionNode (Object& pLxObj);
    CrossSectSurfCollectionNode (Object* pLxObj);
    String nodeName() const;
    ILxNode *findChild (const String& strChildName) const;
protected:
    void initialize (Object* pLxObj);
private:
    CrossSectSurfCollection* m_pLxObj;
};

class DrivewayDensityNode : public ObjectNode
{
public:
    DrivewayDensityNode (Object* pLxObj);
    String nodeName() const;
    const Object* getValueObject () const;
    bool setValue (const String& strMemberName, const String* pstrValue);
    bool getValue (const String& strMemberName, String& strValue);
private:
    DrivewayDensity* m_pLxObj;
};

class MonumentsNode : public ObjectNode
{
public:
    MonumentsNode (Object* pLxObj);
    String nodeName() const;
    const Object* getValueObject () const;
    bool setValue (const String& strMemberName, const String* pstrValue);
    bool getValue (const String& strMemberName, String& strValue);
private:
    Monuments* m_pLxObj;
};

class CornerNode : public ObjectNode
{
public:
    CornerNode (Object* pLxObj);
    String nodeName() const;
    const Object* getValueObject () const;
    bool setValue (const String& strMemberName, const String* pstrValue);
    bool getValue (const String& strMemberName, String& strValue);
private:
    Corner* m_pLxObj;
};

class VolumeNode : public ObjectNode
{
public:
    VolumeNode (Object* pLxObj);
    String nodeName() const;
    const Object* getValueObject () const;
    bool setValue (const String& strMemberName, const String* pstrValue);
    bool getValue (const String& strMemberName, String& strValue);
private:
    Volume* m_pLxObj;
};

class StartofRunoutStaCollectionNode : public CollectionNode
{
public:
    StartofRunoutStaCollectionNode (Object& pLxObj);
    StartofRunoutStaCollectionNode (Object* pLxObj);
    String nodeName() const;
    ILxNode *findChild (const String& strChildName) const;
protected:
    void initialize (Object* pLxObj);
private:
    StartofRunoutStaCollection* m_pLxObj;
};

class DesignSpeedCollectionNode : public CollectionNode
{
public:
    DesignSpeedCollectionNode (Object& pLxObj);
    DesignSpeedCollectionNode (Object* pLxObj);
    String nodeName() const;
    ILxNode *findChild (const String& strChildName) const;
protected:
    void initialize (Object* pLxObj);
private:
    DesignSpeedCollection* m_pLxObj;
};

class TargetSetupCollectionNode : public CollectionNode
{
public:
    TargetSetupCollectionNode (Object& pLxObj);
    TargetSetupCollectionNode (Object* pLxObj);
    String nodeName() const;
    ILxNode *findChild (const String& strChildName) const;
protected:
    void initialize (Object* pLxObj);
private:
    TargetSetupCollection* m_pLxObj;
};

class CircCurveNode : public ObjectNode
{
public:
    CircCurveNode (Object* pLxObj);
    String nodeName() const;
    const Object* getValueObject () const;
    bool setValue (const String& strMemberName, const String* pstrValue);
    bool getValue (const String& strMemberName, String& strValue);
private:
    CircCurve* m_pLxObj;
};

class TitleNode : public ObjectNode
{
public:
    TitleNode (Object* pLxObj);
    String nodeName() const;
    const Object* getValueObject () const;
    bool setValue (const String& strMemberName, const String* pstrValue);
    bool getValue (const String& strMemberName, String& strValue);
private:
    Title* m_pLxObj;
};

class DesignCrossSectSurfNode : public ObjectNode
{
public:
    DesignCrossSectSurfNode (Object* pLxObj);
    String nodeName() const;
    const Object* getValueObject () const;
    bool setValue (const String& strMemberName, const String* pstrValue);
    bool getValue (const String& strMemberName, String& strValue);
private:
    DesignCrossSectSurf* m_pLxObj;
};

class RedVerticalObservationNode : public ObjectNode
{
public:
    RedVerticalObservationNode (Object* pLxObj);
    String nodeName() const;
    const Object* getValueObject () const;
    bool setValue (const String& strMemberName, const String* pstrValue);
    bool getValue (const String& strMemberName, String& strValue);
private:
    RedVerticalObservation* m_pLxObj;
};

class CgPointCollectionNode : public CollectionNode
{
public:
    CgPointCollectionNode (Object& pLxObj);
    CgPointCollectionNode (Object* pLxObj);
    String nodeName() const;
    ILxNode *findChild (const String& strChildName) const;
protected:
    void initialize (Object* pLxObj);
private:
    CgPointCollection* m_pLxObj;
};

class ZoneCrossSectStructureNode : public ObjectNode
{
public:
    ZoneCrossSectStructureNode (Object* pLxObj);
    String nodeName() const;
    const Object* getValueObject () const;
    bool setValue (const String& strMemberName, const String* pstrValue);
    bool getValue (const String& strMemberName, String& strValue);
private:
    ZoneCrossSectStructure* m_pLxObj;
};

class GPSPositionCollectionNode : public CollectionNode
{
public:
    GPSPositionCollectionNode (Object& pLxObj);
    GPSPositionCollectionNode (Object* pLxObj);
    String nodeName() const;
    ILxNode *findChild (const String& strChildName) const;
protected:
    void initialize (Object* pLxObj);
private:
    GPSPositionCollection* m_pLxObj;
};

class ClassificationNode : public ObjectNode
{
public:
    ClassificationNode (Object* pLxObj);
    String nodeName() const;
    const Object* getValueObject () const;
    bool setValue (const String& strMemberName, const String* pstrValue);
    bool getValue (const String& strMemberName, String& strValue);
private:
    Classification* m_pLxObj;
};

class ZonesNode : public ObjectNode
{
public:
    ZonesNode (Object* pLxObj);
    String nodeName() const;
    const Object* getValueObject () const;
    bool setValue (const String& strMemberName, const String* pstrValue);
    bool getValue (const String& strMemberName, String& strValue);
private:
    Zones* m_pLxObj;
};

class AlignPICollectionNode : public CollectionNode
{
public:
    AlignPICollectionNode (Object& pLxObj);
    AlignPICollectionNode (Object* pLxObj);
    String nodeName() const;
    ILxNode *findChild (const String& strChildName) const;
protected:
    void initialize (Object* pLxObj);
private:
    AlignPICollection* m_pLxObj;
};

class SurveyHeaderNode : public ObjectNode
{
public:
    SurveyHeaderNode (Object* pLxObj);
    String nodeName() const;
    const Object* getValueObject () const;
    bool setValue (const String& strMemberName, const String* pstrValue);
    bool getValue (const String& strMemberName, String& strValue);
private:
    SurveyHeader* m_pLxObj;
};

class IntersectionsCollectionNode : public CollectionNode
{
public:
    IntersectionsCollectionNode (Object& pLxObj);
    IntersectionsCollectionNode (Object* pLxObj);
    String nodeName() const;
    ILxNode *findChild (const String& strChildName) const;
protected:
    void initialize (Object* pLxObj);
private:
    IntersectionsCollection* m_pLxObj;
};

class PostedSpeedCollectionNode : public CollectionNode
{
public:
    PostedSpeedCollectionNode (Object& pLxObj);
    PostedSpeedCollectionNode (Object* pLxObj);
    String nodeName() const;
    ILxNode *findChild (const String& strChildName) const;
protected:
    void initialize (Object* pLxObj);
private:
    PostedSpeedCollection* m_pLxObj;
};

class LaserSetupNode : public ObjectNode
{
public:
    LaserSetupNode (Object* pLxObj);
    String nodeName() const;
    const Object* getValueObject () const;
    bool setValue (const String& strMemberName, const String* pstrValue);
    bool getValue (const String& strMemberName, String& strValue);
private:
    LaserSetup* m_pLxObj;
};

class PropertyNode : public ObjectNode
{
public:
    PropertyNode (Object* pLxObj);
    String nodeName() const;
    const Object* getValueObject () const;
    bool setValue (const String& strMemberName, const String* pstrValue);
    bool getValue (const String& strMemberName, String& strValue);
private:
    Property* m_pLxObj;
};

class PointFilesNode : public ObjectNode
{
public:
    PointFilesNode (Object* pLxObj);
    String nodeName() const;
    const Object* getValueObject () const;
    bool setValue (const String& strMemberName, const String* pstrValue);
    bool getValue (const String& strMemberName, String& strValue);
private:
    PointFiles* m_pLxObj;
};

class PurposeOfSurveyCollectionNode : public CollectionNode
{
public:
    PurposeOfSurveyCollectionNode (Object& pLxObj);
    PurposeOfSurveyCollectionNode (Object* pLxObj);
    String nodeName() const;
    ILxNode *findChild (const String& strChildName) const;
protected:
    void initialize (Object* pLxObj);
private:
    PurposeOfSurveyCollection* m_pLxObj;
};

class ZoneSlopeNode : public ObjectNode
{
public:
    ZoneSlopeNode (Object* pLxObj);
    String nodeName() const;
    const Object* getValueObject () const;
    bool setValue (const String& strMemberName, const String* pstrValue);
    bool getValue (const String& strMemberName, String& strValue);
private:
    ZoneSlope* m_pLxObj;
};

class PointResultsCollectionNode : public CollectionNode
{
public:
    PointResultsCollectionNode (Object& pLxObj);
    PointResultsCollectionNode (Object* pLxObj);
    String nodeName() const;
    ILxNode *findChild (const String& strChildName) const;
protected:
    void initialize (Object* pLxObj);
private:
    PointResultsCollection* m_pLxObj;
};

class SurveyMonumentCollectionNode : public CollectionNode
{
public:
    SurveyMonumentCollectionNode (Object& pLxObj);
    SurveyMonumentCollectionNode (Object* pLxObj);
    String nodeName() const;
    ILxNode *findChild (const String& strChildName) const;
protected:
    void initialize (Object* pLxObj);
private:
    SurveyMonumentCollection* m_pLxObj;
};

class LanesCollectionNode : public CollectionNode
{
public:
    LanesCollectionNode (Object& pLxObj);
    LanesCollectionNode (Object* pLxObj);
    String nodeName() const;
    ILxNode *findChild (const String& strChildName) const;
protected:
    void initialize (Object* pLxObj);
private:
    LanesCollection* m_pLxObj;
};

class DesignSpeed85thCollectionNode : public CollectionNode
{
public:
    DesignSpeed85thCollectionNode (Object& pLxObj);
    DesignSpeed85thCollectionNode (Object* pLxObj);
    String nodeName() const;
    ILxNode *findChild (const String& strChildName) const;
protected:
    void initialize (Object* pLxObj);
private:
    DesignSpeed85thCollection* m_pLxObj;
};

class DitchNode : public ObjectNode
{
public:
    DitchNode (Object* pLxObj);
    String nodeName() const;
    const Object* getValueObject () const;
    bool setValue (const String& strMemberName, const String* pstrValue);
    bool getValue (const String& strMemberName, String& strValue);
private:
    Ditch* m_pLxObj;
};

class TimingNode : public ObjectNode
{
public:
    TimingNode (Object* pLxObj);
    String nodeName() const;
    const Object* getValueObject () const;
    bool setValue (const String& strMemberName, const String* pstrValue);
    bool getValue (const String& strMemberName, String& strValue);
private:
    Timing* m_pLxObj;
};

class GPSAntennaDetailsNode : public ObjectNode
{
public:
    GPSAntennaDetailsNode (Object* pLxObj);
    String nodeName() const;
    const Object* getValueObject () const;
    bool setValue (const String& strMemberName, const String* pstrValue);
    bool getValue (const String& strMemberName, String& strValue);
private:
    GPSAntennaDetails* m_pLxObj;
};

class InstrumentPointNode : public ObjectNode
{
public:
    InstrumentPointNode (Object* pLxObj);
    String nodeName() const;
    const Object* getValueObject () const;
    bool setValue (const String& strMemberName, const String* pstrValue);
    bool getValue (const String& strMemberName, String& strValue);
private:
    InstrumentPoint* m_pLxObj;
};

class ZoneCrossSectStructureCollectionNode : public CollectionNode
{
public:
    ZoneCrossSectStructureCollectionNode (Object& pLxObj);
    ZoneCrossSectStructureCollectionNode (Object* pLxObj);
    String nodeName() const;
    ILxNode *findChild (const String& strChildName) const;
protected:
    void initialize (Object* pLxObj);
private:
    ZoneCrossSectStructureCollection* m_pLxObj;
};

class TurnSpeedNode : public ObjectNode
{
public:
    TurnSpeedNode (Object* pLxObj);
    String nodeName() const;
    const Object* getValueObject () const;
    bool setValue (const String& strMemberName, const String* pstrValue);
    bool getValue (const String& strMemberName, String& strValue);
private:
    TurnSpeed* m_pLxObj;
};

class TurnLaneNode : public ObjectNode
{
public:
    TurnLaneNode (Object* pLxObj);
    String nodeName() const;
    const Object* getValueObject () const;
    bool setValue (const String& strMemberName, const String* pstrValue);
    bool getValue (const String& strMemberName, String& strValue);
private:
    TurnLane* m_pLxObj;
};

class ZoneCollectionNode : public CollectionNode
{
public:
    ZoneCollectionNode (Object& pLxObj);
    ZoneCollectionNode (Object* pLxObj);
    String nodeName() const;
    ILxNode *findChild (const String& strChildName) const;
protected:
    void initialize (Object* pLxObj);
private:
    ZoneCollection* m_pLxObj;
};

class TrafficVolumeCollectionNode : public CollectionNode
{
public:
    TrafficVolumeCollectionNode (Object& pLxObj);
    TrafficVolumeCollectionNode (Object* pLxObj);
    String nodeName() const;
    ILxNode *findChild (const String& strChildName) const;
protected:
    void initialize (Object* pLxObj);
private:
    TrafficVolumeCollection* m_pLxObj;
};

class FCollectionNode : public CollectionNode
{
public:
    FCollectionNode (Object& pLxObj);
    FCollectionNode (Object* pLxObj);
    String nodeName() const;
    ILxNode *findChild (const String& strChildName) const;
protected:
    void initialize (Object* pLxObj);
private:
    FCollection* m_pLxObj;
};

class ProfAlign_INNER_COLLECTION_1_73Node : public CollectionNode
{
public:
    ProfAlign_INNER_COLLECTION_1_73Node (Object& pLxObj);
    ProfAlign_INNER_COLLECTION_1_73Node (Object* pLxObj);
    String nodeName() const;
    ILxNode *findChild (const String& strChildName) const;
protected:
    void initialize (Object* pLxObj);
private:
    ObjectCollection* m_pLxObj;
};

class ProfAlignNode : public ObjectNode
{
public:
    ProfAlignNode (Object* pLxObj);
    String nodeName() const;
    const Object* getValueObject () const;
    bool setValue (const String& strMemberName, const String* pstrValue);
    bool getValue (const String& strMemberName, String& strValue);
private:
    ProfAlign* m_pLxObj;
};

class RawObservationTypeNode : public ObjectNode
{
public:
    RawObservationTypeNode (Object* pLxObj);
    String nodeName() const;
    const Object* getValueObject () const;
    bool setValue (const String& strMemberName, const String* pstrValue);
    bool getValue (const String& strMemberName, String& strValue);
private:
    RawObservationType* m_pLxObj;
};

class AddressPointCollectionNode : public CollectionNode
{
public:
    AddressPointCollectionNode (Object& pLxObj);
    AddressPointCollectionNode (Object* pLxObj);
    String nodeName() const;
    ILxNode *findChild (const String& strChildName) const;
protected:
    void initialize (Object* pLxObj);
private:
    AddressPointCollection* m_pLxObj;
};

class Curve1Node : public ObjectNode
{
public:
    Curve1Node (Object* pLxObj);
    String nodeName() const;
    const Object* getValueObject () const;
    bool setValue (const String& strMemberName, const String* pstrValue);
    bool getValue (const String& strMemberName, String& strValue);
private:
    Curve1* m_pLxObj;
};

class ParcelNode : public ObjectNode
{
public:
    ParcelNode (Object* pLxObj);
    String nodeName() const;
    const Object* getValueObject () const;
    bool setValue (const String& strMemberName, const String* pstrValue);
    bool getValue (const String& strMemberName, String& strValue);
private:
    Parcel* m_pLxObj;
};

class LineNode : public ObjectNode
{
public:
    LineNode (Object* pLxObj);
    String nodeName() const;
    const Object* getValueObject () const;
    bool setValue (const String& strMemberName, const String* pstrValue);
    bool getValue (const String& strMemberName, String& strValue);
private:
    Line* m_pLxObj;
};

class BreaklinesNode : public ObjectNode
{
public:
    BreaklinesNode (Object* pLxObj);
    String nodeName() const;
    const Object* getValueObject () const;
    bool setValue (const String& strMemberName, const String* pstrValue);
    bool getValue (const String& strMemberName, String& strValue);
private:
    Breaklines* m_pLxObj;
};

class FeatureNode : public ObjectNode
{
public:
    FeatureNode (Object* pLxObj);
    String nodeName() const;
    const Object* getValueObject () const;
    bool setValue (const String& strMemberName, const String* pstrValue);
    bool getValue (const String& strMemberName, String& strValue);
private:
    Feature* m_pLxObj;
};

class OutSpiralNode : public ObjectNode
{
public:
    OutSpiralNode (Object* pLxObj);
    String nodeName() const;
    const Object* getValueObject () const;
    bool setValue (const String& strMemberName, const String* pstrValue);
    bool getValue (const String& strMemberName, String& strValue);
private:
    OutSpiral* m_pLxObj;
};

class DefinitionNode : public ObjectNode
{
public:
    DefinitionNode (Object* pLxObj);
    String nodeName() const;
    const Object* getValueObject () const;
    bool setValue (const String& strMemberName, const String* pstrValue);
    bool getValue (const String& strMemberName, String& strValue);
private:
    Definition* m_pLxObj;
};

class PointFileCollectionNode : public CollectionNode
{
public:
    PointFileCollectionNode (Object& pLxObj);
    PointFileCollectionNode (Object* pLxObj);
    String nodeName() const;
    ILxNode *findChild (const String& strChildName) const;
protected:
    void initialize (Object* pLxObj);
private:
    PointFileCollection* m_pLxObj;
};

class FNode : public ObjectNode
{
public:
    FNode (Object* pLxObj);
    String nodeName() const;
    const Object* getValueObject () const;
    bool setValue (const String& strMemberName, const String* pstrValue);
    bool getValue (const String& strMemberName, String& strValue);
private:
    F* m_pLxObj;
};

class LaserDetailsNode : public ObjectNode
{
public:
    LaserDetailsNode (Object* pLxObj);
    String nodeName() const;
    const Object* getValueObject () const;
    bool setValue (const String& strMemberName, const String* pstrValue);
    bool getValue (const String& strMemberName, String& strValue);
private:
    LaserDetails* m_pLxObj;
};

class SpeedsNode : public ObjectNode
{
public:
    SpeedsNode (Object* pLxObj);
    String nodeName() const;
    const Object* getValueObject () const;
    bool setValue (const String& strMemberName, const String* pstrValue);
    bool getValue (const String& strMemberName, String& strValue);
private:
    Speeds* m_pLxObj;
};

class OutletStructNode : public ObjectNode
{
public:
    OutletStructNode (Object* pLxObj);
    String nodeName() const;
    const Object* getValueObject () const;
    bool setValue (const String& strMemberName, const String* pstrValue);
    bool getValue (const String& strMemberName, String& strValue);
private:
    OutletStruct* m_pLxObj;
};

class BreaklineNode : public ObjectNode
{
public:
    BreaklineNode (Object* pLxObj);
    String nodeName() const;
    const Object* getValueObject () const;
    bool setValue (const String& strMemberName, const String* pstrValue);
    bool getValue (const String& strMemberName, String& strValue);
private:
    Breakline* m_pLxObj;
};

class ExclusionsNode : public ObjectNode
{
public:
    ExclusionsNode (Object* pLxObj);
    String nodeName() const;
    const Object* getValueObject () const;
    bool setValue (const String& strMemberName, const String* pstrValue);
    bool getValue (const String& strMemberName, String& strValue);
private:
    Exclusions* m_pLxObj;
};

class PVINode : public ObjectNode
{
public:
    PVINode (Object* pLxObj);
    String nodeName() const;
    const Object* getValueObject () const;
    bool setValue (const String& strMemberName, const String* pstrValue);
    bool getValue (const String& strMemberName, String& strValue);
private:
    PVI* m_pLxObj;
};

class TrafficControlNode : public ObjectNode
{
public:
    TrafficControlNode (Object* pLxObj);
    String nodeName() const;
    const Object* getValueObject () const;
    bool setValue (const String& strMemberName, const String* pstrValue);
    bool getValue (const String& strMemberName, String& strValue);
private:
    TrafficControl* m_pLxObj;
};

class WatershedNode : public ObjectNode
{
public:
    WatershedNode (Object* pLxObj);
    String nodeName() const;
    const Object* getValueObject () const;
    bool setValue (const String& strMemberName, const String* pstrValue);
    bool getValue (const String& strMemberName, String& strValue);
private:
    Watershed* m_pLxObj;
};

class CorrectionsNode : public ObjectNode
{
public:
    CorrectionsNode (Object* pLxObj);
    String nodeName() const;
    const Object* getValueObject () const;
    bool setValue (const String& strMemberName, const String* pstrValue);
    bool getValue (const String& strMemberName, String& strValue);
private:
    Corrections* m_pLxObj;
};

class CgPointsCollectionNode : public CollectionNode
{
public:
    CgPointsCollectionNode (Object& pLxObj);
    CgPointsCollectionNode (Object* pLxObj);
    String nodeName() const;
    ILxNode *findChild (const String& strChildName) const;
protected:
    void initialize (Object* pLxObj);
private:
    CgPointsCollection* m_pLxObj;
};

class LocationCollectionNode : public CollectionNode
{
public:
    LocationCollectionNode (Object& pLxObj);
    LocationCollectionNode (Object* pLxObj);
    String nodeName() const;
    ILxNode *findChild (const String& strChildName) const;
protected:
    void initialize (Object* pLxObj);
private:
    LocationCollection* m_pLxObj;
};

class ReducedObservationNode : public ObjectNode
{
public:
    ReducedObservationNode (Object* pLxObj);
    String nodeName() const;
    const Object* getValueObject () const;
    bool setValue (const String& strMemberName, const String* pstrValue);
    bool getValue (const String& strMemberName, String& strValue);
private:
    ReducedObservation* m_pLxObj;
};

class WatershedsNode : public ObjectNode
{
public:
    WatershedsNode (Object* pLxObj);
    String nodeName() const;
    const Object* getValueObject () const;
    bool setValue (const String& strMemberName, const String* pstrValue);
    bool getValue (const String& strMemberName, String& strValue);
private:
    Watersheds* m_pLxObj;
};

class PlanFeatureCollectionNode : public CollectionNode
{
public:
    PlanFeatureCollectionNode (Object& pLxObj);
    PlanFeatureCollectionNode (Object* pLxObj);
    String nodeName() const;
    ILxNode *findChild (const String& strChildName) const;
protected:
    void initialize (Object* pLxObj);
private:
    PlanFeatureCollection* m_pLxObj;
};

class CircStructNode : public ObjectNode
{
public:
    CircStructNode (Object* pLxObj);
    String nodeName() const;
    const Object* getValueObject () const;
    bool setValue (const String& strMemberName, const String* pstrValue);
    bool getValue (const String& strMemberName, String& strValue);
private:
    CircStruct* m_pLxObj;
};

class FullSuperelevCollectionNode : public CollectionNode
{
public:
    FullSuperelevCollectionNode (Object& pLxObj);
    FullSuperelevCollectionNode (Object* pLxObj);
    String nodeName() const;
    ILxNode *findChild (const String& strChildName) const;
protected:
    void initialize (Object* pLxObj);
private:
    FullSuperelevCollection* m_pLxObj;
};

class SpeedsCollectionNode : public CollectionNode
{
public:
    SpeedsCollectionNode (Object& pLxObj);
    SpeedsCollectionNode (Object* pLxObj);
    String nodeName() const;
    ILxNode *findChild (const String& strChildName) const;
protected:
    void initialize (Object* pLxObj);
private:
    SpeedsCollection* m_pLxObj;
};

class InvertCollectionNode : public CollectionNode
{
public:
    InvertCollectionNode (Object& pLxObj);
    InvertCollectionNode (Object* pLxObj);
    String nodeName() const;
    ILxNode *findChild (const String& strChildName) const;
protected:
    void initialize (Object* pLxObj);
private:
    InvertCollection* m_pLxObj;
};

class StartofRunoutStaNode : public ObjectNode
{
public:
    StartofRunoutStaNode (Object* pLxObj);
    String nodeName() const;
    const Object* getValueObject () const;
    bool setValue (const String& strMemberName, const String* pstrValue);
    bool getValue (const String& strMemberName, String& strValue);
private:
    StartofRunoutSta* m_pLxObj;
};

class InletStructNode : public ObjectNode
{
public:
    InletStructNode (Object* pLxObj);
    String nodeName() const;
    const Object* getValueObject () const;
    bool setValue (const String& strMemberName, const String* pstrValue);
    bool getValue (const String& strMemberName, String& strValue);
private:
    InletStruct* m_pLxObj;
};

class ControlChecksNode : public ObjectNode
{
public:
    ControlChecksNode (Object* pLxObj);
    String nodeName() const;
    const Object* getValueObject () const;
    bool setValue (const String& strMemberName, const String* pstrValue);
    bool getValue (const String& strMemberName, String& strValue);
private:
    ControlChecks* m_pLxObj;
};

class FeatureDictionaryCollectionNode : public CollectionNode
{
public:
    FeatureDictionaryCollectionNode (Object& pLxObj);
    FeatureDictionaryCollectionNode (Object* pLxObj);
    String nodeName() const;
    ILxNode *findChild (const String& strChildName) const;
protected:
    void initialize (Object* pLxObj);
private:
    FeatureDictionaryCollection* m_pLxObj;
};

class ReducedArcObservationNode : public ObjectNode
{
public:
    ReducedArcObservationNode (Object* pLxObj);
    String nodeName() const;
    const Object* getValueObject () const;
    bool setValue (const String& strMemberName, const String* pstrValue);
    bool getValue (const String& strMemberName, String& strValue);
private:
    ReducedArcObservation* m_pLxObj;
};

class GradeModelNode : public ObjectNode
{
public:
    GradeModelNode (Object* pLxObj);
    String nodeName() const;
    const Object* getValueObject () const;
    bool setValue (const String& strMemberName, const String* pstrValue);
    bool getValue (const String& strMemberName, String& strValue);
private:
    GradeModel* m_pLxObj;
};

class PlanFeaturesCollectionNode : public CollectionNode
{
public:
    PlanFeaturesCollectionNode (Object& pLxObj);
    PlanFeaturesCollectionNode (Object* pLxObj);
    String nodeName() const;
    ILxNode *findChild (const String& strChildName) const;
protected:
    void initialize (Object* pLxObj);
private:
    PlanFeaturesCollection* m_pLxObj;
};

class TargetPointNode : public ObjectNode
{
public:
    TargetPointNode (Object* pLxObj);
    String nodeName() const;
    const Object* getValueObject () const;
    bool setValue (const String& strMemberName, const String* pstrValue);
    bool getValue (const String& strMemberName, String& strValue);
private:
    TargetPoint* m_pLxObj;
};

class DrivewayDensityCollectionNode : public CollectionNode
{
public:
    DrivewayDensityCollectionNode (Object& pLxObj);
    DrivewayDensityCollectionNode (Object* pLxObj);
    String nodeName() const;
    ILxNode *findChild (const String& strChildName) const;
protected:
    void initialize (Object* pLxObj);
private:
    DrivewayDensityCollection* m_pLxObj;
};

class BeginRunoutStaCollectionNode : public CollectionNode
{
public:
    BeginRunoutStaCollectionNode (Object& pLxObj);
    BeginRunoutStaCollectionNode (Object* pLxObj);
    String nodeName() const;
    ILxNode *findChild (const String& strChildName) const;
protected:
    void initialize (Object* pLxObj);
private:
    BeginRunoutStaCollection* m_pLxObj;
};

class Curve2Node : public ObjectNode
{
public:
    Curve2Node (Object* pLxObj);
    String nodeName() const;
    const Object* getValueObject () const;
    bool setValue (const String& strMemberName, const String* pstrValue);
    bool getValue (const String& strMemberName, String& strValue);
private:
    Curve2* m_pLxObj;
};

class DesignSpeed85thNode : public ObjectNode
{
public:
    DesignSpeed85thNode (Object* pLxObj);
    String nodeName() const;
    const Object* getValueObject () const;
    bool setValue (const String& strMemberName, const String* pstrValue);
    bool getValue (const String& strMemberName, String& strValue);
private:
    DesignSpeed85th* m_pLxObj;
};

class PntList2DNode : public ObjectNode
{
public:
    PntList2DNode (Object* pLxObj);
    String nodeName() const;
    const Object* getValueObject () const;
    bool setValue (const String& strMemberName, const String* pstrValue);
    bool getValue (const String& strMemberName, String& strValue);
private:
    PntList2D* m_pLxObj;
};

class MonumentCollectionNode : public CollectionNode
{
public:
    MonumentCollectionNode (Object& pLxObj);
    MonumentCollectionNode (Object* pLxObj);
    String nodeName() const;
    ILxNode *findChild (const String& strChildName) const;
protected:
    void initialize (Object* pLxObj);
private:
    MonumentCollection* m_pLxObj;
};

class GPSQCInfoLevel2Node : public ObjectNode
{
public:
    GPSQCInfoLevel2Node (Object* pLxObj);
    String nodeName() const;
    const Object* getValueObject () const;
    bool setValue (const String& strMemberName, const String* pstrValue);
    bool getValue (const String& strMemberName, String& strValue);
private:
    GPSQCInfoLevel2* m_pLxObj;
};

class FacesCollectionNode : public CollectionNode
{
public:
    FacesCollectionNode (Object& pLxObj);
    FacesCollectionNode (Object* pLxObj);
    String nodeName() const;
    ILxNode *findChild (const String& strChildName) const;
protected:
    void initialize (Object* pLxObj);
private:
    FacesCollection* m_pLxObj;
};

class BeginRunoffStaCollectionNode : public CollectionNode
{
public:
    BeginRunoffStaCollectionNode (Object& pLxObj);
    BeginRunoffStaCollectionNode (Object* pLxObj);
    String nodeName() const;
    ILxNode *findChild (const String& strChildName) const;
protected:
    void initialize (Object* pLxObj);
private:
    BeginRunoffStaCollection* m_pLxObj;
};

class OffsetLaneCollectionNode : public CollectionNode
{
public:
    OffsetLaneCollectionNode (Object& pLxObj);
    OffsetLaneCollectionNode (Object* pLxObj);
    String nodeName() const;
    ILxNode *findChild (const String& strChildName) const;
protected:
    void initialize (Object* pLxObj);
private:
    OffsetLaneCollection* m_pLxObj;
};

class GradeModelCollectionNode : public CollectionNode
{
public:
    GradeModelCollectionNode (Object& pLxObj);
    GradeModelCollectionNode (Object* pLxObj);
    String nodeName() const;
    ILxNode *findChild (const String& strChildName) const;
protected:
    void initialize (Object* pLxObj);
private:
    GradeModelCollection* m_pLxObj;
};

class DocFileRefCollectionNode : public CollectionNode
{
public:
    DocFileRefCollectionNode (Object& pLxObj);
    DocFileRefCollectionNode (Object* pLxObj);
    String nodeName() const;
    ILxNode *findChild (const String& strChildName) const;
protected:
    void initialize (Object* pLxObj);
private:
    DocFileRefCollection* m_pLxObj;
};

class CrashHistoryNode : public ObjectNode
{
public:
    CrashHistoryNode (Object* pLxObj);
    String nodeName() const;
    const Object* getValueObject () const;
    bool setValue (const String& strMemberName, const String* pstrValue);
    bool getValue (const String& strMemberName, String& strValue);
private:
    CrashHistory* m_pLxObj;
};

class TwoWayLeftTurnLaneCollectionNode : public CollectionNode
{
public:
    TwoWayLeftTurnLaneCollectionNode (Object& pLxObj);
    TwoWayLeftTurnLaneCollectionNode (Object* pLxObj);
    String nodeName() const;
    ILxNode *findChild (const String& strChildName) const;
protected:
    void initialize (Object* pLxObj);
private:
    TwoWayLeftTurnLaneCollection* m_pLxObj;
};

class SourceDataNode : public ObjectNode
{
public:
    SourceDataNode (Object* pLxObj);
    String nodeName() const;
    const Object* getValueObject () const;
    bool setValue (const String& strMemberName, const String* pstrValue);
    bool getValue (const String& strMemberName, String& strValue);
private:
    SourceData* m_pLxObj;
};

class PlanFeatureNode : public ObjectNode
{
public:
    PlanFeatureNode (Object* pLxObj);
    String nodeName() const;
    const Object* getValueObject () const;
    bool setValue (const String& strMemberName, const String* pstrValue);
    bool getValue (const String& strMemberName, String& strValue);
private:
    PlanFeature* m_pLxObj;
};

class ObstructionOffsetCollectionNode : public CollectionNode
{
public:
    ObstructionOffsetCollectionNode (Object& pLxObj);
    ObstructionOffsetCollectionNode (Object* pLxObj);
    String nodeName() const;
    ILxNode *findChild (const String& strChildName) const;
protected:
    void initialize (Object* pLxObj);
private:
    ObstructionOffsetCollection* m_pLxObj;
};

class WatershedCollectionNode : public CollectionNode
{
public:
    WatershedCollectionNode (Object& pLxObj);
    WatershedCollectionNode (Object* pLxObj);
    String nodeName() const;
    ILxNode *findChild (const String& strChildName) const;
protected:
    void initialize (Object* pLxObj);
private:
    WatershedCollection* m_pLxObj;
};

class PntList2DCollectionNode : public CollectionNode
{
public:
    PntList2DCollectionNode (Object& pLxObj);
    PntList2DCollectionNode (Object* pLxObj);
    String nodeName() const;
    ILxNode *findChild (const String& strChildName) const;
protected:
    void initialize (Object* pLxObj);
private:
    PntList2DCollection* m_pLxObj;
};

class StationNode : public ObjectNode
{
public:
    StationNode (Object* pLxObj);
    String nodeName() const;
    const Object* getValueObject () const;
    bool setValue (const String& strMemberName, const String* pstrValue);
    bool getValue (const String& strMemberName, String& strValue);
private:
    Station* m_pLxObj;
};

class InvertNode : public ObjectNode
{
public:
    InvertNode (Object* pLxObj);
    String nodeName() const;
    const Object* getValueObject () const;
    bool setValue (const String& strMemberName, const String* pstrValue);
    bool getValue (const String& strMemberName, String& strValue);
private:
    Invert* m_pLxObj;
};

class ContoursNode : public ObjectNode
{
public:
    ContoursNode (Object* pLxObj);
    String nodeName() const;
    const Object* getValueObject () const;
    bool setValue (const String& strMemberName, const String* pstrValue);
    bool getValue (const String& strMemberName, String& strValue);
private:
    Contours* m_pLxObj;
};

class RoadwaysCollectionNode : public CollectionNode
{
public:
    RoadwaysCollectionNode (Object& pLxObj);
    RoadwaysCollectionNode (Object* pLxObj);
    String nodeName() const;
    ILxNode *findChild (const String& strChildName) const;
protected:
    void initialize (Object* pLxObj);
private:
    RoadwaysCollection* m_pLxObj;
};

class LanesNode : public ObjectNode
{
public:
    LanesNode (Object* pLxObj);
    String nodeName() const;
    const Object* getValueObject () const;
    bool setValue (const String& strMemberName, const String* pstrValue);
    bool getValue (const String& strMemberName, String& strValue);
private:
    Lanes* m_pLxObj;
};

class TitleCollectionNode : public CollectionNode
{
public:
    TitleCollectionNode (Object& pLxObj);
    TitleCollectionNode (Object* pLxObj);
    String nodeName() const;
    ILxNode *findChild (const String& strChildName) const;
protected:
    void initialize (Object* pLxObj);
private:
    TitleCollection* m_pLxObj;
};

class GPSSetupCollectionNode : public CollectionNode
{
public:
    GPSSetupCollectionNode (Object& pLxObj);
    GPSSetupCollectionNode (Object* pLxObj);
    String nodeName() const;
    ILxNode *findChild (const String& strChildName) const;
protected:
    void initialize (Object* pLxObj);
private:
    GPSSetupCollection* m_pLxObj;
};

class ZoneHingeNode : public ObjectNode
{
public:
    ZoneHingeNode (Object* pLxObj);
    String nodeName() const;
    const Object* getValueObject () const;
    bool setValue (const String& strMemberName, const String* pstrValue);
    bool getValue (const String& strMemberName, String& strValue);
private:
    ZoneHinge* m_pLxObj;
};

class ZoneSlopeCollectionNode : public CollectionNode
{
public:
    ZoneSlopeCollectionNode (Object& pLxObj);
    ZoneSlopeCollectionNode (Object* pLxObj);
    String nodeName() const;
    ILxNode *findChild (const String& strChildName) const;
protected:
    void initialize (Object* pLxObj);
private:
    ZoneSlopeCollection* m_pLxObj;
};

class EndNode : public ObjectNode
{
public:
    EndNode (Object* pLxObj);
    String nodeName() const;
    const Object* getValueObject () const;
    bool setValue (const String& strMemberName, const String* pstrValue);
    bool getValue (const String& strMemberName, String& strValue);
private:
    End* m_pLxObj;
};

class AlignPIsNode : public ObjectNode
{
public:
    AlignPIsNode (Object* pLxObj);
    String nodeName() const;
    const Object* getValueObject () const;
    bool setValue (const String& strMemberName, const String* pstrValue);
    bool getValue (const String& strMemberName, String& strValue);
private:
    AlignPIs* m_pLxObj;
};

class AlignPI_INNER_COLLECTION_1_78Node : public CollectionNode
{
public:
    AlignPI_INNER_COLLECTION_1_78Node (Object& pLxObj);
    AlignPI_INNER_COLLECTION_1_78Node (Object* pLxObj);
    String nodeName() const;
    ILxNode *findChild (const String& strChildName) const;
protected:
    void initialize (Object* pLxObj);
private:
    ObjectCollection* m_pLxObj;
};

class AlignPINode : public ObjectNode
{
public:
    AlignPINode (Object* pLxObj);
    String nodeName() const;
    const Object* getValueObject () const;
    bool setValue (const String& strMemberName, const String* pstrValue);
    bool getValue (const String& strMemberName, String& strValue);
private:
    AlignPI* m_pLxObj;
};

class DataPointsNode : public ObjectNode
{
public:
    DataPointsNode (Object* pLxObj);
    String nodeName() const;
    const Object* getValueObject () const;
    bool setValue (const String& strMemberName, const String* pstrValue);
    bool getValue (const String& strMemberName, String& strValue);
private:
    DataPoints* m_pLxObj;
};

class FullSuperStaNode : public ObjectNode
{
public:
    FullSuperStaNode (Object* pLxObj);
    String nodeName() const;
    const Object* getValueObject () const;
    bool setValue (const String& strMemberName, const String* pstrValue);
    bool getValue (const String& strMemberName, String& strValue);
private:
    FullSuperSta* m_pLxObj;
};

class ContourNode : public ObjectNode
{
public:
    ContourNode (Object* pLxObj);
    String nodeName() const;
    const Object* getValueObject () const;
    bool setValue (const String& strMemberName, const String* pstrValue);
    bool getValue (const String& strMemberName, String& strValue);
private:
    Contour* m_pLxObj;
};

class AdministrativeDateNode : public ObjectNode
{
public:
    AdministrativeDateNode (Object* pLxObj);
    String nodeName() const;
    const Object* getValueObject () const;
    bool setValue (const String& strMemberName, const String* pstrValue);
    bool getValue (const String& strMemberName, String& strValue);
private:
    AdministrativeDate* m_pLxObj;
};

class SurveyMonumentNode : public ObjectNode
{
public:
    SurveyMonumentNode (Object* pLxObj);
    String nodeName() const;
    const Object* getValueObject () const;
    bool setValue (const String& strMemberName, const String* pstrValue);
    bool getValue (const String& strMemberName, String& strValue);
private:
    SurveyMonument* m_pLxObj;
};

class ObstructionOffsetNode : public ObjectNode
{
public:
    ObstructionOffsetNode (Object* pLxObj);
    String nodeName() const;
    const Object* getValueObject () const;
    bool setValue (const String& strMemberName, const String* pstrValue);
    bool getValue (const String& strMemberName, String& strValue);
private:
    ObstructionOffset* m_pLxObj;
};

class GPSSetupNode : public ObjectNode
{
public:
    GPSSetupNode (Object* pLxObj);
    String nodeName() const;
    const Object* getValueObject () const;
    bool setValue (const String& strMemberName, const String* pstrValue);
    bool getValue (const String& strMemberName, String& strValue);
private:
    GPSSetup* m_pLxObj;
};

class BacksightNode : public ObjectNode
{
public:
    BacksightNode (Object* pLxObj);
    String nodeName() const;
    const Object* getValueObject () const;
    bool setValue (const String& strMemberName, const String* pstrValue);
    bool getValue (const String& strMemberName, String& strValue);
private:
    Backsight* m_pLxObj;
};

class PointTypeNode : public ObjectNode
{
public:
    PointTypeNode (Object* pLxObj);
    String nodeName() const;
    const Object* getValueObject () const;
    bool setValue (const String& strMemberName, const String* pstrValue);
    bool getValue (const String& strMemberName, String& strValue);
private:
    PointType* m_pLxObj;
};

class CrossSectsNode : public ObjectNode
{
public:
    CrossSectsNode (Object* pLxObj);
    String nodeName() const;
    const Object* getValueObject () const;
    bool setValue (const String& strMemberName, const String* pstrValue);
    bool getValue (const String& strMemberName, String& strValue);
private:
    CrossSects* m_pLxObj;
};

class SurfaceNode : public ObjectNode
{
public:
    SurfaceNode (Object* pLxObj);
    String nodeName() const;
    const Object* getValueObject () const;
    bool setValue (const String& strMemberName, const String* pstrValue);
    bool getValue (const String& strMemberName, String& strValue);
private:
    Surface* m_pLxObj;
};

class CurbNode : public ObjectNode
{
public:
    CurbNode (Object* pLxObj);
    String nodeName() const;
    const Object* getValueObject () const;
    bool setValue (const String& strMemberName, const String* pstrValue);
    bool getValue (const String& strMemberName, String& strValue);
private:
    Curb* m_pLxObj;
};

class StructNode : public ObjectNode
{
public:
    StructNode (Object* pLxObj);
    String nodeName() const;
    const Object* getValueObject () const;
    bool setValue (const String& strMemberName, const String* pstrValue);
    bool getValue (const String& strMemberName, String& strValue);
private:
    Struct* m_pLxObj;
};

class CrossSectsCollectionNode : public CollectionNode
{
public:
    CrossSectsCollectionNode (Object& pLxObj);
    CrossSectsCollectionNode (Object* pLxObj);
    String nodeName() const;
    ILxNode *findChild (const String& strChildName) const;
protected:
    void initialize (Object* pLxObj);
private:
    CrossSectsCollection* m_pLxObj;
};

class TurnRestrictionCollectionNode : public CollectionNode
{
public:
    TurnRestrictionCollectionNode (Object& pLxObj);
    TurnRestrictionCollectionNode (Object* pLxObj);
    String nodeName() const;
    ILxNode *findChild (const String& strChildName) const;
protected:
    void initialize (Object* pLxObj);
private:
    TurnRestrictionCollection* m_pLxObj;
};

class WideningLaneNode : public ObjectNode
{
public:
    WideningLaneNode (Object* pLxObj);
    String nodeName() const;
    const Object* getValueObject () const;
    bool setValue (const String& strMemberName, const String* pstrValue);
    bool getValue (const String& strMemberName, String& strValue);
private:
    WideningLane* m_pLxObj;
};

class SurveyorCertificateNode : public ObjectNode
{
public:
    SurveyorCertificateNode (Object* pLxObj);
    String nodeName() const;
    const Object* getValueObject () const;
    bool setValue (const String& strMemberName, const String* pstrValue);
    bool getValue (const String& strMemberName, String& strValue);
private:
    SurveyorCertificate* m_pLxObj;
};

class ZoneMaterialCollectionNode : public CollectionNode
{
public:
    ZoneMaterialCollectionNode (Object& pLxObj);
    ZoneMaterialCollectionNode (Object* pLxObj);
    String nodeName() const;
    ILxNode *findChild (const String& strChildName) const;
protected:
    void initialize (Object* pLxObj);
private:
    ZoneMaterialCollection* m_pLxObj;
};

class PNode : public ObjectNode
{
public:
    PNode (Object* pLxObj);
    String nodeName() const;
    const Object* getValueObject () const;
    bool setValue (const String& strMemberName, const String* pstrValue);
    bool getValue (const String& strMemberName, String& strValue);
private:
    P* m_pLxObj;
};

class WideningLaneCollectionNode : public CollectionNode
{
public:
    WideningLaneCollectionNode (Object& pLxObj);
    WideningLaneCollectionNode (Object* pLxObj);
    String nodeName() const;
    ILxNode *findChild (const String& strChildName) const;
protected:
    void initialize (Object* pLxObj);
private:
    WideningLaneCollection* m_pLxObj;
};

class IrregularLineNode : public ObjectNode
{
public:
    IrregularLineNode (Object* pLxObj);
    String nodeName() const;
    const Object* getValueObject () const;
    bool setValue (const String& strMemberName, const String* pstrValue);
    bool getValue (const String& strMemberName, String& strValue);
private:
    IrregularLine* m_pLxObj;
};

class TrafficControlCollectionNode : public CollectionNode
{
public:
    TrafficControlCollectionNode (Object& pLxObj);
    TrafficControlCollectionNode (Object* pLxObj);
    String nodeName() const;
    ILxNode *findChild (const String& strChildName) const;
protected:
    void initialize (Object* pLxObj);
private:
    TrafficControlCollection* m_pLxObj;
};

class AdverseSECollectionNode : public CollectionNode
{
public:
    AdverseSECollectionNode (Object& pLxObj);
    AdverseSECollectionNode (Object* pLxObj);
    String nodeName() const;
    ILxNode *findChild (const String& strChildName) const;
protected:
    void initialize (Object* pLxObj);
private:
    AdverseSECollection* m_pLxObj;
};

class TwoWayLeftTurnLaneNode : public ObjectNode
{
public:
    TwoWayLeftTurnLaneNode (Object* pLxObj);
    String nodeName() const;
    const Object* getValueObject () const;
    bool setValue (const String& strMemberName, const String* pstrValue);
    bool getValue (const String& strMemberName, String& strValue);
private:
    TwoWayLeftTurnLane* m_pLxObj;
};

class PCollectionNode : public CollectionNode
{
public:
    PCollectionNode (Object& pLxObj);
    PCollectionNode (Object* pLxObj);
    String nodeName() const;
    ILxNode *findChild (const String& strChildName) const;
protected:
    void initialize (Object* pLxObj);
private:
    PCollection* m_pLxObj;
};

class RawObservationNode : public ObjectNode
{
public:
    RawObservationNode (Object* pLxObj);
    String nodeName() const;
    const Object* getValueObject () const;
    bool setValue (const String& strMemberName, const String* pstrValue);
    bool getValue (const String& strMemberName, String& strValue);
private:
    RawObservation* m_pLxObj;
};

class TargetSetupNode : public ObjectNode
{
public:
    TargetSetupNode (Object* pLxObj);
    String nodeName() const;
    const Object* getValueObject () const;
    bool setValue (const String& strMemberName, const String* pstrValue);
    bool getValue (const String& strMemberName, String& strValue);
private:
    TargetSetup* m_pLxObj;
};

class ChannelNode : public ObjectNode
{
public:
    ChannelNode (Object* pLxObj);
    String nodeName() const;
    const Object* getValueObject () const;
    bool setValue (const String& strMemberName, const String* pstrValue);
    bool getValue (const String& strMemberName, String& strValue);
private:
    Channel* m_pLxObj;
};

class PipeFlowNode : public ObjectNode
{
public:
    PipeFlowNode (Object* pLxObj);
    String nodeName() const;
    const Object* getValueObject () const;
    bool setValue (const String& strMemberName, const String* pstrValue);
    bool getValue (const String& strMemberName, String& strValue);
private:
    PipeFlow* m_pLxObj;
};

class PassingLaneCollectionNode : public CollectionNode
{
public:
    PassingLaneCollectionNode (Object& pLxObj);
    PassingLaneCollectionNode (Object* pLxObj);
    String nodeName() const;
    ILxNode *findChild (const String& strChildName) const;
protected:
    void initialize (Object* pLxObj);
private:
    PassingLaneCollection* m_pLxObj;
};

class FieldNoteCollectionNode : public CollectionNode
{
public:
    FieldNoteCollectionNode (Object& pLxObj);
    FieldNoteCollectionNode (Object* pLxObj);
    String nodeName() const;
    ILxNode *findChild (const String& strChildName) const;
protected:
    void initialize (Object* pLxObj);
private:
    FieldNoteCollection* m_pLxObj;
};

class PointFileNode : public ObjectNode
{
public:
    PointFileNode (Object* pLxObj);
    String nodeName() const;
    const Object* getValueObject () const;
    bool setValue (const String& strMemberName, const String* pstrValue);
    bool getValue (const String& strMemberName, String& strValue);
private:
    PointFile* m_pLxObj;
};

class BacksightPointNode : public ObjectNode
{
public:
    BacksightPointNode (Object* pLxObj);
    String nodeName() const;
    const Object* getValueObject () const;
    bool setValue (const String& strMemberName, const String* pstrValue);
    bool getValue (const String& strMemberName, String& strValue);
private:
    BacksightPoint* m_pLxObj;
};

class LocationAddressCollectionNode : public CollectionNode
{
public:
    LocationAddressCollectionNode (Object& pLxObj);
    LocationAddressCollectionNode (Object* pLxObj);
    String nodeName() const;
    ILxNode *findChild (const String& strChildName) const;
protected:
    void initialize (Object* pLxObj);
private:
    LocationAddressCollection* m_pLxObj;
};

class PntList3DCollectionNode : public CollectionNode
{
public:
    PntList3DCollectionNode (Object& pLxObj);
    PntList3DCollectionNode (Object* pLxObj);
    String nodeName() const;
    ILxNode *findChild (const String& strChildName) const;
protected:
    void initialize (Object* pLxObj);
private:
    PntList3DCollection* m_pLxObj;
};

class ExclusionsCollectionNode : public CollectionNode
{
public:
    ExclusionsCollectionNode (Object& pLxObj);
    ExclusionsCollectionNode (Object* pLxObj);
    String nodeName() const;
    ILxNode *findChild (const String& strChildName) const;
protected:
    void initialize (Object* pLxObj);
private:
    ExclusionsCollection* m_pLxObj;
};

class PersonnelNode : public ObjectNode
{
public:
    PersonnelNode (Object* pLxObj);
    String nodeName() const;
    const Object* getValueObject () const;
    bool setValue (const String& strMemberName, const String* pstrValue);
    bool getValue (const String& strMemberName, String& strValue);
private:
    Personnel* m_pLxObj;
};

class MonumentNode : public ObjectNode
{
public:
    MonumentNode (Object* pLxObj);
    String nodeName() const;
    const Object* getValueObject () const;
    bool setValue (const String& strMemberName, const String* pstrValue);
    bool getValue (const String& strMemberName, String& strValue);
private:
    Monument* m_pLxObj;
};

class ThruLaneCollectionNode : public CollectionNode
{
public:
    ThruLaneCollectionNode (Object& pLxObj);
    ThruLaneCollectionNode (Object* pLxObj);
    String nodeName() const;
    ILxNode *findChild (const String& strChildName) const;
protected:
    void initialize (Object* pLxObj);
private:
    ThruLaneCollection* m_pLxObj;
};

class AlignmentsCollectionNode : public CollectionNode
{
public:
    AlignmentsCollectionNode (Object& pLxObj);
    AlignmentsCollectionNode (Object* pLxObj);
    String nodeName() const;
    ILxNode *findChild (const String& strChildName) const;
protected:
    void initialize (Object* pLxObj);
private:
    AlignmentsCollection* m_pLxObj;
};

class AmendmentNode : public ObjectNode
{
public:
    AmendmentNode (Object* pLxObj);
    String nodeName() const;
    const Object* getValueObject () const;
    bool setValue (const String& strMemberName, const String* pstrValue);
    bool getValue (const String& strMemberName, String& strValue);
private:
    Amendment* m_pLxObj;
};

class InstrumentDetailsNode : public ObjectNode
{
public:
    InstrumentDetailsNode (Object* pLxObj);
    String nodeName() const;
    const Object* getValueObject () const;
    bool setValue (const String& strMemberName, const String* pstrValue);
    bool getValue (const String& strMemberName, String& strValue);
private:
    InstrumentDetails* m_pLxObj;
};

class StructFlowNode : public ObjectNode
{
public:
    StructFlowNode (Object* pLxObj);
    String nodeName() const;
    const Object* getValueObject () const;
    bool setValue (const String& strMemberName, const String* pstrValue);
    bool getValue (const String& strMemberName, String& strValue);
private:
    StructFlow* m_pLxObj;
};

class ClassificationCollectionNode : public CollectionNode
{
public:
    ClassificationCollectionNode (Object& pLxObj);
    ClassificationCollectionNode (Object* pLxObj);
    String nodeName() const;
    ILxNode *findChild (const String& strChildName) const;
protected:
    void initialize (Object* pLxObj);
private:
    ClassificationCollection* m_pLxObj;
};

class LandXMLNode : public ObjectNode
{
public:
    LandXMLNode (Object* pLxObj);
    String nodeName() const;
    const Object* getValueObject () const;
    bool setValue (const String& strMemberName, const String* pstrValue);
    bool getValue (const String& strMemberName, String& strValue);
private:
    LandXML* m_pLxObj;
};

class AmendmentItemCollectionNode : public CollectionNode
{
public:
    AmendmentItemCollectionNode (Object& pLxObj);
    AmendmentItemCollectionNode (Object* pLxObj);
    String nodeName() const;
    ILxNode *findChild (const String& strChildName) const;
protected:
    void initialize (Object* pLxObj);
private:
    AmendmentItemCollection* m_pLxObj;
};

class BikeFacilitiesCollectionNode : public CollectionNode
{
public:
    BikeFacilitiesCollectionNode (Object& pLxObj);
    BikeFacilitiesCollectionNode (Object* pLxObj);
    String nodeName() const;
    ILxNode *findChild (const String& strChildName) const;
protected:
    void initialize (Object* pLxObj);
private:
    BikeFacilitiesCollection* m_pLxObj;
};

class FacesNode : public ObjectNode
{
public:
    FacesNode (Object* pLxObj);
    String nodeName() const;
    const Object* getValueObject () const;
    bool setValue (const String& strMemberName, const String* pstrValue);
    bool getValue (const String& strMemberName, String& strValue);
private:
    Faces* m_pLxObj;
};

class DecisionSightDistanceNode : public ObjectNode
{
public:
    DecisionSightDistanceNode (Object* pLxObj);
    String nodeName() const;
    const Object* getValueObject () const;
    bool setValue (const String& strMemberName, const String* pstrValue);
    bool getValue (const String& strMemberName, String& strValue);
private:
    DecisionSightDistance* m_pLxObj;
};

class RoadwaysNode : public ObjectNode
{
public:
    RoadwaysNode (Object* pLxObj);
    String nodeName() const;
    const Object* getValueObject () const;
    bool setValue (const String& strMemberName, const String* pstrValue);
    bool getValue (const String& strMemberName, String& strValue);
private:
    Roadways* m_pLxObj;
};

class FeatureDictionaryNode : public ObjectNode
{
public:
    FeatureDictionaryNode (Object* pLxObj);
    String nodeName() const;
    const Object* getValueObject () const;
    bool setValue (const String& strMemberName, const String* pstrValue);
    bool getValue (const String& strMemberName, String& strValue);
private:
    FeatureDictionary* m_pLxObj;
};

class ZoneWidthNode : public ObjectNode
{
public:
    ZoneWidthNode (Object* pLxObj);
    String nodeName() const;
    const Object* getValueObject () const;
    bool setValue (const String& strMemberName, const String* pstrValue);
    bool getValue (const String& strMemberName, String& strValue);
private:
    ZoneWidth* m_pLxObj;
};

class CrashDataCollectionNode : public CollectionNode
{
public:
    CrashDataCollectionNode (Object& pLxObj);
    CrashDataCollectionNode (Object* pLxObj);
    String nodeName() const;
    ILxNode *findChild (const String& strChildName) const;
protected:
    void initialize (Object* pLxObj);
private:
    CrashDataCollection* m_pLxObj;
};

class GPSVectorCollectionNode : public CollectionNode
{
public:
    GPSVectorCollectionNode (Object& pLxObj);
    GPSVectorCollectionNode (Object* pLxObj);
    String nodeName() const;
    ILxNode *findChild (const String& strChildName) const;
protected:
    void initialize (Object* pLxObj);
private:
    GPSVectorCollection* m_pLxObj;
};

class ParaCurveNode : public ObjectNode
{
public:
    ParaCurveNode (Object* pLxObj);
    String nodeName() const;
    const Object* getValueObject () const;
    bool setValue (const String& strMemberName, const String* pstrValue);
    bool getValue (const String& strMemberName, String& strValue);
private:
    ParaCurve* m_pLxObj;
};

class InstrumentSetupCollectionNode : public CollectionNode
{
public:
    InstrumentSetupCollectionNode (Object& pLxObj);
    InstrumentSetupCollectionNode (Object* pLxObj);
    String nodeName() const;
    ILxNode *findChild (const String& strChildName) const;
protected:
    void initialize (Object* pLxObj);
private:
    InstrumentSetupCollection* m_pLxObj;
};

class RetWallPntCollectionNode : public CollectionNode
{
public:
    RetWallPntCollectionNode (Object& pLxObj);
    RetWallPntCollectionNode (Object* pLxObj);
    String nodeName() const;
    ILxNode *findChild (const String& strChildName) const;
protected:
    void initialize (Object* pLxObj);
private:
    RetWallPntCollection* m_pLxObj;
};

class CgPointsNode : public ObjectNode
{
public:
    CgPointsNode (Object* pLxObj);
    String nodeName() const;
    const Object* getValueObject () const;
    bool setValue (const String& strMemberName, const String* pstrValue);
    bool getValue (const String& strMemberName, String& strValue);
private:
    CgPoints* m_pLxObj;
};

class ParcelsCollectionNode : public CollectionNode
{
public:
    ParcelsCollectionNode (Object& pLxObj);
    ParcelsCollectionNode (Object* pLxObj);
    String nodeName() const;
    ILxNode *findChild (const String& strChildName) const;
protected:
    void initialize (Object* pLxObj);
private:
    ParcelsCollection* m_pLxObj;
};

class CrossSectPntCollectionNode : public CollectionNode
{
public:
    CrossSectPntCollectionNode (Object& pLxObj);
    CrossSectPntCollectionNode (Object* pLxObj);
    String nodeName() const;
    ILxNode *findChild (const String& strChildName) const;
protected:
    void initialize (Object* pLxObj);
private:
    CrossSectPntCollection* m_pLxObj;
};

class CrashHistoryCollectionNode : public CollectionNode
{
public:
    CrashHistoryCollectionNode (Object& pLxObj);
    CrashHistoryCollectionNode (Object* pLxObj);
    String nodeName() const;
    ILxNode *findChild (const String& strChildName) const;
protected:
    void initialize (Object* pLxObj);
private:
    CrashHistoryCollection* m_pLxObj;
};

class DesignHourNode : public ObjectNode
{
public:
    DesignHourNode (Object* pLxObj);
    String nodeName() const;
    const Object* getValueObject () const;
    bool setValue (const String& strMemberName, const String* pstrValue);
    bool getValue (const String& strMemberName, String& strValue);
private:
    DesignHour* m_pLxObj;
};

class ConnSpiralNode : public ObjectNode
{
public:
    ConnSpiralNode (Object* pLxObj);
    String nodeName() const;
    const Object* getValueObject () const;
    bool setValue (const String& strMemberName, const String* pstrValue);
    bool getValue (const String& strMemberName, String& strValue);
private:
    ConnSpiral* m_pLxObj;
};

class AlignmentNode : public ObjectNode
{
public:
    AlignmentNode (Object* pLxObj);
    String nodeName() const;
    const Object* getValueObject () const;
    bool setValue (const String& strMemberName, const String* pstrValue);
    bool getValue (const String& strMemberName, String& strValue);
private:
    Alignment* m_pLxObj;
};

class POINode : public ObjectNode
{
public:
    POINode (Object* pLxObj);
    String nodeName() const;
    const Object* getValueObject () const;
    bool setValue (const String& strMemberName, const String* pstrValue);
    bool getValue (const String& strMemberName, String& strValue);
private:
    POI* m_pLxObj;
};

class AlignmentsNode : public ObjectNode
{
public:
    AlignmentsNode (Object* pLxObj);
    String nodeName() const;
    const Object* getValueObject () const;
    bool setValue (const String& strMemberName, const String* pstrValue);
    bool getValue (const String& strMemberName, String& strValue);
private:
    Alignments* m_pLxObj;
};

class RoadsideNode : public ObjectNode
{
public:
    RoadsideNode (Object* pLxObj);
    String nodeName() const;
    const Object* getValueObject () const;
    bool setValue (const String& strMemberName, const String* pstrValue);
    bool getValue (const String& strMemberName, String& strValue);
private:
    Roadside* m_pLxObj;
};

class PeakHourNode : public ObjectNode
{
public:
    PeakHourNode (Object* pLxObj);
    String nodeName() const;
    const Object* getValueObject () const;
    bool setValue (const String& strMemberName, const String* pstrValue);
    bool getValue (const String& strMemberName, String& strValue);
private:
    PeakHour* m_pLxObj;
};

class ChainNode : public ObjectNode
{
public:
    ChainNode (Object* pLxObj);
    String nodeName() const;
    const Object* getValueObject () const;
    bool setValue (const String& strMemberName, const String* pstrValue);
    bool getValue (const String& strMemberName, String& strValue);
private:
    Chain* m_pLxObj;
};

class ObservationGroupNode : public ObjectNode
{
public:
    ObservationGroupNode (Object* pLxObj);
    String nodeName() const;
    const Object* getValueObject () const;
    bool setValue (const String& strMemberName, const String* pstrValue);
    bool getValue (const String& strMemberName, String& strValue);
private:
    ObservationGroup* m_pLxObj;
};

class ComplexNameNode : public ObjectNode
{
public:
    ComplexNameNode (Object* pLxObj);
    String nodeName() const;
    const Object* getValueObject () const;
    bool setValue (const String& strMemberName, const String* pstrValue);
    bool getValue (const String& strMemberName, String& strValue);
private:
    ComplexName* m_pLxObj;
};

class AddressPointNode : public ObjectNode
{
public:
    AddressPointNode (Object* pLxObj);
    String nodeName() const;
    const Object* getValueObject () const;
    bool setValue (const String& strMemberName, const String* pstrValue);
    bool getValue (const String& strMemberName, String& strValue);
private:
    AddressPoint* m_pLxObj;
};

class PersonnelCollectionNode : public CollectionNode
{
public:
    PersonnelCollectionNode (Object& pLxObj);
    PersonnelCollectionNode (Object* pLxObj);
    String nodeName() const;
    ILxNode *findChild (const String& strChildName) const;
protected:
    void initialize (Object* pLxObj);
private:
    PersonnelCollection* m_pLxObj;
};

class MapPointCollectionNode : public CollectionNode
{
public:
    MapPointCollectionNode (Object& pLxObj);
    MapPointCollectionNode (Object* pLxObj);
    String nodeName() const;
    ILxNode *findChild (const String& strChildName) const;
protected:
    void initialize (Object* pLxObj);
private:
    MapPointCollection* m_pLxObj;
};

class PointType3dReqNode : public ObjectNode
{
public:
    PointType3dReqNode (Object* pLxObj);
    String nodeName() const;
    const Object* getValueObject () const;
    bool setValue (const String& strMemberName, const String* pstrValue);
    bool getValue (const String& strMemberName, String& strValue);
private:
    PointType3dReq* m_pLxObj;
};

class AnnotationCollectionNode : public CollectionNode
{
public:
    AnnotationCollectionNode (Object& pLxObj);
    AnnotationCollectionNode (Object* pLxObj);
    String nodeName() const;
    ILxNode *findChild (const String& strChildName) const;
protected:
    void initialize (Object* pLxObj);
private:
    AnnotationCollection* m_pLxObj;
};

class PassingLaneNode : public ObjectNode
{
public:
    PassingLaneNode (Object* pLxObj);
    String nodeName() const;
    const Object* getValueObject () const;
    bool setValue (const String& strMemberName, const String* pstrValue);
    bool getValue (const String& strMemberName, String& strValue);
private:
    PassingLane* m_pLxObj;
};

class ZoneMaterialNode : public ObjectNode
{
public:
    ZoneMaterialNode (Object* pLxObj);
    String nodeName() const;
    const Object* getValueObject () const;
    bool setValue (const String& strMemberName, const String* pstrValue);
    bool getValue (const String& strMemberName, String& strValue);
private:
    ZoneMaterial* m_pLxObj;
};

class MetricNode : public ObjectNode
{
public:
    MetricNode (Object* pLxObj);
    String nodeName() const;
    const Object* getValueObject () const;
    bool setValue (const String& strMemberName, const String* pstrValue);
    bool getValue (const String& strMemberName, String& strValue);
private:
    Metric* m_pLxObj;
};

class RetWallCollectionNode : public CollectionNode
{
public:
    RetWallCollectionNode (Object& pLxObj);
    RetWallCollectionNode (Object* pLxObj);
    String nodeName() const;
    ILxNode *findChild (const String& strChildName) const;
protected:
    void initialize (Object* pLxObj);
private:
    RetWallCollection* m_pLxObj;
};

class RunoffStaNode : public ObjectNode
{
public:
    RunoffStaNode (Object* pLxObj);
    String nodeName() const;
    const Object* getValueObject () const;
    bool setValue (const String& strMemberName, const String* pstrValue);
    bool getValue (const String& strMemberName, String& strValue);
private:
    RunoffSta* m_pLxObj;
};

class ContourCollectionNode : public CollectionNode
{
public:
    ContourCollectionNode (Object& pLxObj);
    ContourCollectionNode (Object* pLxObj);
    String nodeName() const;
    ILxNode *findChild (const String& strChildName) const;
protected:
    void initialize (Object* pLxObj);
private:
    ContourCollection* m_pLxObj;
};

class PipeNode : public ObjectNode
{
public:
    PipeNode (Object* pLxObj);
    String nodeName() const;
    const Object* getValueObject () const;
    bool setValue (const String& strMemberName, const String* pstrValue);
    bool getValue (const String& strMemberName, String& strValue);
private:
    Pipe* m_pLxObj;
};

class EndofRunoutStaNode : public ObjectNode
{
public:
    EndofRunoutStaNode (Object* pLxObj);
    String nodeName() const;
    const Object* getValueObject () const;
    bool setValue (const String& strMemberName, const String* pstrValue);
    bool getValue (const String& strMemberName, String& strValue);
private:
    EndofRunoutSta* m_pLxObj;
};

class BeginRunoffStaNode : public ObjectNode
{
public:
    BeginRunoffStaNode (Object* pLxObj);
    String nodeName() const;
    const Object* getValueObject () const;
    bool setValue (const String& strMemberName, const String* pstrValue);
    bool getValue (const String& strMemberName, String& strValue);
private:
    BeginRunoffSta* m_pLxObj;
};

class PipeNetworkNode : public ObjectNode
{
public:
    PipeNetworkNode (Object* pLxObj);
    String nodeName() const;
    const Object* getValueObject () const;
    bool setValue (const String& strMemberName, const String* pstrValue);
    bool getValue (const String& strMemberName, String& strValue);
private:
    PipeNetwork* m_pLxObj;
};

class DecisionSightDistanceCollectionNode : public CollectionNode
{
public:
    DecisionSightDistanceCollectionNode (Object& pLxObj);
    DecisionSightDistanceCollectionNode (Object* pLxObj);
    String nodeName() const;
    ILxNode *findChild (const String& strChildName) const;
protected:
    void initialize (Object* pLxObj);
private:
    DecisionSightDistanceCollection* m_pLxObj;
};

class StaEquationCollectionNode : public CollectionNode
{
public:
    StaEquationCollectionNode (Object& pLxObj);
    StaEquationCollectionNode (Object* pLxObj);
    String nodeName() const;
    ILxNode *findChild (const String& strChildName) const;
protected:
    void initialize (Object* pLxObj);
private:
    StaEquationCollection* m_pLxObj;
};

class CoordinateSystemNode : public ObjectNode
{
public:
    CoordinateSystemNode (Object* pLxObj);
    String nodeName() const;
    const Object* getValueObject () const;
    bool setValue (const String& strMemberName, const String* pstrValue);
    bool getValue (const String& strMemberName, String& strValue);
private:
    CoordinateSystem* m_pLxObj;
};

class AmendmentCollectionNode : public CollectionNode
{
public:
    AmendmentCollectionNode (Object& pLxObj);
    AmendmentCollectionNode (Object* pLxObj);
    String nodeName() const;
    ILxNode *findChild (const String& strChildName) const;
protected:
    void initialize (Object* pLxObj);
private:
    AmendmentCollection* m_pLxObj;
};

class CrossSectNode : public ObjectNode
{
public:
    CrossSectNode (Object* pLxObj);
    String nodeName() const;
    const Object* getValueObject () const;
    bool setValue (const String& strMemberName, const String* pstrValue);
    bool getValue (const String& strMemberName, String& strValue);
private:
    CrossSect* m_pLxObj;
};

class LaserSetupCollectionNode : public CollectionNode
{
public:
    LaserSetupCollectionNode (Object& pLxObj);
    LaserSetupCollectionNode (Object* pLxObj);
    String nodeName() const;
    ILxNode *findChild (const String& strChildName) const;
protected:
    void initialize (Object* pLxObj);
private:
    LaserSetupCollection* m_pLxObj;
};

class TimingCollectionNode : public CollectionNode
{
public:
    TimingCollectionNode (Object& pLxObj);
    TimingCollectionNode (Object* pLxObj);
    String nodeName() const;
    ILxNode *findChild (const String& strChildName) const;
protected:
    void initialize (Object* pLxObj);
private:
    TimingCollection* m_pLxObj;
};

class PointResultsNode : public ObjectNode
{
public:
    PointResultsNode (Object* pLxObj);
    String nodeName() const;
    const Object* getValueObject () const;
    bool setValue (const String& strMemberName, const String* pstrValue);
    bool getValue (const String& strMemberName, String& strValue);
private:
    PointResults* m_pLxObj;
};

class PostedSpeedNode : public ObjectNode
{
public:
    PostedSpeedNode (Object* pLxObj);
    String nodeName() const;
    const Object* getValueObject () const;
    bool setValue (const String& strMemberName, const String* pstrValue);
    bool getValue (const String& strMemberName, String& strValue);
private:
    PostedSpeed* m_pLxObj;
};

class SuperelevationCollectionNode : public CollectionNode
{
public:
    SuperelevationCollectionNode (Object& pLxObj);
    SuperelevationCollectionNode (Object* pLxObj);
    String nodeName() const;
    ILxNode *findChild (const String& strChildName) const;
protected:
    void initialize (Object* pLxObj);
private:
    SuperelevationCollection* m_pLxObj;
};

class StructCollectionNode : public CollectionNode
{
public:
    StructCollectionNode (Object& pLxObj);
    StructCollectionNode (Object* pLxObj);
    String nodeName() const;
    ILxNode *findChild (const String& strChildName) const;
protected:
    void initialize (Object* pLxObj);
private:
    StructCollection* m_pLxObj;
};

class GPSReceiverDetailsNode : public ObjectNode
{
public:
    GPSReceiverDetailsNode (Object* pLxObj);
    String nodeName() const;
    const Object* getValueObject () const;
    bool setValue (const String& strMemberName, const String* pstrValue);
    bool getValue (const String& strMemberName, String& strValue);
private:
    GPSReceiverDetails* m_pLxObj;
};

class PurposeOfSurveyNode : public ObjectNode
{
public:
    PurposeOfSurveyNode (Object* pLxObj);
    String nodeName() const;
    const Object* getValueObject () const;
    bool setValue (const String& strMemberName, const String* pstrValue);
    bool getValue (const String& strMemberName, String& strValue);
private:
    PurposeOfSurvey* m_pLxObj;
};

class ProfileCollectionNode : public CollectionNode
{
public:
    ProfileCollectionNode (Object& pLxObj);
    ProfileCollectionNode (Object* pLxObj);
    String nodeName() const;
    ILxNode *findChild (const String& strChildName) const;
protected:
    void initialize (Object* pLxObj);
private:
    ProfileCollection* m_pLxObj;
};

class RoadNameNode : public ObjectNode
{
public:
    RoadNameNode (Object* pLxObj);
    String nodeName() const;
    const Object* getValueObject () const;
    bool setValue (const String& strMemberName, const String* pstrValue);
    bool getValue (const String& strMemberName, String& strValue);
private:
    RoadName* m_pLxObj;
};

class ZoneNode : public ObjectNode
{
public:
    ZoneNode (Object* pLxObj);
    String nodeName() const;
    const Object* getValueObject () const;
    bool setValue (const String& strMemberName, const String* pstrValue);
    bool getValue (const String& strMemberName, String& strValue);
private:
    Zone* m_pLxObj;
};

class StaEquationNode : public ObjectNode
{
public:
    StaEquationNode (Object* pLxObj);
    String nodeName() const;
    const Object* getValueObject () const;
    bool setValue (const String& strMemberName, const String* pstrValue);
    bool getValue (const String& strMemberName, String& strValue);
private:
    StaEquation* m_pLxObj;
};

class SurfacesCollectionNode : public CollectionNode
{
public:
    SurfacesCollectionNode (Object& pLxObj);
    SurfacesCollectionNode (Object* pLxObj);
    String nodeName() const;
    ILxNode *findChild (const String& strChildName) const;
protected:
    void initialize (Object* pLxObj);
private:
    SurfacesCollection* m_pLxObj;
};

class SurveyorCertificateCollectionNode : public CollectionNode
{
public:
    SurveyorCertificateCollectionNode (Object& pLxObj);
    SurveyorCertificateCollectionNode (Object* pLxObj);
    String nodeName() const;
    ILxNode *findChild (const String& strChildName) const;
protected:
    void initialize (Object* pLxObj);
private:
    SurveyorCertificateCollection* m_pLxObj;
};

class GradeSurfaceNode : public ObjectNode
{
public:
    GradeSurfaceNode (Object* pLxObj);
    String nodeName() const;
    const Object* getValueObject () const;
    bool setValue (const String& strMemberName, const String* pstrValue);
    bool getValue (const String& strMemberName, String& strValue);
private:
    GradeSurface* m_pLxObj;
};

class SurveyNode : public ObjectNode
{
public:
    SurveyNode (Object* pLxObj);
    String nodeName() const;
    const Object* getValueObject () const;
    bool setValue (const String& strMemberName, const String* pstrValue);
    bool getValue (const String& strMemberName, String& strValue);
private:
    Survey* m_pLxObj;
};

class ImperialNode : public ObjectNode
{
public:
    ImperialNode (Object* pLxObj);
    String nodeName() const;
    const Object* getValueObject () const;
    bool setValue (const String& strMemberName, const String* pstrValue);
    bool getValue (const String& strMemberName, String& strValue);
private:
    Imperial* m_pLxObj;
};

class FullSuperStaCollectionNode : public CollectionNode
{
public:
    FullSuperStaCollectionNode (Object& pLxObj);
    FullSuperStaCollectionNode (Object* pLxObj);
    String nodeName() const;
    ILxNode *findChild (const String& strChildName) const;
protected:
    void initialize (Object* pLxObj);
private:
    FullSuperStaCollection* m_pLxObj;
};

class TestObservationCollectionNode : public CollectionNode
{
public:
    TestObservationCollectionNode (Object& pLxObj);
    TestObservationCollectionNode (Object* pLxObj);
    String nodeName() const;
    ILxNode *findChild (const String& strChildName) const;
protected:
    void initialize (Object* pLxObj);
private:
    TestObservationCollection* m_pLxObj;
};

class BeginRunoutStaNode : public ObjectNode
{
public:
    BeginRunoutStaNode (Object* pLxObj);
    String nodeName() const;
    const Object* getValueObject () const;
    bool setValue (const String& strMemberName, const String* pstrValue);
    bool getValue (const String& strMemberName, String& strValue);
private:
    BeginRunoutSta* m_pLxObj;
};

class ComplexNameCollectionNode : public CollectionNode
{
public:
    ComplexNameCollectionNode (Object& pLxObj);
    ComplexNameCollectionNode (Object* pLxObj);
    String nodeName() const;
    ILxNode *findChild (const String& strChildName) const;
protected:
    void initialize (Object* pLxObj);
private:
    ComplexNameCollection* m_pLxObj;
};

class ControlChecksCollectionNode : public CollectionNode
{
public:
    ControlChecksCollectionNode (Object& pLxObj);
    ControlChecksCollectionNode (Object* pLxObj);
    String nodeName() const;
    ILxNode *findChild (const String& strChildName) const;
protected:
    void initialize (Object* pLxObj);
private:
    ControlChecksCollection* m_pLxObj;
};

class DesignSpeedNode : public ObjectNode
{
public:
    DesignSpeedNode (Object* pLxObj);
    String nodeName() const;
    const Object* getValueObject () const;
    bool setValue (const String& strMemberName, const String* pstrValue);
    bool getValue (const String& strMemberName, String& strValue);
private:
    DesignSpeed* m_pLxObj;
};

class ConnectionNode : public ObjectNode
{
public:
    ConnectionNode (Object* pLxObj);
    String nodeName() const;
    const Object* getValueObject () const;
    bool setValue (const String& strMemberName, const String* pstrValue);
    bool getValue (const String& strMemberName, String& strValue);
private:
    Connection* m_pLxObj;
};

}; // namespace : LX

#endif
