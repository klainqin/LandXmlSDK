#include "stdafx.h"
#include "LXTypes.h"
#include "Definition.h"
#include "Pnts.h"
#include "FacesCollection.h"
#include "FeatureCollection.h"
#include "LXTypesTmpl.h"
#include "DefinitionImpl.h"
#include "PntsImpl.h"
#include "FacesCollectionImpl.h"
#include "FeatureCollectionImpl.h"
#include "LXTypesTmpl.inl"

namespace LX
{


template<class T>
DefinitionTmpl<T>::DefinitionTmpl (DocumentImpl* pDoc)
    : ObjectTmpl<T>(pDoc)
{
    m_Pnts = NULL;
    m_Faces = createFacesCollectionObject(pDoc);
    m_Feature = createFeatureCollectionObject(pDoc);
    m_SurfType = EnumSurfTypeEnum::Values::k_null;
    m_bSurfType_valueSet = false;
    m_Area2DSurf = 0.0;
    m_bArea2DSurf_valueSet = false;
    m_Area3DSurf = 0.0;
    m_bArea3DSurf_valueSet = false;
    m_ElevMax = 0.0;
    m_bElevMax_valueSet = false;
    m_ElevMin = 0.0;
    m_bElevMin_valueSet = false;
}


template<class T>
DefinitionTmpl<T>::~DefinitionTmpl ()
{
    if (m_Pnts != NULL)
    {
        m_Pnts->release();
        m_Pnts = NULL;
    }
    if (m_Faces != NULL)
    {
        m_Faces->release();
        m_Faces = NULL;
    }
    if (m_Feature != NULL)
    {
        m_Feature->release();
        m_Feature = NULL;
    }
}

template <class T>
FacesCollection& DefinitionTmpl<T>::Faces()
{
    return *m_Faces;
}

template <class T>
const FacesCollection& DefinitionTmpl<T>::Faces() const
{
    return *m_Faces;
}

template <class T>
FeatureCollection& DefinitionTmpl<T>::Feature()
{
    return *m_Feature;
}

template <class T>
const FeatureCollection& DefinitionTmpl<T>::Feature() const
{
    return *m_Feature;
}


template <class T>
Pnts* DefinitionTmpl<T>::getPnts() const
{
    return m_Pnts;
}

template <class T>
void DefinitionTmpl<T>::setPnts(Pnts* pValue)
{
    m_Pnts = pValue;
}


template <class T>
EnumSurfTypeEnum::Values DefinitionTmpl<T>::getSurfType() const
{
    return m_SurfType;
}

template <class T>
void DefinitionTmpl<T>::setSurfType(EnumSurfTypeEnum::Values value)
{
    m_SurfType = value;
    m_bSurfType_valueSet = true;
}

template <class T>
bool DefinitionTmpl<T>::hasValue_SurfType() const
{
    return m_bSurfType_valueSet;
}

template <class T>
void DefinitionTmpl<T>::resetValue_SurfType()
{
    m_bSurfType_valueSet = false;
}


template <class T>
double DefinitionTmpl<T>::getArea2DSurf() const
{
    return m_Area2DSurf;
}

template <class T>
void DefinitionTmpl<T>::setArea2DSurf(double value)
{
    m_Area2DSurf = value;
    m_bArea2DSurf_valueSet = true;
}

template <class T>
bool DefinitionTmpl<T>::hasValue_Area2DSurf() const
{
    return m_bArea2DSurf_valueSet;
}

template <class T>
void DefinitionTmpl<T>::resetValue_Area2DSurf()
{
    m_bArea2DSurf_valueSet = false;
}


template <class T>
double DefinitionTmpl<T>::getArea3DSurf() const
{
    return m_Area3DSurf;
}

template <class T>
void DefinitionTmpl<T>::setArea3DSurf(double value)
{
    m_Area3DSurf = value;
    m_bArea3DSurf_valueSet = true;
}

template <class T>
bool DefinitionTmpl<T>::hasValue_Area3DSurf() const
{
    return m_bArea3DSurf_valueSet;
}

template <class T>
void DefinitionTmpl<T>::resetValue_Area3DSurf()
{
    m_bArea3DSurf_valueSet = false;
}


template <class T>
double DefinitionTmpl<T>::getElevMax() const
{
    return m_ElevMax;
}

template <class T>
void DefinitionTmpl<T>::setElevMax(double value)
{
    m_ElevMax = value;
    m_bElevMax_valueSet = true;
}

template <class T>
bool DefinitionTmpl<T>::hasValue_ElevMax() const
{
    return m_bElevMax_valueSet;
}

template <class T>
void DefinitionTmpl<T>::resetValue_ElevMax()
{
    m_bElevMax_valueSet = false;
}


template <class T>
double DefinitionTmpl<T>::getElevMin() const
{
    return m_ElevMin;
}

template <class T>
void DefinitionTmpl<T>::setElevMin(double value)
{
    m_ElevMin = value;
    m_bElevMin_valueSet = true;
}

template <class T>
bool DefinitionTmpl<T>::hasValue_ElevMin() const
{
    return m_bElevMin_valueSet;
}

template <class T>
void DefinitionTmpl<T>::resetValue_ElevMin()
{
    m_bElevMin_valueSet = false;
}



template <class T>
void DefinitionTmpl<T>::toXml (IStream& stream)
{
    static const wchar_t* kstrElementName = L"Definition";
    stream.write(L"<");
    stream.write(kstrElementName);
    if (m_bSurfType_valueSet)
    {
        stream.write(L" surfType=\"");
        EnumSurfTypeEnumImpl::streamOut(m_SurfType, stream);
        stream.write(L"\"");
    }
    if (m_bArea2DSurf_valueSet)
    {
        stream.write(L" area2DSurf=\"");
        DoubleObjectImpl::streamOut(m_Area2DSurf, stream);
        stream.write(L"\"");
    }
    if (m_bArea3DSurf_valueSet)
    {
        stream.write(L" area3DSurf=\"");
        DoubleObjectImpl::streamOut(m_Area3DSurf, stream);
        stream.write(L"\"");
    }
    if (m_bElevMax_valueSet)
    {
        stream.write(L" elevMax=\"");
        DoubleObjectImpl::streamOut(m_ElevMax, stream);
        stream.write(L"\"");
    }
    if (m_bElevMin_valueSet)
    {
        stream.write(L" elevMin=\"");
        DoubleObjectImpl::streamOut(m_ElevMin, stream);
        stream.write(L"\"");
    }
    stream.write(L">");
    if (m_Pnts)
    {
    	m_Pnts->toXml(stream);
    }
    if (m_Faces)
    {
    	m_Faces->toXml(stream);
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
Object::ValidityEnum DefinitionTmpl<T>::validate (IValidationEventSink* pEventSink) const
{
    Object::ValidityEnum returnCode = Object::kValid;
    returnCode = this->ObjectTmpl<T>::validate(pEventSink);
    if (m_Pnts)
    {
        if (m_Pnts->validate(pEventSink) != Object::kValid)
            returnCode = Object::kValidWithInvalidChildren;
    }
    if (m_Faces)
    {
        if (m_Faces->validate(pEventSink) != Object::kValid)
            returnCode = Object::kValidWithInvalidChildren;
    }
    if (m_Feature)
    {
        if (m_Feature->validate(pEventSink) != Object::kValid)
            returnCode = Object::kValidWithInvalidChildren;
    }
    if (!m_bSurfType_valueSet)
    {
        pEventSink->onEvent(IValidationEventSink::EventCode::kRequiredValueNotSet, this, L"SurfType", L"Required value not set");
        returnCode = Object::kInvalid;
    }
    return returnCode;
}

}; // namespace : LX
