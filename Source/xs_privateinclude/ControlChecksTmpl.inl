#include "stdafx.h"
#include "LXTypes.h"
#include "ControlChecks.h"
#include "LXTypesTmpl.h"
#include "ControlChecksImpl.h"
#include "LXTypesTmpl.inl"

namespace LX
{


template<class T>
ControlChecksTmpl<T>::ControlChecksTmpl<T> (DocumentImpl* pDoc)
    : ObjectTmpl<T>(pDoc)
{
}


template<class T>
ControlChecksTmpl<T>::~ControlChecksTmpl<T> ()
{
}




template <class T>
void ControlChecksTmpl<T>::toXml (IStream& stream)
{
    static const wchar_t* kstrElementName = L"ControlChecks";
    stream.write(L"<");
    stream.write(kstrElementName);
    stream.write(L">");
    stream.write(L"</");
    stream.write(kstrElementName);
    stream.write(L">");
}

template <class T>
Object::ValidityEnum ControlChecksTmpl<T>::validate (IValidationEventSink* pEventSink) const
{
    Object::ValidityEnum returnCode = Object::kValid;
    returnCode = this->ObjectTmpl<T>::validate(pEventSink);
    return returnCode;
}

}; // namespace : LX
