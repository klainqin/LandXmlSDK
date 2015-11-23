#include "stdafx.h"
#include "LXTypes.h"
#include "AlignPI.h"
#include "LXTypesTmpl.h"
#include "AlignPIImpl.h"
#include "LXTypesTmpl.inl"

namespace LX
{



template<class T>
AlignPITmpl<T>::AlignPITmpl (DocumentImpl* pDoc)
    : ObjectTmpl<T>(pDoc)
{
    m_PIList = createObjectCollectionObject(pDoc);
}


template<class T>
AlignPITmpl<T>::~AlignPITmpl ()
{
    if (m_PIList != NULL)
    {
        m_PIList->release();
        m_PIList = NULL;
    }
}

template <class T>
ObjectCollection& AlignPITmpl<T>::PIList()
{
    return *m_PIList;
}

template <class T>
const ObjectCollection& AlignPITmpl<T>::PIList() const
{
    return *m_PIList;
}




template <class T>
void AlignPITmpl<T>::toXml (IStream& stream)
{
    static const wchar_t* kstrElementName = L"AlignPI";
    stream.write(L"<");
    stream.write(kstrElementName);
    stream.write(L">");
    if (m_PIList)
    {
    	m_PIList->toXml(stream);
    }
    stream.write(L"</");
    stream.write(kstrElementName);
    stream.write(L">");
}

template <class T>
Object::ValidityEnum AlignPITmpl<T>::validate (IValidationEventSink* pEventSink) const
{
    Object::ValidityEnum returnCode = Object::kValid;
    returnCode = this->ObjectTmpl<T>::validate(pEventSink);
    if (m_PIList)
    {
        if (m_PIList->validate(pEventSink) != Object::kValid)
            returnCode = Object::kValidWithInvalidChildren;
    }
    return returnCode;
}

}; // namespace : LX
