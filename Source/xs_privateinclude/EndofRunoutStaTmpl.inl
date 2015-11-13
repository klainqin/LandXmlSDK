#include "stdafx.h"
#include "LXTypes.h"
#include "EndofRunoutSta.h"
#include "LXTypesTmpl.h"
#include "EndofRunoutStaImpl.h"
#include "LXTypesTmpl.inl"

namespace LX
{


template<class T>
EndofRunoutStaTmpl<T>::EndofRunoutStaTmpl<T> (DocumentImpl* pDoc)
    : DoubleObjectTmpl<T>(pDoc)
{
}


template<class T>
EndofRunoutStaTmpl<T>::~EndofRunoutStaTmpl<T> ()
{
}




template <class T>
void EndofRunoutStaTmpl<T>::toXml (IStream& stream)
{
    static const wchar_t* kstrElementName = L"EndofRunoutSta";
    stream.write(L"<");
    stream.write(kstrElementName);
    stream.write(L">");
    toStream(stream);
    stream.write(L"</");
    stream.write(kstrElementName);
    stream.write(L">");
}

template <class T>
Object::ValidityEnum EndofRunoutStaTmpl<T>::validate (IValidationEventSink* pEventSink) const
{
    Object::ValidityEnum returnCode = Object::kValid;
    returnCode = this->ObjectTmpl<T>::validate(pEventSink);
    return returnCode;
}

}; // namespace : LX
