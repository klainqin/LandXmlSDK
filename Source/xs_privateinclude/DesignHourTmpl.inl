#include "stdafx.h"
#include "LXTypes.h"
#include "DesignHour.h"
#include "FeatureCollection.h"
#include "LXTypesTmpl.h"
#include "DesignHourImpl.h"
#include "FeatureCollectionImpl.h"
#include "LXTypesTmpl.inl"

namespace LX
{


template<class T>
DesignHourTmpl<T>::DesignHourTmpl (DocumentImpl* pDoc)
    : ObjectTmpl<T>(pDoc)
{
    m_Feature = createFeatureCollectionObject(pDoc);
    m_StaStart = 0.0;
    m_bStaStart_valueSet = false;
    m_StaEnd = 0.0;
    m_bStaEnd_valueSet = false;
    m_Volume = 0.0;
    m_bVolume_valueSet = false;
}


template<class T>
DesignHourTmpl<T>::~DesignHourTmpl ()
{
    if (m_Feature != NULL)
    {
        m_Feature->release();
        m_Feature = NULL;
    }
}

template <class T>
FeatureCollection& DesignHourTmpl<T>::Feature()
{
    return *m_Feature;
}

template <class T>
const FeatureCollection& DesignHourTmpl<T>::Feature() const
{
    return *m_Feature;
}



template <class T>
double DesignHourTmpl<T>::getStaStart() const
{
    return m_StaStart;
}

template <class T>
void DesignHourTmpl<T>::setStaStart(double value)
{
    m_StaStart = value;
    m_bStaStart_valueSet = true;
}

template <class T>
bool DesignHourTmpl<T>::hasValue_StaStart() const
{
    return m_bStaStart_valueSet;
}

template <class T>
void DesignHourTmpl<T>::resetValue_StaStart()
{
    m_bStaStart_valueSet = false;
}


template <class T>
double DesignHourTmpl<T>::getStaEnd() const
{
    return m_StaEnd;
}

template <class T>
void DesignHourTmpl<T>::setStaEnd(double value)
{
    m_StaEnd = value;
    m_bStaEnd_valueSet = true;
}

template <class T>
bool DesignHourTmpl<T>::hasValue_StaEnd() const
{
    return m_bStaEnd_valueSet;
}

template <class T>
void DesignHourTmpl<T>::resetValue_StaEnd()
{
    m_bStaEnd_valueSet = false;
}


template <class T>
double DesignHourTmpl<T>::getVolume() const
{
    return m_Volume;
}

template <class T>
void DesignHourTmpl<T>::setVolume(double value)
{
    m_Volume = value;
    m_bVolume_valueSet = true;
}

template <class T>
bool DesignHourTmpl<T>::hasValue_Volume() const
{
    return m_bVolume_valueSet;
}

template <class T>
void DesignHourTmpl<T>::resetValue_Volume()
{
    m_bVolume_valueSet = false;
}



template <class T>
void DesignHourTmpl<T>::toXml (IStream& stream)
{
    static const wchar_t* kstrElementName = L"DesignHour";
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
    if (m_bVolume_valueSet)
    {
        stream.write(L" volume=\"");
        DoubleObjectImpl::streamOut(m_Volume, stream);
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
Object::ValidityEnum DesignHourTmpl<T>::validate (IValidationEventSink* pEventSink) const
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
