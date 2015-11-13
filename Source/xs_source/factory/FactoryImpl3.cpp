#include "stdafx.h"
#include "LXTypes.h"
#include "LXDefs.h"
#include "FactoryImpl.h"
#include "RoadwayImpl.h"
#include "EggPipeImpl.h"
#include "StructsImpl.h"
#include "LocationImpl.h"
#include "IntersectionImpl.h"
#include "FieldNoteImpl.h"
#include "LaserDetailsImpl.h"
#include "RetWallImpl.h"
#include "GPSQCInfoLevel1Impl.h"
#include "RoadwaysImpl.h"
#include "ProfAlignImpl.h"
#include "BikeFacilitiesImpl.h"
#include "CgPointImpl.h"
#include "DrivewayDensityImpl.h"
#include "MonumentsImpl.h"
#include "CircCurveImpl.h"
#include "TitleImpl.h"
#include "DesignCrossSectSurfImpl.h"
#include "RedVerticalObservationImpl.h"
#include "GPSSetupImpl.h"
#include "ParcelsImpl.h"
#include "ClassificationImpl.h"
#include "ZonesImpl.h"
#include "SurveyHeaderImpl.h"
#include "StructImpl.h"
#include "LaserSetupImpl.h"
#include "PropertyImpl.h"
#include "ZoneSlopeImpl.h"
#include "DitchImpl.h"
#include "TimingImpl.h"

namespace LX
{
Roadway* FactoryImpl::createRoadway()
{
    return new RoadwayImpl(&m_doc);
}

EggPipe* FactoryImpl::createEggPipe()
{
    return new EggPipeImpl(&m_doc);
}

Structs* FactoryImpl::createStructs()
{
    return new StructsImpl(&m_doc);
}

Location* FactoryImpl::createLocation()
{
    return new LocationImpl(&m_doc);
}

Intersection* FactoryImpl::createIntersection()
{
    return new IntersectionImpl(&m_doc);
}

FieldNote* FactoryImpl::createFieldNote()
{
    return new FieldNoteImpl(&m_doc);
}

LaserDetails* FactoryImpl::createLaserDetails()
{
    return new LaserDetailsImpl(&m_doc);
}

RetWall* FactoryImpl::createRetWall()
{
    return new RetWallImpl(&m_doc);
}

GPSQCInfoLevel1* FactoryImpl::createGPSQCInfoLevel1()
{
    return new GPSQCInfoLevel1Impl(&m_doc);
}

Roadways* FactoryImpl::createRoadways()
{
    return new RoadwaysImpl(&m_doc);
}

ProfAlign* FactoryImpl::createProfAlign()
{
    return new ProfAlignImpl(&m_doc);
}

BikeFacilities* FactoryImpl::createBikeFacilities()
{
    return new BikeFacilitiesImpl(&m_doc);
}

CgPoint* FactoryImpl::createCgPoint()
{
    return new CgPointImpl(&m_doc);
}

DrivewayDensity* FactoryImpl::createDrivewayDensity()
{
    return new DrivewayDensityImpl(&m_doc);
}

Monuments* FactoryImpl::createMonuments()
{
    return new MonumentsImpl(&m_doc);
}

CircCurve* FactoryImpl::createCircCurve()
{
    return new CircCurveImpl(&m_doc);
}

Title* FactoryImpl::createTitle()
{
    return new TitleImpl(&m_doc);
}

DesignCrossSectSurf* FactoryImpl::createDesignCrossSectSurf()
{
    return new DesignCrossSectSurfImpl(&m_doc);
}

RedVerticalObservation* FactoryImpl::createRedVerticalObservation()
{
    return new RedVerticalObservationImpl(&m_doc);
}

GPSSetup* FactoryImpl::createGPSSetup()
{
    return new GPSSetupImpl(&m_doc);
}

Parcels* FactoryImpl::createParcels()
{
    return new ParcelsImpl(&m_doc);
}

Classification* FactoryImpl::createClassification()
{
    return new ClassificationImpl(&m_doc);
}

Zones* FactoryImpl::createZones()
{
    return new ZonesImpl(&m_doc);
}

SurveyHeader* FactoryImpl::createSurveyHeader()
{
    return new SurveyHeaderImpl(&m_doc);
}

Struct* FactoryImpl::createStruct()
{
    return new StructImpl(&m_doc);
}

LaserSetup* FactoryImpl::createLaserSetup()
{
    return new LaserSetupImpl(&m_doc);
}

Property* FactoryImpl::createProperty()
{
    return new PropertyImpl(&m_doc);
}

ZoneSlope* FactoryImpl::createZoneSlope()
{
    return new ZoneSlopeImpl(&m_doc);
}

Ditch* FactoryImpl::createDitch()
{
    return new DitchImpl(&m_doc);
}

Timing* FactoryImpl::createTiming()
{
    return new TimingImpl(&m_doc);
}

}; // namespace : LX
