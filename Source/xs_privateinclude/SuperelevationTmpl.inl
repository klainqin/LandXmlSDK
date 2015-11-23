#include "stdafx.h"
#include "LXTypes.h"
#include "Superelevation.h"
#include "BeginRunoutStaCollection.h"
#include "BeginRunoffStaCollection.h"
#include "FullSuperStaCollection.h"
#include "FullSuperelevCollection.h"
#include "RunoffStaCollection.h"
#include "StartofRunoutStaCollection.h"
#include "EndofRunoutStaCollection.h"
#include "AdverseSECollection.h"
#include "FeatureCollection.h"
#include "LXTypesTmpl.h"
#include "SuperelevationImpl.h"
#include "BeginRunoutStaCollectionImpl.h"
#include "BeginRunoffStaCollectionImpl.h"
#include "FullSuperStaCollectionImpl.h"
#include "FullSuperelevCollectionImpl.h"
#include "RunoffStaCollectionImpl.h"
#include "StartofRunoutStaCollectionImpl.h"
#include "EndofRunoutStaCollectionImpl.h"
#include "AdverseSECollectionImpl.h"
#include "FeatureCollectionImpl.h"
#include "LXTypesTmpl.inl"

namespace LX
{


template<class T>
SuperelevationTmpl<T>::SuperelevationTmpl (DocumentImpl* pDoc)
    : ObjectTmpl<T>(pDoc)
{
    m_BeginRunoutSta = createBeginRunoutStaCollectionObject(pDoc);
    m_BeginRunoffSta = createBeginRunoffStaCollectionObject(pDoc);
    m_FullSuperSta = createFullSuperStaCollectionObject(pDoc);
    m_FullSuperelev = createFullSuperelevCollectionObject(pDoc);
    m_RunoffSta = createRunoffStaCollectionObject(pDoc);
    m_StartofRunoutSta = createStartofRunoutStaCollectionObject(pDoc);
    m_EndofRunoutSta = createEndofRunoutStaCollectionObject(pDoc);
    m_AdverseSE = createAdverseSECollectionObject(pDoc);
    m_Feature = createFeatureCollectionObject(pDoc);
    m_StaStart = 0.0;
    m_bStaStart_valueSet = false;
    m_StaEnd = 0.0;
    m_bStaEnd_valueSet = false;
}


template<class T>
SuperelevationTmpl<T>::~SuperelevationTmpl ()
{
    if (m_BeginRunoutSta != NULL)
    {
        m_BeginRunoutSta->release();
        m_BeginRunoutSta = NULL;
    }
    if (m_BeginRunoffSta != NULL)
    {
        m_BeginRunoffSta->release();
        m_BeginRunoffSta = NULL;
    }
    if (m_FullSuperSta != NULL)
    {
        m_FullSuperSta->release();
        m_FullSuperSta = NULL;
    }
    if (m_FullSuperelev != NULL)
    {
        m_FullSuperelev->release();
        m_FullSuperelev = NULL;
    }
    if (m_RunoffSta != NULL)
    {
        m_RunoffSta->release();
        m_RunoffSta = NULL;
    }
    if (m_StartofRunoutSta != NULL)
    {
        m_StartofRunoutSta->release();
        m_StartofRunoutSta = NULL;
    }
    if (m_EndofRunoutSta != NULL)
    {
        m_EndofRunoutSta->release();
        m_EndofRunoutSta = NULL;
    }
    if (m_AdverseSE != NULL)
    {
        m_AdverseSE->release();
        m_AdverseSE = NULL;
    }
    if (m_Feature != NULL)
    {
        m_Feature->release();
        m_Feature = NULL;
    }
}

template <class T>
BeginRunoutStaCollection& SuperelevationTmpl<T>::BeginRunoutSta()
{
    return *m_BeginRunoutSta;
}

template <class T>
const BeginRunoutStaCollection& SuperelevationTmpl<T>::BeginRunoutSta() const
{
    return *m_BeginRunoutSta;
}

template <class T>
BeginRunoffStaCollection& SuperelevationTmpl<T>::BeginRunoffSta()
{
    return *m_BeginRunoffSta;
}

template <class T>
const BeginRunoffStaCollection& SuperelevationTmpl<T>::BeginRunoffSta() const
{
    return *m_BeginRunoffSta;
}

template <class T>
FullSuperStaCollection& SuperelevationTmpl<T>::FullSuperSta()
{
    return *m_FullSuperSta;
}

template <class T>
const FullSuperStaCollection& SuperelevationTmpl<T>::FullSuperSta() const
{
    return *m_FullSuperSta;
}

template <class T>
FullSuperelevCollection& SuperelevationTmpl<T>::FullSuperelev()
{
    return *m_FullSuperelev;
}

template <class T>
const FullSuperelevCollection& SuperelevationTmpl<T>::FullSuperelev() const
{
    return *m_FullSuperelev;
}

template <class T>
RunoffStaCollection& SuperelevationTmpl<T>::RunoffSta()
{
    return *m_RunoffSta;
}

template <class T>
const RunoffStaCollection& SuperelevationTmpl<T>::RunoffSta() const
{
    return *m_RunoffSta;
}

template <class T>
StartofRunoutStaCollection& SuperelevationTmpl<T>::StartofRunoutSta()
{
    return *m_StartofRunoutSta;
}

template <class T>
const StartofRunoutStaCollection& SuperelevationTmpl<T>::StartofRunoutSta() const
{
    return *m_StartofRunoutSta;
}

template <class T>
EndofRunoutStaCollection& SuperelevationTmpl<T>::EndofRunoutSta()
{
    return *m_EndofRunoutSta;
}

template <class T>
const EndofRunoutStaCollection& SuperelevationTmpl<T>::EndofRunoutSta() const
{
    return *m_EndofRunoutSta;
}

template <class T>
AdverseSECollection& SuperelevationTmpl<T>::AdverseSE()
{
    return *m_AdverseSE;
}

template <class T>
const AdverseSECollection& SuperelevationTmpl<T>::AdverseSE() const
{
    return *m_AdverseSE;
}

template <class T>
FeatureCollection& SuperelevationTmpl<T>::Feature()
{
    return *m_Feature;
}

template <class T>
const FeatureCollection& SuperelevationTmpl<T>::Feature() const
{
    return *m_Feature;
}



template <class T>
double SuperelevationTmpl<T>::getStaStart() const
{
    return m_StaStart;
}

template <class T>
void SuperelevationTmpl<T>::setStaStart(double value)
{
    m_StaStart = value;
    m_bStaStart_valueSet = true;
}

template <class T>
bool SuperelevationTmpl<T>::hasValue_StaStart() const
{
    return m_bStaStart_valueSet;
}

template <class T>
void SuperelevationTmpl<T>::resetValue_StaStart()
{
    m_bStaStart_valueSet = false;
}


template <class T>
double SuperelevationTmpl<T>::getStaEnd() const
{
    return m_StaEnd;
}

template <class T>
void SuperelevationTmpl<T>::setStaEnd(double value)
{
    m_StaEnd = value;
    m_bStaEnd_valueSet = true;
}

template <class T>
bool SuperelevationTmpl<T>::hasValue_StaEnd() const
{
    return m_bStaEnd_valueSet;
}

template <class T>
void SuperelevationTmpl<T>::resetValue_StaEnd()
{
    m_bStaEnd_valueSet = false;
}



template <class T>
void SuperelevationTmpl<T>::toXml (IStream& stream)
{
    static const wchar_t* kstrElementName = L"Superelevation";
    stream.write(L"<");
    stream.write(kstrElementName);
    if (m_bStaStart_valueSet)
    {
        stream.write(L" staStart=\"");
        DoubleObjectImpl::streamOut(m_StaStart, stream);
        stream.write(L"\"");
    }
    if (m_bStaEnd_valueSet)
    {
        stream.write(L" staEnd=\"");
        DoubleObjectImpl::streamOut(m_StaEnd, stream);
        stream.write(L"\"");
    }
    stream.write(L">");
    if (m_BeginRunoutSta)
    {
    	m_BeginRunoutSta->toXml(stream);
    }
    if (m_BeginRunoffSta)
    {
    	m_BeginRunoffSta->toXml(stream);
    }
    if (m_FullSuperSta)
    {
    	m_FullSuperSta->toXml(stream);
    }
    if (m_FullSuperelev)
    {
    	m_FullSuperelev->toXml(stream);
    }
    if (m_RunoffSta)
    {
    	m_RunoffSta->toXml(stream);
    }
    if (m_StartofRunoutSta)
    {
    	m_StartofRunoutSta->toXml(stream);
    }
    if (m_EndofRunoutSta)
    {
    	m_EndofRunoutSta->toXml(stream);
    }
    if (m_AdverseSE)
    {
    	m_AdverseSE->toXml(stream);
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
Object::ValidityEnum SuperelevationTmpl<T>::validate (IValidationEventSink* pEventSink) const
{
    Object::ValidityEnum returnCode = Object::kValid;
    returnCode = this->ObjectTmpl<T>::validate(pEventSink);
    if (m_BeginRunoutSta)
    {
        if (m_BeginRunoutSta->validate(pEventSink) != Object::kValid)
            returnCode = Object::kValidWithInvalidChildren;
    }
    if (m_BeginRunoffSta)
    {
        if (m_BeginRunoffSta->validate(pEventSink) != Object::kValid)
            returnCode = Object::kValidWithInvalidChildren;
    }
    if (m_FullSuperSta)
    {
        if (m_FullSuperSta->validate(pEventSink) != Object::kValid)
            returnCode = Object::kValidWithInvalidChildren;
    }
    if (m_FullSuperelev)
    {
        if (m_FullSuperelev->validate(pEventSink) != Object::kValid)
            returnCode = Object::kValidWithInvalidChildren;
    }
    if (m_RunoffSta)
    {
        if (m_RunoffSta->validate(pEventSink) != Object::kValid)
            returnCode = Object::kValidWithInvalidChildren;
    }
    if (m_StartofRunoutSta)
    {
        if (m_StartofRunoutSta->validate(pEventSink) != Object::kValid)
            returnCode = Object::kValidWithInvalidChildren;
    }
    if (m_EndofRunoutSta)
    {
        if (m_EndofRunoutSta->validate(pEventSink) != Object::kValid)
            returnCode = Object::kValidWithInvalidChildren;
    }
    if (m_AdverseSE)
    {
        if (m_AdverseSE->validate(pEventSink) != Object::kValid)
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
