#include "stdafx.h"
#include "LXTypes.h"
#include "StartofRunoutSta.h"
#include "LXTypesTmpl.h"
#include "StartofRunoutStaImpl.h"
#include "LXTypesTmpl.inl"

namespace LX
{


template<class T>
StartofRunoutStaTmpl<T>::StartofRunoutStaTmpl<T> (DocumentImpl* pDoc)
    : DoubleObjectTmpl<T>(pDoc)
{
}


template<class T>
StartofRunoutStaTmpl<T>::~StartofRunoutStaTmpl<T> ()
{
}




template <class T>
void StartofRunoutStaTmpl<T>::toXml (IStream& stream)
{
    static const wchar_t* kstrElementName = L"StartofRunoutSta";
    stream.write(L"<");
    stream.write(kstrElementName);
    stream.write(L">");
    toStream(stream);
    stream.write(L"</");
    stream.write(kstrElementName);
    stream.write(L">");
}

template <class T>
Object::ValidityEnum StartofRunoutStaTmpl<T>::validate (IValidationEventSink* pEventSink) const
{
    Object::ValidityEnum returnCode = Object::kValid;
    returnCode = this->ObjectTmpl<T>::validate(pEventSink);
    return returnCode;
}

}; // namespace : LX
