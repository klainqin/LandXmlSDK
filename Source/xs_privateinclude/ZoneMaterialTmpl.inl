#include "stdafx.h"
#include "LXTypes.h"
#include "ZoneMaterial.h"
#include "LXTypesTmpl.h"
#include "ZoneMaterialImpl.h"
#include "LXTypesTmpl.inl"

namespace LX
{


template<class T>
ZoneMaterialTmpl<T>::ZoneMaterialTmpl (DocumentImpl* pDoc)
    : ObjectTmpl<T>(pDoc)
{
    m_StaStart = 0.0;
    m_bStaStart_valueSet = false;
    m_StaEnd = 0.0;
    m_bStaEnd_valueSet = false;
    m_Material = EnumZoneMaterialType::Values::k_null;
    m_bMaterial_valueSet = false;
}


template<class T>
ZoneMaterialTmpl<T>::~ZoneMaterialTmpl ()
{
}



template <class T>
double ZoneMaterialTmpl<T>::getStaStart() const
{
    return m_StaStart;
}

template <class T>
void ZoneMaterialTmpl<T>::setStaStart(double value)
{
    m_StaStart = value;
    m_bStaStart_valueSet = true;
}

template <class T>
bool ZoneMaterialTmpl<T>::hasValue_StaStart() const
{
    return m_bStaStart_valueSet;
}

template <class T>
void ZoneMaterialTmpl<T>::resetValue_StaStart()
{
    m_bStaStart_valueSet = false;
}


template <class T>
double ZoneMaterialTmpl<T>::getStaEnd() const
{
    return m_StaEnd;
}

template <class T>
void ZoneMaterialTmpl<T>::setStaEnd(double value)
{
    m_StaEnd = value;
    m_bStaEnd_valueSet = true;
}

template <class T>
bool ZoneMaterialTmpl<T>::hasValue_StaEnd() const
{
    return m_bStaEnd_valueSet;
}

template <class T>
void ZoneMaterialTmpl<T>::resetValue_StaEnd()
{
    m_bStaEnd_valueSet = false;
}


template <class T>
EnumZoneMaterialType::Values ZoneMaterialTmpl<T>::getMaterial() const
{
    return m_Material;
}

template <class T>
void ZoneMaterialTmpl<T>::setMaterial(EnumZoneMaterialType::Values value)
{
    m_Material = value;
    m_bMaterial_valueSet = true;
}

template <class T>
bool ZoneMaterialTmpl<T>::hasValue_Material() const
{
    return m_bMaterial_valueSet;
}

template <class T>
void ZoneMaterialTmpl<T>::resetValue_Material()
{
    m_bMaterial_valueSet = false;
}



template <class T>
void ZoneMaterialTmpl<T>::toXml (IStream& stream)
{
    static const wchar_t* kstrElementName = L"ZoneMaterial";
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
    if (m_bMaterial_valueSet)
    {
        stream.write(L" material=\"");
        EnumZoneMaterialTypeImpl::streamOut(m_Material, stream);
        stream.write(L"\"");
    }
    stream.write(L">");
    stream.write(L"</");
    stream.write(kstrElementName);
    stream.write(L">");
}

template <class T>
Object::ValidityEnum ZoneMaterialTmpl<T>::validate (IValidationEventSink* pEventSink) const
{
    Object::ValidityEnum returnCode = Object::kValid;
    returnCode = this->ObjectTmpl<T>::validate(pEventSink);
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
    if (!m_bMaterial_valueSet)
    {
        pEventSink->onEvent(IValidationEventSink::EventCode::kRequiredValueNotSet, this, L"Material", L"Required value not set");
        returnCode = Object::kInvalid;
    }
    return returnCode;
}

}; // namespace : LX
