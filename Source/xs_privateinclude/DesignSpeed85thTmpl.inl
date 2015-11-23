#include "stdafx.h"
#include "LXTypes.h"
#include "DesignSpeed85th.h"
#include "FeatureCollection.h"
#include "LXTypesTmpl.h"
#include "DesignSpeed85thImpl.h"
#include "FeatureCollectionImpl.h"
#include "LXTypesTmpl.inl"

namespace LX
{


template<class T>
DesignSpeed85thTmpl<T>::DesignSpeed85thTmpl (DocumentImpl* pDoc)
    : ObjectTmpl<T>(pDoc)
{
    m_Feature = createFeatureCollectionObject(pDoc);
    m_StaStart = 0.0;
    m_bStaStart_valueSet = false;
    m_StaEnd = 0.0;
    m_bStaEnd_valueSet = false;
    m_SideofRoad = EnumSideofRoadType::Values::k_null;
    m_bSideofRoad_valueSet = false;
    m_Speed = 0.0;
    m_bSpeed_valueSet = false;
}


template<class T>
DesignSpeed85thTmpl<T>::~DesignSpeed85thTmpl ()
{
    if (m_Feature != NULL)
    {
        m_Feature->release();
        m_Feature = NULL;
    }
}

template <class T>
FeatureCollection& DesignSpeed85thTmpl<T>::Feature()
{
    return *m_Feature;
}

template <class T>
const FeatureCollection& DesignSpeed85thTmpl<T>::Feature() const
{
    return *m_Feature;
}



template <class T>
double DesignSpeed85thTmpl<T>::getStaStart() const
{
    return m_StaStart;
}

template <class T>
void DesignSpeed85thTmpl<T>::setStaStart(double value)
{
    m_StaStart = value;
    m_bStaStart_valueSet = true;
}

template <class T>
bool DesignSpeed85thTmpl<T>::hasValue_StaStart() const
{
    return m_bStaStart_valueSet;
}

template <class T>
void DesignSpeed85thTmpl<T>::resetValue_StaStart()
{
    m_bStaStart_valueSet = false;
}


template <class T>
double DesignSpeed85thTmpl<T>::getStaEnd() const
{
    return m_StaEnd;
}

template <class T>
void DesignSpeed85thTmpl<T>::setStaEnd(double value)
{
    m_StaEnd = value;
    m_bStaEnd_valueSet = true;
}

template <class T>
bool DesignSpeed85thTmpl<T>::hasValue_StaEnd() const
{
    return m_bStaEnd_valueSet;
}

template <class T>
void DesignSpeed85thTmpl<T>::resetValue_StaEnd()
{
    m_bStaEnd_valueSet = false;
}


template <class T>
EnumSideofRoadType::Values DesignSpeed85thTmpl<T>::getSideofRoad() const
{
    return m_SideofRoad;
}

template <class T>
void DesignSpeed85thTmpl<T>::setSideofRoad(EnumSideofRoadType::Values value)
{
    m_SideofRoad = value;
    m_bSideofRoad_valueSet = true;
}

template <class T>
bool DesignSpeed85thTmpl<T>::hasValue_SideofRoad() const
{
    return m_bSideofRoad_valueSet;
}

template <class T>
void DesignSpeed85thTmpl<T>::resetValue_SideofRoad()
{
    m_bSideofRoad_valueSet = false;
}


template <class T>
double DesignSpeed85thTmpl<T>::getSpeed() const
{
    return m_Speed;
}

template <class T>
void DesignSpeed85thTmpl<T>::setSpeed(double value)
{
    m_Speed = value;
    m_bSpeed_valueSet = true;
}

template <class T>
bool DesignSpeed85thTmpl<T>::hasValue_Speed() const
{
    return m_bSpeed_valueSet;
}

template <class T>
void DesignSpeed85thTmpl<T>::resetValue_Speed()
{
    m_bSpeed_valueSet = false;
}



template <class T>
void DesignSpeed85thTmpl<T>::toXml (IStream& stream)
{
    static const wchar_t* kstrElementName = L"DesignSpeed85th";
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
    if (m_bSideofRoad_valueSet)
    {
        stream.write(L" sideofRoad=\"");
        EnumSideofRoadTypeImpl::streamOut(m_SideofRoad, stream);
        stream.write(L"\"");
    }
    if (m_bSpeed_valueSet)
    {
        stream.write(L" speed=\"");
        DoubleObjectImpl::streamOut(m_Speed, stream);
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
Object::ValidityEnum DesignSpeed85thTmpl<T>::validate (IValidationEventSink* pEventSink) const
{
    Object::ValidityEnum returnCode = Object::kValid;
    returnCode = this->ObjectTmpl<T>::validate(pEventSink);
    if (m_Feature)
    {
        if (m_Feature->validate(pEventSink) != Object::kValid)
            returnCode = Object::kValidWithInvalidChildren;
    }
    return returnCode;
}

}; // namespace : LX
