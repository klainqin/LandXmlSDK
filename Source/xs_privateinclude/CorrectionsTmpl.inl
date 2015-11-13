#include "stdafx.h"
#include "LXTypes.h"
#include "Corrections.h"
#include "LXTypesTmpl.h"
#include "CorrectionsImpl.h"
#include "LXTypesTmpl.inl"

namespace LX
{


template<class T>
CorrectionsTmpl<T>::CorrectionsTmpl<T> (DocumentImpl* pDoc)
    : ObjectTmpl<T>(pDoc)
{
    m_RefractionCoefficient = 0.0;
    m_bRefractionCoefficient_valueSet = false;
    m_ApplyRefractionCoefficient = false;
    m_bApplyRefractionCoefficient_valueSet = false;
    m_Sphericity = 0.0;
    m_bSphericity_valueSet = false;
    m_PrismEccentricity = 0.0;
    m_bPrismEccentricity_valueSet = false;
}


template<class T>
CorrectionsTmpl<T>::~CorrectionsTmpl<T> ()
{
}



template <class T>
double CorrectionsTmpl<T>::getRefractionCoefficient() const
{
    return m_RefractionCoefficient;
}

template <class T>
void CorrectionsTmpl<T>::setRefractionCoefficient(double value)
{
    m_RefractionCoefficient = value;
    m_bRefractionCoefficient_valueSet = true;
}

template <class T>
bool CorrectionsTmpl<T>::hasValue_RefractionCoefficient() const
{
    return m_bRefractionCoefficient_valueSet;
}

template <class T>
void CorrectionsTmpl<T>::resetValue_RefractionCoefficient()
{
    m_bRefractionCoefficient_valueSet = false;
}


template <class T>
bool CorrectionsTmpl<T>::getApplyRefractionCoefficient() const
{
    return m_ApplyRefractionCoefficient;
}

template <class T>
void CorrectionsTmpl<T>::setApplyRefractionCoefficient(bool value)
{
    m_ApplyRefractionCoefficient = value;
    m_bApplyRefractionCoefficient_valueSet = true;
}

template <class T>
bool CorrectionsTmpl<T>::hasValue_ApplyRefractionCoefficient() const
{
    return m_bApplyRefractionCoefficient_valueSet;
}

template <class T>
void CorrectionsTmpl<T>::resetValue_ApplyRefractionCoefficient()
{
    m_bApplyRefractionCoefficient_valueSet = false;
}


template <class T>
double CorrectionsTmpl<T>::getSphericity() const
{
    return m_Sphericity;
}

template <class T>
void CorrectionsTmpl<T>::setSphericity(double value)
{
    m_Sphericity = value;
    m_bSphericity_valueSet = true;
}

template <class T>
bool CorrectionsTmpl<T>::hasValue_Sphericity() const
{
    return m_bSphericity_valueSet;
}

template <class T>
void CorrectionsTmpl<T>::resetValue_Sphericity()
{
    m_bSphericity_valueSet = false;
}


template <class T>
double CorrectionsTmpl<T>::getPrismEccentricity() const
{
    return m_PrismEccentricity;
}

template <class T>
void CorrectionsTmpl<T>::setPrismEccentricity(double value)
{
    m_PrismEccentricity = value;
    m_bPrismEccentricity_valueSet = true;
}

template <class T>
bool CorrectionsTmpl<T>::hasValue_PrismEccentricity() const
{
    return m_bPrismEccentricity_valueSet;
}

template <class T>
void CorrectionsTmpl<T>::resetValue_PrismEccentricity()
{
    m_bPrismEccentricity_valueSet = false;
}



template <class T>
void CorrectionsTmpl<T>::toXml (IStream& stream)
{
    static const wchar_t* kstrElementName = L"Corrections";
    stream.write(L"<");
    stream.write(kstrElementName);
    if (m_bRefractionCoefficient_valueSet)
    {
        stream.write(L" refractionCoefficient=\"");
        DoubleObjectImpl::streamOut(m_RefractionCoefficient, stream);
        stream.write(L"\"");
    }
    if (m_bApplyRefractionCoefficient_valueSet)
    {
        stream.write(L" applyRefractionCoefficient=\"");
        BooleanObjectImpl::streamOut(m_ApplyRefractionCoefficient, stream);
        stream.write(L"\"");
    }
    if (m_bSphericity_valueSet)
    {
        stream.write(L" sphericity=\"");
        DoubleObjectImpl::streamOut(m_Sphericity, stream);
        stream.write(L"\"");
    }
    if (m_bPrismEccentricity_valueSet)
    {
        stream.write(L" prismEccentricity=\"");
        DoubleObjectImpl::streamOut(m_PrismEccentricity, stream);
        stream.write(L"\"");
    }
    stream.write(L">");
    stream.write(L"</");
    stream.write(kstrElementName);
    stream.write(L">");
}

template <class T>
Object::ValidityEnum CorrectionsTmpl<T>::validate (IValidationEventSink* pEventSink) const
{
    Object::ValidityEnum returnCode = Object::kValid;
    returnCode = this->ObjectTmpl<T>::validate(pEventSink);
    return returnCode;
}

}; // namespace : LX
