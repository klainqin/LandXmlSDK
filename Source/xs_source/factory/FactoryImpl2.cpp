#include "stdafx.h"
#include "LXTypes.h"
#include "LXDefs.h"
#include "FactoryImpl.h"
#include "BoundaryImpl.h"
#include "StaEquationImpl.h"
#include "TrafficVolumeImpl.h"
#include "StartImpl.h"
#include "CircPipeImpl.h"
#include "InstrumentSetupImpl.h"
#include "SurfVolumesImpl.h"
#include "POIImpl.h"
#include "PlanFeaturesImpl.h"
#include "WatershedImpl.h"
#include "GPSPositionImpl.h"
#include "CrossSectPntImpl.h"
#include "InletStructImpl.h"
#include "CoordGeomImpl.h"
#include "AmendmentItemImpl.h"
#include "VolumeImpl.h"
#include "PipeImpl.h"
#include "AdministrativeAreaImpl.h"
#include "ClimbLaneImpl.h"
#include "ZoneCutFillImpl.h"
#include "StationImpl.h"
#include "DailyTrafficVolumeImpl.h"
#include "InstrumentPointImpl.h"
#include "PipeNetworksImpl.h"
#include "RectPipeImpl.h"
#include "ThruLaneImpl.h"
#include "ProfSurfImpl.h"
#include "AuthorImpl.h"
#include "CrossSectSurfImpl.h"
#include "FullSuperelevImpl.h"

namespace LX
{
Boundary* FactoryImpl::createBoundary()
{
    return new BoundaryImpl(&m_doc);
}

StaEquation* FactoryImpl::createStaEquation()
{
    return new StaEquationImpl(&m_doc);
}

TrafficVolume* FactoryImpl::createTrafficVolume()
{
    return new TrafficVolumeImpl(&m_doc);
}

Start* FactoryImpl::createStart()
{
    return new StartImpl(&m_doc);
}

CircPipe* FactoryImpl::createCircPipe()
{
    return new CircPipeImpl(&m_doc);
}

InstrumentSetup* FactoryImpl::createInstrumentSetup()
{
    return new InstrumentSetupImpl(&m_doc);
}

SurfVolumes* FactoryImpl::createSurfVolumes()
{
    return new SurfVolumesImpl(&m_doc);
}

POI* FactoryImpl::createPOI()
{
    return new POIImpl(&m_doc);
}

PlanFeatures* FactoryImpl::createPlanFeatures()
{
    return new PlanFeaturesImpl(&m_doc);
}

Watershed* FactoryImpl::createWatershed()
{
    return new WatershedImpl(&m_doc);
}

GPSPosition* FactoryImpl::createGPSPosition()
{
    return new GPSPositionImpl(&m_doc);
}

CrossSectPnt* FactoryImpl::createCrossSectPnt()
{
    return new CrossSectPntImpl(&m_doc);
}

InletStruct* FactoryImpl::createInletStruct()
{
    return new InletStructImpl(&m_doc);
}

CoordGeom* FactoryImpl::createCoordGeom()
{
    return new CoordGeomImpl(&m_doc);
}

AmendmentItem* FactoryImpl::createAmendmentItem()
{
    return new AmendmentItemImpl(&m_doc);
}

Volume* FactoryImpl::createVolume()
{
    return new VolumeImpl(&m_doc);
}

Pipe* FactoryImpl::createPipe()
{
    return new PipeImpl(&m_doc);
}

AdministrativeArea* FactoryImpl::createAdministrativeArea()
{
    return new AdministrativeAreaImpl(&m_doc);
}

ClimbLane* FactoryImpl::createClimbLane()
{
    return new ClimbLaneImpl(&m_doc);
}

ZoneCutFill* FactoryImpl::createZoneCutFill()
{
    return new ZoneCutFillImpl(&m_doc);
}

Station* FactoryImpl::createStation()
{
    return new StationImpl(&m_doc);
}

DailyTrafficVolume* FactoryImpl::createDailyTrafficVolume()
{
    return new DailyTrafficVolumeImpl(&m_doc);
}

InstrumentPoint* FactoryImpl::createInstrumentPoint()
{
    return new InstrumentPointImpl(&m_doc);
}

PipeNetworks* FactoryImpl::createPipeNetworks()
{
    return new PipeNetworksImpl(&m_doc);
}

RectPipe* FactoryImpl::createRectPipe()
{
    return new RectPipeImpl(&m_doc);
}

ThruLane* FactoryImpl::createThruLane()
{
    return new ThruLaneImpl(&m_doc);
}

ProfSurf* FactoryImpl::createProfSurf()
{
    return new ProfSurfImpl(&m_doc);
}

Author* FactoryImpl::createAuthor()
{
    return new AuthorImpl(&m_doc);
}

CrossSectSurf* FactoryImpl::createCrossSectSurf()
{
    return new CrossSectSurfImpl(&m_doc);
}

FullSuperelev* FactoryImpl::createFullSuperelev()
{
    return new FullSuperelevImpl(&m_doc);
}

}; // namespace : LX
