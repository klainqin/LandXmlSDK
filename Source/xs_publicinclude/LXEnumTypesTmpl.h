#if !defined(__LXENUMTYPESTMPL_H_H)
#define __LXENUMTYPESTMPL_H_H

#include "LXCoreTypesTmpl.h"
#include "LXEnumTypes.h"

namespace LX
{

template <class T>
class EnumPointGeometryTypeTmpl: public EnumObjectTmpl<T>
{
    public:
        EnumPointGeometryTypeTmpl ();
        EnumPointGeometryTypeTmpl (DocumentImpl* pDoc);
        EnumPointGeometryTypeTmpl (EnumPointGeometryType::Values eValue);
        EnumPointGeometryType::Values value ();
        void setValue (EnumPointGeometryType::Values eValue);
        static void streamOut (EnumPointGeometryType::Values eVal, IStream& stream);
        static EnumPointGeometryType::Values parseString (const wchar_t* strValue, int nValueLen);
        static IParserEventSink::EventCode parseString (const wchar_t* strValue, int nValueLen, EnumPointGeometryType::Values& eValue);
        const static int k_iNumValues;
    
    private:
        EnumPointGeometryType::Values m_eValue;
        const static wchar_t* m_arrValues[3];
};

template <class T>
class EnumElevationTypeTmpl: public EnumObjectTmpl<T>
{
    public:
        EnumElevationTypeTmpl ();
        EnumElevationTypeTmpl (DocumentImpl* pDoc);
        EnumElevationTypeTmpl (EnumElevationType::Values eValue);
        EnumElevationType::Values value ();
        void setValue (EnumElevationType::Values eValue);
        static void streamOut (EnumElevationType::Values eVal, IStream& stream);
        static EnumElevationType::Values parseString (const wchar_t* strValue, int nValueLen);
        static IParserEventSink::EventCode parseString (const wchar_t* strValue, int nValueLen, EnumElevationType::Values& eValue);
        const static int k_iNumValues;
    
    private:
        EnumElevationType::Values m_eValue;
        const static wchar_t* m_arrValues[5];
};

template <class T>
class EnumTrafficTurnRestrictionTmpl: public EnumObjectTmpl<T>
{
    public:
        EnumTrafficTurnRestrictionTmpl ();
        EnumTrafficTurnRestrictionTmpl (DocumentImpl* pDoc);
        EnumTrafficTurnRestrictionTmpl (EnumTrafficTurnRestriction::Values eValue);
        EnumTrafficTurnRestriction::Values value ();
        void setValue (EnumTrafficTurnRestriction::Values eValue);
        static void streamOut (EnumTrafficTurnRestriction::Values eVal, IStream& stream);
        static EnumTrafficTurnRestriction::Values parseString (const wchar_t* strValue, int nValueLen);
        static IParserEventSink::EventCode parseString (const wchar_t* strValue, int nValueLen, EnumTrafficTurnRestriction::Values& eValue);
        const static int k_iNumValues;
    
    private:
        EnumTrafficTurnRestriction::Values m_eValue;
        const static wchar_t* m_arrValues[6];
};

template <class T>
class EnumAngularTypeTmpl: public EnumObjectTmpl<T>
{
    public:
        EnumAngularTypeTmpl ();
        EnumAngularTypeTmpl (DocumentImpl* pDoc);
        EnumAngularTypeTmpl (EnumAngularType::Values eValue);
        EnumAngularType::Values value ();
        void setValue (EnumAngularType::Values eValue);
        static void streamOut (EnumAngularType::Values eVal, IStream& stream);
        static EnumAngularType::Values parseString (const wchar_t* strValue, int nValueLen);
        static IParserEventSink::EventCode parseString (const wchar_t* strValue, int nValueLen, EnumAngularType::Values& eValue);
        const static int k_iNumValues;
    
    private:
        EnumAngularType::Values m_eValue;
        const static wchar_t* m_arrValues[5];
};

template <class T>
class EnumMetHeightTmpl: public EnumObjectTmpl<T>
{
    public:
        EnumMetHeightTmpl ();
        EnumMetHeightTmpl (DocumentImpl* pDoc);
        EnumMetHeightTmpl (EnumMetHeight::Values eValue);
        EnumMetHeight::Values value ();
        void setValue (EnumMetHeight::Values eValue);
        static void streamOut (EnumMetHeight::Values eVal, IStream& stream);
        static EnumMetHeight::Values parseString (const wchar_t* strValue, int nValueLen);
        static IParserEventSink::EventCode parseString (const wchar_t* strValue, int nValueLen, EnumMetHeight::Values& eValue);
        const static int k_iNumValues;
    
    private:
        EnumMetHeight::Values m_eValue;
        const static wchar_t* m_arrValues[5];
};

template <class T>
class EnumZoneSurfaceTypeTmpl: public EnumObjectTmpl<T>
{
    public:
        EnumZoneSurfaceTypeTmpl ();
        EnumZoneSurfaceTypeTmpl (DocumentImpl* pDoc);
        EnumZoneSurfaceTypeTmpl (EnumZoneSurfaceType::Values eValue);
        EnumZoneSurfaceType::Values value ();
        void setValue (EnumZoneSurfaceType::Values eValue);
        static void streamOut (EnumZoneSurfaceType::Values eVal, IStream& stream);
        static EnumZoneSurfaceType::Values parseString (const wchar_t* strValue, int nValueLen);
        static IParserEventSink::EventCode parseString (const wchar_t* strValue, int nValueLen, EnumZoneSurfaceType::Values& eValue);
        const static int k_iNumValues;
    
    private:
        EnumZoneSurfaceType::Values m_eValue;
        const static wchar_t* m_arrValues[3];
};

template <class T>
class EnumFunctionalClassTypeTmpl: public EnumObjectTmpl<T>
{
    public:
        EnumFunctionalClassTypeTmpl ();
        EnumFunctionalClassTypeTmpl (DocumentImpl* pDoc);
        EnumFunctionalClassTypeTmpl (EnumFunctionalClassType::Values eValue);
        EnumFunctionalClassType::Values value ();
        void setValue (EnumFunctionalClassType::Values eValue);
        static void streamOut (EnumFunctionalClassType::Values eVal, IStream& stream);
        static EnumFunctionalClassType::Values parseString (const wchar_t* strValue, int nValueLen);
        static IParserEventSink::EventCode parseString (const wchar_t* strValue, int nValueLen, EnumFunctionalClassType::Values& eValue);
        const static int k_iNumValues;
    
    private:
        EnumFunctionalClassType::Values m_eValue;
        const static wchar_t* m_arrValues[4];
};

template <class T>
class EnumMetVolumeTmpl: public EnumObjectTmpl<T>
{
    public:
        EnumMetVolumeTmpl ();
        EnumMetVolumeTmpl (DocumentImpl* pDoc);
        EnumMetVolumeTmpl (EnumMetVolume::Values eValue);
        EnumMetVolume::Values value ();
        void setValue (EnumMetVolume::Values eValue);
        static void streamOut (EnumMetVolume::Values eVal, IStream& stream);
        static EnumMetVolume::Values parseString (const wchar_t* strValue, int nValueLen);
        static IParserEventSink::EventCode parseString (const wchar_t* strValue, int nValueLen, EnumMetVolume::Values& eValue);
        const static int k_iNumValues;
    
    private:
        EnumMetVolume::Values m_eValue;
        const static wchar_t* m_arrValues[4];
};

template <class T>
class EnumBridgeProjectTypeTmpl: public EnumObjectTmpl<T>
{
    public:
        EnumBridgeProjectTypeTmpl ();
        EnumBridgeProjectTypeTmpl (DocumentImpl* pDoc);
        EnumBridgeProjectTypeTmpl (EnumBridgeProjectType::Values eValue);
        EnumBridgeProjectType::Values value ();
        void setValue (EnumBridgeProjectType::Values eValue);
        static void streamOut (EnumBridgeProjectType::Values eVal, IStream& stream);
        static EnumBridgeProjectType::Values parseString (const wchar_t* strValue, int nValueLen);
        static IParserEventSink::EventCode parseString (const wchar_t* strValue, int nValueLen, EnumBridgeProjectType::Values& eValue);
        const static int k_iNumValues;
    
