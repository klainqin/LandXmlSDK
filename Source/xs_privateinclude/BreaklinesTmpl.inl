#include "stdafx.h"
#include "LXTypes.h"
#include "Breaklines.h"
#include "BreaklineCollection.h"
#include "RetWallCollection.h"
#include "FeatureCollection.h"
#include "LXTypesTmpl.h"
#include "BreaklinesImpl.h"
#include "BreaklineCollectionImpl.h"
#include "RetWallCollectionImpl.h"
#include "FeatureCollectionImpl.h"
#include "LXTypesTmpl.inl"

namespace LX
{


template<class T>
BreaklinesTmpl<T>::BreaklinesTmpl<T> (DocumentImpl* pDoc)
    : ObjectTmpl<T>(pDoc)
{
    m_Breakline = createBreaklineCollectionObject(pDoc);
    m_RetWall = createRetWallCollectionObject(pDoc);
    m_Feature = createFeatureCollectionObject(pDoc);
}


template<class T>
BreaklinesTmpl<T>::~BreaklinesTmpl<T> ()
{
    if (m_Breakline != NULL)
    {
        m_Breakline->release();
        m_Breakline = NULL;
    }
    if (m_RetWall != NULL)
    {
        m_RetWall->release();
        m_RetWall = NULL;
    }
    if (m_Feature != NULL)
    {
        m_Feature->release();
        m_Feature = NULL;
    }
}

template <class T>
BreaklineCollection& BreaklinesTmpl<T>::Breakline()
{
    return *m_Breakline;
}

template <class T>
const BreaklineCollection& BreaklinesTmpl<T>::Breakline() const
{
    return *m_Breakline;
}

template <class T>
RetWallCollection& BreaklinesTmpl<T>::RetWall()
{
    return *m_RetWall;
}

template <class T>
const RetWallCollection& BreaklinesTmpl<T>::RetWall() const
{
    return *m_RetWall;
}

template <class T>
FeatureCollection& BreaklinesTmpl<T>::Feature()
{
    return *m_Feature;
}

template <class T>
const FeatureCollection& BreaklinesTmpl<T>::Feature() const
{
    return *m_Feature;
}




template <class T>
void BreaklinesTmpl<T>::toXml (IStream& stream)
{
    static const wchar_t* kstrElementName = L"Breaklines";
    stream.write(L"<");
    stream.write(kstrElementName);
    stream.write(L">");
    if (m_Breakline)
    {
    	m_Breakline->toXml(stream);
    }
    if (m_RetWall)
    {
    	m_RetWall->toXml(stream);
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
Object::ValidityEnum BreaklinesTmpl<T>::validate (IValidationEventSink* pEventSink) const
{
    Object::ValidityEnum returnCode = Object::kValid;
    returnCode = this->ObjectTmpl<T>::validate(pEventSink);
    if (m_Breakline)
    {
        if (m_Breakline->validate(pEventSink) != Object::kValid)
            returnCode = Object::kValidWithInvalidChildren;
    }
    if (m_RetWall)
    {
        if (m_RetWall->validate(pEventSink) != Object::kValid)
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
