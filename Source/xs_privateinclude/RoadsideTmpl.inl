#include "stdafx.h"
#include "LXTypes.h"
#include "Roadside.h"
#include "LXTypesTmpl.h"
#include "RoadsideImpl.h"
#include "LXTypesTmpl.inl"

namespace LX
{


template<class T>
RoadsideTmpl<T>::RoadsideTmpl<T> (DocumentImpl* pDoc)
    : ObjectTmpl<T>(pDoc)
{
}


template<class T>
RoadsideTmpl<T>::~RoadsideTmpl<T> ()
{
}




template <class T>
void RoadsideTmpl<T>::toXml (IStream& stream)
{
    static const wchar_t* kstrElementName = L"Roadside";
    stream.write(L"<");
    stream.write(kstrElementName);
    stream.write(L">");
    stream.write(L"</");
    stream.write(kstrElementName);
    stream.write(L">");
}

template <class T>
Object::ValidityEnum RoadsideTmpl<T>::validate (IValidationEventSink* pEventSink) const
{
    Object::ValidityEnum returnCode = Object::kValid;
    returnCode = this->ObjectTmpl<T>::validate(pEventSink);
    return returnCode;
}

}; // namespace : LX