    private:
        EnumBridgeProjectType::Values m_eValue;
        const static wchar_t* m_arrValues[3];
};

template <class T>
class EnumTrafficControlPositionTmpl: public EnumObjectTmpl<T>
{
    public:
        EnumTrafficControlPositionTmpl ();
        EnumTrafficControlPositionTmpl (DocumentImpl* pDoc);
        EnumTrafficControlPositionTmpl (EnumTrafficControlPosition::Values eValue);
        EnumTrafficControlPosition::Values value ();
        void setValue (EnumTrafficControlPosition::Values eValue);
        static void streamOut (EnumTrafficControlPosition::Values eVal, IStream& stream);
        static EnumTrafficControlPosition::Values parseString (const wchar_t* strValue, int nValueLen);
        static IParserEventSink::EventCode parseString (const wchar_t* strValue, int nValueLen, EnumTrafficControlPosition::Values& eValue);
        const static int k_iNumValues;
    
    private:
        EnumTrafficControlPosition::Values m_eValue;
        const static wchar_t* m_arrValues[3];
};

template <class T>
class EnumImpVolumeTmpl: public EnumObjectTmpl<T>
{
    public:
        EnumImpVolumeTmpl ();
        EnumImpVolumeTmpl (DocumentImpl* pDoc);
        EnumImpVolumeTmpl (EnumImpVolume::Values eValue);
        EnumImpVolume::Values value ();
        void setValue (EnumImpVolume::Values eValue);
        static void streamOut (EnumImpVolume::Values eVal, IStream& stream);
        static EnumImpVolume::Values parseString (const wchar_t* strValue, int nValueLen);
        static IParserEventSink::EventCode parseString (const wchar_t* strValue, int nValueLen, EnumImpVolume::Values& eValue);
        const static int k_iNumValues;
    
    private:
        EnumImpVolume::Values m_eValue;
        const static wchar_t* m_arrValues[7];
};

template <class T>
class EnumCurbTypeTmpl: public EnumObjectTmpl<T>
{
    public:
        EnumCurbTypeTmpl ();
        EnumCurbTypeTmpl (DocumentImpl* pDoc);
        EnumCurbTypeTmpl (EnumCurbType::Values eValue);
        EnumCurbType::Values value ();
        void setValue (EnumCurbType::Values eValue);
        static void streamOut (EnumCurbType::Values eVal, IStream& stream);
        static EnumCurbType::Values parseString (const wchar_t* strValue, int nValueLen);
        static IParserEventSink::EventCode parseString (const wchar_t* strValue, int nValueLen, EnumCurbType::Values& eValue);
        const static int k_iNumValues;
    
    private:
        EnumCurbType::Values m_eValue;
        const static wchar_t* m_arrValues[2];
};

template <class T>
class EnumMetWidthTmpl: public EnumObjectTmpl<T>
{
    public:
        EnumMetWidthTmpl ();
        EnumMetWidthTmpl (DocumentImpl* pDoc);
        EnumMetWidthTmpl (EnumMetWidth::Values eValue);
        EnumMetWidth::Values value ();
        void setValue (EnumMetWidth::Values eValue);
        static void streamOut (EnumMetWidth::Values eVal, IStream& stream);
        static EnumMetWidth::Values parseString (const wchar_t* strValue, int nValueLen);
        static IParserEventSink::EventCode parseString (const wchar_t* strValue, int nValueLen, EnumMetWidth::Values& eValue);
        const static int k_iNumValues;
    
    private:
        EnumMetWidth::Values m_eValue;
        const static wchar_t* m_arrValues[5];
};

template <class T>
class EnumZonePlacementTypeTmpl: public EnumObjectTmpl<T>
{
    public:
        EnumZonePlacementTypeTmpl ();
        EnumZonePlacementTypeTmpl (DocumentImpl* pDoc);
        EnumZonePlacementTypeTmpl (EnumZonePlacementType::Values eValue);
        EnumZonePlacementType::Values value ();
        void setValue (EnumZonePlacementType::Values eValue);
        static void streamOut (EnumZonePlacementType::Values eVal, IStream& stream);
        static EnumZonePlacementType::Values parseString (const wchar_t* strValue, int nValueLen);
        static IParserEventSink::EventCode parseString (const wchar_t* strValue, int nValueLen, EnumZonePlacementType::Values& eValue);
        const static int k_iNumValues;
    
    private:
        EnumZonePlacementType::Values m_eValue;
        const static wchar_t* m_arrValues[3];
};

template <class T>
class EnumAdverseSETypeTmpl: public EnumObjectTmpl<T>
{
    public:
        EnumAdverseSETypeTmpl ();
        EnumAdverseSETypeTmpl (DocumentImpl* pDoc);
        EnumAdverseSETypeTmpl (EnumAdverseSEType::Values eValue);
        EnumAdverseSEType::Values value ();
        void setValue (EnumAdverseSEType::Values eValue);
        static void streamOut (EnumAdverseSEType::Values eVal, IStream& stream);
        static EnumAdverseSEType::Values parseString (const wchar_t* strValue, int nValueLen);
        static IParserEventSink::EventCode parseString (const wchar_t* strValue, int nValueLen, EnumAdverseSEType::Values& eValue);
        const static int k_iNumValues;
    
    private:
        EnumAdverseSEType::Values m_eValue;
        const static wchar_t* m_arrValues[3];
};

template <class T>
class EnumCornerTypeTmpl: public EnumObjectTmpl<T>
{
    public:
        EnumCornerTypeTmpl ();
        EnumCornerTypeTmpl (DocumentImpl* pDoc);
        EnumCornerTypeTmpl (EnumCornerType::Values eValue);
        EnumCornerType::Values value ();
        void setValue (EnumCornerType::Values eValue);
        static void streamOut (EnumCornerType::Values eVal, IStream& stream);
        static EnumCornerType::Values parseString (const wchar_t* strValue, int nValueLen);
        static IParserEventSink::EventCode parseString (const wchar_t* strValue, int nValueLen, EnumCornerType::Values& eValue);
        const static int k_iNumValues;
    
    private:
        EnumCornerType::Values m_eValue;
        const static wchar_t* m_arrValues[2];
};

template <class T>
class EnumMonumentCategoryTmpl: public EnumObjectTmpl<T>
{
    public:
        EnumMonumentCategoryTmpl ();
        EnumMonumentCategoryTmpl (DocumentImpl* pDoc);
        EnumMonumentCategoryTmpl (EnumMonumentCategory::Values eValue);
        EnumMonumentCategory::Values value ();
        void setValue (EnumMonumentCategory::Values eValue);
        static void streamOut (EnumMonumentCategory::Values eVal, IStream& stream);
        static EnumMonumentCategory::Values parseString (const wchar_t* strValue, int nValueLen);
        static IParserEventSink::EventCode parseString (const wchar_t* strValue, int nValueLen, EnumMonumentCategory::Values& eValue);
        const static int k_iNumValues;
    
    private:
        EnumMonumentCategory::Values m_eValue;
        const static wchar_t* m_arrValues[7];
};

template <class T>
class EnumCrashSeverityTypeTmpl: public EnumObjectTmpl<T>
{
    public:
        EnumCrashSeverityTypeTmpl ();
        EnumCrashSeverityTypeTmpl (DocumentImpl* pDoc);
        EnumCrashSeverityTypeTmpl (EnumCrashSeverityType::Values eValue);
        EnumCrashSeverityType::Values value ();
        void setValue (EnumCrashSeverityType::Values eValue);
        static void streamOut (EnumCrashSeverityType::Values eVal, IStream& stream);
        static EnumCrashSeverityType::Values parseString (const wchar_t* strValue, int nValueLen);
        static IParserEventSink::EventCode parseString (const wchar_t* strValue, int nValueLen, EnumCrashSeverityType::Values& eValue);
        const static int k_iNumValues;
    
    private:
        EnumCrashSeverityType::Values m_eValue;
        const static wchar_t* m_arrValues[4];
};

template <class T>
class EnumInOutTmpl: public EnumObjectTmpl<T>
{
    public:
        EnumInOutTmpl ();
        EnumInOutTmpl (DocumentImpl* pDoc);
        EnumInOutTmpl (EnumInOut::Values eValue);
        EnumInOut::Values value ();
        void setValue (EnumInOut::Values eValue);
        static void streamOut (EnumInOut::Values eVal, IStream& stream);
        static EnumInOut::Values parseString (const wchar_t* strValue, int nValueLen);
        static IParserEventSink::EventCode parseString (const wchar_t* strValue, int nValueLen, EnumInOut::Values& eValue);
        const static int k_iNumValues;
    
