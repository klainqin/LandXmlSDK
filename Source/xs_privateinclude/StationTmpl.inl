#include "stdafx.h"
#include "LXTypes.h"
#include "Station.h"
#include "LXTypesTmpl.h"
#include "StationImpl.h"
#include "LXTypesTmpl.inl"

namespace LX
{


template<class T>
StationTmpl<T>::StationTmpl (DocumentImpl* pDoc)
    : DoubleObjectTmpl<T>(pDoc)
{
}


template<class T>
StationTmpl<T>::~StationTmpl ()
{
}




template <class T>
void StationTmpl<T>::toXml (IStream& stream)
{
    static const wchar_t* kstrElementName = L"Station";
    stream.write(L"<");
    stream.write(kstrElementName);
    stream.write(L">");
    this->toStream(stream);
    stream.write(L"</");
    stream.write(kstrElementName);
    stream.write(L">");
}

template <class T>
Object::ValidityEnum StationTmpl<T>::validate (IValidationEventSink* pEventSink) const
{
    Object::ValidityEnum returnCode = Object::kValid;
    returnCode = this->ObjectTmpl<T>::validate(pEventSink);
    return returnCode;
}

}; // namespace : LX
