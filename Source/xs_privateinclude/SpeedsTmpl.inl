#include "stdafx.h"
#include "LXTypes.h"
#include "Speeds.h"
#include "DesignSpeedCollection.h"
#include "DesignSpeed85thCollection.h"
#include "PostedSpeedCollection.h"
#include "FeatureCollection.h"
#include "LXTypesTmpl.h"
#include "SpeedsImpl.h"
#include "DesignSpeedCollectionImpl.h"
#include "DesignSpeed85thCollectionImpl.h"
#include "PostedSpeedCollectionImpl.h"
#include "FeatureCollectionImpl.h"
#include "LXTypesTmpl.inl"

namespace LX
{


template<class T>
SpeedsTmpl<T>::SpeedsTmpl (DocumentImpl* pDoc)
    : ObjectTmpl<T>(pDoc)
{
    m_DesignSpeed = createDesignSpeedCollectionObject(pDoc);
    m_DesignSpeed85th = createDesignSpeed85thCollectionObject(pDoc);
    m_PostedSpeed = createPostedSpeedCollectionObject(pDoc);
    m_Feature = createFeatureCollectionObject(pDoc);
}


template<class T>
SpeedsTmpl<T>::~SpeedsTmpl ()
{
    if (m_DesignSpeed != NULL)
    {
        m_DesignSpeed->release();
        m_DesignSpeed = NULL;
    }
    if (m_DesignSpeed85th != NULL)
    {
        m_DesignSpeed85th->release();
        m_DesignSpeed85th = NULL;
    }
    if (m_PostedSpeed != NULL)
    {
        m_PostedSpeed->release();
        m_PostedSpeed = NULL;
    }
    if (m_Feature != NULL)
    {
        m_Feature->release();
        m_Feature = NULL;
    }
}

template <class T>
DesignSpeedCollection& SpeedsTmpl<T>::DesignSpeed()
{
    return *m_DesignSpeed;
}

template <class T>
const DesignSpeedCollection& SpeedsTmpl<T>::DesignSpeed() const
{
    return *m_DesignSpeed;
}

template <class T>
DesignSpeed85thCollection& SpeedsTmpl<T>::DesignSpeed85th()
{
    return *m_DesignSpeed85th;
}

template <class T>
const DesignSpeed85thCollection& SpeedsTmpl<T>::DesignSpeed85th() const
{
    return *m_DesignSpeed85th;
}

template <class T>
PostedSpeedCollection& SpeedsTmpl<T>::PostedSpeed()
{
    return *m_PostedSpeed;
}

template <class T>
const PostedSpeedCollection& SpeedsTmpl<T>::PostedSpeed() const
{
    return *m_PostedSpeed;
}

template <class T>
FeatureCollection& SpeedsTmpl<T>::Feature()
{
    return *m_Feature;
}

template <class T>
const FeatureCollection& SpeedsTmpl<T>::Feature() const
{
    return *m_Feature;
}




template <class T>
void SpeedsTmpl<T>::toXml (IStream& stream)
{
    static const wchar_t* kstrElementName = L"Speeds";
    stream.write(L"<");
    stream.write(kstrElementName);
    stream.write(L">");
    if (m_DesignSpeed)
    {
    	m_DesignSpeed->toXml(stream);
    }
    if (m_DesignSpeed85th)
    {
    	m_DesignSpeed85th->toXml(stream);
    }
    if (m_PostedSpeed)
    {
    	m_PostedSpeed->toXml(stream);
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
Object::ValidityEnum SpeedsTmpl<T>::validate (IValidationEventSink* pEventSink) const
{
    Object::ValidityEnum returnCode = Object::kValid;
    returnCode = this->ObjectTmpl<T>::validate(pEventSink);
    if (m_DesignSpeed)
    {
        if (m_DesignSpeed->validate(pEventSink) != Object::kValid)
            returnCode = Object::kValidWithInvalidChildren;
    }
    if (m_DesignSpeed85th)
    {
        if (m_DesignSpeed85th->validate(pEventSink) != Object::kValid)
            returnCode = Object::kValidWithInvalidChildren;
    }
    if (m_PostedSpeed)
    {
        if (m_PostedSpeed->validate(pEventSink) != Object::kValid)
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
