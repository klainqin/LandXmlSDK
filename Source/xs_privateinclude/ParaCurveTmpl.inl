#include "stdafx.h"
#include "LXTypes.h"
#include "ParaCurve.h"
#include "LXTypesTmpl.h"
#include "ParaCurveImpl.h"
#include "LXTypesTmpl.inl"

namespace LX
{


template<class T>
ParaCurveTmpl<T>::ParaCurveTmpl (DocumentImpl* pDoc)
    : DoubleCollectionTmpl<T>(pDoc)
{
    m_Length = 0.0;
    m_bLength_valueSet = false;
    m_Desc = L"";
    m_bDesc_valueSet = false;
}


template<class T>
ParaCurveTmpl<T>::~ParaCurveTmpl ()
{
}



template <class T>
double ParaCurveTmpl<T>::getLength() const
{
    return m_Length;
}

template <class T>
void ParaCurveTmpl<T>::setLength(double value)
{
    m_Length = value;
    m_bLength_valueSet = true;
}

template <class T>
bool ParaCurveTmpl<T>::hasValue_Length() const
{
    return m_bLength_valueSet;
}

template <class T>
void ParaCurveTmpl<T>::resetValue_Length()
{
    m_bLength_valueSet = false;
}


template <class T>
String ParaCurveTmpl<T>::getDesc() const
{
    return m_Desc;
}

template <class T>
void ParaCurveTmpl<T>::setDesc(String value)
{
    m_Desc = value;
    m_bDesc_valueSet = true;
}

template <class T>
bool ParaCurveTmpl<T>::hasValue_Desc() const
{
    return m_bDesc_valueSet;
}

template <class T>
void ParaCurveTmpl<T>::resetValue_Desc()
{
    m_bDesc_valueSet = false;
}



template <class T>
void ParaCurveTmpl<T>::toXml (IStream& stream)
{
    static const wchar_t* kstrElementName = L"ParaCurve";
    stream.write(L"<");
    stream.write(kstrElementName);
    if (m_bLength_valueSet)
    {
        stream.write(L" length=\"");
        DoubleObjectImpl::streamOut(m_Length, stream);
        stream.write(L"\"");
    }
    if (m_bDesc_valueSet)
    {
        stream.write(L" desc=\"");
        StringObjectImpl::streamOut(m_Desc, stream);
        stream.write(L"\"");
    }
    stream.write(L">");
    this->toStream(stream);
    stream.write(L"</");
    stream.write(kstrElementName);
    stream.write(L">");
}

template <class T>
Object::ValidityEnum ParaCurveTmpl<T>::validate (IValidationEventSink* pEventSink) const
{
    Object::ValidityEnum returnCode = Object::kValid;
    returnCode = this->ObjectTmpl<T>::validate(pEventSink);
    if (!m_bLength_valueSet)
    {
        pEventSink->onEvent(IValidationEventSink::EventCode::kRequiredValueNotSet, this, L"Length", L"Required value not set");
        returnCode = Object::kInvalid;
    }
    return returnCode;
}

}; // namespace : LX
