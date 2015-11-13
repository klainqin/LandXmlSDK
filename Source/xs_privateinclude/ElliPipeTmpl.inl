#include "stdafx.h"
#include "LXTypes.h"
#include "ElliPipe.h"
#include "FeatureCollection.h"
#include "LXTypesTmpl.h"
#include "ElliPipeImpl.h"
#include "FeatureCollectionImpl.h"
#include "LXTypesTmpl.inl"

namespace LX
{


template<class T>
ElliPipeTmpl<T>::ElliPipeTmpl<T> (DocumentImpl* pDoc)
    : ObjectTmpl<T>(pDoc)
{
    m_Feature = createFeatureCollectionObject(pDoc);
    m_Height = 0.0;
    m_bHeight_valueSet = false;
    m_Span = 0.0;
    m_bSpan_valueSet = false;
    m_Desc = L"";
    m_bDesc_valueSet = false;
    m_HazenWilliams = 0.0;
    m_bHazenWilliams_valueSet = false;
    m_Mannings = 0.0;
    m_bMannings_valueSet = false;
    m_Material = L"";
    m_bMaterial_valueSet = false;
    m_Thickness = 0.0;
    m_bThickness_valueSet = false;
}


template<class T>
ElliPipeTmpl<T>::~ElliPipeTmpl<T> ()
{
    if (m_Feature != NULL)
    {
        m_Feature->release();
        m_Feature = NULL;
    }
}

template <class T>
FeatureCollection& ElliPipeTmpl<T>::Feature()
{
    return *m_Feature;
}

template <class T>
const FeatureCollection& ElliPipeTmpl<T>::Feature() const
{
    return *m_Feature;
}



template <class T>
double ElliPipeTmpl<T>::getHeight() const
{
    return m_Height;
}

template <class T>
void ElliPipeTmpl<T>::setHeight(double value)
{
    m_Height = value;
    m_bHeight_valueSet = true;
}

template <class T>
bool ElliPipeTmpl<T>::hasValue_Height() const
{
    return m_bHeight_valueSet;
}

template <class T>
void ElliPipeTmpl<T>::resetValue_Height()
{
    m_bHeight_valueSet = false;
}


template <class T>
double ElliPipeTmpl<T>::getSpan() const
{
    return m_Span;
}

template <class T>
void ElliPipeTmpl<T>::setSpan(double value)
{
    m_Span = value;
    m_bSpan_valueSet = true;
}

template <class T>
bool ElliPipeTmpl<T>::hasValue_Span() const
{
    return m_bSpan_valueSet;
}

template <class T>
void ElliPipeTmpl<T>::resetValue_Span()
{
    m_bSpan_valueSet = false;
}


template <class T>
String ElliPipeTmpl<T>::getDesc() const
{
    return m_Desc;
}

template <class T>
void ElliPipeTmpl<T>::setDesc(String value)
{
    m_Desc = value;
    m_bDesc_valueSet = true;
}

template <class T>
bool ElliPipeTmpl<T>::hasValue_Desc() const
{
    return m_bDesc_valueSet;
}

template <class T>
void ElliPipeTmpl<T>::resetValue_Desc()
{
    m_bDesc_valueSet = false;
}


template <class T>
double ElliPipeTmpl<T>::getHazenWilliams() const
{
    return m_HazenWilliams;
}

template <class T>
void ElliPipeTmpl<T>::setHazenWilliams(double value)
{
    m_HazenWilliams = value;
    m_bHazenWilliams_valueSet = true;
}

template <class T>
bool ElliPipeTmpl<T>::hasValue_HazenWilliams() const
{
    return m_bHazenWilliams_valueSet;
}

template <class T>
void ElliPipeTmpl<T>::resetValue_HazenWilliams()
{
    m_bHazenWilliams_valueSet = false;
}


template <class T>
double ElliPipeTmpl<T>::getMannings() const
{
    return m_Mannings;
}

template <class T>
void ElliPipeTmpl<T>::setMannings(double value)
{
    m_Mannings = value;
    m_bMannings_valueSet = true;
}

template <class T>
bool ElliPipeTmpl<T>::hasValue_Mannings() const
{
    return m_bMannings_valueSet;
}

template <class T>
void ElliPipeTmpl<T>::resetValue_Mannings()
{
    m_bMannings_valueSet = false;
}


template <class T>
String ElliPipeTmpl<T>::getMaterial() const
{
    return m_Material;
}

template <class T>
void ElliPipeTmpl<T>::setMaterial(String value)
{
    m_Material = value;
    m_bMaterial_valueSet = true;
}

template <class T>
bool ElliPipeTmpl<T>::hasValue_Material() const
{
    return m_bMaterial_valueSet;
}

template <class T>
void ElliPipeTmpl<T>::resetValue_Material()
{
    m_bMaterial_valueSet = false;
}


template <class T>
double ElliPipeTmpl<T>::getThickness() const
{
    return m_Thickness;
}

template <class T>
void ElliPipeTmpl<T>::setThickness(double value)
{
    m_Thickness = value;
    m_bThickness_valueSet = true;
}

template <class T>
bool ElliPipeTmpl<T>::hasValue_Thickness() const
{
    return m_bThickness_valueSet;
}

template <class T>
void ElliPipeTmpl<T>::resetValue_Thickness()
{
    m_bThickness_valueSet = false;
}



template <class T>
void ElliPipeTmpl<T>::toXml (IStream& stream)
{
    static const wchar_t* kstrElementName = L"ElliPipe";
    stream.write(L"<");
    stream.write(kstrElementName);
    if (m_bHeight_valueSet)
    {
        stream.write(L" height=\"");
        DoubleObjectImpl::streamOut(m_Height, stream);
        stream.write(L"\"");
    }
    if (m_bSpan_valueSet)
    {
        stream.write(L" span=\"");
        DoubleObjectImpl::streamOut(m_Span, stream);
        stream.write(L"\"");
    }
    if (m_bDesc_valueSet)
    {
        stream.write(L" desc=\"");
        StringObjectImpl::streamOut(m_Desc, stream);
        stream.write(L"\"");
    }
    if (m_bHazenWilliams_valueSet)
    {
        stream.write(L" hazenWilliams=\"");
        DoubleObjectImpl::streamOut(m_HazenWilliams, stream);
        stream.write(L"\"");
    }
    if (m_bMannings_valueSet)
    {
        stream.write(L" mannings=\"");
        DoubleObjectImpl::streamOut(m_Mannings, stream);
        stream.write(L"\"");
    }
    if (m_bMaterial_valueSet)
    {
        stream.write(L" material=\"");
        StringObjectImpl::streamOut(m_Material, stream);
        stream.write(L"\"");
    }
    if (m_bThickness_valueSet)
    {
        stream.write(L" thickness=\"");
        DoubleObjectImpl::streamOut(m_Thickness, stream);
        stream.write(L"\"");
    }
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
Object::ValidityEnum ElliPipeTmpl<T>::validate (IValidationEventSink* pEventSink) const
{
    Object::ValidityEnum returnCode = Object::kValid;
    returnCode = this->ObjectTmpl<T>::validate(pEventSink);
    if (m_Feature)
    {
        if (m_Feature->validate(pEventSink) != Object::kValid)
            returnCode = Object::kValidWithInvalidChildren;
    }
    if (!m_bHeight_valueSet)
    {
        pEventSink->onEvent(IValidationEventSink::EventCode::kRequiredValueNotSet, this, L"Height", L"Required value not set");
        returnCode = Object::kInvalid;
    }
    if (!m_bSpan_valueSet)
    {
        pEventSink->onEvent(IValidationEventSink::EventCode::kRequiredValueNotSet, this, L"Span", L"Required value not set");
        returnCode = Object::kInvalid;
    }
    return returnCode;
}

}; // namespace : LX
