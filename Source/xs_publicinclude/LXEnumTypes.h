#if !defined(__LXENUMTYPES_H_H)
#define __LXENUMTYPES_H_H

#include "LXCoreTypes.h"

namespace LX
{
class EnumPointGeometryType: public EnumObject
{
public:
    enum Values
    {
        k_null,
        k_point,
        k_curve,
    };
public:
    typedef Values Type;

    virtual Values value () = 0;
    virtual void setValue (Values eValue) = 0;
};

class EnumElevationType: public EnumObject
{
public:
    enum Values
    {
        k_null,
        k_meter,
        k_kilometer,
        k_feet,
        k_miles,
    };
public:
    typedef Values Type;

    virtual Values value () = 0;
    virtual void setValue (Values eValue) = 0;
};

class EnumTrafficTurnRestriction: public EnumObject
{
public:
    enum Values
    {
        k_null,
        k_none,
        k_no_left_turn,
        k_no_right_turn,
        k_no_U_turn_,
        k_no_turn_,
    };
public:
    typedef Values Type;

    virtual Values value () = 0;
    virtual void setValue (Values eValue) = 0;
};

class EnumAngularType: public EnumObject
{
public:
    enum Values
    {
        k_null,
        k_radians,
        k_grads,
        k_decimal_degrees,
        k_decimal_dd_mm_ss,
    };
public:
    typedef Values Type;

    virtual Values value () = 0;
    virtual void setValue (Values eValue) = 0;
};

class EnumMetHeight: public EnumObject
{
public:
    enum Values
    {
        k_null,
        k_millimeter,
        k_centimeter,
        k_meter,
        k_kilometer,
    };
public:
    typedef Values Type;

    virtual Values value () = 0;
    virtual void setValue (Values eValue) = 0;
};

class EnumZoneSurfaceType: public EnumObject
{
public:
    enum Values
    {
        k_null,
        k_finalSurface,
        k_subgrade,
    };
public:
    typedef Values Type;

    virtual Values value () = 0;
    virtual void setValue (Values eValue) = 0;
};

class EnumFunctionalClassType: public EnumObject
{
public:
    enum Values
    {
        k_null,
        k_arterial,
        k_collector_,
        k_local,
    };
public:
    typedef Values Type;

    virtual Values value () = 0;
    virtual void setValue (Values eValue) = 0;
};

class EnumMetVolume: public EnumObject
{
public:
    enum Values
    {
        k_null,
        k_cubicMeter,
        k_liter,
        k_hectareMeter,
    };
public:
    typedef Values Type;

    virtual Values value () = 0;
    virtual void setValue (Values eValue) = 0;
};

class EnumBridgeProjectType: public EnumObject
{
public:
    enum Values
    {
        k_null,
        k_new,
        k_existing,
    };
public:
    typedef Values Type;

    virtual Values value () = 0;
    virtual void setValue (Values eValue) = 0;
};

class EnumTrafficControlPosition: public EnumObject
{
public:
    enum Values
    {
        k_null,
        k_side,
        k_overhead,
    };
public:
    typedef Values Type;

    virtual Values value () = 0;
    virtual void setValue (Values eValue) = 0;
};

class EnumImpVolume: public EnumObject
{
public:
    enum Values
    {
        k_null,
        k_US_gallon,
        k_IMP_gallon,
        k_cubicInch,
        k_cubicFeet,
        k_cubicYard,
        k_acreFeet,
    };
public:
    typedef Values Type;

    virtual Values value () = 0;
    virtual void setValue (Values eValue) = 0;
};

class EnumCurbType: public EnumObject
{
public:
    enum Values
    {
        k_null,
        k_unknown,
    };
public:
    typedef Values Type;

    virtual Values value () = 0;
    virtual void setValue (Values eValue) = 0;
};

class EnumMetWidth: public EnumObject
{
public:
    enum Values
    {
        k_null,
        k_millimeter,
        k_centimeter,
        k_meter,
        k_kilometer,
    };
public:
    typedef Values Type;

    virtual Values value () = 0;
    virtual void setValue (Values eValue) = 0;
};

class EnumZonePlacementType: public EnumObject
{
public:
    enum Values
    {
        k_null,
        k_dependent,
        k_independent,
    };
public:
    typedef Values Type;

