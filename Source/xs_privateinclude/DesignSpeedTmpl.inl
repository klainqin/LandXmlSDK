#include "stdafx.h"
#include "LXTypes.h"
#include "DesignSpeed.h"
#include "FeatureCollection.h"
#include "LXTypesTmpl.h"
#include "DesignSpeedImpl.h"
#include "FeatureCollectionImpl.h"
#include "LXTypesTmpl.inl"

namespace LX
{


template<class T>
DesignSpeedTmpl<T>::DesignSpeedTmpl (DocumentImpl* pDoc)
    : ObjectTmpl<T>(pDoc)
{
    m_Feature = createFeatureCollectionObject(pDoc);
    m_StaStart = 0.0;
    m_bStaStart_valueSet = false;
    m_StaEnd = 0.0;
    m_bStaEnd_valueSet = false;
    m_Speed = 0.0;
    m_bSpeed_valueSet = false;
}


template<class T>
DesignSpeedTmpl<T>::~DesignSpeedTmpl ()
{
    if (m_Feature != NULL)
    {
        m_Feature->release();
        m_Feature = NULL;
    }
}

template <class T>
FeatureCollection& DesignSpeedTmpl<T>::Feature()
{
    return *m_Feature;
}

template <class T>
const FeatureCollection& DesignSpeedTmpl<T>::Feature() const
{
    return *m_Feature;
}



template <class T>
double DesignSpeedTmpl<T>::getStaStart() const
{
    return m_StaStart;
}

template <class T>
void DesignSpeedTmpl<T>::setStaStart(double value)
{
    m_StaStart = value;
    m_bStaStart_valueSet = true;
}

template <class T>
bool DesignSpeedTmpl<T>::hasValue_StaStart() const
{
    return m_bStaStart_valueSet;
}

template <class T>
void DesignSpeedTmpl<T>::resetValue_StaStart()
{
    m_bStaStart_valueSet = false;
}


template <class T>
double DesignSpeedTmpl<T>::getStaEnd() const
{
    return m_StaEnd;
}

template <class T>
void DesignSpeedTmpl<T>::setStaEnd(double value)
{
    m_StaEnd = value;
    m_bStaEnd_valueSet = true;
}

template <class T>
bool DesignSpeedTmpl<T>::hasValue_StaEnd() const
{
    return m_bStaEnd_valueSet;
}

template <class T>
void DesignSpeedTmpl<T>::resetValue_StaEnd()
{
    m_bStaEnd_valueSet = false;
}


template <class T>
double DesignSpeedTmpl<T>::getSpeed() const
{
    return m_Speed;
}

template <class T>
void DesignSpeedTmpl<T>::setSpeed(double value)
{
    m_Speed = value;
    m_bSpeed_valueSet = true;
}

template <class T>
bool DesignSpeedTmpl<T>::hasValue_Speed() const
{
    return m_bSpeed_valueSet;
}

template <class T>
void DesignSpeedTmpl<T>::resetValue_Speed()
{
    m_bSpeed_valueSet = false;
}



template <class T>
void DesignSpeedTmpl<T>::toXml (IStream& stream)
{
    static const wchar_t* kstrElementName = L"DesignSpeed";
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
Object::ValidityEnum DesignSpeedTmpl<T>::validate (IValidationEventSink* pEventSink) const
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
