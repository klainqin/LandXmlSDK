#include "stdafx.h"
#include "LXTypes.h"
#include "Boundaries.h"
#include "BoundaryCollection.h"
#include "FeatureCollection.h"
#include "LXTypesTmpl.h"
#include "BoundariesImpl.h"
#include "BoundaryCollectionImpl.h"
#include "FeatureCollectionImpl.h"
#include "LXTypesTmpl.inl"

namespace LX
{


template<class T>
BoundariesTmpl<T>::BoundariesTmpl (DocumentImpl* pDoc)
    : ObjectTmpl<T>(pDoc)
{
    m_Boundary = createBoundaryCollectionObject(pDoc);
    m_Feature = createFeatureCollectionObject(pDoc);
}


template<class T>
BoundariesTmpl<T>::~BoundariesTmpl ()
{
    if (m_Boundary != NULL)
    {
        m_Boundary->release();
        m_Boundary = NULL;
    }
    if (m_Feature != NULL)
    {
        m_Feature->release();
        m_Feature = NULL;
    }
}

template <class T>
BoundaryCollection& BoundariesTmpl<T>::Boundary()
{
    return *m_Boundary;
}

template <class T>
const BoundaryCollection& BoundariesTmpl<T>::Boundary() const
{
    return *m_Boundary;
}

template <class T>
FeatureCollection& BoundariesTmpl<T>::Feature()
{
    return *m_Feature;
}

template <class T>
const FeatureCollection& BoundariesTmpl<T>::Feature() const
{
    return *m_Feature;
}




template <class T>
void BoundariesTmpl<T>::toXml (IStream& stream)
{
    static const wchar_t* kstrElementName = L"Boundaries";
    stream.write(L"<");
    stream.write(kstrElementName);
    stream.write(L">");
    if (m_Boundary)
    {
    	m_Boundary->toXml(stream);
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
Object::ValidityEnum BoundariesTmpl<T>::validate (IValidationEventSink* pEventSink) const
{
    Object::ValidityEnum returnCode = Object::kValid;
    returnCode = this->ObjectTmpl<T>::validate(pEventSink);
    if (m_Boundary)
    {
        if (m_Boundary->validate(pEventSink) != Object::kValid)
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
