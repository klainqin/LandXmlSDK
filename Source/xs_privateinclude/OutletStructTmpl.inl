#include "stdafx.h"
#include "LXTypes.h"
#include "OutletStruct.h"
#include "FeatureCollection.h"
#include "LXTypesTmpl.h"
#include "OutletStructImpl.h"
#include "FeatureCollectionImpl.h"
#include "LXTypesTmpl.inl"

namespace LX
{


template<class T>
OutletStructTmpl<T>::OutletStructTmpl<T> (DocumentImpl* pDoc)
    : ObjectTmpl<T>(pDoc)
{
    m_Feature = createFeatureCollectionObject(pDoc);
}


template<class T>
OutletStructTmpl<T>::~OutletStructTmpl<T> ()
{
    if (m_Feature != NULL)
    {
        m_Feature->release();
        m_Feature = NULL;
    }
}

template <class T>
FeatureCollection& OutletStructTmpl<T>::Feature()
{
    return *m_Feature;
}

template <class T>
const FeatureCollection& OutletStructTmpl<T>::Feature() const
{
    return *m_Feature;
}




template <class T>
void OutletStructTmpl<T>::toXml (IStream& stream)
{
    static const wchar_t* kstrElementName = L"OutletStruct";
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
Object::ValidityEnum OutletStructTmpl<T>::validate (IValidationEventSink* pEventSink) const
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
