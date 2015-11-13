#include "stdafx.h"
#include "LXTypes.h"
#include "Contour.h"
#include "PntList2D.h"
#include "FeatureCollection.h"
#include "LXTypesTmpl.h"
#include "ContourImpl.h"
#include "PntList2DImpl.h"
#include "FeatureCollectionImpl.h"
#include "LXTypesTmpl.inl"

namespace LX
{


template<class T>
ContourTmpl<T>::ContourTmpl<T> (DocumentImpl* pDoc)
    : ObjectTmpl<T>(pDoc)
{
    m_PntList2D = NULL;
    m_Feature = createFeatureCollectionObject(pDoc);
    m_Elev = 0.0;
    m_bElev_valueSet = false;
}


template<class T>
ContourTmpl<T>::~ContourTmpl<T> ()
{
    if (m_PntList2D != NULL)
    {
        m_PntList2D->release();
        m_PntList2D = NULL;
    }
    if (m_Feature != NULL)
    {
        m_Feature->release();
        m_Feature = NULL;
    }
}

template <class T>
FeatureCollection& ContourTmpl<T>::Feature()
{
    return *m_Feature;
}

template <class T>
const FeatureCollection& ContourTmpl<T>::Feature() const
{
    return *m_Feature;
}


template <class T>
PntList2D* ContourTmpl<T>::getPntList2D() const
{
    return m_PntList2D;
}

template <class T>
void ContourTmpl<T>::setPntList2D(PntList2D* pValue)
{
    m_PntList2D = pValue;
}


template <class T>
double ContourTmpl<T>::getElev() const
{
    return m_Elev;
}

template <class T>
void ContourTmpl<T>::setElev(double value)
{
    m_Elev = value;
    m_bElev_valueSet = true;
}

template <class T>
bool ContourTmpl<T>::hasValue_Elev() const
{
    return m_bElev_valueSet;
}

template <class T>
void ContourTmpl<T>::resetValue_Elev()
{
    m_bElev_valueSet = false;
}



template <class T>
void ContourTmpl<T>::toXml (IStream& stream)
{
    static const wchar_t* kstrElementName = L"Contour";
    stream.write(L"<");
    stream.write(kstrElementName);
    if (m_bElev_valueSet)
    {
        stream.write(L" elev=\"");
        DoubleObjectImpl::streamOut(m_Elev, stream);
        stream.write(L"\"");
    }
    stream.write(L">");
    if (m_PntList2D)
    {
    	m_PntList2D->toXml(stream);
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
Object::ValidityEnum ContourTmpl<T>::validate (IValidationEventSink* pEventSink) const
{
    Object::ValidityEnum returnCode = Object::kValid;
    returnCode = this->ObjectTmpl<T>::validate(pEventSink);
    if (m_PntList2D)
    {
        if (m_PntList2D->validate(pEventSink) != Object::kValid)
            returnCode = Object::kValidWithInvalidChildren;
    }
    if (m_Feature)
    {
        if (m_Feature->validate(pEventSink) != Object::kValid)
            returnCode = Object::kValidWithInvalidChildren;
    }
    if (!m_bElev_valueSet)
    {
        pEventSink->onEvent(IValidationEventSink::EventCode::kRequiredValueNotSet, this, L"Elev", L"Required value not set");
        returnCode = Object::kInvalid;
    }
    return returnCode;
}

}; // namespace : LX
