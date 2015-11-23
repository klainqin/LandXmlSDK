#include "stdafx.h"
#include "LXTypes.h"
#include "CircPipe.h"
#include "FeatureCollection.h"
#include "LXTypesTmpl.h"
#include "CircPipeImpl.h"
#include "FeatureCollectionImpl.h"
#include "LXTypesTmpl.inl"

namespace LX
{


template<class T>
CircPipeTmpl<T>::CircPipeTmpl (DocumentImpl* pDoc)
    : ObjectTmpl<T>(pDoc)
{
    m_Feature = createFeatureCollectionObject(pDoc);
    m_Diameter = 0.0;
    m_bDiameter_valueSet = false;
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
CircPipeTmpl<T>::~CircPipeTmpl ()
{
    if (m_Feature != NULL)
    {
        m_Feature->release();
        m_Feature = NULL;
    }
}

template <class T>
FeatureCollection& CircPipeTmpl<T>::Feature()
{
    return *m_Feature;
}

template <class T>
const FeatureCollection& CircPipeTmpl<T>::Feature() const
{
    return *m_Feature;
}



template <class T>
double CircPipeTmpl<T>::getDiameter() const
{
    return m_Diameter;
}

template <class T>
void CircPipeTmpl<T>::setDiameter(double value)
{
    m_Diameter = value;
    m_bDiameter_valueSet = true;
}

template <class T>
bool CircPipeTmpl<T>::hasValue_Diameter() const
{
    return m_bDiameter_valueSet;
}

template <class T>
void CircPipeTmpl<T>::resetValue_Diameter()
{
    m_bDiameter_valueSet = false;
}


template <class T>
String CircPipeTmpl<T>::getDesc() const
{
    return m_Desc;
}

template <class T>
void CircPipeTmpl<T>::setDesc(String value)
{
    m_Desc = value;
    m_bDesc_valueSet = true;
}

template <class T>
bool CircPipeTmpl<T>::hasValue_Desc() const
{
    return m_bDesc_valueSet;
}

template <class T>
void CircPipeTmpl<T>::resetValue_Desc()
{
    m_bDesc_valueSet = false;
}


template <class T>
double CircPipeTmpl<T>::getHazenWilliams() const
{
    return m_HazenWilliams;
}

template <class T>
void CircPipeTmpl<T>::setHazenWilliams(double value)
{
    m_HazenWilliams = value;
    m_bHazenWilliams_valueSet = true;
}

template <class T>
bool CircPipeTmpl<T>::hasValue_HazenWilliams() const
{
    return m_bHazenWilliams_valueSet;
}

template <class T>
void CircPipeTmpl<T>::resetValue_HazenWilliams()
{
    m_bHazenWilliams_valueSet = false;
}


template <class T>
double CircPipeTmpl<T>::getMannings() const
{
    return m_Mannings;
}

template <class T>
void CircPipeTmpl<T>::setMannings(double value)
{
    m_Mannings = value;
    m_bMannings_valueSet = true;
}

template <class T>
bool CircPipeTmpl<T>::hasValue_Mannings() const
{
    return m_bMannings_valueSet;
}

template <class T>
void CircPipeTmpl<T>::resetValue_Mannings()
{
    m_bMannings_valueSet = false;
}


template <class T>
String CircPipeTmpl<T>::getMaterial() const
{
    return m_Material;
}

template <class T>
void CircPipeTmpl<T>::setMaterial(String value)
{
    m_Material = value;
    m_bMaterial_valueSet = true;
}

template <class T>
bool CircPipeTmpl<T>::hasValue_Material() const
{
    return m_bMaterial_valueSet;
}

template <class T>
void CircPipeTmpl<T>::resetValue_Material()
{
    m_bMaterial_valueSet = false;
}


template <class T>
double CircPipeTmpl<T>::getThickness() const
{
    return m_Thickness;
}

template <class T>
void CircPipeTmpl<T>::setThickness(double value)
{
    m_Thickness = value;
    m_bThickness_valueSet = true;
}

template <class T>
bool CircPipeTmpl<T>::hasValue_Thickness() const
{
    return m_bThickness_valueSet;
}

template <class T>
void CircPipeTmpl<T>::resetValue_Thickness()
{
    m_bThickness_valueSet = false;
}



template <class T>
void CircPipeTmpl<T>::toXml (IStream& stream)
{
    static const wchar_t* kstrElementName = L"CircPipe";
    stream.write(L"<");
    stream.write(kstrElementName);
    if (m_bDiameter_valueSet)
    {
        stream.write(L" diameter=\"");
        DoubleObjectImpl::streamOut(m_Diameter, stream);
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
Object::ValidityEnum CircPipeTmpl<T>::validate (IValidationEventSink* pEventSink) const
{
    Object::ValidityEnum returnCode = Object::kValid;
    returnCode = this->ObjectTmpl<T>::validate(pEventSink);
    if (m_Feature)
    {
        if (m_Feature->validate(pEventSink) != Object::kValid)
            returnCode = Object::kValidWithInvalidChildren;
    }
    if (!m_bDiameter_valueSet)
    {
        pEventSink->onEvent(IValidationEventSink::EventCode::kRequiredValueNotSet, this, L"Diameter", L"Required value not set");
        returnCode = Object::kInvalid;
    }
    return returnCode;
}

}; // namespace : LX