    private:
        EnumInOut::Values m_eValue;
        const static wchar_t* m_arrValues[4];
};

template <class T>
class EnumBeaconTypeTmpl: public EnumObjectTmpl<T>
{
    public:
        EnumBeaconTypeTmpl ();
        EnumBeaconTypeTmpl (DocumentImpl* pDoc);
        EnumBeaconTypeTmpl (EnumBeaconType::Values eValue);
        EnumBeaconType::Values value ();
        void setValue (EnumBeaconType::Values eValue);
        static void streamOut (EnumBeaconType::Values eVal, IStream& stream);
        static EnumBeaconType::Values parseString (const wchar_t* strValue, int nValueLen);
        static IParserEventSink::EventCode parseString (const wchar_t* strValue, int nValueLen, EnumBeaconType::Values& eValue);
        const static int k_iNumValues;
    
    private:
        EnumBeaconType::Values m_eValue;
        const static wchar_t* m_arrValues[16];
};

template <class T>
class EnumMetVelocityTmpl: public EnumObjectTmpl<T>
{
    public:
        EnumMetVelocityTmpl ();
        EnumMetVelocityTmpl (DocumentImpl* pDoc);
        EnumMetVelocityTmpl (EnumMetVelocity::Values eValue);
        EnumMetVelocity::Values value ();
        void setValue (EnumMetVelocity::Values eValue);
        static void streamOut (EnumMetVelocity::Values eVal, IStream& stream);
        static EnumMetVelocity::Values parseString (const wchar_t* strValue, int nValueLen);
        static IParserEventSink::EventCode parseString (const wchar_t* strValue, int nValueLen, EnumMetVelocity::Values& eValue);
        const static int k_iNumValues;
    
    private:
        EnumMetVelocity::Values m_eValue;
        const static wchar_t* m_arrValues[3];
};

template <class T>
class EnumSurfTypeEnumTmpl: public EnumObjectTmpl<T>
{
    public:
        EnumSurfTypeEnumTmpl ();
        EnumSurfTypeEnumTmpl (DocumentImpl* pDoc);
        EnumSurfTypeEnumTmpl (EnumSurfTypeEnum::Values eValue);
        EnumSurfTypeEnum::Values value ();
        void setValue (EnumSurfTypeEnum::Values eValue);
        static void streamOut (EnumSurfTypeEnum::Values eVal, IStream& stream);
        static EnumSurfTypeEnum::Values parseString (const wchar_t* strValue, int nValueLen);
        static IParserEventSink::EventCode parseString (const wchar_t* strValue, int nValueLen, EnumSurfTypeEnum::Values& eValue);
        const static int k_iNumValues;
    
    private:
        EnumSurfTypeEnum::Values m_eValue;
        const static wchar_t* m_arrValues[3];
};

template <class T>
class EnumZoneOffsetTypeTmpl: public EnumObjectTmpl<T>
{
    public:
        EnumZoneOffsetTypeTmpl ();
        EnumZoneOffsetTypeTmpl (DocumentImpl* pDoc);
        EnumZoneOffsetTypeTmpl (EnumZoneOffsetType::Values eValue);
        EnumZoneOffsetType::Values value ();
        void setValue (EnumZoneOffsetType::Values eValue);
        static void streamOut (EnumZoneOffsetType::Values eVal, IStream& stream);
        static EnumZoneOffsetType::Values parseString (const wchar_t* strValue, int nValueLen);
        static IParserEventSink::EventCode parseString (const wchar_t* strValue, int nValueLen, EnumZoneOffsetType::Values& eValue);
        const static int k_iNumValues;
    
    private:
        EnumZoneOffsetType::Values m_eValue;
        const static wchar_t* m_arrValues[3];
};

template <class T>
class EnumStationIncrementDirectionTypeTmpl: public EnumObjectTmpl<T>
{
    public:
        EnumStationIncrementDirectionTypeTmpl ();
        EnumStationIncrementDirectionTypeTmpl (DocumentImpl* pDoc);
        EnumStationIncrementDirectionTypeTmpl (EnumStationIncrementDirectionType::Values eValue);
        EnumStationIncrementDirectionType::Values value ();
        void setValue (EnumStationIncrementDirectionType::Values eValue);
        static void streamOut (EnumStationIncrementDirectionType::Values eVal, IStream& stream);
        static EnumStationIncrementDirectionType::Values parseString (const wchar_t* strValue, int nValueLen);
        static IParserEventSink::EventCode parseString (const wchar_t* strValue, int nValueLen, EnumStationIncrementDirectionType::Values& eValue);
        const static int k_iNumValues;
    
    private:
        EnumStationIncrementDirectionType::Values m_eValue;
        const static wchar_t* m_arrValues[3];
};

template <class T>
class EnumImpAreaTmpl: public EnumObjectTmpl<T>
{
    public:
        EnumImpAreaTmpl ();
        EnumImpAreaTmpl (DocumentImpl* pDoc);
        EnumImpAreaTmpl (EnumImpArea::Values eValue);
        EnumImpArea::Values value ();
        void setValue (EnumImpArea::Values eValue);
        static void streamOut (EnumImpArea::Values eVal, IStream& stream);
        static EnumImpArea::Values parseString (const wchar_t* strValue, int nValueLen);
        static IParserEventSink::EventCode parseString (const wchar_t* strValue, int nValueLen, EnumImpArea::Values& eValue);
        const static int k_iNumValues;
    
    private:
        EnumImpArea::Values m_eValue;
        const static wchar_t* m_arrValues[5];
};

template <class T>
class EnumImpTemperatureTmpl: public EnumObjectTmpl<T>
{
    public:
        EnumImpTemperatureTmpl ();
        EnumImpTemperatureTmpl (DocumentImpl* pDoc);
        EnumImpTemperatureTmpl (EnumImpTemperature::Values eValue);
        EnumImpTemperature::Values value ();
        void setValue (EnumImpTemperature::Values eValue);
        static void streamOut (EnumImpTemperature::Values eVal, IStream& stream);
        static EnumImpTemperature::Values parseString (const wchar_t* strValue, int nValueLen);
        static IParserEventSink::EventCode parseString (const wchar_t* strValue, int nValueLen, EnumImpTemperature::Values& eValue);
        const static int k_iNumValues;
    
    private:
        EnumImpTemperature::Values m_eValue;
        const static wchar_t* m_arrValues[3];
};

template <class T>
class EnumManeuverTypeTmpl: public EnumObjectTmpl<T>
{
    public:
        EnumManeuverTypeTmpl ();
        EnumManeuverTypeTmpl (DocumentImpl* pDoc);
        EnumManeuverTypeTmpl (EnumManeuverType::Values eValue);
        EnumManeuverType::Values value ();
        void setValue (EnumManeuverType::Values eValue);
        static void streamOut (EnumManeuverType::Values eVal, IStream& stream);
        static EnumManeuverType::Values parseString (const wchar_t* strValue, int nValueLen);
        static IParserEventSink::EventCode parseString (const wchar_t* strValue, int nValueLen, EnumManeuverType::Values& eValue);
        const static int k_iNumValues;
    
    private:
        EnumManeuverType::Values m_eValue;
        const static wchar_t* m_arrValues[3];
};

template <class T>
class EnumZoneCategoryTypeTmpl: public EnumObjectTmpl<T>
{
    public:
        EnumZoneCategoryTypeTmpl ();
        EnumZoneCategoryTypeTmpl (DocumentImpl* pDoc);
        EnumZoneCategoryTypeTmpl (EnumZoneCategoryType::Values eValue);
        EnumZoneCategoryType::Values value ();
        void setValue (EnumZoneCategoryType::Values eValue);
        static void streamOut (EnumZoneCategoryType::Values eVal, IStream& stream);
        static EnumZoneCategoryType::Values parseString (const wchar_t* strValue, int nValueLen);
        static IParserEventSink::EventCode parseString (const wchar_t* strValue, int nValueLen, EnumZoneCategoryType::Values& eValue);
        const static int k_iNumValues;
    
