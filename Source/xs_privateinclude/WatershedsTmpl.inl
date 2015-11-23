#include "stdafx.h"
#include "LXTypes.h"
#include "Watersheds.h"
#include "WatershedCollection.h"
#include "FeatureCollection.h"
#include "LXTypesTmpl.h"
#include "WatershedsImpl.h"
#include "WatershedCollectionImpl.h"
#include "FeatureCollectionImpl.h"
#include "LXTypesTmpl.inl"

namespace LX
{


template<class T>
WatershedsTmpl<T>::WatershedsTmpl (DocumentImpl* pDoc)
    : ObjectTmpl<T>(pDoc)
{
    m_Watershed = createWatershedCollectionObject(pDoc);
    m_Feature = createFeatureCollectionObject(pDoc);
}


template<class T>
WatershedsTmpl<T>::~WatershedsTmpl ()
{
    if (m_Watershed != NULL)
    {
        m_Watershed->release();
        m_Watershed = NULL;
    }
    if (m_Feature != NULL)
    {
        m_Feature->release();
        m_Feature = NULL;
    }
}

template <class T>
WatershedCollection& WatershedsTmpl<T>::Watershed()
{
    return *m_Watershed;
}

template <class T>
const WatershedCollection& WatershedsTmpl<T>::Watershed() const
{
    return *m_Watershed;
}

template <class T>
FeatureCollection& WatershedsTmpl<T>::Feature()
{
    return *m_Feature;
}

template <class T>
const FeatureCollection& WatershedsTmpl<T>::Feature() const
{
    return *m_Feature;
}




template <class T>
void WatershedsTmpl<T>::toXml (IStream& stream)
{
    static const wchar_t* kstrElementName = L"Watersheds";
    stream.write(L"<");
    stream.write(kstrElementName);
    stream.write(L">");
    if (m_Watershed)
    {
    	m_Watershed->toXml(stream);
    }
    if (m_Feature)
    {
    	m_Feature->toXml(stream);
    }
    stream.write(L"</");
    stream.write(kstrElementName);
    stream.write(L">");
}

template <class T>
Object::ValidityEnum WatershedsTmpl<T>::validate (IValidationEventSink* pEventSink) const
{
    Object::ValidityEnum returnCode = Object::kValid;
    returnCode = this->ObjectTmpl<T>::validate(pEventSink);
    if (m_Watershed)
    {
        if (m_Watershed->validate(pEventSink) != Object::kValid)
            returnCode = Object::kValidWithInvalidChildren;
    }
    if (m_Feature)
    {
        if (m_Feature->validate(pEventSink) != Object::kValid)
            returnCode = Object::kValidWithInvalidChildren;
    }
    return returnCode;
}

}; // namespace : LX
