#include "stdafx.h"
#include "LXTypes.h"
#include "AlignPIs.h"
#include "AlignPICollection.h"
#include "LXTypesTmpl.h"
#include "AlignPIsImpl.h"
#include "AlignPICollectionImpl.h"
#include "LXTypesTmpl.inl"

namespace LX
{


template<class T>
AlignPIsTmpl<T>::AlignPIsTmpl (DocumentImpl* pDoc)
    : ObjectTmpl<T>(pDoc)
{
    m_AlignPI = createAlignPICollectionObject(pDoc);
}


template<class T>
AlignPIsTmpl<T>::~AlignPIsTmpl ()
{
    if (m_AlignPI != NULL)
    {
        m_AlignPI->release();
        m_AlignPI = NULL;
    }
}

template <class T>
AlignPICollection& AlignPIsTmpl<T>::AlignPI()
{
    return *m_AlignPI;
}

template <class T>
const AlignPICollection& AlignPIsTmpl<T>::AlignPI() const
{
    return *m_AlignPI;
}




template <class T>
void AlignPIsTmpl<T>::toXml (IStream& stream)
{
    static const wchar_t* kstrElementName = L"AlignPIs";
    stream.write(L"<");
    stream.write(kstrElementName);
    stream.write(L">");
    if (m_AlignPI)
    {
    	m_AlignPI->toXml(stream);
    }
    stream.write(L"</");
    stream.write(kstrElementName);
    stream.write(L">");
}

template <class T>
Object::ValidityEnum AlignPIsTmpl<T>::validate (IValidationEventSink* pEventSink) const
{
    Object::ValidityEnum returnCode = Object::kValid;
    returnCode = this->ObjectTmpl<T>::validate(pEventSink);
    if (m_AlignPI)
    {
        if (m_AlignPI->validate(pEventSink) != Object::kValid)
            returnCode = Object::kValidWithInvalidChildren;
    }
    return returnCode;
}

}; // namespace : LX