    private:
        EnumZoneCategoryType::Values m_eValue;
        const static wchar_t* m_arrValues[20];
};

template <class T>
class EnumDTMAttributeTypeTmpl: public EnumObjectTmpl<T>
{
    public:
        EnumDTMAttributeTypeTmpl ();
        EnumDTMAttributeTypeTmpl (DocumentImpl* pDoc);
        EnumDTMAttributeTypeTmpl (EnumDTMAttributeType::Values eValue);
        EnumDTMAttributeType::Values value ();
        void setValue (EnumDTMAttributeType::Values eValue);
        static void streamOut (EnumDTMAttributeType::Values eVal, IStream& stream);
        static EnumDTMAttributeType::Values parseString (const wchar_t* strValue, int nValueLen);
        static IParserEventSink::EventCode parseString (const wchar_t* strValue, int nValueLen, EnumDTMAttributeType::Values& eValue);
        const static int k_iNumValues;
    
    private:
        EnumDTMAttributeType::Values m_eValue;
        const static wchar_t* m_arrValues[15];
};

template <class T>
class EnumImpFlowTmpl: public EnumObjectTmpl<T>
{
    public:
        EnumImpFlowTmpl ();
        EnumImpFlowTmpl (DocumentImpl* pDoc);
        EnumImpFlowTmpl (EnumImpFlow::Values eValue);
        EnumImpFlow::Values value ();
        void setValue (EnumImpFlow::Values eValue);
        static void streamOut (EnumImpFlow::Values eVal, IStream& stream);
        static EnumImpFlow::Values parseString (const wchar_t* strValue, int nValueLen);
        static IParserEventSink::EventCode parseString (const wchar_t* strValue, int nValueLen, EnumImpFlow::Values& eValue);
        const static int k_iNumValues;
    
    private:
        EnumImpFlow::Values m_eValue;
        const static wchar_t* m_arrValues[8];
};

template <class T>
class EnumSurvPntTypeTmpl: public EnumObjectTmpl<T>
{
    public:
        EnumSurvPntTypeTmpl ();
        EnumSurvPntTypeTmpl (DocumentImpl* pDoc);
        EnumSurvPntTypeTmpl (EnumSurvPntType::Values eValue);
        EnumSurvPntType::Values value ();
        void setValue (EnumSurvPntType::Values eValue);
        static void streamOut (EnumSurvPntType::Values eVal, IStream& stream);
        static EnumSurvPntType::Values parseString (const wchar_t* strValue, int nValueLen);
        static IParserEventSink::EventCode parseString (const wchar_t* strValue, int nValueLen, EnumSurvPntType::Values& eValue);
        const static int k_iNumValues;
    
    private:
        EnumSurvPntType::Values m_eValue;
        const static wchar_t* m_arrValues[9];
};

template <class T>
class EnumLaneTaperTypeTmpl: public EnumObjectTmpl<T>
{
    public:
        EnumLaneTaperTypeTmpl ();
        EnumLaneTaperTypeTmpl (DocumentImpl* pDoc);
        EnumLaneTaperTypeTmpl (EnumLaneTaperType::Values eValue);
        EnumLaneTaperType::Values value ();
        void setValue (EnumLaneTaperType::Values eValue);
        static void streamOut (EnumLaneTaperType::Values eVal, IStream& stream);
        static EnumLaneTaperType::Values parseString (const wchar_t* strValue, int nValueLen);
        static IParserEventSink::EventCode parseString (const wchar_t* strValue, int nValueLen, EnumLaneTaperType::Values& eValue);
        const static int k_iNumValues;
    
    private:
        EnumLaneTaperType::Values m_eValue;
        const static wchar_t* m_arrValues[5];
};

template <class T>
class EnumImpWidthTmpl: public EnumObjectTmpl<T>
{
    public:
        EnumImpWidthTmpl ();
        EnumImpWidthTmpl (DocumentImpl* pDoc);
        EnumImpWidthTmpl (EnumImpWidth::Values eValue);
        EnumImpWidth::Values value ();
        void setValue (EnumImpWidth::Values eValue);
        static void streamOut (EnumImpWidth::Values eVal, IStream& stream);
        static EnumImpWidth::Values parseString (const wchar_t* strValue, int nValueLen);
        static IParserEventSink::EventCode parseString (const wchar_t* strValue, int nValueLen, EnumImpWidth::Values& eValue);
        const static int k_iNumValues;
    
    private:
        EnumImpWidth::Values m_eValue;
        const static wchar_t* m_arrValues[4];
};

template <class T>
class EnumTrafficControlTypeTmpl: public EnumObjectTmpl<T>
{
    public:
        EnumTrafficControlTypeTmpl ();
        EnumTrafficControlTypeTmpl (DocumentImpl* pDoc);
        EnumTrafficControlTypeTmpl (EnumTrafficControlType::Values eValue);
        EnumTrafficControlType::Values value ();
        void setValue (EnumTrafficControlType::Values eValue);
        static void streamOut (EnumTrafficControlType::Values eVal, IStream& stream);
        static EnumTrafficControlType::Values parseString (const wchar_t* strValue, int nValueLen);
        static IParserEventSink::EventCode parseString (const wchar_t* strValue, int nValueLen, EnumTrafficControlType::Values& eValue);
        const static int k_iNumValues;
    
    private:
        EnumTrafficControlType::Values m_eValue;
        const static wchar_t* m_arrValues[5];
};

template <class T>
class EnumZoneMaterialTypeTmpl: public EnumObjectTmpl<T>
{
    public:
        EnumZoneMaterialTypeTmpl ();
        EnumZoneMaterialTypeTmpl (DocumentImpl* pDoc);
        EnumZoneMaterialTypeTmpl (EnumZoneMaterialType::Values eValue);
        EnumZoneMaterialType::Values value ();
        void setValue (EnumZoneMaterialType::Values eValue);
        static void streamOut (EnumZoneMaterialType::Values eVal, IStream& stream);
        static EnumZoneMaterialType::Values parseString (const wchar_t* strValue, int nValueLen);
        static IParserEventSink::EventCode parseString (const wchar_t* strValue, int nValueLen, EnumZoneMaterialType::Values& eValue);
        const static int k_iNumValues;
    
    private:
        EnumZoneMaterialType::Values m_eValue;
        const static wchar_t* m_arrValues[16];
};

template <class T>
class EnumSurfBndTypeTmpl: public EnumObjectTmpl<T>
{
    public:
        EnumSurfBndTypeTmpl ();
        EnumSurfBndTypeTmpl (DocumentImpl* pDoc);
        EnumSurfBndTypeTmpl (EnumSurfBndType::Values eValue);
        EnumSurfBndType::Values value ();
        void setValue (EnumSurfBndType::Values eValue);
        static void streamOut (EnumSurfBndType::Values eVal, IStream& stream);
        static EnumSurfBndType::Values parseString (const wchar_t* strValue, int nValueLen);
        static IParserEventSink::EventCode parseString (const wchar_t* strValue, int nValueLen, EnumSurfBndType::Values& eValue);
        const static int k_iNumValues;
    
    private:
        EnumSurfBndType::Values m_eValue;
        const static wchar_t* m_arrValues[4];
};

template <class T>
class EnumBeaconProtectionTypeTmpl: public EnumObjectTmpl<T>
{
    public:
        EnumBeaconProtectionTypeTmpl ();
        EnumBeaconProtectionTypeTmpl (DocumentImpl* pDoc);
        EnumBeaconProtectionTypeTmpl (EnumBeaconProtectionType::Values eValue);
        EnumBeaconProtectionType::Values value ();
        void setValue (EnumBeaconProtectionType::Values eValue);
        static void streamOut (EnumBeaconProtectionType::Values eVal, IStream& stream);
        static EnumBeaconProtectionType::Values parseString (const wchar_t* strValue, int nValueLen);
        static IParserEventSink::EventCode parseString (const wchar_t* strValue, int nValueLen, EnumBeaconProtectionType::Values& eValue);
        const static int k_iNumValues;
    
    private:
        EnumBeaconProtectionType::Values m_eValue;
        const static wchar_t* m_arrValues[9];
};

template <class T>
class EnumDataFormatTypeTmpl: public EnumObjectTmpl<T>
{
    public:
        EnumDataFormatTypeTmpl ();
        EnumDataFormatTypeTmpl (DocumentImpl* pDoc);
        EnumDataFormatTypeTmpl (EnumDataFormatType::Values eValue);
        EnumDataFormatType::Values value ();
        void setValue (EnumDataFormatType::Values eValue);
        static void streamOut (EnumDataFormatType::Values eVal, IStream& stream);
        static EnumDataFormatType::Values parseString (const wchar_t* strValue, int nValueLen);
        static IParserEventSink::EventCode parseString (const wchar_t* strValue, int nValueLen, EnumDataFormatType::Values& eValue);
        const static int k_iNumValues;
    
