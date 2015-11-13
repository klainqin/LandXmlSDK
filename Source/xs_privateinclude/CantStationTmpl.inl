#include "stdafx.h"
#include "LXTypes.h"
#include "CantStation.h"
#include "LXTypesTmpl.h"
#include "CantStationImpl.h"
#include "LXTypesTmpl.inl"

namespace LX
{


template<class T>
CantStationTmpl<T>::CantStationTmpl<T> (DocumentImpl* pDoc)
    : ObjectTmpl<T>(pDoc)
{
    m_Station = 0.0;
    m_bStation_valueSet = false;
    m_EquilibriumCant = 0.0;
    m_bEquilibriumCant_valueSet = false;
    m_AppliedCant = 0.0;
    m_bAppliedCant_valueSet = false;
    m_CantDeficiency = 0.0;
    m_bCantDeficiency_valueSet = false;
    m_CantExcess = 0.0;
    m_bCantExcess_valueSet = false;
    m_RateOfChangeOfAppliedCantOverTime = 0.0;
    m_bRateOfChangeOfAppliedCantOverTime_valueSet = false;
    m_RateOfChangeOfAppliedCantOverLength = 0.0;
    m_bRateOfChangeOfAppliedCantOverLength_valueSet = false;
    m_RateOfChangeOfCantDeficiencyOverTime = 0.0;
    m_bRateOfChangeOfCantDeficiencyOverTime_valueSet = false;
    m_CantGradient = 0.0;
    m_bCantGradient_valueSet = false;
    m_Speed = 0.0;
    m_bSpeed_valueSet = false;
    m_TransitionType = EnumSpiralType::Values::k_null;
    m_bTransitionType_valueSet = false;
    m_Curvature = EnumClockwise::Values::k_null;
    m_bCurvature_valueSet = false;
    m_Adverse = false;
    m_bAdverse_valueSet = false;
}


template<class T>
CantStationTmpl<T>::~CantStationTmpl<T> ()
{
}



template <class T>
double CantStationTmpl<T>::getStation() const
{
    return m_Station;
}

template <class T>
void CantStationTmpl<T>::setStation(double value)
{
    m_Station = value;
    m_bStation_valueSet = true;
}

template <class T>
bool CantStationTmpl<T>::hasValue_Station() const
{
    return m_bStation_valueSet;
}

template <class T>
void CantStationTmpl<T>::resetValue_Station()
{
    m_bStation_valueSet = false;
}


template <class T>
double CantStationTmpl<T>::getEquilibriumCant() const
{
    return m_EquilibriumCant;
}

template <class T>
void CantStationTmpl<T>::setEquilibriumCant(double value)
{
    m_EquilibriumCant = value;
    m_bEquilibriumCant_valueSet = true;
}

template <class T>
bool CantStationTmpl<T>::hasValue_EquilibriumCant() const
{
    return m_bEquilibriumCant_valueSet;
}

template <class T>
void CantStationTmpl<T>::resetValue_EquilibriumCant()
{
    m_bEquilibriumCant_valueSet = false;
}


template <class T>
double CantStationTmpl<T>::getAppliedCant() const
{
    return m_AppliedCant;
}

template <class T>
void CantStationTmpl<T>::setAppliedCant(double value)
{
    m_AppliedCant = value;
    m_bAppliedCant_valueSet = true;
}

template <class T>
bool CantStationTmpl<T>::hasValue_AppliedCant() const
{
    return m_bAppliedCant_valueSet;
}

template <class T>
void CantStationTmpl<T>::resetValue_AppliedCant()
{
    m_bAppliedCant_valueSet = false;
}


template <class T>
double CantStationTmpl<T>::getCantDeficiency() const
{
    return m_CantDeficiency;
}

template <class T>
void CantStationTmpl<T>::setCantDeficiency(double value)
{
    m_CantDeficiency = value;
    m_bCantDeficiency_valueSet = true;
}

template <class T>
bool CantStationTmpl<T>::hasValue_CantDeficiency() const
{
    return m_bCantDeficiency_valueSet;
}

template <class T>
void CantStationTmpl<T>::resetValue_CantDeficiency()
{
    m_bCantDeficiency_valueSet = false;
}


template <class T>
double CantStationTmpl<T>::getCantExcess() const
{
    return m_CantExcess;
}

template <class T>
void CantStationTmpl<T>::setCantExcess(double value)
{
    m_CantExcess = value;
    m_bCantExcess_valueSet = true;
}

template <class T>
bool CantStationTmpl<T>::hasValue_CantExcess() const
{
    return m_bCantExcess_valueSet;
}

template <class T>
void CantStationTmpl<T>::resetValue_CantExcess()
{
    m_bCantExcess_valueSet = false;
}


template <class T>
double CantStationTmpl<T>::getRateOfChangeOfAppliedCantOverTime() const
{
    return m_RateOfChangeOfAppliedCantOverTime;
}

template <class T>
void CantStationTmpl<T>::setRateOfChangeOfAppliedCantOverTime(double value)
{
    m_RateOfChangeOfAppliedCantOverTime = value;
    m_bRateOfChangeOfAppliedCantOverTime_valueSet = true;
}

template <class T>
bool CantStationTmpl<T>::hasValue_RateOfChangeOfAppliedCantOverTime() const
{
    return m_bRateOfChangeOfAppliedCantOverTime_valueSet;
}

template <class T>
void CantStationTmpl<T>::resetValue_RateOfChangeOfAppliedCantOverTime()
{
    m_bRateOfChangeOfAppliedCantOverTime_valueSet = false;
}


template <class T>
double CantStationTmpl<T>::getRateOfChangeOfAppliedCantOverLength() const
{
    return m_RateOfChangeOfAppliedCantOverLength;
}

template <class T>
void CantStationTmpl<T>::setRateOfChangeOfAppliedCantOverLength(double value)
{
    m_RateOfChangeOfAppliedCantOverLength = value;
    m_bRateOfChangeOfAppliedCantOverLength_valueSet = true;
}

template <class T>
bool CantStationTmpl<T>::hasValue_RateOfChangeOfAppliedCantOverLength() const
{
    return m_bRateOfChangeOfAppliedCantOverLength_valueSet;
}

template <class T>
void CantStationTmpl<T>::resetValue_RateOfChangeOfAppliedCantOverLength()
{
    m_bRateOfChangeOfAppliedCantOverLength_valueSet = false;
}


template <class T>
double CantStationTmpl<T>::getRateOfChangeOfCantDeficiencyOverTime() const
{
    return m_RateOfChangeOfCantDeficiencyOverTime;
}

template <class T>
void CantStationTmpl<T>::setRateOfChangeOfCantDeficiencyOverTime(double value)
{
    m_RateOfChangeOfCantDeficiencyOverTime = value;
    m_bRateOfChangeOfCantDeficiencyOverTime_valueSet = true;
}

template <class T>
bool CantStationTmpl<T>::hasValue_RateOfChangeOfCantDeficiencyOverTime() const
{
    return m_bRateOfChangeOfCantDeficiencyOverTime_valueSet;
}

template <class T>
void CantStationTmpl<T>::resetValue_RateOfChangeOfCantDeficiencyOverTime()
{
    m_bRateOfChangeOfCantDeficiencyOverTime_valueSet = false;
}


template <class T>
double CantStationTmpl<T>::getCantGradient() const
{
    return m_CantGradient;
}

template <class T>
void CantStationTmpl<T>::setCantGradient(double value)
{
    m_CantGradient = value;
    m_bCantGradient_valueSet = true;
}

template <class T>
bool CantStationTmpl<T>::hasValue_CantGradient() const
{
    return m_bCantGradient_valueSet;
}

template <class T>
void CantStationTmpl<T>::resetValue_CantGradient()
{
    m_bCantGradient_valueSet = false;
}


template <class T>
double CantStationTmpl<T>::getSpeed() const
{
    return m_Speed;
}

template <class T>
void CantStationTmpl<T>::setSpeed(double value)
{
    m_Speed = value;
    m_bSpeed_valueSet = true;
}

template <class T>
bool CantStationTmpl<T>::hasValue_Speed() const
{
    return m_bSpeed_valueSet;
}

template <class T>
void CantStationTmpl<T>::resetValue_Speed()
{
    m_bSpeed_valueSet = false;
}


template <class T>
EnumSpiralType::Values CantStationTmpl<T>::getTransitionType() const
{
    return m_TransitionType;
}

template <class T>
void CantStationTmpl<T>::setTransitionType(EnumSpiralType::Values value)
{
    m_TransitionType = value;
    m_bTransitionType_valueSet = true;
}

template <class T>
bool CantStationTmpl<T>::hasValue_TransitionType() const
{
    return m_bTransitionType_valueSet;
}

template <class T>
void CantStationTmpl<T>::resetValue_TransitionType()
{
    m_bTransitionType_valueSet = false;
}


template <class T>
EnumClockwise::Values CantStationTmpl<T>::getCurvature() const
{
    return m_Curvature;
}

template <class T>
void CantStationTmpl<T>::setCurvature(EnumClockwise::Values value)
{
    m_Curvature = value;
    m_bCurvature_valueSet = true;
}

template <class T>
bool CantStationTmpl<T>::hasValue_Curvature() const
{
    return m_bCurvature_valueSet;
}

template <class T>
void CantStationTmpl<T>::resetValue_Curvature()
{
    m_bCurvature_valueSet = false;
}


template <class T>
bool CantStationTmpl<T>::getAdverse() const
{
    return m_Adverse;
}

template <class T>
void CantStationTmpl<T>::setAdverse(bool value)
{
    m_Adverse = value;
    m_bAdverse_valueSet = true;
}

template <class T>
bool CantStationTmpl<T>::hasValue_Adverse() const
{
    return m_bAdverse_valueSet;
}

template <class T>
void CantStationTmpl<T>::resetValue_Adverse()
{
    m_bAdverse_valueSet = false;
}



template <class T>
void CantStationTmpl<T>::toXml (IStream& stream)
{
    static const wchar_t* kstrElementName = L"CantStation";
    stream.write(L"<");
    stream.write(kstrElementName);
    if (m_bStation_valueSet)
    {
        stream.write(L" station=\"");
        DoubleObjectImpl::streamOut(m_Station, stream);
        stream.write(L"\"");
    }
    if (m_bEquilibriumCant_valueSet)
    {
        stream.write(L" equilibriumCant=\"");
        DoubleObjectImpl::streamOut(m_EquilibriumCant, stream);
        stream.write(L"\"");
    }
    if (m_bAppliedCant_valueSet)
    {
        stream.write(L" appliedCant=\"");
        DoubleObjectImpl::streamOut(m_AppliedCant, stream);
        stream.write(L"\"");
    }
    if (m_bCantDeficiency_valueSet)
    {
        stream.write(L" cantDeficiency=\"");
        DoubleObjectImpl::streamOut(m_CantDeficiency, stream);
        stream.write(L"\"");
    }
    if (m_bCantExcess_valueSet)
    {
        stream.write(L" cantExcess=\"");
        DoubleObjectImpl::streamOut(m_CantExcess, stream);
        stream.write(L"\"");
    }
    if (m_bRateOfChangeOfAppliedCantOverTime_valueSet)
    {
        stream.write(L" rateOfChangeOfAppliedCantOverTime=\"");
        DoubleObjectImpl::streamOut(m_RateOfChangeOfAppliedCantOverTime, stream);
        stream.write(L"\"");
    }
    if (m_bRateOfChangeOfAppliedCantOverLength_valueSet)
    {
        stream.write(L" rateOfChangeOfAppliedCantOverLength=\"");
        DoubleObjectImpl::streamOut(m_RateOfChangeOfAppliedCantOverLength, stream);
        stream.write(L"\"");
    }
    if (m_bRateOfChangeOfCantDeficiencyOverTime_valueSet)
    {
        stream.write(L" rateOfChangeOfCantDeficiencyOverTime=\"");
        DoubleObjectImpl::streamOut(m_RateOfChangeOfCantDeficiencyOverTime, stream);
        stream.write(L"\"");
    }
    if (m_bCantGradient_valueSet)
    {
        stream.write(L" cantGradient=\"");
        DoubleObjectImpl::streamOut(m_CantGradient, stream);
        stream.write(L"\"");
    }
    if (m_bSpeed_valueSet)
    {
        stream.write(L" speed=\"");
        DoubleObjectImpl::streamOut(m_Speed, stream);
        stream.write(L"\"");
    }
    if (m_bTransitionType_valueSet)
    {
        stream.write(L" transitionType=\"");
        EnumSpiralTypeImpl::streamOut(m_TransitionType, stream);
        stream.write(L"\"");
    }
    if (m_bCurvature_valueSet)
    {
        stream.write(L" curvature=\"");
        EnumClockwiseImpl::streamOut(m_Curvature, stream);
        stream.write(L"\"");
    }
    if (m_bAdverse_valueSet)
    {
        stream.write(L" adverse=\"");
        BooleanObjectImpl::streamOut(m_Adverse, stream);
        stream.write(L"\"");
    }
    stream.write(L">");
    stream.write(L"</");
    stream.write(kstrElementName);
    stream.write(L">");
}

template <class T>
Object::ValidityEnum CantStationTmpl<T>::validate (IValidationEventSink* pEventSink) const
{
    Object::ValidityEnum returnCode = Object::kValid;
    returnCode = this->ObjectTmpl<T>::validate(pEventSink);
    if (!m_bStation_valueSet)
    {
        pEventSink->onEvent(IValidationEventSink::EventCode::kRequiredValueNotSet, this, L"Station", L"Required value not set");
        returnCode = Object::kInvalid;
    }
    if (!m_bAppliedCant_valueSet)
    {
        pEventSink->onEvent(IValidationEventSink::EventCode::kRequiredValueNotSet, this, L"AppliedCant", L"Required value not set");
        returnCode = Object::kInvalid;
    }
    if (!m_bCurvature_valueSet)
    {
        pEventSink->onEvent(IValidationEventSink::EventCode::kRequiredValueNotSet, this, L"Curvature", L"Required value not set");
        returnCode = Object::kInvalid;
    }
    return returnCode;
}

}; // namespace : LX
