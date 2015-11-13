#include "stdafx.h"
#include "LXTypes.h"
#include "Contours.h"
#include "ContourCollection.h"
#include "FeatureCollection.h"
#include "LXTypesTmpl.h"
#include "ContoursImpl.h"
#include "ContourCollectionImpl.h"
#include "FeatureCollectionImpl.h"
#include "LXTypesTmpl.inl"

namespace LX
{


template<class T>
ContoursTmpl<T>::ContoursTmpl<T> (DocumentImpl* pDoc)
    : ObjectTmpl<T>(pDoc)
{
    m_Contour = createContourCollectionObject(pDoc);
    m_Feature = createFeatureCollectionObject(pDoc);
}


template<class T>
ContoursTmpl<T>::~ContoursTmpl<T> ()
{
    if (m_Contour != NULL)
    {
        m_Contour->release();
        m_Contour = NULL;
    }
    if (m_Feature != NULL)
    {
        m_Feature->release();
        m_Feature = NULL;
    }
}

template <class T>
ContourCollection& ContoursTmpl<T>::Contour()
{
    return *m_Contour;
}

template <class T>
const ContourCollection& ContoursTmpl<T>::Contour() const
{
    return *m_Contour;
}

template <class T>
FeatureCollection& ContoursTmpl<T>::Feature()
{
    return *m_Feature;
}

template <class T>
const FeatureCollection& ContoursTmpl<T>::Feature() const
{
    return *m_Feature;
}




template <class T>
void ContoursTmpl<T>::toXml (IStream& stream)
{
    static const wchar_t* kstrElementName = L"Contours";
    stream.write(L"<");
    stream.write(kstrElementName);
    stream.write(L">");
    if (m_Contour)
    {
    	m_Contour->toXml(stream);
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
Object::ValidityEnum ContoursTmpl<T>::validate (IValidationEventSink* pEventSink) const
{
    Object::ValidityEnum returnCode = Object::kValid;
    returnCode = this->ObjectTmpl<T>::validate(pEventSink);
    if (m_Contour)
    {
        if (m_Contour->validate(pEventSink) != Object::kValid)
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