    private:
        EnumDataFormatType::Values m_eValue;
        const static wchar_t* m_arrValues[3];
};

template <class T>
class EnumMetAreaTmpl: public EnumObjectTmpl<T>
{
    public:
        EnumMetAreaTmpl ();
        EnumMetAreaTmpl (DocumentImpl* pDoc);
        EnumMetAreaTmpl (EnumMetArea::Values eValue);
        EnumMetArea::Values value ();
        void setValue (EnumMetArea::Values eValue);
        static void streamOut (EnumMetArea::Values eVal, IStream& stream);
        static EnumMetArea::Values parseString (const wchar_t* strValue, int nValueLen);
        static IParserEventSink::EventCode parseString (const wchar_t* strValue, int nValueLen, EnumMetArea::Values& eValue);
        const static int k_iNumValues;
    
    private:
        EnumMetArea::Values m_eValue;
        const static wchar_t* m_arrValues[5];
};

template <class T>
class EnumCurveTypeTmpl: public EnumObjectTmpl<T>
{
    public:
        EnumCurveTypeTmpl ();
        EnumCurveTypeTmpl (DocumentImpl* pDoc);
        EnumCurveTypeTmpl (EnumCurveType::Values eValue);
        EnumCurveType::Values value ();
        void setValue (EnumCurveType::Values eValue);
        static void streamOut (EnumCurveType::Values eVal, IStream& stream);
        static EnumCurveType::Values parseString (const wchar_t* strValue, int nValueLen);
        static IParserEventSink::EventCode parseString (const wchar_t* strValue, int nValueLen, EnumCurveType::Values& eValue);
        const static int k_iNumValues;
    
    private:
        EnumCurveType::Values m_eValue;
        const static wchar_t* m_arrValues[3];
};

template <class T>
class EnumImpHeightTmpl: public EnumObjectTmpl<T>
{
    public:
        EnumImpHeightTmpl ();
        EnumImpHeightTmpl (DocumentImpl* pDoc);
        EnumImpHeightTmpl (EnumImpHeight::Values eValue);
        EnumImpHeight::Values value ();
        void setValue (EnumImpHeight::Values eValue);
        static void streamOut (EnumImpHeight::Values eVal, IStream& stream);
        static EnumImpHeight::Values parseString (const wchar_t* strValue, int nValueLen);
        static IParserEventSink::EventCode parseString (const wchar_t* strValue, int nValueLen, EnumImpHeight::Values& eValue);
        const static int k_iNumValues;
    
    private:
        EnumImpHeight::Values m_eValue;
        const static wchar_t* m_arrValues[4];
};

template <class T>
class EnumSurveyRoleTypeTmpl: public EnumObjectTmpl<T>
{
    public:
        EnumSurveyRoleTypeTmpl ();
        EnumSurveyRoleTypeTmpl (DocumentImpl* pDoc);
        EnumSurveyRoleTypeTmpl (EnumSurveyRoleType::Values eValue);
        EnumSurveyRoleType::Values value ();
        void setValue (EnumSurveyRoleType::Values eValue);
        static void streamOut (EnumSurveyRoleType::Values eVal, IStream& stream);
        static EnumSurveyRoleType::Values parseString (const wchar_t* strValue, int nValueLen);
        static IParserEventSink::EventCode parseString (const wchar_t* strValue, int nValueLen, EnumSurveyRoleType::Values& eValue);
        const static int k_iNumValues;
    
    private:
        EnumSurveyRoleType::Values m_eValue;
        const static wchar_t* m_arrValues[8];
};

template <class T>
class EnumSpiralTypeTmpl: public EnumObjectTmpl<T>
{
    public:
        EnumSpiralTypeTmpl ();
        EnumSpiralTypeTmpl (DocumentImpl* pDoc);
        EnumSpiralTypeTmpl (EnumSpiralType::Values eValue);
        EnumSpiralType::Values value ();
        void setValue (EnumSpiralType::Values eValue);
        static void streamOut (EnumSpiralType::Values eVal, IStream& stream);
        static EnumSpiralType::Values parseString (const wchar_t* strValue, int nValueLen);
        static IParserEventSink::EventCode parseString (const wchar_t* strValue, int nValueLen, EnumSpiralType::Values& eValue);
        const static int k_iNumValues;
    
    private:
        EnumSpiralType::Values m_eValue;
        const static wchar_t* m_arrValues[17];
};

template <class T>
class EnumDitchBottomShapeTmpl: public EnumObjectTmpl<T>
{
    public:
        EnumDitchBottomShapeTmpl ();
        EnumDitchBottomShapeTmpl (DocumentImpl* pDoc);
        EnumDitchBottomShapeTmpl (EnumDitchBottomShape::Values eValue);
        EnumDitchBottomShape::Values value ();
        void setValue (EnumDitchBottomShape::Values eValue);
        static void streamOut (EnumDitchBottomShape::Values eVal, IStream& stream);
        static EnumDitchBottomShape::Values parseString (const wchar_t* strValue, int nValueLen);
        static IParserEventSink::EventCode parseString (const wchar_t* strValue, int nValueLen, EnumDitchBottomShape::Values& eValue);
        const static int k_iNumValues;
    
    private:
        EnumDitchBottomShape::Values m_eValue;
        const static wchar_t* m_arrValues[5];
};

template <class T>
class EnumIntersectionConstructionTypeTmpl: public EnumObjectTmpl<T>
{
    public:
        EnumIntersectionConstructionTypeTmpl ();
        EnumIntersectionConstructionTypeTmpl (DocumentImpl* pDoc);
        EnumIntersectionConstructionTypeTmpl (EnumIntersectionConstructionType::Values eValue);
        EnumIntersectionConstructionType::Values value ();
        void setValue (EnumIntersectionConstructionType::Values eValue);
        static void streamOut (EnumIntersectionConstructionType::Values eVal, IStream& stream);
        static EnumIntersectionConstructionType::Values parseString (const wchar_t* strValue, int nValueLen);
        static IParserEventSink::EventCode parseString (const wchar_t* strValue, int nValueLen, EnumIntersectionConstructionType::Values& eValue);
        const static int k_iNumValues;
    
    private:
        EnumIntersectionConstructionType::Values m_eValue;
        const static wchar_t* m_arrValues[4];
};

template <class T>
class EnumRoadSignTypeTmpl: public EnumObjectTmpl<T>
{
    public:
        EnumRoadSignTypeTmpl ();
        EnumRoadSignTypeTmpl (DocumentImpl* pDoc);
        EnumRoadSignTypeTmpl (EnumRoadSignType::Values eValue);
        EnumRoadSignType::Values value ();
        void setValue (EnumRoadSignType::Values eValue);
        static void streamOut (EnumRoadSignType::Values eVal, IStream& stream);
        static EnumRoadSignType::Values parseString (const wchar_t* strValue, int nValueLen);
        static IParserEventSink::EventCode parseString (const wchar_t* strValue, int nValueLen, EnumRoadSignType::Values& eValue);
        const static int k_iNumValues;
    
    private:
        EnumRoadSignType::Values m_eValue;
        const static wchar_t* m_arrValues[8];
};

template <class T>
class EnumImpVelocityTmpl: public EnumObjectTmpl<T>
{
    public:
        EnumImpVelocityTmpl ();
        EnumImpVelocityTmpl (DocumentImpl* pDoc);
        EnumImpVelocityTmpl (EnumImpVelocity::Values eValue);
        EnumImpVelocity::Values value ();
        void setValue (EnumImpVelocity::Values eValue);
        static void streamOut (EnumImpVelocity::Values eVal, IStream& stream);
        static EnumImpVelocity::Values parseString (const wchar_t* strValue, int nValueLen);
        static IParserEventSink::EventCode parseString (const wchar_t* strValue, int nValueLen, EnumImpVelocity::Values& eValue);
        const static int k_iNumValues;
    
