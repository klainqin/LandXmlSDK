#include "stdafx.h"
#include "LXTypes.h"
#include "DailyTrafficVolume.h"
#include "FeatureCollection.h"
#include "LXTypesTmpl.h"
#include "DailyTrafficVolumeImpl.h"
#include "FeatureCollectionImpl.h"
#include "LXTypesTmpl.inl"

namespace LX
{


template<class T>
DailyTrafficVolumeTmpl<T>::DailyTrafficVolumeTmpl (DocumentImpl* pDoc)
    : ObjectTmpl<T>(pDoc)
{
    m_Feature = createFeatureCollectionObject(pDoc);
    m_StaStart = 0.0;
    m_bStaStart_valueSet = false;
    m_StaEnd = 0.0;
    m_bStaEnd_valueSet = false;
    m_ADT = 0.0;
    m_bADT_valueSet = false;
    m_Year = L"";
    m_bYear_valueSet = false;
    m_EscFactor = 0.0;
    m_bEscFactor_valueSet = false;
}


template<class T>
DailyTrafficVolumeTmpl<T>::~DailyTrafficVolumeTmpl ()
{
    if (m_Feature != NULL)
    {
        m_Feature->release();
        m_Feature = NULL;
    }
}

template <class T>
FeatureCollection& DailyTrafficVolumeTmpl<T>::Feature()
{
    return *m_Feature;
}

template <class T>
const FeatureCollection& DailyTrafficVolumeTmpl<T>::Feature() const
{
    return *m_Feature;
}



template <class T>
double DailyTrafficVolumeTmpl<T>::getStaStart() const
{
    return m_StaStart;
}

template <class T>
void DailyTrafficVolumeTmpl<T>::setStaStart(double value)
{
    m_StaStart = value;
    m_bStaStart_valueSet = true;
}

template <class T>
bool DailyTrafficVolumeTmpl<T>::hasValue_StaStart() const
{
    return m_bStaStart_valueSet;
}

template <class T>
void DailyTrafficVolumeTmpl<T>::resetValue_StaStart()
{
    m_bStaStart_valueSet = false;
}


template <class T>
double DailyTrafficVolumeTmpl<T>::getStaEnd() const
{
    return m_StaEnd;
}

template <class T>
void DailyTrafficVolumeTmpl<T>::setStaEnd(double value)
{
    m_StaEnd = value;
    m_bStaEnd_valueSet = true;
}

template <class T>
bool DailyTrafficVolumeTmpl<T>::hasValue_StaEnd() const
{
    return m_bStaEnd_valueSet;
}

template <class T>
void DailyTrafficVolumeTmpl<T>::resetValue_StaEnd()
{
    m_bStaEnd_valueSet = false;
}


template <class T>
double DailyTrafficVolumeTmpl<T>::getADT() const
{
    return m_ADT;
}

template <class T>
void DailyTrafficVolumeTmpl<T>::setADT(double value)
{
    m_ADT = value;
    m_bADT_valueSet = true;
}

template <class T>
bool DailyTrafficVolumeTmpl<T>::hasValue_ADT() const
{
    return m_bADT_valueSet;
}

template <class T>
void DailyTrafficVolumeTmpl<T>::resetValue_ADT()
{
    m_bADT_valueSet = false;
}


template <class T>
String DailyTrafficVolumeTmpl<T>::getYear() const
{
    return m_Year;
}

template <class T>
void DailyTrafficVolumeTmpl<T>::setYear(String value)
{
    m_Year = value;
    m_bYear_valueSet = true;
}

template <class T>
bool DailyTrafficVolumeTmpl<T>::hasValue_Year() const
{
    return m_bYear_valueSet;
}

template <class T>
void DailyTrafficVolumeTmpl<T>::resetValue_Year()
{
    m_bYear_valueSet = false;
}


template <class T>
double DailyTrafficVolumeTmpl<T>::getEscFactor() const
{
    return m_EscFactor;
}

template <class T>
void DailyTrafficVolumeTmpl<T>::setEscFactor(double value)
{
    m_EscFactor = value;
    m_bEscFactor_valueSet = true;
}

template <class T>
bool DailyTrafficVolumeTmpl<T>::hasValue_EscFactor() const
{
    return m_bEscFactor_valueSet;
}

template <class T>
void DailyTrafficVolumeTmpl<T>::resetValue_EscFactor()
{
    m_bEscFactor_valueSet = false;
}



template <class T>
void DailyTrafficVolumeTmpl<T>::toXml (IStream& stream)
{
    static const wchar_t* kstrElementName = L"DailyTrafficVolume";
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
    if (m_bADT_valueSet)
    {
        stream.write(L" ADT=\"");
        DoubleObjectImpl::streamOut(m_ADT, stream);
        stream.write(L"\"");
    }
    if (m_bYear_valueSet)
    {
        stream.write(L" year=\"");
        StringObjectImpl::streamOut(m_Year, stream);
        stream.write(L"\"");
    }
    if (m_bEscFactor_valueSet)
    {
        stream.write(L" escFactor=\"");
        DoubleObjectImpl::streamOut(m_EscFactor, stream);
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
Object::ValidityEnum DailyTrafficVolumeTmpl<T>::validate (IValidationEventSink* pEventSink) const
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