    virtual Values value () = 0;
    virtual void setValue (Values eValue) = 0;
};

class EnumAdverseSEType: public EnumObject
{
public:
    enum Values
    {
        k_null,
        k_non_adverse,
        k_adverse,
    };
public:
    typedef Values Type;

    virtual Values value () = 0;
    virtual void setValue (Values eValue) = 0;
};

class EnumCornerType: public EnumObject
{
public:
    enum Values
    {
        k_null,
        k_unknown,
    };
public:
    typedef Values Type;

    virtual Values value () = 0;
    virtual void setValue (Values eValue) = 0;
};

class EnumMonumentCategory: public EnumObject
{
public:
    enum Values
    {
        k_null,
        k_benchmark,
        k_central,
        k_reference,
        k_rural,
        k_standard_traverse,
        k_urban_standard_traverse,
    };
public:
    typedef Values Type;

    virtual Values value () = 0;
    virtual void setValue (Values eValue) = 0;
};

class EnumCrashSeverityType: public EnumObject
{
public:
    enum Values
    {
        k_null,
        k_fatal,
        k_nonfatal_,
        k_propery_damage_only,
    };
public:
    typedef Values Type;

    virtual Values value () = 0;
    virtual void setValue (Values eValue) = 0;
};

class EnumInOut: public EnumObject
{
public:
    enum Values
    {
        k_null,
        k_in,
        k_out,
        k_both,
    };
public:
    typedef Values Type;

    virtual Values value () = 0;
    virtual void setValue (Values eValue) = 0;
};

class EnumBeaconType: public EnumObject
{
public:
    enum Values
    {
        k_null,
        k_cairn,
        k_chimney,
        k_large_quadripod,
        k_lighthouse,
        k_marine_beacon,
        k_mast,
        k_mast_with_targets,
        k_no_beacon,
        k_other,
        k_pillar,
        k_post,
        k_small_quadripod,
        k_tower,
        k_tripod,
        k_unknown,
    };
public:
    typedef Values Type;

    virtual Values value () = 0;
    virtual void setValue (Values eValue) = 0;
};

class EnumMetVelocity: public EnumObject
{
public:
    enum Values
    {
        k_null,
        k_metersPerSecond,
        k_kilometersPerHour,
    };
public:
    typedef Values Type;

    virtual Values value () = 0;
    virtual void setValue (Values eValue) = 0;
};

class EnumSurfTypeEnum: public EnumObject
{
public:
    enum Values
    {
        k_null,
        k_TIN,
        k_grid,
    };
public:
    typedef Values Type;

    virtual Values value () = 0;
    virtual void setValue (Values eValue) = 0;
};

class EnumZoneOffsetType: public EnumObject
{
public:
    enum Values
    {
        k_null,
        k_centerline,
        k_zone,
    };
public:
    typedef Values Type;

    virtual Values value () = 0;
    virtual void setValue (Values eValue) = 0;
};

class EnumStationIncrementDirectionType: public EnumObject
{
public:
    enum Values
    {
        k_null,
        k_increasing,
        k_decreasing,
    };
public:
    typedef Values Type;

    virtual Values value () = 0;
    virtual void setValue (Values eValue) = 0;
};

class EnumImpArea: public EnumObject
{
public:
    enum Values
    {
        k_null,
        k_acre,
        k_squareFoot,
        k_squareInch,
        k_squareMiles,
    };
public:
    typedef Values Type;

    virtual Values value () = 0;
    virtual void setValue (Values eValue) = 0;
};

class EnumImpTemperature: public EnumObject
{
public:
    enum Values
    {
        k_null,
        k_fahrenheit,
        k_kelvin,
    };
public:
    typedef Values Type;

    virtual Values value () = 0;
    virtual void setValue (Values eValue) = 0;
};

class EnumManeuverType: public EnumObject
{
public:
    enum Values
    {
        k_null,
        k_A_stop_on_rural_road,
        k_C_speed_path_direction_change_on_rural_road,
    };
public:
    typedef Values Type;