    private:
        EnumImpVelocity::Values m_eValue;
        const static wchar_t* m_arrValues[3];
};

template <class T>
class EnumTurnLaneTypeTmpl: public EnumObjectTmpl<T>
{
    public:
        EnumTurnLaneTypeTmpl ();
        EnumTurnLaneTypeTmpl (DocumentImpl* pDoc);
        EnumTurnLaneTypeTmpl (EnumTurnLaneType::Values eValue);
        EnumTurnLaneType::Values value ();
        void setValue (EnumTurnLaneType::Values eValue);
        static void streamOut (EnumTurnLaneType::Values eVal, IStream& stream);
        static EnumTurnLaneType::Values parseString (const wchar_t* strValue, int nValueLen);
        static IParserEventSink::EventCode parseString (const wchar_t* strValue, int nValueLen, EnumTurnLaneType::Values& eValue);
        const static int k_iNumValues;
    
    private:
        EnumTurnLaneType::Values m_eValue;
        const static wchar_t* m_arrValues[3];
};

template <class T>
class EnumSideofRoadTypeTmpl: public EnumObjectTmpl<T>
{
    public:
        EnumSideofRoadTypeTmpl ();
        EnumSideofRoadTypeTmpl (DocumentImpl* pDoc);
        EnumSideofRoadTypeTmpl (EnumSideofRoadType::Values eValue);
        EnumSideofRoadType::Values value ();
        void setValue (EnumSideofRoadType::Values eValue);
        static void streamOut (EnumSideofRoadType::Values eVal, IStream& stream);
        static EnumSideofRoadType::Values parseString (const wchar_t* strValue, int nValueLen);
        static IParserEventSink::EventCode parseString (const wchar_t* strValue, int nValueLen, EnumSideofRoadType::Values& eValue);
        const static int k_iNumValues;
    
    private:
        EnumSideofRoadType::Values m_eValue;
        const static wchar_t* m_arrValues[4];
};

template <class T>
class EnumObservationStatusTypeTmpl: public EnumObjectTmpl<T>
{
    public:
        EnumObservationStatusTypeTmpl ();
        EnumObservationStatusTypeTmpl (DocumentImpl* pDoc);
        EnumObservationStatusTypeTmpl (EnumObservationStatusType::Values eValue);
        EnumObservationStatusType::Values value ();
        void setValue (EnumObservationStatusType::Values eValue);
        static void streamOut (EnumObservationStatusType::Values eVal, IStream& stream);
        static EnumObservationStatusType::Values parseString (const wchar_t* strValue, int nValueLen);
        static IParserEventSink::EventCode parseString (const wchar_t* strValue, int nValueLen, EnumObservationStatusType::Values& eValue);
        const static int k_iNumValues;
    
    private:
        EnumObservationStatusType::Values m_eValue;
        const static wchar_t* m_arrValues[3];
};

template <class T>
class EnumMetTemperatureTmpl: public EnumObjectTmpl<T>
{
    public:
        EnumMetTemperatureTmpl ();
        EnumMetTemperatureTmpl (DocumentImpl* pDoc);
        EnumMetTemperatureTmpl (EnumMetTemperature::Values eValue);
        EnumMetTemperature::Values value ();
        void setValue (EnumMetTemperature::Values eValue);
        static void streamOut (EnumMetTemperature::Values eVal, IStream& stream);
        static EnumMetTemperature::Values parseString (const wchar_t* strValue, int nValueLen);
        static IParserEventSink::EventCode parseString (const wchar_t* strValue, int nValueLen, EnumMetTemperature::Values& eValue);
        const static int k_iNumValues;
    
    private:
        EnumMetTemperature::Values m_eValue;
        const static wchar_t* m_arrValues[3];
};

template <class T>
class EnumParcelStateTypeTmpl: public EnumObjectTmpl<T>
{
    public:
        EnumParcelStateTypeTmpl ();
        EnumParcelStateTypeTmpl (DocumentImpl* pDoc);
        EnumParcelStateTypeTmpl (EnumParcelStateType::Values eValue);
        EnumParcelStateType::Values value ();
        void setValue (EnumParcelStateType::Values eValue);
        static void streamOut (EnumParcelStateType::Values eVal, IStream& stream);
        static EnumParcelStateType::Values parseString (const wchar_t* strValue, int nValueLen);
        static IParserEventSink::EventCode parseString (const wchar_t* strValue, int nValueLen, EnumParcelStateType::Values& eValue);
        const static int k_iNumValues;
    
    private:
        EnumParcelStateType::Values m_eValue;
        const static wchar_t* m_arrValues[9];
};

template <class T>
class EnumBreakLineTypeTmpl: public EnumObjectTmpl<T>
{
    public:
        EnumBreakLineTypeTmpl ();
        EnumBreakLineTypeTmpl (DocumentImpl* pDoc);
        EnumBreakLineTypeTmpl (EnumBreakLineType::Values eValue);
        EnumBreakLineType::Values value ();
        void setValue (EnumBreakLineType::Values eValue);
        static void streamOut (EnumBreakLineType::Values eVal, IStream& stream);
        static EnumBreakLineType::Values parseString (const wchar_t* strValue, int nValueLen);
        static IParserEventSink::EventCode parseString (const wchar_t* strValue, int nValueLen, EnumBreakLineType::Values& eValue);
        const static int k_iNumValues;
    
    private:
        EnumBreakLineType::Values m_eValue;
        const static wchar_t* m_arrValues[5];
};

template <class T>
class EnumMetLinearTmpl: public EnumObjectTmpl<T>
{
    public:
        EnumMetLinearTmpl ();
        EnumMetLinearTmpl (DocumentImpl* pDoc);
        EnumMetLinearTmpl (EnumMetLinear::Values eValue);
        EnumMetLinear::Values value ();
        void setValue (EnumMetLinear::Values eValue);
        static void streamOut (EnumMetLinear::Values eVal, IStream& stream);
        static EnumMetLinear::Values parseString (const wchar_t* strValue, int nValueLen);
        static IParserEventSink::EventCode parseString (const wchar_t* strValue, int nValueLen, EnumMetLinear::Values& eValue);
        const static int k_iNumValues;
    
    private:
        EnumMetLinear::Values m_eValue;
        const static wchar_t* m_arrValues[5];
};

template <class T>
class EnumImpLinearTmpl: public EnumObjectTmpl<T>
{
    public:
        EnumImpLinearTmpl ();
        EnumImpLinearTmpl (DocumentImpl* pDoc);
        EnumImpLinearTmpl (EnumImpLinear::Values eValue);
        EnumImpLinear::Values value ();
        void setValue (EnumImpLinear::Values eValue);
        static void streamOut (EnumImpLinear::Values eVal, IStream& stream);
        static EnumImpLinear::Values parseString (const wchar_t* strValue, int nValueLen);
        static IParserEventSink::EventCode parseString (const wchar_t* strValue, int nValueLen, EnumImpLinear::Values& eValue);
        const static int k_iNumValues;
    
    private:
        EnumImpLinear::Values m_eValue;
        const static wchar_t* m_arrValues[5];
};

template <class T>
class EnumZoneTransitionTypeTmpl: public EnumObjectTmpl<T>
{
    public:
        EnumZoneTransitionTypeTmpl ();
        EnumZoneTransitionTypeTmpl (DocumentImpl* pDoc);
        EnumZoneTransitionTypeTmpl (EnumZoneTransitionType::Values eValue);
        EnumZoneTransitionType::Values value ();
        void setValue (EnumZoneTransitionType::Values eValue);
        static void streamOut (EnumZoneTransitionType::Values eVal, IStream& stream);
        static EnumZoneTransitionType::Values parseString (const wchar_t* strValue, int nValueLen);
        static IParserEventSink::EventCode parseString (const wchar_t* strValue, int nValueLen, EnumZoneTransitionType::Values& eValue);
        const static int k_iNumValues;
    
    private:
        EnumZoneTransitionType::Values m_eValue;
        const static wchar_t* m_arrValues[3];
};

template <class T>
class EnumSurveyTypeTmpl: public EnumObjectTmpl<T>
{
    public:
        EnumSurveyTypeTmpl ();
        EnumSurveyTypeTmpl (DocumentImpl* pDoc);
        EnumSurveyTypeTmpl (EnumSurveyType::Values eValue);
        EnumSurveyType::Values value ();
        void setValue (EnumSurveyType::Values eValue);
        static void streamOut (EnumSurveyType::Values eVal, IStream& stream);
        static EnumSurveyType::Values parseString (const wchar_t* strValue, int nValueLen);
        static IParserEventSink::EventCode parseString (const wchar_t* strValue, int nValueLen, EnumSurveyType::Values& eValue);
        const static int k_iNumValues;
    
