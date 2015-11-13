#include "stdafx.h"
#include "LXTypes.h"
#include "PntList3D.h"
#include "LXTypesTmpl.h"
#include "PntList3DImpl.h"
#include "LXTypesTmpl.inl"

namespace LX
{


template<class T>
PntList3DTmpl<T>::PntList3DTmpl<T> (DocumentImpl* pDoc)
    : DoubleCollectionTmpl<T>(pDoc)
{
}


template<class T>
PntList3DTmpl<T>::~PntList3DTmpl<T> ()
{
}




template <class T>
void PntList3DTmpl<T>::toXml (IStream& stream)
{
    static const wchar_t* kstrElementName = L"PntList3D";
    stream.write(L"<");
    stream.write(kstrElementName);
    stream.write(L">");
    toStream(stream);
    stream.write(L"</");
    stream.write(kstrElementName);
    stream.write(L">");
}

template <class T>
Object::ValidityEnum PntList3DTmpl<T>::validate (IValidationEventSink* pEventSink) const
{
    Object::ValidityEnum returnCode = Object::kValid;
    returnCode = this->ObjectTmpl<T>::validate(pEventSink);
    return returnCode;
}

}; // namespace : LX