    virtual Values value () = 0;
    virtual void setValue (Values eValue) = 0;
};

class EnumZoneCategoryType: public EnumObject
{
public:
    enum Values
    {
        k_null,
        k_road_surface,
        k_road_subsurface,
        k_road_shoulder,
        k_road_foreSlope,
        k_road_backSlope,
        k_road_curb_gutter,
        k_bridge_surface,
        k_bridge_body,
        k_sidewalk,
        k_ground,
        k_ditch,
        k_wall,
        k_channel,
        k_bike_facilities,
        k_obstruction_offset,
        k_longitudinal_barrier,
        k_sound_barrier,
        k_bridge_abutment,
        k_vertical_pillar,
    };
public:
    typedef Values Type;

    virtual Values value () = 0;
    virtual void setValue (Values eValue) = 0;
};

class EnumDTMAttributeType: public EnumObject
{
public:
    enum Values
    {
        k_null,
        k_determinebyfeature,
        k_donotinclude,
        k_spot,
        k_spotandbreak,
        k_void,
        k_drapevoid,
        k_breakvoid,
        k_island,
        k_boundary,
        k_contour,
        k_feature,
        k_ground,
        k_xsection,
        k_user,
    };
public:
    typedef Values Type;

    virtual Values value () = 0;
    virtual void setValue (Values eValue) = 0;
};

class EnumImpFlow: public EnumObject
{
public:
    enum Values
    {
        k_null,
        k_US_gallonPerDay,
        k_IMP_gallonPerDay,
        k_cubicFeetDay,
        k_US_gallonPerMinute,
        k_IMP_gallonPerMinute,
        k_acreFeetDay,
        k_cubicFeetSecond,
    };
public:
    typedef Values Type;

    virtual Values value () = 0;
    virtual void setValue (Values eValue) = 0;
};

class EnumSurvPntType: public EnumObject
{
public:
    enum Values
    {
        k_null,
        k_monument,
        k_control,
        k_sideshot,
        k_boundary,
        k_natural_boundary,
        k_traverse,
        k_reference,
        k_administrative,
    };
public:
    typedef Values Type;

    virtual Values value () = 0;
    virtual void setValue (Values eValue) = 0;
};

class EnumLaneTaperType: public EnumObject
{
public:
    enum Values
    {
        k_null,
        k_straight_line,
        k_partial_tangent,
        k_symmetrical_reverse_curve,
        k_asymmetrical_reverse_curve,
    };
public:
    typedef Values Type;

    virtual Values value () = 0;
    virtual void setValue (Values eValue) = 0;
};

class EnumImpWidth: public EnumObject
{
public:
    enum Values
    {
        k_null,
        k_foot,
        k_USSurveyFoot,
        k_inch,
    };
public:
    typedef Values Type;

    virtual Values value () = 0;
    virtual void setValue (Values eValue) = 0;
};

class EnumTrafficControlType: public EnumObject
{
public:
    enum Values
    {
        k_null,
        k_none,
        k_signal,
        k_stop,
        k_yield,
    };
public:
    typedef Values Type;

    virtual Values value () = 0;
    virtual void setValue (Values eValue) = 0;
};

class EnumZoneMaterialType: public EnumObject
{
public:
    enum Values
    {
        k_null,
        k_pavement_high_type,
        k_pavement_intermediate_type,
        k_pavement_low_type,
        k_soil,
        k_concrete,
        k_stone,
        k_riprap,
        k_turf,
        k_gravel,
        k_paved,
        k_metal,
        k_metal_grate,
        k_composite,
        k_timber,
        k_other,
    };
public:
    typedef Values Type;

    virtual Values value () = 0;
    virtual void setValue (Values eValue) = 0;
};

class EnumSurfBndType: public EnumObject
{
public:
    enum Values
    {
        k_null,
        k_outer,
        k_void,
        k_island,
    };
public:
    typedef Values Type;

    virtual Values value () = 0;
    virtual void setValue (Values eValue) = 0;
};

class EnumBeaconProtectionType: public EnumObject
{
public:
    enum Values
    {
        k_null,
        k_cover,
        k_cover_and_box,
        k_fence_enclosure,
        k_marker_post,
        k_no_protection,
        k_other,
        k_quadripod,
        k_unknown,
    };
public:
    typedef Values Type;

