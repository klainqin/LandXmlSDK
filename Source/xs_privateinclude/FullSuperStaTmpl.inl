#include "stdafx.h"
#include "LXTypes.h"
#include "FullSuperSta.h"
#include "LXTypesTmpl.h"
#include "FullSuperStaImpl.h"
#include "LXTypesTmpl.inl"

namespace LX
{


template<class T>
FullSuperStaTmpl<T>::FullSuperStaTmpl (DocumentImpl* pDoc)
    : DoubleObjectTmpl<T>(pDoc)
{
}


template<class T>
FullSuperStaTmpl<T>::~FullSuperStaTmpl ()
{
}




template <class T>
void FullSuperStaTmpl<T>::toXml (IStream& stream)
{
    static const wchar_t* kstrElementName = L"FullSuperSta";
    stream.write(L"<");
    stream.write(kstrElementName);
    stream.write(L">");
    this->toStream(stream);
    stream.write(L"</");
    stream.write(kstrElementName);
    stream.write(L">");
}

template <class T>
Object::ValidityEnum FullSuperStaTmpl<T>::validate (IValidationEventSink* pEventSink) const
{
    Object::ValidityEnum returnCode = Object::kValid;
    returnCode = this->ObjectTmpl<T>::validate(pEventSink);
    return returnCode;
}

}; // namespace : LX
