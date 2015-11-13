#include "stdafx.h"
#include "LXTypes.h"
#include "LXDefs.h"
#include "FactoryImpl.h"
#include "TargetPointImpl.h"
#include "Curve2Impl.h"
#include "DesignSpeed85thImpl.h"
#include "PntList2DImpl.h"
#include "GPSQCInfoLevel2Impl.h"
#include "TestObservationImpl.h"
#include "CrashHistoryImpl.h"
#include "SourceDataImpl.h"
#include "PlanFeatureImpl.h"
#include "BreaklinesImpl.h"
#include "InvertImpl.h"
#include "ContoursImpl.h"
#include "LanesImpl.h"
#include "ZoneCrossSectStructureImpl.h"
#include "ZoneHingeImpl.h"
#include "EndImpl.h"
#include "AlignPIsImpl.h"
#include "AlignPIImpl.h"
#include "DataPointsImpl.h"
#include "FullSuperStaImpl.h"
#include "ContourImpl.h"
#include "AdministrativeDateImpl.h"
#include "SurveyorCertificateImpl.h"
#include "SurveyMonumentImpl.h"
#include "ObstructionOffsetImpl.h"
#include "CrashDataImpl.h"
#include "ControlChecksImpl.h"
#include "PointTypeImpl.h"
#include "CrossSectsImpl.h"
#include "SurfaceImpl.h"

namespace LX
{
TargetPoint* FactoryImpl::createTargetPoint()
{
    return new TargetPointImpl(&m_doc);
}

Curve2* FactoryImpl::createCurve2()
{
    return new Curve2Impl(&m_doc);
}

DesignSpeed85th* FactoryImpl::createDesignSpeed85th()
{
    return new DesignSpeed85thImpl(&m_doc);
}

PntList2D* FactoryImpl::createPntList2D()
{
    return new PntList2DImpl(&m_doc);
}

GPSQCInfoLevel2* FactoryImpl::createGPSQCInfoLevel2()
{
    return new GPSQCInfoLevel2Impl(&m_doc);
}

TestObservation* FactoryImpl::createTestObservation()
{
    return new TestObservationImpl(&m_doc);
}

CrashHistory* FactoryImpl::createCrashHistory()
{
    return new CrashHistoryImpl(&m_doc);
}

SourceData* FactoryImpl::createSourceData()
{
    return new SourceDataImpl(&m_doc);
}

PlanFeature* FactoryImpl::createPlanFeature()
{
    return new PlanFeatureImpl(&m_doc);
}

Breaklines* FactoryImpl::createBreaklines()
{
    return new BreaklinesImpl(&m_doc);
}

Invert* FactoryImpl::createInvert()
{
    return new InvertImpl(&m_doc);
}

Contours* FactoryImpl::createContours()
{
    return new ContoursImpl(&m_doc);
}

Lanes* FactoryImpl::createLanes()
{
    return new LanesImpl(&m_doc);
}

ZoneCrossSectStructure* FactoryImpl::createZoneCrossSectStructure()
{
    return new ZoneCrossSectStructureImpl(&m_doc);
}

ZoneHinge* FactoryImpl::createZoneHinge()
{
    return new ZoneHingeImpl(&m_doc);
}

End* FactoryImpl::createEnd()
{
    return new EndImpl(&m_doc);
}

AlignPIs* FactoryImpl::createAlignPIs()
{
    return new AlignPIsImpl(&m_doc);
}

AlignPI* FactoryImpl::createAlignPI()
{
    return new AlignPIImpl(&m_doc);
}

DataPoints* FactoryImpl::createDataPoints()
{
    return new DataPointsImpl(&m_doc);
}

FullSuperSta* FactoryImpl::createFullSuperSta()
{
    return new FullSuperStaImpl(&m_doc);
}

Contour* FactoryImpl::createContour()
{
    return new ContourImpl(&m_doc);
}

AdministrativeDate* FactoryImpl::createAdministrativeDate()
{
    return new AdministrativeDateImpl(&m_doc);
}

SurveyorCertificate* FactoryImpl::createSurveyorCertificate()
{
    return new SurveyorCertificateImpl(&m_doc);
}

SurveyMonument* FactoryImpl::createSurveyMonument()
{
    return new SurveyMonumentImpl(&m_doc);
}

ObstructionOffset* FactoryImpl::createObstructionOffset()
{
    return new ObstructionOffsetImpl(&m_doc);
}

CrashData* FactoryImpl::createCrashData()
{
    return new CrashDataImpl(&m_doc);
}

ControlChecks* FactoryImpl::createControlChecks()
{
    return new ControlChecksImpl(&m_doc);
}

PointType* FactoryImpl::createPointType()
{
    return new PointTypeImpl(&m_doc);
}

CrossSects* FactoryImpl::createCrossSects()
{
    return new CrossSectsImpl(&m_doc);
}

Surface* FactoryImpl::createSurface()
{
    return new SurfaceImpl(&m_doc);
}

}; // namespace : LX
