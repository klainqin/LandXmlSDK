#include "stdafx.h"
#include "LXTypes.h"
#include "DrivewayDensity.h"
#include "LXTypesTmpl.h"
#include "DrivewayDensityImpl.h"
#include "LXTypesTmpl.inl"

namespace LX
{


template<class T>
DrivewayDensityTmpl<T>::DrivewayDensityTmpl (DocumentImpl* pDoc)
    : ObjectTmpl<T>(pDoc)
{
    m_StaStart = 0.0;
    m_bStaStart_valueSet = false;
    m_StaEnd = 0.0;
    m_bStaEnd_valueSet = false;
    m_Density = 0;
    m_bDensity_valueSet = false;
}


template<class T>
DrivewayDensityTmpl<T>::~DrivewayDensityTmpl ()
{
}



template <class T>
double DrivewayDensityTmpl<T>::getStaStart() const
{
    return m_StaStart;
}

template <class T>
void DrivewayDensityTmpl<T>::setStaStart(double value)
{
    m_StaStart = value;
    m_bStaStart_valueSet = true;
}

template <class T>
bool DrivewayDensityTmpl<T>::hasValue_StaStart() const
{
    return m_bStaStart_valueSet;
}

template <class T>
void DrivewayDensityTmpl<T>::resetValue_StaStart()
{
    m_bStaStart_valueSet = false;
}


template <class T>
double DrivewayDensityTmpl<T>::getStaEnd() const
{
    return m_StaEnd;
}

template <class T>
void DrivewayDensityTmpl<T>::setStaEnd(double value)
{
    m_StaEnd = value;
    m_bStaEnd_valueSet = true;
}

template <class T>
bool DrivewayDensityTmpl<T>::hasValue_StaEnd() const
{
    return m_bStaEnd_valueSet;
}

template <class T>
void DrivewayDensityTmpl<T>::resetValue_StaEnd()
{
    m_bStaEnd_valueSet = false;
}


template <class T>
int DrivewayDensityTmpl<T>::getDensity() const
{
    return m_Density;
}

template <class T>
void DrivewayDensityTmpl<T>::setDensity(int value)
{
    m_Density = value;
    m_bDensity_valueSet = true;
}

template <class T>
bool DrivewayDensityTmpl<T>::hasValue_Density() const
{
    return m_bDensity_valueSet;
}

template <class T>
void DrivewayDensityTmpl<T>::resetValue_Density()
{
    m_bDensity_valueSet = false;
}



template <class T>
void DrivewayDensityTmpl<T>::toXml (IStream& stream)
{
    static const wchar_t* kstrElementName = L"DrivewayDensity";
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
    if (m_bDensity_valueSet)
    {
        stream.write(L" density=\"");
        IntegerObjectImpl::streamOut(m_Density, stream);
        stream.write(L"\"");
    }
    stream.write(L">");
    stream.write(L"</");
    stream.write(kstrElementName);
    stream.write(L">");
}

template <class T>
Object::ValidityEnum DrivewayDensityTmpl<T>::validate (IValidationEventSink* pEventSink) const
{
    Object::ValidityEnum returnCode = Object::kValid;
    returnCode = this->ObjectTmpl<T>::validate(pEventSink);
    return returnCode;
}

}; // namespace : LX
