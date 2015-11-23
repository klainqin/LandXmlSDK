#include "stdafx.h"
#include "LXTypes.h"
#include "CircStruct.h"
#include "FeatureCollection.h"
#include "LXTypesTmpl.h"
#include "CircStructImpl.h"
#include "FeatureCollectionImpl.h"
#include "LXTypesTmpl.inl"

namespace LX
{


template<class T>
CircStructTmpl<T>::CircStructTmpl (DocumentImpl* pDoc)
    : ObjectTmpl<T>(pDoc)
{
    m_Feature = createFeatureCollectionObject(pDoc);
    m_Diameter = 0.0;
    m_bDiameter_valueSet = false;
    m_Desc = L"";
    m_bDesc_valueSet = false;
    m_InletCase = L"";
    m_bInletCase_valueSet = false;
    m_LossCoeff = 0.0;
    m_bLossCoeff_valueSet = false;
    m_Material = L"";
    m_bMaterial_valueSet = false;
    m_Thickness = 0.0;
    m_bThickness_valueSet = false;
}


template<class T>
CircStructTmpl<T>::~CircStructTmpl ()
{
    if (m_Feature != NULL)
    {
        m_Feature->release();
        m_Feature = NULL;
    }
}

template <class T>
FeatureCollection& CircStructTmpl<T>::Feature()
{
    return *m_Feature;
}

template <class T>
const FeatureCollection& CircStructTmpl<T>::Feature() const
{
    return *m_Feature;
}



template <class T>
double CircStructTmpl<T>::getDiameter() const
{
    return m_Diameter;
}

template <class T>
void CircStructTmpl<T>::setDiameter(double value)
{
    m_Diameter = value;
    m_bDiameter_valueSet = true;
}

template <class T>
bool CircStructTmpl<T>::hasValue_Diameter() const
{
    return m_bDiameter_valueSet;
}

template <class T>
void CircStructTmpl<T>::resetValue_Diameter()
{
    m_bDiameter_valueSet = false;
}


template <class T>
String CircStructTmpl<T>::getDesc() const
{
    return m_Desc;
}

template <class T>
void CircStructTmpl<T>::setDesc(String value)
{
    m_Desc = value;
    m_bDesc_valueSet = true;
}

template <class T>
bool CircStructTmpl<T>::hasValue_Desc() const
{
    return m_bDesc_valueSet;
}

template <class T>
void CircStructTmpl<T>::resetValue_Desc()
{
    m_bDesc_valueSet = false;
}


template <class T>
String CircStructTmpl<T>::getInletCase() const
{
    return m_InletCase;
}

template <class T>
void CircStructTmpl<T>::setInletCase(String value)
{
    m_InletCase = value;
    m_bInletCase_valueSet = true;
}

template <class T>
bool CircStructTmpl<T>::hasValue_InletCase() const
{
    return m_bInletCase_valueSet;
}

template <class T>
void CircStructTmpl<T>::resetValue_InletCase()
{
    m_bInletCase_valueSet = false;
}


template <class T>
double CircStructTmpl<T>::getLossCoeff() const
{
    return m_LossCoeff;
}

template <class T>
void CircStructTmpl<T>::setLossCoeff(double value)
{
    m_LossCoeff = value;
    m_bLossCoeff_valueSet = true;
}

template <class T>
bool CircStructTmpl<T>::hasValue_LossCoeff() const
{
    return m_bLossCoeff_valueSet;
}

template <class T>
void CircStructTmpl<T>::resetValue_LossCoeff()
{
    m_bLossCoeff_valueSet = false;
}


template <class T>
String CircStructTmpl<T>::getMaterial() const
{
    return m_Material;
}

template <class T>
void CircStructTmpl<T>::setMaterial(String value)
{
    m_Material = value;
    m_bMaterial_valueSet = true;
}

template <class T>
bool CircStructTmpl<T>::hasValue_Material() const
{
    return m_bMaterial_valueSet;
}

template <class T>
void CircStructTmpl<T>::resetValue_Material()
{
    m_bMaterial_valueSet = false;
}


template <class T>
double CircStructTmpl<T>::getThickness() const
{
    return m_Thickness;
}

template <class T>
void CircStructTmpl<T>::setThickness(double value)
{
    m_Thickness = value;
    m_bThickness_valueSet = true;
}

template <class T>
bool CircStructTmpl<T>::hasValue_Thickness() const
{
    return m_bThickness_valueSet;
}

template <class T>
void CircStructTmpl<T>::resetValue_Thickness()
{
    m_bThickness_valueSet = false;
}



template <class T>
void CircStructTmpl<T>::toXml (IStream& stream)
{
    static const wchar_t* kstrElementName = L"CircStruct";
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
    if (m_bInletCase_valueSet)
    {
        stream.write(L" inletCase=\"");
        StringObjectImpl::streamOut(m_InletCase, stream);
        stream.write(L"\"");
    }
    if (m_bLossCoeff_valueSet)
    {
        stream.write(L" lossCoeff=\"");
        DoubleObjectImpl::streamOut(m_LossCoeff, stream);
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
Object::ValidityEnum CircStructTmpl<T>::validate (IValidationEventSink* pEventSink) const
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