    private:
        EnumSurveyType::Values m_eValue;
        const static wchar_t* m_arrValues[4];
};

template <class T>
class EnumZoneVertTypeTmpl: public EnumObjectTmpl<T>
{
    public:
        EnumZoneVertTypeTmpl ();
        EnumZoneVertTypeTmpl (DocumentImpl* pDoc);
        EnumZoneVertTypeTmpl (EnumZoneVertType::Values eValue);
        EnumZoneVertType::Values value ();
        void setValue (EnumZoneVertType::Values eValue);
        static void streamOut (EnumZoneVertType::Values eVal, IStream& stream);
        static EnumZoneVertType::Values parseString (const wchar_t* strValue, int nValueLen);
        static IParserEventSink::EventCode parseString (const wchar_t* strValue, int nValueLen, EnumZoneVertType::Values& eValue);
        const static int k_iNumValues;
    
    private:
        EnumZoneVertType::Values m_eValue;
        const static wchar_t* m_arrValues[3];
};

template <class T>
class EnumXsVolCalcMethodTypeTmpl: public EnumObjectTmpl<T>
{
    public:
        EnumXsVolCalcMethodTypeTmpl ();
        EnumXsVolCalcMethodTypeTmpl (DocumentImpl* pDoc);
        EnumXsVolCalcMethodTypeTmpl (EnumXsVolCalcMethodType::Values eValue);
        EnumXsVolCalcMethodType::Values value ();
        void setValue (EnumXsVolCalcMethodType::Values eValue);
        static void streamOut (EnumXsVolCalcMethodType::Values eVal, IStream& stream);
        static EnumXsVolCalcMethodType::Values parseString (const wchar_t* strValue, int nValueLen);
        static IParserEventSink::EventCode parseString (const wchar_t* strValue, int nValueLen, EnumXsVolCalcMethodType::Values& eValue);
        const static int k_iNumValues;
    
    private:
        EnumXsVolCalcMethodType::Values m_eValue;
        const static wchar_t* m_arrValues[3];
};

template <class T>
class EnumLatLongAngularTypeTmpl: public EnumObjectTmpl<T>
{
    public:
        EnumLatLongAngularTypeTmpl ();
        EnumLatLongAngularTypeTmpl (DocumentImpl* pDoc);
        EnumLatLongAngularTypeTmpl (EnumLatLongAngularType::Values eValue);
        EnumLatLongAngularType::Values value ();
        void setValue (EnumLatLongAngularType::Values eValue);
        static void streamOut (EnumLatLongAngularType::Values eVal, IStream& stream);
        static EnumLatLongAngularType::Values parseString (const wchar_t* strValue, int nValueLen);
        static IParserEventSink::EventCode parseString (const wchar_t* strValue, int nValueLen, EnumLatLongAngularType::Values& eValue);
        const static int k_iNumValues;
    
    private:
        EnumLatLongAngularType::Values m_eValue;
        const static wchar_t* m_arrValues[5];
};

template <class T>
class EnumRoadTerrainTypeTmpl: public EnumObjectTmpl<T>
{
    public:
        EnumRoadTerrainTypeTmpl ();
        EnumRoadTerrainTypeTmpl (DocumentImpl* pDoc);
        EnumRoadTerrainTypeTmpl (EnumRoadTerrainType::Values eValue);
        EnumRoadTerrainType::Values value ();
        void setValue (EnumRoadTerrainType::Values eValue);
        static void streamOut (EnumRoadTerrainType::Values eVal, IStream& stream);
        static EnumRoadTerrainType::Values parseString (const wchar_t* strValue, int nValueLen);
        static IParserEventSink::EventCode parseString (const wchar_t* strValue, int nValueLen, EnumRoadTerrainType::Values& eValue);
        const static int k_iNumValues;
    
    private:
        EnumRoadTerrainType::Values m_eValue;
        const static wchar_t* m_arrValues[4];
};

template <class T>
class EnumClockwiseTmpl: public EnumObjectTmpl<T>
{
    public:
        EnumClockwiseTmpl ();
        EnumClockwiseTmpl (DocumentImpl* pDoc);
        EnumClockwiseTmpl (EnumClockwise::Values eValue);
        EnumClockwise::Values value ();
        void setValue (EnumClockwise::Values eValue);
        static void streamOut (EnumClockwise::Values eVal, IStream& stream);
        static EnumClockwise::Values parseString (const wchar_t* strValue, int nValueLen);
        static IParserEventSink::EventCode parseString (const wchar_t* strValue, int nValueLen, EnumClockwise::Values& eValue);
        const static int k_iNumValues;
    
    private:
        EnumClockwise::Values m_eValue;
        const static wchar_t* m_arrValues[3];
};

template <class T>
class EnumStateTypeTmpl: public EnumObjectTmpl<T>
{
    public:
        EnumStateTypeTmpl ();
        EnumStateTypeTmpl (DocumentImpl* pDoc);
        EnumStateTypeTmpl (EnumStateType::Values eValue);
        EnumStateType::Values value ();
        void setValue (EnumStateType::Values eValue);
        static void streamOut (EnumStateType::Values eVal, IStream& stream);
        static EnumStateType::Values parseString (const wchar_t* strValue, int nValueLen);
        static IParserEventSink::EventCode parseString (const wchar_t* strValue, int nValueLen, EnumStateType::Values& eValue);
        const static int k_iNumValues;
    
    private:
        EnumStateType::Values m_eValue;
        const static wchar_t* m_arrValues[5];
};

template <class T>
class EnumCrashIntersectionRelationTmpl: public EnumObjectTmpl<T>
{
    public:
        EnumCrashIntersectionRelationTmpl ();
        EnumCrashIntersectionRelationTmpl (DocumentImpl* pDoc);
        EnumCrashIntersectionRelationTmpl (EnumCrashIntersectionRelation::Values eValue);
        EnumCrashIntersectionRelation::Values value ();
        void setValue (EnumCrashIntersectionRelation::Values eValue);
        static void streamOut (EnumCrashIntersectionRelation::Values eVal, IStream& stream);
        static EnumCrashIntersectionRelation::Values parseString (const wchar_t* strValue, int nValueLen);
        static IParserEventSink::EventCode parseString (const wchar_t* strValue, int nValueLen, EnumCrashIntersectionRelation::Values& eValue);
        const static int k_iNumValues;
    
    private:
        EnumCrashIntersectionRelation::Values m_eValue;
        const static wchar_t* m_arrValues[4];
};

template <class T>
class EnumImpDiameterTmpl: public EnumObjectTmpl<T>
{
    public:
        EnumImpDiameterTmpl ();
        EnumImpDiameterTmpl (DocumentImpl* pDoc);
        EnumImpDiameterTmpl (EnumImpDiameter::Values eValue);
        EnumImpDiameter::Values value ();
        void setValue (EnumImpDiameter::Values eValue);
        static void streamOut (EnumImpDiameter::Values eVal, IStream& stream);
        static EnumImpDiameter::Values parseString (const wchar_t* strValue, int nValueLen);
        static IParserEventSink::EventCode parseString (const wchar_t* strValue, int nValueLen, EnumImpDiameter::Values& eValue);
        const static int k_iNumValues;
    
    private:
        EnumImpDiameter::Values m_eValue;
        const static wchar_t* m_arrValues[4];
};

template <class T>
class EnumGPSSolutionTypeEnumTmpl: public EnumObjectTmpl<T>
{
    public:
        EnumGPSSolutionTypeEnumTmpl ();
        EnumGPSSolutionTypeEnumTmpl (DocumentImpl* pDoc);
        EnumGPSSolutionTypeEnumTmpl (EnumGPSSolutionTypeEnum::Values eValue);
        EnumGPSSolutionTypeEnum::Values value ();
        void setValue (EnumGPSSolutionTypeEnum::Values eValue);
        static void streamOut (EnumGPSSolutionTypeEnum::Values eVal, IStream& stream);
        static EnumGPSSolutionTypeEnum::Values parseString (const wchar_t* strValue, int nValueLen);
        static IParserEventSink::EventCode parseString (const wchar_t* strValue, int nValueLen, EnumGPSSolutionTypeEnum::Values& eValue);
        const static int k_iNumValues;
    
