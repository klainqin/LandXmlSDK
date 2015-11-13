#include "stdafx.h"
#include "LXTypes.h"
#include "GPSQCInfoLevel2.h"
#include "LXTypesTmpl.h"
#include "GPSQCInfoLevel2Impl.h"
#include "LXTypesTmpl.inl"

namespace LX
{


template<class T>
GPSQCInfoLevel2Tmpl<T>::GPSQCInfoLevel2Tmpl<T> (DocumentImpl* pDoc)
    : ObjectTmpl<T>(pDoc)
{
    m_CovarianceXX = 0.0;
    m_bCovarianceXX_valueSet = false;
    m_CovarianceXY = 0.0;
    m_bCovarianceXY_valueSet = false;
    m_CovarianceXZ = 0.0;
    m_bCovarianceXZ_valueSet = false;
    m_CovarianceYY = 0.0;
    m_bCovarianceYY_valueSet = false;
    m_CovarianceYZ = 0.0;
    m_bCovarianceYZ_valueSet = false;
    m_CovarianceZZ = 0.0;
    m_bCovarianceZZ_valueSet = false;
    m_GPSSolnType = EnumGPSSolutionTypeEnum::Values::k_null;
    m_bGPSSolnType_valueSet = false;
    m_GPSSolnFreq = EnumGPSSolutionFrequencyEnum::Values::k_null;
    m_bGPSSolnFreq_valueSet = false;
    m_RMS = 0.0;
    m_bRMS_valueSet = false;
    m_Ratio = 0.0;
    m_bRatio_valueSet = false;
    m_ReferenceVariance = 0.0;
    m_bReferenceVariance_valueSet = false;
    m_NbrSatellites = 0;
    m_bNbrSatellites_valueSet = false;
    m_StartTime = 0.0;
    m_bStartTime_valueSet = false;
    m_StopTime = 0.0;
    m_bStopTime_valueSet = false;
}


template<class T>
GPSQCInfoLevel2Tmpl<T>::~GPSQCInfoLevel2Tmpl<T> ()
{
}



template <class T>
double GPSQCInfoLevel2Tmpl<T>::getCovarianceXX() const
{
    return m_CovarianceXX;
}

template <class T>
void GPSQCInfoLevel2Tmpl<T>::setCovarianceXX(double value)
{
    m_CovarianceXX = value;
    m_bCovarianceXX_valueSet = true;
}

template <class T>
bool GPSQCInfoLevel2Tmpl<T>::hasValue_CovarianceXX() const
{
    return m_bCovarianceXX_valueSet;
}

template <class T>
void GPSQCInfoLevel2Tmpl<T>::resetValue_CovarianceXX()
{
    m_bCovarianceXX_valueSet = false;
}


template <class T>
double GPSQCInfoLevel2Tmpl<T>::getCovarianceXY() const
{
    return m_CovarianceXY;
}

template <class T>
void GPSQCInfoLevel2Tmpl<T>::setCovarianceXY(double value)
{
    m_CovarianceXY = value;
    m_bCovarianceXY_valueSet = true;
}

template <class T>
bool GPSQCInfoLevel2Tmpl<T>::hasValue_CovarianceXY() const
{
    return m_bCovarianceXY_valueSet;
}

template <class T>
void GPSQCInfoLevel2Tmpl<T>::resetValue_CovarianceXY()
{
    m_bCovarianceXY_valueSet = false;
}


template <class T>
double GPSQCInfoLevel2Tmpl<T>::getCovarianceXZ() const
{
    return m_CovarianceXZ;
}

template <class T>
void GPSQCInfoLevel2Tmpl<T>::setCovarianceXZ(double value)
{
    m_CovarianceXZ = value;
    m_bCovarianceXZ_valueSet = true;
}

template <class T>
bool GPSQCInfoLevel2Tmpl<T>::hasValue_CovarianceXZ() const
{
    return m_bCovarianceXZ_valueSet;
}

template <class T>
void GPSQCInfoLevel2Tmpl<T>::resetValue_CovarianceXZ()
{
    m_bCovarianceXZ_valueSet = false;
}


template <class T>
double GPSQCInfoLevel2Tmpl<T>::getCovarianceYY() const
{
    return m_CovarianceYY;
}

template <class T>
void GPSQCInfoLevel2Tmpl<T>::setCovarianceYY(double value)
{
    m_CovarianceYY = value;
    m_bCovarianceYY_valueSet = true;
}

template <class T>
bool GPSQCInfoLevel2Tmpl<T>::hasValue_CovarianceYY() const
{
    return m_bCovarianceYY_valueSet;
}

template <class T>
void GPSQCInfoLevel2Tmpl<T>::resetValue_CovarianceYY()
{
    m_bCovarianceYY_valueSet = false;
}


template <class T>
double GPSQCInfoLevel2Tmpl<T>::getCovarianceYZ() const
{
    return m_CovarianceYZ;
}

template <class T>
void GPSQCInfoLevel2Tmpl<T>::setCovarianceYZ(double value)
{
    m_CovarianceYZ = value;
    m_bCovarianceYZ_valueSet = true;
}

template <class T>
bool GPSQCInfoLevel2Tmpl<T>::hasValue_CovarianceYZ() const
{
    return m_bCovarianceYZ_valueSet;
}

template <class T>
void GPSQCInfoLevel2Tmpl<T>::resetValue_CovarianceYZ()
{
    m_bCovarianceYZ_valueSet = false;
}


template <class T>
double GPSQCInfoLevel2Tmpl<T>::getCovarianceZZ() const
{
    return m_CovarianceZZ;
}

template <class T>
void GPSQCInfoLevel2Tmpl<T>::setCovarianceZZ(double value)
{
    m_CovarianceZZ = value;
    m_bCovarianceZZ_valueSet = true;
}

template <class T>
bool GPSQCInfoLevel2Tmpl<T>::hasValue_CovarianceZZ() const
{
    return m_bCovarianceZZ_valueSet;
}

template <class T>
void GPSQCInfoLevel2Tmpl<T>::resetValue_CovarianceZZ()
{
    m_bCovarianceZZ_valueSet = false;
}


template <class T>
EnumGPSSolutionTypeEnum::Values GPSQCInfoLevel2Tmpl<T>::getGPSSolnType() const
{
    return m_GPSSolnType;
}

template <class T>
void GPSQCInfoLevel2Tmpl<T>::setGPSSolnType(EnumGPSSolutionTypeEnum::Values value)
{
    m_GPSSolnType = value;
    m_bGPSSolnType_valueSet = true;
}

template <class T>
bool GPSQCInfoLevel2Tmpl<T>::hasValue_GPSSolnType() const
{
    return m_bGPSSolnType_valueSet;
}

template <class T>
void GPSQCInfoLevel2Tmpl<T>::resetValue_GPSSolnType()
{
    m_bGPSSolnType_valueSet = false;
}


template <class T>
EnumGPSSolutionFrequencyEnum::Values GPSQCInfoLevel2Tmpl<T>::getGPSSolnFreq() const
{
    return m_GPSSolnFreq;
}

template <class T>
void GPSQCInfoLevel2Tmpl<T>::setGPSSolnFreq(EnumGPSSolutionFrequencyEnum::Values value)
{
    m_GPSSolnFreq = value;
    m_bGPSSolnFreq_valueSet = true;
}

template <class T>
bool GPSQCInfoLevel2Tmpl<T>::hasValue_GPSSolnFreq() const
{
    return m_bGPSSolnFreq_valueSet;
}

template <class T>
void GPSQCInfoLevel2Tmpl<T>::resetValue_GPSSolnFreq()
{
    m_bGPSSolnFreq_valueSet = false;
}


template <class T>
double GPSQCInfoLevel2Tmpl<T>::getRMS() const
{
    return m_RMS;
}

template <class T>
void GPSQCInfoLevel2Tmpl<T>::setRMS(double value)
{
    m_RMS = value;
    m_bRMS_valueSet = true;
}

template <class T>
bool GPSQCInfoLevel2Tmpl<T>::hasValue_RMS() const
{
    return m_bRMS_valueSet;
}

template <class T>
void GPSQCInfoLevel2Tmpl<T>::resetValue_RMS()
{
    m_bRMS_valueSet = false;
}


template <class T>
double GPSQCInfoLevel2Tmpl<T>::getRatio() const
{
    return m_Ratio;
}

template <class T>
void GPSQCInfoLevel2Tmpl<T>::setRatio(double value)
{
    m_Ratio = value;
    m_bRatio_valueSet = true;
}

template <class T>
bool GPSQCInfoLevel2Tmpl<T>::hasValue_Ratio() const
{
    return m_bRatio_valueSet;
}

template <class T>
void GPSQCInfoLevel2Tmpl<T>::resetValue_Ratio()
{
    m_bRatio_valueSet = false;
}


template <class T>
double GPSQCInfoLevel2Tmpl<T>::getReferenceVariance() const
{
    return m_ReferenceVariance;
}

template <class T>
void GPSQCInfoLevel2Tmpl<T>::setReferenceVariance(double value)
{
    m_ReferenceVariance = value;
    m_bReferenceVariance_valueSet = true;
}

template <class T>
bool GPSQCInfoLevel2Tmpl<T>::hasValue_ReferenceVariance() const
{
    return m_bReferenceVariance_valueSet;
}

template <class T>
void GPSQCInfoLevel2Tmpl<T>::resetValue_ReferenceVariance()
{
    m_bReferenceVariance_valueSet = false;
}


template <class T>
int GPSQCInfoLevel2Tmpl<T>::getNbrSatellites() const
{
    return m_NbrSatellites;
}

template <class T>
void GPSQCInfoLevel2Tmpl<T>::setNbrSatellites(int value)
{
    m_NbrSatellites = value;
    m_bNbrSatellites_valueSet = true;
}

template <class T>
bool GPSQCInfoLevel2Tmpl<T>::hasValue_NbrSatellites() const
{
    return m_bNbrSatellites_valueSet;
}

template <class T>
void GPSQCInfoLevel2Tmpl<T>::resetValue_NbrSatellites()
{
    m_bNbrSatellites_valueSet = false;
}


template <class T>
double GPSQCInfoLevel2Tmpl<T>::getStartTime() const
{
    return m_StartTime;
}

template <class T>
void GPSQCInfoLevel2Tmpl<T>::setStartTime(double value)
{
    m_StartTime = value;
    m_bStartTime_valueSet = true;
}

template <class T>
bool GPSQCInfoLevel2Tmpl<T>::hasValue_StartTime() const
{
    return m_bStartTime_valueSet;
}

template <class T>
void GPSQCInfoLevel2Tmpl<T>::resetValue_StartTime()
{
    m_bStartTime_valueSet = false;
}


template <class T>
double GPSQCInfoLevel2Tmpl<T>::getStopTime() const
{
    return m_StopTime;
}

template <class T>
void GPSQCInfoLevel2Tmpl<T>::setStopTime(double value)
{
    m_StopTime = value;
    m_bStopTime_valueSet = true;
}

template <class T>
bool GPSQCInfoLevel2Tmpl<T>::hasValue_StopTime() const
{
    return m_bStopTime_valueSet;
}

template <class T>
void GPSQCInfoLevel2Tmpl<T>::resetValue_StopTime()
{
    m_bStopTime_valueSet = false;
}



template <class T>
void GPSQCInfoLevel2Tmpl<T>::toXml (IStream& stream)
{
    static const wchar_t* kstrElementName = L"GPSQCInfoLevel2";
    stream.write(L"<");
    stream.write(kstrElementName);
    if (m_bCovarianceXX_valueSet)
    {
        stream.write(L" covarianceXX=\"");
        DoubleObjectImpl::streamOut(m_CovarianceXX, stream);
        stream.write(L"\"");
    }
    if (m_bCovarianceXY_valueSet)
    {
        stream.write(L" covarianceXY=\"");
        DoubleObjectImpl::streamOut(m_CovarianceXY, stream);
        stream.write(L"\"");
    }
    if (m_bCovarianceXZ_valueSet)
    {
        stream.write(L" covarianceXZ=\"");
        DoubleObjectImpl::streamOut(m_CovarianceXZ, stream);
        stream.write(L"\"");
    }
    if (m_bCovarianceYY_valueSet)
    {
        stream.write(L" covarianceYY=\"");
        DoubleObjectImpl::streamOut(m_CovarianceYY, stream);
        stream.write(L"\"");
    }
    if (m_bCovarianceYZ_valueSet)
    {
        stream.write(L" covarianceYZ=\"");
        DoubleObjectImpl::streamOut(m_CovarianceYZ, stream);
        stream.write(L"\"");
    }
    if (m_bCovarianceZZ_valueSet)
    {
        stream.write(L" covarianceZZ=\"");
        DoubleObjectImpl::streamOut(m_CovarianceZZ, stream);
        stream.write(L"\"");
    }
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
    if (m_bRMS_valueSet)
    {
        stream.write(L" RMS=\"");
        DoubleObjectImpl::streamOut(m_RMS, stream);
        stream.write(L"\"");
    }
    if (m_bRatio_valueSet)
    {
        stream.write(L" ratio=\"");
        DoubleObjectImpl::streamOut(m_Ratio, stream);
        stream.write(L"\"");
    }
    if (m_bReferenceVariance_valueSet)
    {
        stream.write(L" referenceVariance=\"");
        DoubleObjectImpl::streamOut(m_ReferenceVariance, stream);
        stream.write(L"\"");
    }
    if (m_bNbrSatellites_valueSet)
    {
        stream.write(L" nbrSatellites=\"");
        IntegerObjectImpl::streamOut(m_NbrSatellites, stream);
        stream.write(L"\"");
    }
    if (m_bStartTime_valueSet)
    {
        stream.write(L" startTime=\"");
        DoubleObjectImpl::streamOut(m_StartTime, stream);
        stream.write(L"\"");
    }
    if (m_bStopTime_valueSet)
    {
        stream.write(L" stopTime=\"");
        DoubleObjectImpl::streamOut(m_StopTime, stream);
        stream.write(L"\"");
    }
    stream.write(L">");
    stream.write(L"</");
    stream.write(kstrElementName);
    stream.write(L">");
}

template <class T>
Object::ValidityEnum GPSQCInfoLevel2Tmpl<T>::validate (IValidationEventSink* pEventSink) const
{
    Object::ValidityEnum returnCode = Object::kValid;
    returnCode = this->ObjectTmpl<T>::validate(pEventSink);
    return returnCode;
}

}; // namespace : LX
