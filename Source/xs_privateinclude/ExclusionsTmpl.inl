#include "stdafx.h"
#include "LXTypes.h"
#include "Exclusions.h"
#include "LXTypesTmpl.h"
#include "ExclusionsImpl.h"
#include "LXTypesTmpl.inl"

namespace LX
{


template<class T>
ExclusionsTmpl<T>::ExclusionsTmpl<T> (DocumentImpl* pDoc)
    : ObjectTmpl<T>(pDoc)
{
    m_ExclusionType = L"";
    m_bExclusionType_valueSet = false;
    m_Area = 0.0;
    m_bArea_valueSet = false;
}


template<class T>
ExclusionsTmpl<T>::~ExclusionsTmpl<T> ()
{
}



template <class T>
String ExclusionsTmpl<T>::getExclusionType() const
{
    return m_ExclusionType;
}

template <class T>
void ExclusionsTmpl<T>::setExclusionType(String value)
{
    m_ExclusionType = value;
    m_bExclusionType_valueSet = true;
}

template <class T>
bool ExclusionsTmpl<T>::hasValue_ExclusionType() const
{
    return m_bExclusionType_valueSet;
}

template <class T>
void ExclusionsTmpl<T>::resetValue_ExclusionType()
{
    m_bExclusionType_valueSet = false;
}


template <class T>
double ExclusionsTmpl<T>::getArea() const
{
    return m_Area;
}

template <class T>
void ExclusionsTmpl<T>::setArea(double value)
{
    m_Area = value;
    m_bArea_valueSet = true;
}

template <class T>
bool ExclusionsTmpl<T>::hasValue_Area() const
{
    return m_bArea_valueSet;
}

template <class T>
void ExclusionsTmpl<T>::resetValue_Area()
{
    m_bArea_valueSet = false;
}



template <class T>
void ExclusionsTmpl<T>::toXml (IStream& stream)
{
    static const wchar_t* kstrElementName = L"Exclusions";
    stream.write(L"<");
    stream.write(kstrElementName);
    if (m_bExclusionType_valueSet)
    {
        stream.write(L" exclusionType=\"");
        StringObjectImpl::streamOut(m_ExclusionType, stream);
        stream.write(L"\"");
    }
    if (m_bArea_valueSet)
    {
        stream.write(L" area=\"");
        DoubleObjectImpl::streamOut(m_Area, stream);
        stream.write(L"\"");
    }
    stream.write(L">");
    stream.write(L"</");
    stream.write(kstrElementName);
    stream.write(L">");
}

template <class T>
Object::ValidityEnum ExclusionsTmpl<T>::validate (IValidationEventSink* pEventSink) const
{
    Object::ValidityEnum returnCode = Object::kValid;
    returnCode = this->ObjectTmpl<T>::validate(pEventSink);
    if (!m_bExclusionType_valueSet)
    {
        pEventSink->onEvent(IValidationEventSink::EventCode::kRequiredValueNotSet, this, L"ExclusionType", L"Required value not set");
        returnCode = Object::kInvalid;
    }
    if (!m_bArea_valueSet)
    {
        pEventSink->onEvent(IValidationEventSink::EventCode::kRequiredValueNotSet, this, L"Area", L"Required value not set");
        returnCode = Object::kInvalid;
    }
    return returnCode;
}

}; // namespace : LX
