#include "stdafx.h"
#include "LXTypes.h"
#include "FullSuperelev.h"
#include "LXTypesTmpl.h"
#include "FullSuperelevImpl.h"
#include "LXTypesTmpl.inl"

namespace LX
{


template<class T>
FullSuperelevTmpl<T>::FullSuperelevTmpl<T> (DocumentImpl* pDoc)
    : DoubleObjectTmpl<T>(pDoc)
{
}


template<class T>
FullSuperelevTmpl<T>::~FullSuperelevTmpl<T> ()
{
}




template <class T>
void FullSuperelevTmpl<T>::toXml (IStream& stream)
{
    static const wchar_t* kstrElementName = L"FullSuperelev";
    stream.write(L"<");
    stream.write(kstrElementName);
    stream.write(L">");
    toStream(stream);
    stream.write(L"</");
    stream.write(kstrElementName);
    stream.write(L">");
}

template <class T>
Object::ValidityEnum FullSuperelevTmpl<T>::validate (IValidationEventSink* pEventSink) const
{
    Object::ValidityEnum returnCode = Object::kValid;
    returnCode = this->ObjectTmpl<T>::validate(pEventSink);
    return returnCode;
}

}; // namespace : LX
