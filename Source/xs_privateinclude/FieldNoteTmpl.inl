#include "stdafx.h"
#include "LXTypes.h"
#include "FieldNote.h"
#include "LXTypesTmpl.h"
#include "FieldNoteImpl.h"
#include "LXTypesTmpl.inl"

namespace LX
{


template<class T>
FieldNoteTmpl<T>::FieldNoteTmpl<T> (DocumentImpl* pDoc)
    : StringObjectTmpl<T>(pDoc)
{
}


template<class T>
FieldNoteTmpl<T>::~FieldNoteTmpl<T> ()
{
}




template <class T>
void FieldNoteTmpl<T>::toXml (IStream& stream)
{
    static const wchar_t* kstrElementName = L"FieldNote";
    stream.write(L"<");
    stream.write(kstrElementName);
    stream.write(L">");
    toStream(stream);
    stream.write(L"</");
    stream.write(kstrElementName);
    stream.write(L">");
}

template <class T>
Object::ValidityEnum FieldNoteTmpl<T>::validate (IValidationEventSink* pEventSink) const
{
    Object::ValidityEnum returnCode = Object::kValid;
    returnCode = this->ObjectTmpl<T>::validate(pEventSink);
    return returnCode;
}

}; // namespace : LX
