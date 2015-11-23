#include "stdafx.h"
#include "LXTypes.h"
#include "RectStruct.h"
#include "FeatureCollection.h"
#include "LXTypesTmpl.h"
#include "RectStructImpl.h"
#include "FeatureCollectionImpl.h"
#include "LXTypesTmpl.inl"

namespace LX
{


template<class T>
RectStructTmpl<T>::RectStructTmpl (DocumentImpl* pDoc)
    : ObjectTmpl<T>(pDoc)
{
    m_Feature = createFeatureCollectionObject(pDoc);
    m_Length = 0.0;
    m_bLength_valueSet = false;
    m_LengthDir = 0.0;
    m_bLengthDir_valueSet = false;
    m_Width = 0.0;
    m_bWidth_valueSet = false;
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
RectStructTmpl<T>::~RectStructTmpl ()
{
    if (m_Feature != NULL)
    {
        m_Feature->release();
        m_Feature = NULL;
    }
}

template <class T>
FeatureCollection& RectStructTmpl<T>::Feature()
{
    return *m_Feature;
}

template <class T>
const FeatureCollection& RectStructTmpl<T>::Feature() const
{
    return *m_Feature;
}



template <class T>
double RectStructTmpl<T>::getLength() const
{
    return m_Length;
}

template <class T>
void RectStructTmpl<T>::setLength(double value)
{
    m_Length = value;
    m_bLength_valueSet = true;
}

template <class T>
bool RectStructTmpl<T>::hasValue_Length() const
{
    return m_bLength_valueSet;
}

template <class T>
void RectStructTmpl<T>::resetValue_Length()
{
    m_bLength_valueSet = false;
}


template <class T>
double RectStructTmpl<T>::getLengthDir() const
{
    return m_LengthDir;
}

template <class T>
void RectStructTmpl<T>::setLengthDir(double value)
{
    m_LengthDir = value;
    m_bLengthDir_valueSet = true;
}

template <class T>
bool RectStructTmpl<T>::hasValue_LengthDir() const
{
    return m_bLengthDir_valueSet;
}

template <class T>
void RectStructTmpl<T>::resetValue_LengthDir()
{
    m_bLengthDir_valueSet = false;
}


template <class T>
double RectStructTmpl<T>::getWidth() const
{
    return m_Width;
}

template <class T>
void RectStructTmpl<T>::setWidth(double value)
{
    m_Width = value;
    m_bWidth_valueSet = true;
}

template <class T>
bool RectStructTmpl<T>::hasValue_Width() const
{
    return m_bWidth_valueSet;
}

template <class T>
void RectStructTmpl<T>::resetValue_Width()
{
    m_bWidth_valueSet = false;
}


template <class T>
String RectStructTmpl<T>::getDesc() const
{
    return m_Desc;
}

template <class T>
void RectStructTmpl<T>::setDesc(String value)
{
    m_Desc = value;
    m_bDesc_valueSet = true;
}

template <class T>
bool RectStructTmpl<T>::hasValue_Desc() const
{
    return m_bDesc_valueSet;
}

template <class T>
void RectStructTmpl<T>::resetValue_Desc()
{
    m_bDesc_valueSet = false;
}


template <class T>
String RectStructTmpl<T>::getInletCase() const
{
    return m_InletCase;
}

template <class T>
void RectStructTmpl<T>::setInletCase(String value)
{
    m_InletCase = value;
    m_bInletCase_valueSet = true;
}

template <class T>
bool RectStructTmpl<T>::hasValue_InletCase() const
{
    return m_bInletCase_valueSet;
}

template <class T>
void RectStructTmpl<T>::resetValue_InletCase()
{
    m_bInletCase_valueSet = false;
}


template <class T>
double RectStructTmpl<T>::getLossCoeff() const
{
    return m_LossCoeff;
}

template <class T>
void RectStructTmpl<T>::setLossCoeff(double value)
{
    m_LossCoeff = value;
    m_bLossCoeff_valueSet = true;
}

template <class T>
bool RectStructTmpl<T>::hasValue_LossCoeff() const
{
    return m_bLossCoeff_valueSet;
}

template <class T>
void RectStructTmpl<T>::resetValue_LossCoeff()
{
    m_bLossCoeff_valueSet = false;
}


template <class T>
String RectStructTmpl<T>::getMaterial() const
{
    return m_Material;
}

template <class T>
void RectStructTmpl<T>::setMaterial(String value)
{
    m_Material = value;
    m_bMaterial_valueSet = true;
}

template <class T>
bool RectStructTmpl<T>::hasValue_Material() const
{
    return m_bMaterial_valueSet;
}

template <class T>
void RectStructTmpl<T>::resetValue_Material()
{
    m_bMaterial_valueSet = false;
}


template <class T>
double RectStructTmpl<T>::getThickness() const
{
    return m_Thickness;
}

template <class T>
void RectStructTmpl<T>::setThickness(double value)
{
    m_Thickness = value;
    m_bThickness_valueSet = true;
}

template <class T>
bool RectStructTmpl<T>::hasValue_Thickness() const
{
    return m_bThickness_valueSet;
}

template <class T>
void RectStructTmpl<T>::resetValue_Thickness()
{
    m_bThickness_valueSet = false;
}



template <class T>
void RectStructTmpl<T>::toXml (IStream& stream)
{
    static const wchar_t* kstrElementName = L"RectStruct";
    stream.write(L"<");
    stream.write(kstrElementName);
    if (m_bLength_valueSet)
    {
        stream.write(L" length=\"");
        DoubleObjectImpl::streamOut(m_Length, stream);
        stream.write(L"\"");
    }
    if (m_bLengthDir_valueSet)
    {
        stream.write(L" lengthDir=\"");
        DoubleObjectImpl::streamOut(m_LengthDir, stream);
        stream.write(L"\"");
    }
    if (m_bWidth_valueSet)
    {
        stream.write(L" width=\"");
        DoubleObjectImpl::streamOut(m_Width, stream);
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
Object::ValidityEnum RectStructTmpl<T>::validate (IValidationEventSink* pEventSink) const
{
    Object::ValidityEnum returnCode = Object::kValid;
    returnCode = this->ObjectTmpl<T>::validate(pEventSink);
    if (m_Feature)
    {
        if (m_Feature->validate(pEventSink) != Object::kValid)
            returnCode = Object::kValidWithInvalidChildren;
    }
    if (!m_bLength_valueSet)
    {
        pEventSink->onEvent(IValidationEventSink::EventCode::kRequiredValueNotSet, this, L"Length", L"Required value not set");
        returnCode = Object::kInvalid;
    }
    if (!m_bWidth_valueSet)
    {
        pEventSink->onEvent(IValidationEventSink::EventCode::kRequiredValueNotSet, this, L"Width", L"Required value not set");
        returnCode = Object::kInvalid;
    }
    return returnCode;
}

}; // namespace : LX
