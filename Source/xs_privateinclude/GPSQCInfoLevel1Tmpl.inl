#include "stdafx.h"
#include "LXTypes.h"
#include "GPSQCInfoLevel1.h"
#include "LXTypesTmpl.h"
#include "GPSQCInfoLevel1Impl.h"
#include "LXTypesTmpl.inl"

namespace LX
{


template<class T>
GPSQCInfoLevel1Tmpl<T>::GPSQCInfoLevel1Tmpl (DocumentImpl* pDoc)
    : ObjectTmpl<T>(pDoc)
{
    m_GPSSolnType = EnumGPSSolutionTypeEnum::Values::k_null;
    m_bGPSSolnType_valueSet = false;
    m_GPSSolnFreq = EnumGPSSolutionFrequencyEnum::Values::k_null;
    m_bGPSSolnFreq_valueSet = false;
    m_NbrSatellites = 0;
    m_bNbrSatellites_valueSet = false;
    m_RDOP = 0.0;
    m_bRDOP_valueSet = false;
}


template<class T>
GPSQCInfoLevel1Tmpl<T>::~GPSQCInfoLevel1Tmpl ()
{
}



template <class T>
EnumGPSSolutionTypeEnum::Values GPSQCInfoLevel1Tmpl<T>::getGPSSolnType() const
{
    return m_GPSSolnType;
}

template <class T>
void GPSQCInfoLevel1Tmpl<T>::setGPSSolnType(EnumGPSSolutionTypeEnum::Values value)
{
    m_GPSSolnType = value;
    m_bGPSSolnType_valueSet = true;
}

template <class T>
bool GPSQCInfoLevel1Tmpl<T>::hasValue_GPSSolnType() const
{
    return m_bGPSSolnType_valueSet;
}

template <class T>
void GPSQCInfoLevel1Tmpl<T>::resetValue_GPSSolnType()
{
    m_bGPSSolnType_valueSet = false;
}


template <class T>
EnumGPSSolutionFrequencyEnum::Values GPSQCInfoLevel1Tmpl<T>::getGPSSolnFreq() const
{
    return m_GPSSolnFreq;
}

template <class T>
void GPSQCInfoLevel1Tmpl<T>::setGPSSolnFreq(EnumGPSSolutionFrequencyEnum::Values value)
{
    m_GPSSolnFreq = value;
    m_bGPSSolnFreq_valueSet = true;
}

template <class T>
bool GPSQCInfoLevel1Tmpl<T>::hasValue_GPSSolnFreq() const
{
    return m_bGPSSolnFreq_valueSet;
}

template <class T>
void GPSQCInfoLevel1Tmpl<T>::resetValue_GPSSolnFreq()
{
    m_bGPSSolnFreq_valueSet = false;
}


template <class T>
int GPSQCInfoLevel1Tmpl<T>::getNbrSatellites() const
{
    return m_NbrSatellites;
}

template <class T>
void GPSQCInfoLevel1Tmpl<T>::setNbrSatellites(int value)
{
    m_NbrSatellites = value;
    m_bNbrSatellites_valueSet = true;
}

template <class T>
bool GPSQCInfoLevel1Tmpl<T>::hasValue_NbrSatellites() const
{
    return m_bNbrSatellites_valueSet;
}

template <class T>
void GPSQCInfoLevel1Tmpl<T>::resetValue_NbrSatellites()
{
    m_bNbrSatellites_valueSet = false;
}


template <class T>
double GPSQCInfoLevel1Tmpl<T>::getRDOP() const
{
    return m_RDOP;
}

template <class T>
void GPSQCInfoLevel1Tmpl<T>::setRDOP(double value)
{
    m_RDOP = value;
    m_bRDOP_valueSet = true;
}

template <class T>
bool GPSQCInfoLevel1Tmpl<T>::hasValue_RDOP() const
{
    return m_bRDOP_valueSet;
}

template <class T>
void GPSQCInfoLevel1Tmpl<T>::resetValue_RDOP()
{
    m_bRDOP_valueSet = false;
}



template <class T>
void GPSQCInfoLevel1Tmpl<T>::toXml (IStream& stream)
{
    static const wchar_t* kstrElementName = L"GPSQCInfoLevel1";
    stream.write(L"<");
    stream.write(kstrElementName);
    if (m_bGPSSolnType_valueSet)
    {
        stream.write(L" GPSSolnType=\"");
        EnumGPSSolutionTypeEnumImpl::streamOut(m_GPSSolnType, stream);
        stream.write(L"\"");
    }
    if (m_bGPSSolnFreq_valueSet)
    {
        stream.write(L" GPSSolnFreq=\"");
        EnumGPSSolutionFrequencyEnumImpl::streamOut(m_GPSSolnFreq, stream);
        stream.write(L"\"");
    }
    if (m_bNbrSatellites_valueSet)
    {
        stream.write(L" nbrSatellites=\"");
        IntegerObjectImpl::streamOut(m_NbrSatellites, stream);
        stream.write(L"\"");
    }
    if (m_bRDOP_valueSet)
    {
        stream.write(L" RDOP=\"");
        DoubleObjectImpl::streamOut(m_RDOP, stream);
        stream.write(L"\"");
    }
    stream.write(L">");
    stream.write(L"</");
    stream.write(kstrElementName);
    stream.write(L">");
}

template <class T>
Object::ValidityEnum GPSQCInfoLevel1Tmpl<T>::validate (IValidationEventSink* pEventSink) const
{
    Object::ValidityEnum returnCode = Object::kValid;
    returnCode = this->ObjectTmpl<T>::validate(pEventSink);
    return returnCode;
}

}; // namespace : LX
