#include "stdafx.h"
#include "LXTypes.h"
#include "TrafficVolume.h"
#include "DailyTrafficVolume.h"
#include "DesignHour.h"
#include "PeakHour.h"
#include "FeatureCollection.h"
#include "LXTypesTmpl.h"
#include "TrafficVolumeImpl.h"
#include "DailyTrafficVolumeImpl.h"
#include "DesignHourImpl.h"
#include "PeakHourImpl.h"
#include "FeatureCollectionImpl.h"
#include "LXTypesTmpl.inl"

namespace LX
{


template<class T>
TrafficVolumeTmpl<T>::TrafficVolumeTmpl (DocumentImpl* pDoc)
    : ObjectTmpl<T>(pDoc)
{
    m_DailyTrafficVolume = NULL;
    m_DesignHour = NULL;
    m_PeakHour = NULL;
    m_Feature = createFeatureCollectionObject(pDoc);
}


template<class T>
TrafficVolumeTmpl<T>::~TrafficVolumeTmpl ()
{
    if (m_DailyTrafficVolume != NULL)
    {
        m_DailyTrafficVolume->release();
        m_DailyTrafficVolume = NULL;
    }
    if (m_DesignHour != NULL)
    {
        m_DesignHour->release();
        m_DesignHour = NULL;
    }
    if (m_PeakHour != NULL)
    {
        m_PeakHour->release();
        m_PeakHour = NULL;
    }
    if (m_Feature != NULL)
    {
        m_Feature->release();
        m_Feature = NULL;
    }
}

template <class T>
FeatureCollection& TrafficVolumeTmpl<T>::Feature()
{
    return *m_Feature;
}

template <class T>
const FeatureCollection& TrafficVolumeTmpl<T>::Feature() const
{
    return *m_Feature;
}


template <class T>
DailyTrafficVolume* TrafficVolumeTmpl<T>::getDailyTrafficVolume() const
{
    return m_DailyTrafficVolume;
}

template <class T>
void TrafficVolumeTmpl<T>::setDailyTrafficVolume(DailyTrafficVolume* pValue)
{
    m_DailyTrafficVolume = pValue;
}

template <class T>
DesignHour* TrafficVolumeTmpl<T>::getDesignHour() const
{
    return m_DesignHour;
}

template <class T>
void TrafficVolumeTmpl<T>::setDesignHour(DesignHour* pValue)
{
    m_DesignHour = pValue;
}

template <class T>
PeakHour* TrafficVolumeTmpl<T>::getPeakHour() const
{
    return m_PeakHour;
}

template <class T>
void TrafficVolumeTmpl<T>::setPeakHour(PeakHour* pValue)
{
    m_PeakHour = pValue;
}



template <class T>
void TrafficVolumeTmpl<T>::toXml (IStream& stream)
{
    static const wchar_t* kstrElementName = L"TrafficVolume";
    stream.write(L"<");
    stream.write(kstrElementName);
    stream.write(L">");
    if (m_DailyTrafficVolume)
    {
    	m_DailyTrafficVolume->toXml(stream);
    }
    if (m_DesignHour)
    {
    	m_DesignHour->toXml(stream);
    }
    if (m_PeakHour)
    {
    	m_PeakHour->toXml(stream);
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
Object::ValidityEnum TrafficVolumeTmpl<T>::validate (IValidationEventSink* pEventSink) const
{
    Object::ValidityEnum returnCode = Object::kValid;
    returnCode = this->ObjectTmpl<T>::validate(pEventSink);
    if (m_DailyTrafficVolume)
    {
        if (m_DailyTrafficVolume->validate(pEventSink) != Object::kValid)
            returnCode = Object::kValidWithInvalidChildren;
    }
    if (m_DesignHour)
    {
        if (m_DesignHour->validate(pEventSink) != Object::kValid)
            returnCode = Object::kValidWithInvalidChildren;
    }
    if (m_PeakHour)
    {
        if (m_PeakHour->validate(pEventSink) != Object::kValid)
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
