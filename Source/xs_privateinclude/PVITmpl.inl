#include "stdafx.h"
#include "LXTypes.h"
#include "PVI.h"
#include "LXTypesTmpl.h"
#include "PVIImpl.h"
#include "LXTypesTmpl.inl"

namespace LX
{


template<class T>
PVITmpl<T>::PVITmpl<T> (DocumentImpl* pDoc)
    : DoubleCollectionTmpl<T>(pDoc)
{
    m_Desc = L"";
    m_bDesc_valueSet = false;
}


template<class T>
PVITmpl<T>::~PVITmpl<T> ()
{
}



template <class T>
String PVITmpl<T>::getDesc() const
{
    return m_Desc;
}

template <class T>
void PVITmpl<T>::setDesc(String value)
{
    m_Desc = value;
    m_bDesc_valueSet = true;
}

template <class T>
bool PVITmpl<T>::hasValue_Desc() const
{
    return m_bDesc_valueSet;
}

template <class T>
void PVITmpl<T>::resetValue_Desc()
{
    m_bDesc_valueSet = false;
}



template <class T>
void PVITmpl<T>::toXml (IStream& stream)
{
    static const wchar_t* kstrElementName = L"PVI";
    stream.write(L"<");
    stream.write(kstrElementName);
    if (m_bDesc_valueSet)
    {
        stream.write(L" desc=\"");
        StringObjectImpl::streamOut(m_Desc, stream);
        stream.write(L"\"");
    }
    stream.write(L">");
    toStream(stream);
    stream.write(L"</");
    stream.write(kstrElementName);
    stream.write(L">");
}

template <class T>
Object::ValidityEnum PVITmpl<T>::validate (IValidationEventSink* pEventSink) const
{
    Object::ValidityEnum returnCode = Object::kValid;
    returnCode = this->ObjectTmpl<T>::validate(pEventSink);
    return returnCode;
}

}; // namespace : LX
