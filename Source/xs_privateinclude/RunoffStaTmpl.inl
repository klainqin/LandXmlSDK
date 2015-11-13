#include "stdafx.h"
#include "LXTypes.h"
#include "RunoffSta.h"
#include "LXTypesTmpl.h"
#include "RunoffStaImpl.h"
#include "LXTypesTmpl.inl"

namespace LX
{


template<class T>
RunoffStaTmpl<T>::RunoffStaTmpl<T> (DocumentImpl* pDoc)
    : DoubleObjectTmpl<T>(pDoc)
{
}


template<class T>
RunoffStaTmpl<T>::~RunoffStaTmpl<T> ()
{
}




template <class T>
void RunoffStaTmpl<T>::toXml (IStream& stream)
{
    static const wchar_t* kstrElementName = L"RunoffSta";
    stream.write(L"<");
    stream.write(kstrElementName);
    stream.write(L">");
    toStream(stream);
    stream.write(L"</");
    stream.write(kstrElementName);
    stream.write(L">");
}

template <class T>
Object::ValidityEnum RunoffStaTmpl<T>::validate (IValidationEventSink* pEventSink) const
{
    Object::ValidityEnum returnCode = Object::kValid;
    returnCode = this->ObjectTmpl<T>::validate(pEventSink);
    return returnCode;
}

}; // namespace : LX
