#include "stdafx.h"
#include "LXTypes.h"
#include "PntList2D.h"
#include "LXTypesTmpl.h"
#include "PntList2DImpl.h"
#include "LXTypesTmpl.inl"

namespace LX
{


template<class T>
PntList2DTmpl<T>::PntList2DTmpl<T> (DocumentImpl* pDoc)
    : DoubleCollectionTmpl<T>(pDoc)
{
}


template<class T>
PntList2DTmpl<T>::~PntList2DTmpl<T> ()
{
}




template <class T>
void PntList2DTmpl<T>::toXml (IStream& stream)
{
    static const wchar_t* kstrElementName = L"PntList2D";
    stream.write(L"<");
    stream.write(kstrElementName);
    stream.write(L">");
    toStream(stream);
    stream.write(L"</");
    stream.write(kstrElementName);
    stream.write(L">");
}

template <class T>
Object::ValidityEnum PntList2DTmpl<T>::validate (IValidationEventSink* pEventSink) const
{
    Object::ValidityEnum returnCode = Object::kValid;
    returnCode = this->ObjectTmpl<T>::validate(pEventSink);
    return returnCode;
}

}; // namespace : LX
