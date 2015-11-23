#include "stdafx.h"
#include "LXTypes.h"
#include "InletStruct.h"
#include "FeatureCollection.h"
#include "LXTypesTmpl.h"
#include "InletStructImpl.h"
#include "FeatureCollectionImpl.h"
#include "LXTypesTmpl.inl"

namespace LX
{


template<class T>
InletStructTmpl<T>::InletStructTmpl (DocumentImpl* pDoc)
    : ObjectTmpl<T>(pDoc)
{
    m_Feature = createFeatureCollectionObject(pDoc);
}


template<class T>
InletStructTmpl<T>::~InletStructTmpl ()
{
    if (m_Feature != NULL)
    {
        m_Feature->release();
        m_Feature = NULL;
    }
}

template <class T>
FeatureCollection& InletStructTmpl<T>::Feature()
{
    return *m_Feature;
}

template <class T>
const FeatureCollection& InletStructTmpl<T>::Feature() const
{
    return *m_Feature;
}




template <class T>
void InletStructTmpl<T>::toXml (IStream& stream)
{
    static const wchar_t* kstrElementName = L"InletStruct";
    stream.write(L"<");
    stream.write(kstrElementName);
    stream.write(L">");
    if (m_Feature)
    {
    	m_Feature->toXml(stream);
    }
    stream.write(L"</");
    stream.write(kstrElementName);
    stream.write(L">");
}

template <class T>
Object::ValidityEnum InletStructTmpl<T>::validate (IValidationEventSink* pEventSink) const
{
    Object::ValidityEnum returnCode = Object::kValid;
    returnCode = this->ObjectTmpl<T>::validate(pEventSink);
    if (m_Feature)
    {
        if (m_Feature->validate(pEventSink) != Object::kValid)
            returnCode = Object::kValidWithInvalidChildren;
    }
    return returnCode;
}

}; // namespace : LX
