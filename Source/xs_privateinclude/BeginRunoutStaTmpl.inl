#include "stdafx.h"
#include "LXTypes.h"
#include "BeginRunoutSta.h"
#include "LXTypesTmpl.h"
#include "BeginRunoutStaImpl.h"
#include "LXTypesTmpl.inl"

namespace LX
{


template<class T>
BeginRunoutStaTmpl<T>::BeginRunoutStaTmpl<T> (DocumentImpl* pDoc)
    : DoubleObjectTmpl<T>(pDoc)
{
}


template<class T>
BeginRunoutStaTmpl<T>::~BeginRunoutStaTmpl<T> ()
{
}




template <class T>
void BeginRunoutStaTmpl<T>::toXml (IStream& stream)
{
    static const wchar_t* kstrElementName = L"BeginRunoutSta";
    stream.write(L"<");
    stream.write(kstrElementName);
    stream.write(L">");
    toStream(stream);
    stream.write(L"</");
    stream.write(kstrElementName);
    stream.write(L">");
}

template <class T>
Object::ValidityEnum BeginRunoutStaTmpl<T>::validate (IValidationEventSink* pEventSink) const
{
    Object::ValidityEnum returnCode = Object::kValid;
    returnCode = this->ObjectTmpl<T>::validate(pEventSink);
    return returnCode;
}

}; // namespace : LX
