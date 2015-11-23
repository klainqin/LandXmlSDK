#include "stdafx.h"
#include "LXTypes.h"
#include "Intersections.h"
#include "LXTypesTmpl.h"
#include "IntersectionsImpl.h"
#include "LXTypesTmpl.inl"

namespace LX
{


template<class T>
IntersectionsTmpl<T>::IntersectionsTmpl (DocumentImpl* pDoc)
    : ObjectTmpl<T>(pDoc)
{
}


template<class T>
IntersectionsTmpl<T>::~IntersectionsTmpl ()
{
}




template <class T>
void IntersectionsTmpl<T>::toXml (IStream& stream)
{
    static const wchar_t* kstrElementName = L"Intersections";
    stream.write(L"<");
    stream.write(kstrElementName);
    stream.write(L">");
    stream.write(L"</");
    stream.write(kstrElementName);
    stream.write(L">");
}

template <class T>
Object::ValidityEnum IntersectionsTmpl<T>::validate (IValidationEventSink* pEventSink) const
{
    Object::ValidityEnum returnCode = Object::kValid;
    returnCode = this->ObjectTmpl<T>::validate(pEventSink);
    return returnCode;
}

}; // namespace : LX