    private:
        EnumGPSSolutionTypeEnum::Values m_eValue;
        const static wchar_t* m_arrValues[9];
};

template <class T>
class EnumMetDiameterTmpl: public EnumObjectTmpl<T>
{
    public:
        EnumMetDiameterTmpl ();
        EnumMetDiameterTmpl (DocumentImpl* pDoc);
        EnumMetDiameterTmpl (EnumMetDiameter::Values eValue);
        EnumMetDiameter::Values value ();
        void setValue (EnumMetDiameter::Values eValue);
        static void streamOut (EnumMetDiameter::Values eVal, IStream& stream);
        static EnumMetDiameter::Values parseString (const wchar_t* strValue, int nValueLen);
        static IParserEventSink::EventCode parseString (const wchar_t* strValue, int nValueLen, EnumMetDiameter::Values& eValue);
        const static int k_iNumValues;
    
    private:
        EnumMetDiameter::Values m_eValue;
        const static wchar_t* m_arrValues[5];
};

template <class T>
class EnumGPSSolutionFrequencyEnumTmpl: public EnumObjectTmpl<T>
{
    public:
        EnumGPSSolutionFrequencyEnumTmpl ();
        EnumGPSSolutionFrequencyEnumTmpl (DocumentImpl* pDoc);
        EnumGPSSolutionFrequencyEnumTmpl (EnumGPSSolutionFrequencyEnum::Values eValue);
        EnumGPSSolutionFrequencyEnum::Values value ();
        void setValue (EnumGPSSolutionFrequencyEnum::Values eValue);
        static void streamOut (EnumGPSSolutionFrequencyEnum::Values eVal, IStream& stream);
        static EnumGPSSolutionFrequencyEnum::Values parseString (const wchar_t* strValue, int nValueLen);
        static IParserEventSink::EventCode parseString (const wchar_t* strValue, int nValueLen, EnumGPSSolutionFrequencyEnum::Values& eValue);
        const static int k_iNumValues;
    
    private:
        EnumGPSSolutionFrequencyEnum::Values m_eValue;
        const static wchar_t* m_arrValues[8];
};

template <class T>
class EnumMetFlowTmpl: public EnumObjectTmpl<T>
{
    public:
        EnumMetFlowTmpl ();
        EnumMetFlowTmpl (DocumentImpl* pDoc);
        EnumMetFlowTmpl (EnumMetFlow::Values eValue);
        EnumMetFlow::Values value ();
        void setValue (EnumMetFlow::Values eValue);
        static void streamOut (EnumMetFlow::Values eVal, IStream& stream);
        static EnumMetFlow::Values parseString (const wchar_t* strValue, int nValueLen);
        static IParserEventSink::EventCode parseString (const wchar_t* strValue, int nValueLen, EnumMetFlow::Values& eValue);
        const static int k_iNumValues;
    
    private:
        EnumMetFlow::Values m_eValue;
        const static wchar_t* m_arrValues[4];
};

template <class T>
class EnumMetPressureTmpl: public EnumObjectTmpl<T>
{
    public:
        EnumMetPressureTmpl ();
        EnumMetPressureTmpl (DocumentImpl* pDoc);
        EnumMetPressureTmpl (EnumMetPressure::Values eValue);
        EnumMetPressure::Values value ();
        void setValue (EnumMetPressure::Values eValue);
        static void streamOut (EnumMetPressure::Values eVal, IStream& stream);
        static EnumMetPressure::Values parseString (const wchar_t* strValue, int nValueLen);
        static IParserEventSink::EventCode parseString (const wchar_t* strValue, int nValueLen, EnumMetPressure::Values& eValue);
        const static int k_iNumValues;
    
    private:
        EnumMetPressure::Values m_eValue;
        const static wchar_t* m_arrValues[5];
};

template <class T>
class EnumPipeNetworkTypeTmpl: public EnumObjectTmpl<T>
{
    public:
        EnumPipeNetworkTypeTmpl ();
        EnumPipeNetworkTypeTmpl (DocumentImpl* pDoc);
        EnumPipeNetworkTypeTmpl (EnumPipeNetworkType::Values eValue);
        EnumPipeNetworkType::Values value ();
        void setValue (EnumPipeNetworkType::Values eValue);
        static void streamOut (EnumPipeNetworkType::Values eVal, IStream& stream);
        static EnumPipeNetworkType::Values parseString (const wchar_t* strValue, int nValueLen);
        static IParserEventSink::EventCode parseString (const wchar_t* strValue, int nValueLen, EnumPipeNetworkType::Values& eValue);
        const static int k_iNumValues;
    
    private:
        EnumPipeNetworkType::Values m_eValue;
        const static wchar_t* m_arrValues[5];
};

template <class T>
class EnumZoneHingeTypeTmpl: public EnumObjectTmpl<T>
{
    public:
        EnumZoneHingeTypeTmpl ();
        EnumZoneHingeTypeTmpl (DocumentImpl* pDoc);
        EnumZoneHingeTypeTmpl (EnumZoneHingeType::Values eValue);
        EnumZoneHingeType::Values value ();
        void setValue (EnumZoneHingeType::Values eValue);
        static void streamOut (EnumZoneHingeType::Values eVal, IStream& stream);
        static EnumZoneHingeType::Values parseString (const wchar_t* strValue, int nValueLen);
        static IParserEventSink::EventCode parseString (const wchar_t* strValue, int nValueLen, EnumZoneHingeType::Values& eValue);
        const static int k_iNumValues;
    
    private:
        EnumZoneHingeType::Values m_eValue;
        const static wchar_t* m_arrValues[4];
};

template <class T>
class EnumImpPressureTmpl: public EnumObjectTmpl<T>
{
    public:
        EnumImpPressureTmpl ();
        EnumImpPressureTmpl (DocumentImpl* pDoc);
        EnumImpPressureTmpl (EnumImpPressure::Values eValue);
        EnumImpPressure::Values value ();
        void setValue (EnumImpPressure::Values eValue);
        static void streamOut (EnumImpPressure::Values eVal, IStream& stream);
        static EnumImpPressure::Values parseString (const wchar_t* strValue, int nValueLen);
        static IParserEventSink::EventCode parseString (const wchar_t* strValue, int nValueLen, EnumImpPressure::Values& eValue);
        const static int k_iNumValues;
    
    private:
        EnumImpPressure::Values m_eValue;
        const static wchar_t* m_arrValues[3];
};

template <class T>
class EnumSurfVolCMethodTypeTmpl: public EnumObjectTmpl<T>
{
    public:
        EnumSurfVolCMethodTypeTmpl ();
        EnumSurfVolCMethodTypeTmpl (DocumentImpl* pDoc);
        EnumSurfVolCMethodTypeTmpl (EnumSurfVolCMethodType::Values eValue);
        EnumSurfVolCMethodType::Values value ();
        void setValue (EnumSurfVolCMethodType::Values eValue);
        static void streamOut (EnumSurfVolCMethodType::Values eVal, IStream& stream);
        static EnumSurfVolCMethodType::Values parseString (const wchar_t* strValue, int nValueLen);
        static IParserEventSink::EventCode parseString (const wchar_t* strValue, int nValueLen, EnumSurfVolCMethodType::Values& eValue);
        const static int k_iNumValues;
    
    private:
        EnumSurfVolCMethodType::Values m_eValue;
        const static wchar_t* m_arrValues[3];
};

template <class T>
class EnumPurposeTypeTmpl: public EnumObjectTmpl<T>
{
    public:
        EnumPurposeTypeTmpl ();
        EnumPurposeTypeTmpl (DocumentImpl* pDoc);
        EnumPurposeTypeTmpl (EnumPurposeType::Values eValue);
        EnumPurposeType::Values value ();
        void setValue (EnumPurposeType::Values eValue);
        static void streamOut (EnumPurposeType::Values eVal, IStream& stream);
        static EnumPurposeType::Values parseString (const wchar_t* strValue, int nValueLen);
        static IParserEventSink::EventCode parseString (const wchar_t* strValue, int nValueLen, EnumPurposeType::Values& eValue);
        const static int k_iNumValues;
    
    private:
        EnumPurposeType::Values m_eValue;
        const static wchar_t* m_arrValues[15];
};



}; // namespace : LX
#endif
