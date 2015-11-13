#include "stdafx.h"
#include "LXTypes.h"
#include "LXDefs.h"
#include "FactoryImpl.h"
#include "UnitsImpl.h"
#include "NoPassingZoneImpl.h"
#include "RectStructImpl.h"
#include "CantImpl.h"
#include "RoadSignImpl.h"
#include "CantStationImpl.h"
#include "SuperelevationImpl.h"
#include "DocFileRefImpl.h"
#include "InSpiralImpl.h"
#include "SurfacesImpl.h"
#include "CurveImpl.h"
#include "UnsymParaCurveImpl.h"
#include "EquipmentImpl.h"
#include "PntsImpl.h"
#include "HazardRatingImpl.h"
#include "ProjectImpl.h"
#include "ApplicationImpl.h"
#include "AdverseSEImpl.h"
#include "HeadOfPowerImpl.h"
#include "RoadsideImpl.h"
#include "MapPointImpl.h"
#include "ConnectionImpl.h"
#include "CenterImpl.h"
#include "LocationAddressImpl.h"
#include "IntersectionsImpl.h"
#include "PipesImpl.h"
#include "SpiralImpl.h"
#include "OffsetValsImpl.h"
#include "ElliPipeImpl.h"
#include "SurfVolumeImpl.h"
#include "VolumeGeomImpl.h"

namespace LX
{

FactoryImpl::FactoryImpl (DocumentImpl& doc)
	: m_doc(doc)
{
}

Units* FactoryImpl::createUnits()
{
    return new UnitsImpl(&m_doc);
}

NoPassingZone* FactoryImpl::createNoPassingZone()
{
    return new NoPassingZoneImpl(&m_doc);
}

RectStruct* FactoryImpl::createRectStruct()
{
    return new RectStructImpl(&m_doc);
}

Cant* FactoryImpl::createCant()
{
    return new CantImpl(&m_doc);
}

RoadSign* FactoryImpl::createRoadSign()
{
    return new RoadSignImpl(&m_doc);
}

CantStation* FactoryImpl::createCantStation()
{
    return new CantStationImpl(&m_doc);
}

Superelevation* FactoryImpl::createSuperelevation()
{
    return new SuperelevationImpl(&m_doc);
}

DocFileRef* FactoryImpl::createDocFileRef()
{
    return new DocFileRefImpl(&m_doc);
}

InSpiral* FactoryImpl::createInSpiral()
{
    return new InSpiralImpl(&m_doc);
}

Surfaces* FactoryImpl::createSurfaces()
{
    return new SurfacesImpl(&m_doc);
}

Curve* FactoryImpl::createCurve()
{
    return new CurveImpl(&m_doc);
}

UnsymParaCurve* FactoryImpl::createUnsymParaCurve()
{
    return new UnsymParaCurveImpl(&m_doc);
}

Equipment* FactoryImpl::createEquipment()
{
    return new EquipmentImpl(&m_doc);
}

Pnts* FactoryImpl::createPnts()
{
    return new PntsImpl(&m_doc);
}

HazardRating* FactoryImpl::createHazardRating()
{
    return new HazardRatingImpl(&m_doc);
}

Project* FactoryImpl::createProject()
{
    return new ProjectImpl(&m_doc);
}

Application* FactoryImpl::createApplication()
{
    return new ApplicationImpl(&m_doc);
}

AdverseSE* FactoryImpl::createAdverseSE()
{
    return new AdverseSEImpl(&m_doc);
}

HeadOfPower* FactoryImpl::createHeadOfPower()
{
    return new HeadOfPowerImpl(&m_doc);
}

Roadside* FactoryImpl::createRoadside()
{
    return new RoadsideImpl(&m_doc);
}

MapPoint* FactoryImpl::createMapPoint()
{
    return new MapPointImpl(&m_doc);
}

Connection* FactoryImpl::createConnection()
{
    return new ConnectionImpl(&m_doc);
}

Center* FactoryImpl::createCenter()
{
    return new CenterImpl(&m_doc);
}

LocationAddress* FactoryImpl::createLocationAddress()
{
    return new LocationAddressImpl(&m_doc);
}

Intersections* FactoryImpl::createIntersections()
{
    return new IntersectionsImpl(&m_doc);
}

Pipes* FactoryImpl::createPipes()
{
    return new PipesImpl(&m_doc);
}

Spiral* FactoryImpl::createSpiral()
{
    return new SpiralImpl(&m_doc);
}

OffsetVals* FactoryImpl::createOffsetVals()
{
    return new OffsetValsImpl(&m_doc);
}

ElliPipe* FactoryImpl::createElliPipe()
{
    return new ElliPipeImpl(&m_doc);
}

SurfVolume* FactoryImpl::createSurfVolume()
{
    return new SurfVolumeImpl(&m_doc);
}

VolumeGeom* FactoryImpl::createVolumeGeom()
{
    return new VolumeGeomImpl(&m_doc);
}

}; // namespace : LX
