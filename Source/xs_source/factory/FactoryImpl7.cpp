#include "stdafx.h"
#include "LXTypes.h"
#include "LXDefs.h"
#include "FactoryImpl.h"
#include "CgPointsImpl.h"
#include "PointFilesImpl.h"
#include "DesignHourImpl.h"
#include "ConnSpiralImpl.h"
#include "CornerImpl.h"
#include "AlignmentsImpl.h"
#include "PeakHourImpl.h"
#include "ChainImpl.h"
#include "ObservationGroupImpl.h"
#include "ComplexNameImpl.h"
#include "AddressPointImpl.h"
#include "AnnotationImpl.h"
#include "PointType3dReqImpl.h"
#include "PassingLaneImpl.h"
#include "ZoneMaterialImpl.h"
#include "RunoffStaImpl.h"
#include "EndofRunoutStaImpl.h"
#include "BeginRunoffStaImpl.h"
#include "PipeNetworkImpl.h"
#include "SpeedStationImpl.h"
#include "PointResultsImpl.h"
#include "TurnRestrictionImpl.h"
#include "OffsetLaneImpl.h"
#include "GPSReceiverDetailsImpl.h"
#include "PurposeOfSurveyImpl.h"
#include "RoadNameImpl.h"
#include "ZoneImpl.h"
#include "BacksightImpl.h"
#include "GradeSurfaceImpl.h"
#include "SurveyImpl.h"

namespace LX
{
CgPoints* FactoryImpl::createCgPoints()
{
    return new CgPointsImpl(&m_doc);
}

PointFiles* FactoryImpl::createPointFiles()
{
    return new PointFilesImpl(&m_doc);
}

DesignHour* FactoryImpl::createDesignHour()
{
    return new DesignHourImpl(&m_doc);
}

ConnSpiral* FactoryImpl::createConnSpiral()
{
    return new ConnSpiralImpl(&m_doc);
}

Corner* FactoryImpl::createCorner()
{
    return new CornerImpl(&m_doc);
}

Alignments* FactoryImpl::createAlignments()
{
    return new AlignmentsImpl(&m_doc);
}

PeakHour* FactoryImpl::createPeakHour()
{
    return new PeakHourImpl(&m_doc);
}

Chain* FactoryImpl::createChain()
{
    return new ChainImpl(&m_doc);
}

ObservationGroup* FactoryImpl::createObservationGroup()
{
    return new ObservationGroupImpl(&m_doc);
}

ComplexName* FactoryImpl::createComplexName()
{
    return new ComplexNameImpl(&m_doc);
}

AddressPoint* FactoryImpl::createAddressPoint()
{
    return new AddressPointImpl(&m_doc);
}

Annotation* FactoryImpl::createAnnotation()
{
    return new AnnotationImpl(&m_doc);
}

PointType3dReq* FactoryImpl::createPointType3dReq()
{
    return new PointType3dReqImpl(&m_doc);
}

PassingLane* FactoryImpl::createPassingLane()
{
    return new PassingLaneImpl(&m_doc);
}

ZoneMaterial* FactoryImpl::createZoneMaterial()
{
    return new ZoneMaterialImpl(&m_doc);
}

RunoffSta* FactoryImpl::createRunoffSta()
{
    return new RunoffStaImpl(&m_doc);
}

EndofRunoutSta* FactoryImpl::createEndofRunoutSta()
{
    return new EndofRunoutStaImpl(&m_doc);
}

BeginRunoffSta* FactoryImpl::createBeginRunoffSta()
{
    return new BeginRunoffStaImpl(&m_doc);
}

PipeNetwork* FactoryImpl::createPipeNetwork()
{
    return new PipeNetworkImpl(&m_doc);
}

SpeedStation* FactoryImpl::createSpeedStation()
{
    return new SpeedStationImpl(&m_doc);
}

PointResults* FactoryImpl::createPointResults()
{
    return new PointResultsImpl(&m_doc);
}

TurnRestriction* FactoryImpl::createTurnRestriction()
{
    return new TurnRestrictionImpl(&m_doc);
}

OffsetLane* FactoryImpl::createOffsetLane()
{
    return new OffsetLaneImpl(&m_doc);
}

GPSReceiverDetails* FactoryImpl::createGPSReceiverDetails()
{
    return new GPSReceiverDetailsImpl(&m_doc);
}

PurposeOfSurvey* FactoryImpl::createPurposeOfSurvey()
{
    return new PurposeOfSurveyImpl(&m_doc);
}

RoadName* FactoryImpl::createRoadName()
{
    return new RoadNameImpl(&m_doc);
}

Zone* FactoryImpl::createZone()
{
    return new ZoneImpl(&m_doc);
}

Backsight* FactoryImpl::createBacksight()
{
    return new BacksightImpl(&m_doc);
}

GradeSurface* FactoryImpl::createGradeSurface()
{
    return new GradeSurfaceImpl(&m_doc);
}

Survey* FactoryImpl::createSurvey()
{
    return new SurveyImpl(&m_doc);
}

}; // namespace : LX
