#include "stdafx.h"
#include "LXTypes.h"
#include "BeginRunoffSta.h"
#include "LXTypesTmpl.h"
#include "BeginRunoffStaImpl.h"
#include "LXTypesTmpl.inl"

namespace LX
{


template<class T>
BeginRunoffStaTmpl<T>::BeginRunoffStaTmpl<T> (DocumentImpl* pDoc)
    : DoubleObjectTmpl<T>(pDoc)
{
}


template<class T>
BeginRunoffStaTmpl<T>::~BeginRunoffStaTmpl<T> ()
{
}




template <class T>
void BeginRunoffStaTmpl<T>::toXml (IStream& stream)
{
    static const wchar_t* kstrElementName = L"BeginRunoffSta";
    stream.write(L"<");
    stream.write(kstrElementName);
    stream.write(L">");
    toStream(stream);
    stream.write(L"</");
    stream.write(kstrElementName);
    stream.write(L">");
}

template <class T>
Object::ValidityEnum BeginRunoffStaTmpl<T>::validate (IValidationEventSink* pEventSink) const
{
    Object::ValidityEnum returnCode = Object::kValid;
    returnCode = this->ObjectTmpl<T>::validate(pEventSink);
    return returnCode;
}

}; // namespace : LX