    virtual Values value () = 0;
    virtual void setValue (Values eValue) = 0;
};

class EnumDataFormatType: public EnumObject
{
public:
    enum Values
    {
        k_null,
        k_Offset_Elevation,
        k_Slope_Distance,
    };
public:
    typedef Values Type;

    virtual Values value () = 0;
    virtual void setValue (Values eValue) = 0;
};

class EnumMetArea: public EnumObject
{
public:
    enum Values
    {
        k_null,
        k_hectare,
        k_squareMeter,
        k_squareMillimeter,
        k_squareCentimeter,
    };
public:
    typedef Values Type;

    virtual Values value () = 0;
    virtual void setValue (Values eValue) = 0;
};

class EnumCurveType: public EnumObject
{
public:
    enum Values
    {
        k_null,
        k_arc,
        k_chord,
    };
public:
    typedef Values Type;

    virtual Values value () = 0;
    virtual void setValue (Values eValue) = 0;
};

class EnumImpHeight: public EnumObject
{
public:
    enum Values
    {
        k_null,
        k_foot,
        k_USSurveyFoot,
        k_inch,
    };
public:
    typedef Values Type;

    virtual Values value () = 0;
    virtual void setValue (Values eValue) = 0;
};

class EnumSurveyRoleType: public EnumObject
{
public:
    enum Values
    {
        k_null,
        k_measured,
        k_to_stake_out,
        k_staked_out,
        k_calculated,
        k_assistance_point,
        k_user_entered_point,
        k_control_point,
    };
public:
    typedef Values Type;

    virtual Values value () = 0;
    virtual void setValue (Values eValue) = 0;
};

class EnumSpiralType: public EnumObject
{
public:
    enum Values
    {
        k_null,
        k_biquadratic,
        k_bloss,
        k_clothoid,
        k_cosine,
        k_cubic,
        k_sinusoid,
        k_revBiquadratic,
        k_revBloss,
        k_revCosine,
        k_revSinusoid,
        k_sineHalfWave,
        k_biquadraticParabola,
        k_cubicParabola,
        k_japaneseCubic,
        k_radioid,
        k_weinerBogen,
    };
public:
    typedef Values Type;

    virtual Values value () = 0;
    virtual void setValue (Values eValue) = 0;
};

class EnumDitchBottomShape: public EnumObject
{
public:
    enum Values
    {
        k_null,
        k_true_V,
        k_rounded_V,
        k_rounded_trapezoidal,
        k_flat_trapezoidal,
    };
public:
    typedef Values Type;

    virtual Values value () = 0;
    virtual void setValue (Values eValue) = 0;
};

class EnumIntersectionConstructionType: public EnumObject
{
public:
    enum Values
    {
        k_null,
        k_existing,
        k_improvement,
        k_new,
    };
public:
    typedef Values Type;

    virtual Values value () = 0;
    virtual void setValue (Values eValue) = 0;
};

class EnumRoadSignType: public EnumObject
{
public:
    enum Values
    {
        k_null,
        k_regulatory,
        k_guide,
        k_warning,
        k_specificService,
        k_tourist,
        k_recreation_cultural,
        k_emergencyManagement,
    };
public:
    typedef Values Type;

    virtual Values value () = 0;
    virtual void setValue (Values eValue) = 0;
};

class EnumImpVelocity: public EnumObject
{
public:
    enum Values
    {
        k_null,
        k_feetPerSecond,
        k_milesPerHour,
    };
public:
    typedef Values Type;

    virtual Values value () = 0;
    virtual void setValue (Values eValue) = 0;
};

class EnumTurnLaneType: public EnumObject
{
public:
    enum Values
    {
        k_null,
        k_left,
        k_right,
    };
public:
    typedef Values Type;

    virtual Values value () = 0;
    virtual void setValue (Values eValue) = 0;
};

class EnumSideofRoadType: public EnumObject
{
public:
    enum Values
    {
        k_null,
        k_right,
        k_left,
        k_both,
    };
public:
    typedef Values Type;

