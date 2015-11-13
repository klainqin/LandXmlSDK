#include "stdafx.h"
#include "LXTypes.h"
#include "ZoneHinge.h"
#include "FeatureCollection.h"
#include "LXTypesTmpl.h"
#include "ZoneHingeImpl.h"
#include "FeatureCollectionImpl.h"
#include "LXTypesTmpl.inl"

namespace LX
{


template<class T>
ZoneHingeTmpl<T>::ZoneHingeTmpl<T> (DocumentImpl* pDoc)
    : ObjectTmpl<T>(pDoc)
{
    m_Feature = createFeatureCollectionObject(pDoc);
    m_StaStart = 0.0;
    m_bStaStart_valueSet = false;
    m_StaEnd = 0.0;
    m_bStaEnd_valueSet = false;
    m_HingeType = EnumZoneHingeType::Values::k_null;
    m_bHingeType_valueSet = false;
    m_ZonePriorityRef = 0;
    m_bZonePriorityRef_valueSet = false;
}


template<class T>
ZoneHingeTmpl<T>::~ZoneHingeTmpl<T> ()
{
    if (m_Feature != NULL)
    {
        m_Feature->release();
        m_Feature = NULL;
    }
}

template <class T>
FeatureCollection& ZoneHingeTmpl<T>::Feature()
{
    return *m_Feature;
}

template <class T>
const FeatureCollection& ZoneHingeTmpl<T>::Feature() const
{
    return *m_Feature;
}



template <class T>
double ZoneHingeTmpl<T>::getStaStart() const
{
    return m_StaStart;
}

template <class T>
void ZoneHingeTmpl<T>::setStaStart(double value)
{
    m_StaStart = value;
    m_bStaStart_valueSet = true;
}

template <class T>
bool ZoneHingeTmpl<T>::hasValue_StaStart() const
{
    return m_bStaStart_valueSet;
}

template <class T>
void ZoneHingeTmpl<T>::resetValue_StaStart()
{
    m_bStaStart_valueSet = false;
}


template <class T>
double ZoneHingeTmpl<T>::getStaEnd() const
{
    return m_StaEnd;
}

template <class T>
void ZoneHingeTmpl<T>::setStaEnd(double value)
{
    m_StaEnd = value;
    m_bStaEnd_valueSet = true;
}

template <class T>
bool ZoneHingeTmpl<T>::hasValue_StaEnd() const
{
    return m_bStaEnd_valueSet;
}

template <class T>
void ZoneHingeTmpl<T>::resetValue_StaEnd()
{
    m_bStaEnd_valueSet = false;
}


template <class T>
EnumZoneHingeType::Values ZoneHingeTmpl<T>::getHingeType() const
{
    return m_HingeType;
}

template <class T>
void ZoneHingeTmpl<T>::setHingeType(EnumZoneHingeType::Values value)
{
    m_HingeType = value;
    m_bHingeType_valueSet = true;
}

template <class T>
bool ZoneHingeTmpl<T>::hasValue_HingeType() const
{
    return m_bHingeType_valueSet;
}

template <class T>
void ZoneHingeTmpl<T>::resetValue_HingeType()
{
    m_bHingeType_valueSet = false;
}


template <class T>
int ZoneHingeTmpl<T>::getZonePriorityRef() const
{
    return m_ZonePriorityRef;
}

template <class T>
void ZoneHingeTmpl<T>::setZonePriorityRef(int value)
{
    m_ZonePriorityRef = value;
    m_bZonePriorityRef_valueSet = true;
}

template <class T>
bool ZoneHingeTmpl<T>::hasValue_ZonePriorityRef() const
{
    return m_bZonePriorityRef_valueSet;
}

template <class T>
void ZoneHingeTmpl<T>::resetValue_ZonePriorityRef()
{
    m_bZonePriorityRef_valueSet = false;
}



template <class T>
void ZoneHingeTmpl<T>::toXml (IStream& stream)
{
    static const wchar_t* kstrElementName = L"ZoneHinge";
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
    if (m_bHingeType_valueSet)
    {
        stream.write(L" hingeType=\"");
        EnumZoneHingeTypeImpl::streamOut(m_HingeType, stream);
        stream.write(L"\"");
    }
    if (m_bZonePriorityRef_valueSet)
    {
        stream.write(L" zonePriorityRef=\"");
        IntegerObjectImpl::streamOut(m_ZonePriorityRef, stream);
        stream.write(L"\"");
    }
    stream.write(L">");
    if (m_Feature)
    {
    	m_Feature->toXml(stream);
    }
    stream.write(L"</");
    stream.write(kstrElementName);
    stream.write(L">");
}

template <class T>
Object::ValidityEnum ZoneHingeTmpl<T>::validate (IValidationEventSink* pEventSink) const
{
    Object::ValidityEnum returnCode = Object::kValid;
    returnCode = this->ObjectTmpl<T>::validate(pEventSink);
    if (m_Feature)
    {
        if (m_Feature->validate(pEventSink) != Object::kValid)
            returnCode = Object::kValidWithInvalidChildren;
    }
    if (!m_bStaStart_valueSet)
    {
        pEventSink->onEvent(IValidationEventSink::EventCode::kRequiredValueNotSet, this, L"StaStart", L"Required value not set");
        returnCode = Object::kInvalid;
    }
    if (!m_bStaEnd_valueSet)
    {
        pEventSink->onEvent(IValidationEventSink::EventCode::kRequiredValueNotSet, this, L"StaEnd", L"Required value not set");
        returnCode = Object::kInvalid;
    }
    if (!m_bHingeType_valueSet)
    {
        pEventSink->onEvent(IValidationEventSink::EventCode::kRequiredValueNotSet, this, L"HingeType", L"Required value not set");
        returnCode = Object::kInvalid;
    }
    if (!m_bZonePriorityRef_valueSet)
    {
        pEventSink->onEvent(IValidationEventSink::EventCode::kRequiredValueNotSet, this, L"ZonePriorityRef", L"Required value not set");
        returnCode = Object::kInvalid;
    }
    return returnCode;
}

}; // namespace : LX
