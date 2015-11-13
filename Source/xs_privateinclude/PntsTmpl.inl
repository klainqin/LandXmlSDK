#include "stdafx.h"
#include "LXTypes.h"
#include "Pnts.h"
#include "PCollection.h"
#include "LXTypesTmpl.h"
#include "PntsImpl.h"
#include "PCollectionImpl.h"
#include "LXTypesTmpl.inl"

namespace LX
{


template<class T>
PntsTmpl<T>::PntsTmpl<T> (DocumentImpl* pDoc)
    : ObjectTmpl<T>(pDoc)
{
    m_P = createPCollectionObject(pDoc);
}


template<class T>
PntsTmpl<T>::~PntsTmpl<T> ()
{
    if (m_P != NULL)
    {
        m_P->release();
        m_P = NULL;
    }
}

template <class T>
PCollection& PntsTmpl<T>::P()
{
    return *m_P;
}

template <class T>
const PCollection& PntsTmpl<T>::P() const
{
    return *m_P;
}




template <class T>
void PntsTmpl<T>::toXml (IStream& stream)
{
    static const wchar_t* kstrElementName = L"Pnts";
    stream.write(L"<");
    stream.write(kstrElementName);
    stream.write(L">");
    if (m_P)
    {
    	m_P->toXml(stream);
    }
    stream.write(L"</");
    stream.write(kstrElementName);
    stream.write(L">");
}

template <class T>
Object::ValidityEnum PntsTmpl<T>::validate (IValidationEventSink* pEventSink) const
{
    Object::ValidityEnum returnCode = Object::kValid;
    returnCode = this->ObjectTmpl<T>::validate(pEventSink);
    if (m_P)
    {
        if (m_P->validate(pEventSink) != Object::kValid)
            returnCode = Object::kValidWithInvalidChildren;
    }
    return returnCode;
}

}; // namespace : LX