    virtual Values value () = 0;
    virtual void setValue (Values eValue) = 0;
};

class EnumObservationStatusType: public EnumObject
{
public:
    enum Values
    {
        k_null,
        k_modified,
        k_deleted,
    };
public:
    typedef Values Type;

    virtual Values value () = 0;
    virtual void setValue (Values eValue) = 0;
};

class EnumMetTemperature: public EnumObject
{
public:
    enum Values
    {
        k_null,
        k_celsius,
        k_kelvin,
    };
public:
    typedef Values Type;

    virtual Values value () = 0;
    virtual void setValue (Values eValue) = 0;
};

class EnumParcelStateType: public EnumObject
{
public:
    enum Values
    {
        k_null,
        k_affected,
        k_created,
        k_encroached,
        k_extinguished,
        k_referenced,
        k_proposed,
        k_existing,
        k_adjoining,
    };
public:
    typedef Values Type;

    virtual Values value () = 0;
    virtual void setValue (Values eValue) = 0;
};

class EnumBreakLineType: public EnumObject
{
public:
    enum Values
    {
        k_null,
        k_standard,
        k_wall,
        k_proximity,
        k_nondestructive,
    };
public:
    typedef Values Type;

    virtual Values value () = 0;
    virtual void setValue (Values eValue) = 0;
};

class EnumMetLinear: public EnumObject
{
public:
    enum Values
    {
        k_null,
        k_millimeter,
        k_centimeter,
        k_meter,
        k_kilometer,
    };
public:
    typedef Values Type;

    virtual Values value () = 0;
    virtual void setValue (Values eValue) = 0;
};

class EnumImpLinear: public EnumObject
{
public:
    enum Values
    {
        k_null,
        k_foot,
        k_USSurveyFoot,
        k_inch,
        k_mile,
    };
public:
    typedef Values Type;

    virtual Values value () = 0;
    virtual void setValue (Values eValue) = 0;
};

class EnumZoneTransitionType: public EnumObject
{
public:
    enum Values
    {
        k_null,
        k_parallel,
        k_linear,
    };
public:
    typedef Values Type;

    virtual Values value () = 0;
    virtual void setValue (Values eValue) = 0;
};

class EnumSurveyType: public EnumObject
{
public:
    enum Values
    {
        k_null,
        k_compiled,
        k_computed,
        k_surveyed,
    };
public:
    typedef Values Type;

    virtual Values value () = 0;
    virtual void setValue (Values eValue) = 0;
};

class EnumZoneVertType: public EnumObject
{
public:
    enum Values
    {
        k_null,
        k_slope,
        k_vertical_distance,
    };
public:
    typedef Values Type;

    virtual Values value () = 0;
    virtual void setValue (Values eValue) = 0;
};

class EnumXsVolCalcMethodType: public EnumObject
{
public:
    enum Values
    {
        k_null,
        k_AverageEndArea,
        k_Prismoidal,
    };
public:
    typedef Values Type;

    virtual Values value () = 0;
    virtual void setValue (Values eValue) = 0;
};

class EnumLatLongAngularType: public EnumObject
{
public:
    enum Values
    {
        k_null,
        k_radians,
        k_grads,
        k_decimal_degrees,
        k_decimal_dd_mm_ss,
    };
public:
    typedef Values Type;

    virtual Values value () = 0;
    virtual void setValue (Values eValue) = 0;
};

class EnumRoadTerrainType: public EnumObject
{
public:
    enum Values
    {
        k_null,
        k_flat,
        k_rolling,
        k_mountainous,
    };
public:
    typedef Values Type;

    virtual Values value () = 0;
    virtual void setValue (Values eValue) = 0;
};

class EnumClockwise: public EnumObject
{
public:
    enum Values
    {
        k_null,
        k_cw,
        k_ccw,
    };
public:
    typedef Values Type;

    virtual Values value () = 0;
    virtual void setValue (Values eValue) = 0;
};

class EnumStateType: public EnumObject
{
public:
    enum Values
    {
        k_null,
        k_abandoned,
        k_destroyed,
        k_existing,
        k_proposed,
    };
public:
    typedef Values Type;

