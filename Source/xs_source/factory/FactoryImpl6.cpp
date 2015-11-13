#include "stdafx.h"
#include "LXTypes.h"
#include "LXDefs.h"
#include "FactoryImpl.h"
#include "CurbImpl.h"
#include "OffsetValsImpl.h"
#include "GPSVectorImpl.h"
#include "WideningLaneImpl.h"
#include "ReducedObservationImpl.h"
#include "IrregularLineImpl.h"
#include "BoundariesImpl.h"
#include "MetricImpl.h"
#include "TwoWayLeftTurnLaneImpl.h"
#include "RawObservationImpl.h"
#include "TargetSetupImpl.h"
#include "ChannelImpl.h"
#include "PipeFlowImpl.h"
#include "RetWallPntImpl.h"
#include "PointFileImpl.h"
#include "BacksightPointImpl.h"
#include "PostedSpeedImpl.h"
#include "PersonnelImpl.h"
#include "MonumentImpl.h"
#include "PntList3DImpl.h"
#include "AmendmentImpl.h"
#include "InstrumentDetailsImpl.h"
#include "StructFlowImpl.h"
#include "LandXMLImpl.h"
#include "FacesImpl.h"
#include "DecisionSightDistanceImpl.h"
#include "CoordinateSystemImpl.h"
#include "FeatureDictionaryImpl.h"
#include "ZoneWidthImpl.h"
#include "ParaCurveImpl.h"

namespace LX
{
Curb* FactoryImpl::createCurb()
{
    return new CurbImpl(&m_doc);
}

GPSVector* FactoryImpl::createGPSVector()
{
    return new GPSVectorImpl(&m_doc);
}

WideningLane* FactoryImpl::createWideningLane()
{
    return new WideningLaneImpl(&m_doc);
}

ReducedObservation* FactoryImpl::createReducedObservation()
{
    return new ReducedObservationImpl(&m_doc);
}

IrregularLine* FactoryImpl::createIrregularLine()
{
    return new IrregularLineImpl(&m_doc);
}

Boundaries* FactoryImpl::createBoundaries()
{
    return new BoundariesImpl(&m_doc);
}

Metric* FactoryImpl::createMetric()
{
    return new MetricImpl(&m_doc);
}

TwoWayLeftTurnLane* FactoryImpl::createTwoWayLeftTurnLane()
{
    return new TwoWayLeftTurnLaneImpl(&m_doc);
}

RawObservation* FactoryImpl::createRawObservation()
{
    return new RawObservationImpl(&m_doc);
}

TargetSetup* FactoryImpl::createTargetSetup()
{
    return new TargetSetupImpl(&m_doc);
}

Channel* FactoryImpl::createChannel()
{
    return new ChannelImpl(&m_doc);
}

PipeFlow* FactoryImpl::createPipeFlow()
{
    return new PipeFlowImpl(&m_doc);
}

RetWallPnt* FactoryImpl::createRetWallPnt()
{
    return new RetWallPntImpl(&m_doc);
}

PointFile* FactoryImpl::createPointFile()
{
    return new PointFileImpl(&m_doc);
}

BacksightPoint* FactoryImpl::createBacksightPoint()
{
    return new BacksightPointImpl(&m_doc);
}

PostedSpeed* FactoryImpl::createPostedSpeed()
{
    return new PostedSpeedImpl(&m_doc);
}

Personnel* FactoryImpl::createPersonnel()
{
    return new PersonnelImpl(&m_doc);
}

Monument* FactoryImpl::createMonument()
{
    return new MonumentImpl(&m_doc);
}

PntList3D* FactoryImpl::createPntList3D()
{
    return new PntList3DImpl(&m_doc);
}

Amendment* FactoryImpl::createAmendment()
{
    return new AmendmentImpl(&m_doc);
}

InstrumentDetails* FactoryImpl::createInstrumentDetails()
{
    return new InstrumentDetailsImpl(&m_doc);
}

StructFlow* FactoryImpl::createStructFlow()
{
    return new StructFlowImpl(&m_doc);
}

LandXML* FactoryImpl::createLandXML()
{
    return new LandXMLImpl(&m_doc);
}

Faces* FactoryImpl::createFaces()
{
    return new FacesImpl(&m_doc);
}

DecisionSightDistance* FactoryImpl::createDecisionSightDistance()
{
    return new DecisionSightDistanceImpl(&m_doc);
}

CoordinateSystem* FactoryImpl::createCoordinateSystem()
{
    return new CoordinateSystemImpl(&m_doc);
}

FeatureDictionary* FactoryImpl::createFeatureDictionary()
{
    return new FeatureDictionaryImpl(&m_doc);
}

ZoneWidth* FactoryImpl::createZoneWidth()
{
    return new ZoneWidthImpl(&m_doc);
}

ParaCurve* FactoryImpl::createParaCurve()
{
    return new ParaCurveImpl(&m_doc);
}

}; // namespace : LX
