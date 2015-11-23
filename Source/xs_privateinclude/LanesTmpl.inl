#include "stdafx.h"
#include "LXTypes.h"
#include "Lanes.h"
#include "ThruLaneCollection.h"
#include "PassingLaneCollection.h"
#include "TurnLaneCollection.h"
#include "TwoWayLeftTurnLaneCollection.h"
#include "ClimbLaneCollection.h"
#include "OffsetLaneCollection.h"
#include "WideningLaneCollection.h"
#include "FeatureCollection.h"
#include "LXTypesTmpl.h"
#include "LanesImpl.h"
#include "ThruLaneCollectionImpl.h"
#include "PassingLaneCollectionImpl.h"
#include "TurnLaneCollectionImpl.h"
#include "TwoWayLeftTurnLaneCollectionImpl.h"
#include "ClimbLaneCollectionImpl.h"
#include "OffsetLaneCollectionImpl.h"
#include "WideningLaneCollectionImpl.h"
#include "FeatureCollectionImpl.h"
#include "LXTypesTmpl.inl"

namespace LX
{


template<class T>
LanesTmpl<T>::LanesTmpl (DocumentImpl* pDoc)
    : ObjectTmpl<T>(pDoc)
{
    m_ThruLane = createThruLaneCollectionObject(pDoc);
    m_PassingLane = createPassingLaneCollectionObject(pDoc);
    m_TurnLane = createTurnLaneCollectionObject(pDoc);
    m_TwoWayLeftTurnLane = createTwoWayLeftTurnLaneCollectionObject(pDoc);
    m_ClimbLane = createClimbLaneCollectionObject(pDoc);
    m_OffsetLane = createOffsetLaneCollectionObject(pDoc);
    m_WideningLane = createWideningLaneCollectionObject(pDoc);
    m_Feature = createFeatureCollectionObject(pDoc);
}


template<class T>
LanesTmpl<T>::~LanesTmpl ()
{
    if (m_ThruLane != NULL)
    {
        m_ThruLane->release();
        m_ThruLane = NULL;
    }
    if (m_PassingLane != NULL)
    {
        m_PassingLane->release();
        m_PassingLane = NULL;
    }
    if (m_TurnLane != NULL)
    {
        m_TurnLane->release();
        m_TurnLane = NULL;
    }
    if (m_TwoWayLeftTurnLane != NULL)
    {
        m_TwoWayLeftTurnLane->release();
        m_TwoWayLeftTurnLane = NULL;
    }
    if (m_ClimbLane != NULL)
    {
        m_ClimbLane->release();
        m_ClimbLane = NULL;
    }
    if (m_OffsetLane != NULL)
    {
        m_OffsetLane->release();
        m_OffsetLane = NULL;
    }
    if (m_WideningLane != NULL)
    {
        m_WideningLane->release();
        m_WideningLane = NULL;
    }
    if (m_Feature != NULL)
    {
        m_Feature->release();
        m_Feature = NULL;
    }
}

template <class T>
ThruLaneCollection& LanesTmpl<T>::ThruLane()
{
    return *m_ThruLane;
}

template <class T>
const ThruLaneCollection& LanesTmpl<T>::ThruLane() const
{
    return *m_ThruLane;
}

template <class T>
PassingLaneCollection& LanesTmpl<T>::PassingLane()
{
    return *m_PassingLane;
}

template <class T>
const PassingLaneCollection& LanesTmpl<T>::PassingLane() const
{
    return *m_PassingLane;
}

template <class T>
TurnLaneCollection& LanesTmpl<T>::TurnLane()
{
    return *m_TurnLane;
}

template <class T>
const TurnLaneCollection& LanesTmpl<T>::TurnLane() const
{
    return *m_TurnLane;
}

template <class T>
TwoWayLeftTurnLaneCollection& LanesTmpl<T>::TwoWayLeftTurnLane()
{
    return *m_TwoWayLeftTurnLane;
}

template <class T>
const TwoWayLeftTurnLaneCollection& LanesTmpl<T>::TwoWayLeftTurnLane() const
{
    return *m_TwoWayLeftTurnLane;
}

template <class T>
ClimbLaneCollection& LanesTmpl<T>::ClimbLane()
{
    return *m_ClimbLane;
}

template <class T>
const ClimbLaneCollection& LanesTmpl<T>::ClimbLane() const
{
    return *m_ClimbLane;
}

template <class T>
OffsetLaneCollection& LanesTmpl<T>::OffsetLane()
{
    return *m_OffsetLane;
}

template <class T>
const OffsetLaneCollection& LanesTmpl<T>::OffsetLane() const
{
    return *m_OffsetLane;
}

template <class T>
WideningLaneCollection& LanesTmpl<T>::WideningLane()
{
    return *m_WideningLane;
}

template <class T>
const WideningLaneCollection& LanesTmpl<T>::WideningLane() const
{
    return *m_WideningLane;
}

template <class T>
FeatureCollection& LanesTmpl<T>::Feature()
{
    return *m_Feature;
}

template <class T>
const FeatureCollection& LanesTmpl<T>::Feature() const
{
    return *m_Feature;
}




template <class T>
void LanesTmpl<T>::toXml (IStream& stream)
{
    static const wchar_t* kstrElementName = L"Lanes";
    stream.write(L"<");
    stream.write(kstrElementName);
    stream.write(L">");
    if (m_ThruLane)
    {
    	m_ThruLane->toXml(stream);
    }
    if (m_PassingLane)
    {
    	m_PassingLane->toXml(stream);
    }
    if (m_TurnLane)
    {
    	m_TurnLane->toXml(stream);
    }
    if (m_TwoWayLeftTurnLane)
    {
    	m_TwoWayLeftTurnLane->toXml(stream);
    }
    if (m_ClimbLane)
    {
    	m_ClimbLane->toXml(stream);
    }
    if (m_OffsetLane)
    {
    	m_OffsetLane->toXml(stream);
    }
    if (m_WideningLane)
    {
    	m_WideningLane->toXml(stream);
    }
    if (m_Feature)
    {
    	m_Feature->toXml(stream);
    }
    stream.write(L"</");
    stream.write(kstrElementName);
    stream.write(L">");
}

template <class T>
Object::ValidityEnum LanesTmpl<T>::validate (IValidationEventSink* pEventSink) const
{
    Object::ValidityEnum returnCode = Object::kValid;
    returnCode = this->ObjectTmpl<T>::validate(pEventSink);
    if (m_ThruLane)
    {
        if (m_ThruLane->validate(pEventSink) != Object::kValid)
            returnCode = Object::kValidWithInvalidChildren;
    }
    if (m_PassingLane)
    {
        if (m_PassingLane->validate(pEventSink) != Object::kValid)
            returnCode = Object::kValidWithInvalidChildren;
    }
    if (m_TurnLane)
    {
        if (m_TurnLane->validate(pEventSink) != Object::kValid)
            returnCode = Object::kValidWithInvalidChildren;
    }
    if (m_TwoWayLeftTurnLane)
    {
        if (m_TwoWayLeftTurnLane->validate(pEventSink) != Object::kValid)
            returnCode = Object::kValidWithInvalidChildren;
    }
    if (m_ClimbLane)
    {
        if (m_ClimbLane->validate(pEventSink) != Object::kValid)
            returnCode = Object::kValidWithInvalidChildren;
    }
    if (m_OffsetLane)
    {
        if (m_OffsetLane->validate(pEventSink) != Object::kValid)
            returnCode = Object::kValidWithInvalidChildren;
    }
    if (m_WideningLane)
    {
        if (m_WideningLane->validate(pEventSink) != Object::kValid)
            returnCode = Object::kValidWithInvalidChildren;
    }
    if (m_Feature)
    {
        if (m_Feature->validate(pEventSink) != Object::kValid)
            returnCode = Object::kValidWithInvalidChildren;
    }
    return returnCode;
}

}; // namespace : LX
