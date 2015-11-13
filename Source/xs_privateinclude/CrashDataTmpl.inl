#include "stdafx.h"
#include "LXTypes.h"
#include "CrashData.h"
#include "LXTypesTmpl.h"
#include "CrashDataImpl.h"
#include "LXTypesTmpl.inl"

namespace LX
{


template<class T>
CrashDataTmpl<T>::CrashDataTmpl<T> (DocumentImpl* pDoc)
    : ObjectTmpl<T>(pDoc)
{
}


template<class T>
CrashDataTmpl<T>::~CrashDataTmpl<T> ()
{
}




template <class T>
void CrashDataTmpl<T>::toXml (IStream& stream)
{
    static const wchar_t* kstrElementName = L"CrashData";
    stream.write(L"<");
    stream.write(kstrElementName);
    stream.write(L">");
    stream.write(L"</");
    stream.write(kstrElementName);
    stream.write(L">");
}

template <class T>
Object::ValidityEnum CrashDataTmpl<T>::validate (IValidationEventSink* pEventSink) const
{
    Object::ValidityEnum returnCode = Object::kValid;
    returnCode = this->ObjectTmpl<T>::validate(pEventSink);
    return returnCode;
}

}; // namespace : LX
