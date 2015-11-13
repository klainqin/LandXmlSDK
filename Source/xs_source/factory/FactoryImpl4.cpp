#include "stdafx.h"
#include "LXTypes.h"
#include "LXDefs.h"
#include "FactoryImpl.h"
#include "GPSAntennaDetailsImpl.h"
#include "TurnSpeedImpl.h"
#include "TurnLaneImpl.h"
#include "RawObservationTypeImpl.h"
#include "Curve1Impl.h"
#include "ParcelImpl.h"
#include "LineImpl.h"
#include "AlignmentImpl.h"
#include "FeatureImpl.h"
#include "OutSpiralImpl.h"
#include "DefinitionImpl.h"
#include "ProfileImpl.h"
#include "FImpl.h"
#include "BridgeElementImpl.h"
#include "SpeedsImpl.h"
#include "OutletStructImpl.h"
#include "BreaklineImpl.h"
#include "ExclusionsImpl.h"
#include "PVIImpl.h"
#include "TrafficControlImpl.h"
#include "CorrectionsImpl.h"
#include "RedHorizontalPositionImpl.h"
#include "WatershedsImpl.h"
#include "PImpl.h"
#include "CircStructImpl.h"
#include "CrossSectImpl.h"
#include "StartofRunoutStaImpl.h"
#include "OutletImpl.h"
#include "ReducedArcObservationImpl.h"
#include "GradeModelImpl.h"

namespace LX
{
GPSAntennaDetails* FactoryImpl::createGPSAntennaDetails()
{
    return new GPSAntennaDetailsImpl(&m_doc);
}

TurnSpeed* FactoryImpl::createTurnSpeed()
{
    return new TurnSpeedImpl(&m_doc);
}

TurnLane* FactoryImpl::createTurnLane()
{
    return new TurnLaneImpl(&m_doc);
}

RawObservationType* FactoryImpl::createRawObservationType()
{
    return new RawObservationTypeImpl(&m_doc);
}

Curve1* FactoryImpl::createCurve1()
{
    return new Curve1Impl(&m_doc);
}

Parcel* FactoryImpl::createParcel()
{
    return new ParcelImpl(&m_doc);
}

Line* FactoryImpl::createLine()
{
    return new LineImpl(&m_doc);
}

Alignment* FactoryImpl::createAlignment()
{
    return new AlignmentImpl(&m_doc);
}

Feature* FactoryImpl::createFeature()
{
    return new FeatureImpl(&m_doc);
}

OutSpiral* FactoryImpl::createOutSpiral()
{
    return new OutSpiralImpl(&m_doc);
}

Definition* FactoryImpl::createDefinition()
{
    return new DefinitionImpl(&m_doc);
}

Profile* FactoryImpl::createProfile()
{
    return new ProfileImpl(&m_doc);
}

F* FactoryImpl::createF()
{
    return new FImpl(&m_doc);
}

BridgeElement* FactoryImpl::createBridgeElement()
{
    return new BridgeElementImpl(&m_doc);
}

Speeds* FactoryImpl::createSpeeds()
{
    return new SpeedsImpl(&m_doc);
}

OutletStruct* FactoryImpl::createOutletStruct()
{
    return new OutletStructImpl(&m_doc);
}

Breakline* FactoryImpl::createBreakline()
{
    return new BreaklineImpl(&m_doc);
}

Exclusions* FactoryImpl::createExclusions()
{
    return new ExclusionsImpl(&m_doc);
}

PVI* FactoryImpl::createPVI()
{
    return new PVIImpl(&m_doc);
}

TrafficControl* FactoryImpl::createTrafficControl()
{
    return new TrafficControlImpl(&m_doc);
}

Corrections* FactoryImpl::createCorrections()
{
    return new CorrectionsImpl(&m_doc);
}

RedHorizontalPosition* FactoryImpl::createRedHorizontalPosition()
{
    return new RedHorizontalPositionImpl(&m_doc);
}

Watersheds* FactoryImpl::createWatersheds()
{
    return new WatershedsImpl(&m_doc);
}

P* FactoryImpl::createP()
{
    return new PImpl(&m_doc);
}

CircStruct* FactoryImpl::createCircStruct()
{
    return new CircStructImpl(&m_doc);
}

CrossSect* FactoryImpl::createCrossSect()
{
    return new CrossSectImpl(&m_doc);
}

StartofRunoutSta* FactoryImpl::createStartofRunoutSta()
{
    return new StartofRunoutStaImpl(&m_doc);
}

Outlet* FactoryImpl::createOutlet()
{
    return new OutletImpl(&m_doc);
}

ReducedArcObservation* FactoryImpl::createReducedArcObservation()
{
    return new ReducedArcObservationImpl(&m_doc);
}

GradeModel* FactoryImpl::createGradeModel()
{
    return new GradeModelImpl(&m_doc);
}

}; // namespace : LX
