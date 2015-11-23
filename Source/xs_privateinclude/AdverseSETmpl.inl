#include "stdafx.h"
#include "LXTypes.h"
#include "AdverseSE.h"
#include "LXTypesTmpl.h"
#include "AdverseSEImpl.h"
#include "LXTypesTmpl.inl"

namespace LX
{


template<class T>
AdverseSETmpl<T>::AdverseSETmpl (DocumentImpl* pDoc)
    : EnumAdverseSETypeTmpl<T>(pDoc)
{
}


template<class T>
AdverseSETmpl<T>::~AdverseSETmpl ()
{
}




template <class T>
void AdverseSETmpl<T>::toXml (IStream& stream)
{
    static const wchar_t* kstrElementName = L"AdverseSE";
    stream.write(L"<");
    stream.write(kstrElementName);
    stream.write(L">");
    this->toStream(stream);
    stream.write(L"</");
    stream.write(kstrElementName);
    stream.write(L">");
}

template <class T>
Object::ValidityEnum AdverseSETmpl<T>::validate (IValidationEventSink* pEventSink) const
{
    Object::ValidityEnum returnCode = Object::kValid;
    returnCode = this->ObjectTmpl<T>::validate(pEventSink);
    return returnCode;
}

}; // namespace : LX