    virtual Values value () = 0;
    virtual void setValue (Values eValue) = 0;
};

class EnumCrashIntersectionRelation: public EnumObject
{
public:
    enum Values
    {
        k_null,
        k_unknown,
        k_non_intersection_related,
        k_intersection_related,
    };
public:
    typedef Values Type;

    virtual Values value () = 0;
    virtual void setValue (Values eValue) = 0;
};

class EnumImpDiameter: public EnumObject
{
public:
    enum Values
    {
        k_null,
        k_foot,
        k_USSurveyFoot,
        k_inch,
    };
public:
    typedef Values Type;

    virtual Values value () = 0;
    virtual void setValue (Values eValue) = 0;
};

class EnumGPSSolutionTypeEnum: public EnumObject
{
public:
    enum Values
    {
        k_null,
        k_Unknown,
        k_Code,
        k_Float,
        k_Fixed,
        k_Network_Float,
        k_Network_Fixed,
        k_WAAS_Float,
        k_WAAS_Fixed,
    };
public:
    typedef Values Type;

    virtual Values value () = 0;
    virtual void setValue (Values eValue) = 0;
};

class EnumMetDiameter: public EnumObject
{
public:
    enum Values
    {
        k_null,
        k_millimeter,
        k_centimeter,
        k_meter,
        k_kilometer,
    };
public:
    typedef Values Type;

    virtual Values value () = 0;
    virtual void setValue (Values eValue) = 0;
};

class EnumGPSSolutionFrequencyEnum: public EnumObject
{
public:
    enum Values
    {
        k_null,
        k_Unknown,
        k_L1,
        k_L2,
        k_L2_Squared,
        k_Wide_Lane,
        k_Narrow_Lane,
        k_Iono_Free,
    };
public:
    typedef Values Type;

    virtual Values value () = 0;
    virtual void setValue (Values eValue) = 0;
};

class EnumMetFlow: public EnumObject
{
public:
    enum Values
    {
        k_null,
        k_cubicMeterSecond,
        k_literPerSecond,
        k_literPerMinute,
    };
public:
    typedef Values Type;

    virtual Values value () = 0;
    virtual void setValue (Values eValue) = 0;
};

class EnumMetPressure: public EnumObject
{
public:
    enum Values
    {
        k_null,
        k_HPA,
        k_milliBars,
        k_mmHG,
        k_millimeterHG,
    };
public:
    typedef Values Type;

    virtual Values value () = 0;
    virtual void setValue (Values eValue) = 0;
};

class EnumPipeNetworkType: public EnumObject
{
public:
    enum Values
    {
        k_null,
        k_sanitary,
        k_storm,
        k_water,
        k_other,
    };
public:
    typedef Values Type;

    virtual Values value () = 0;
    virtual void setValue (Values eValue) = 0;
};

class EnumZoneHingeType: public EnumObject
{
public:
    enum Values
    {
        k_null,
        k_center,
        k_left_edge,
        k_right_edge,
    };
public:
    typedef Values Type;

    virtual Values value () = 0;
    virtual void setValue (Values eValue) = 0;
};

class EnumImpPressure: public EnumObject
{
public:
    enum Values
    {
        k_null,
        k_inchHG,
        k_inHG,
    };
public:
    typedef Values Type;

    virtual Values value () = 0;
    virtual void setValue (Values eValue) = 0;
};

class EnumSurfVolCMethodType: public EnumObject
{
public:
    enum Values
    {
        k_null,
        k_grid,
        k_composite,
    };
public:
    typedef Values Type;

    virtual Values value () = 0;
    virtual void setValue (Values eValue) = 0;
};

class EnumPurposeType: public EnumObject
{
public:
    enum Values
    {
        k_null,
        k_normal,
        k_check,
        k_backsight,
        k_foresight,
        k_traverse,
        k_sideshot,
        k_resection,
        k_levelLoop,
        k_digitalLevel,
        k_remoteElevation,
        k_recipricalObservation,
        k_topo,
        k_cutSheets,
        k_asbuilt,
    };
public:
    typedef Values Type;

    virtual Values value () = 0;
    virtual void setValue (Values eValue) = 0;
};


}; // namespace : LX
#endif
