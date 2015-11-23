#include "stdafx.h"
#include "LXTypes.h"
#include "StructFlow.h"
#include "FeatureCollection.h"
#include "LXTypesTmpl.h"
#include "StructFlowImpl.h"
#include "FeatureCollectionImpl.h"
#include "LXTypesTmpl.inl"

namespace LX
{


template<class T>
StructFlowTmpl<T>::StructFlowTmpl (DocumentImpl* pDoc)
    : ObjectTmpl<T>(pDoc)
{
    m_Feature = createFeatureCollectionObject(pDoc);
    m_LossIn = 0.0;
    m_bLossIn_valueSet = false;
    m_LossOut = 0.0;
    m_bLossOut_valueSet = false;
    m_Desc = L"";
    m_bDesc_valueSet = false;
    m_HglIn = 0.0;
    m_bHglIn_valueSet = false;
    m_HglOut = 0.0;
    m_bHglOut_valueSet = false;
    m_LocalDepression = 0.0;
    m_bLocalDepression_valueSet = false;
    m_SlopeSurf = 0.0;
    m_bSlopeSurf_valueSet = false;
    m_SlopeGutter = 0.0;
    m_bSlopeGutter_valueSet = false;
    m_WidthGutter = 0.0;
    m_bWidthGutter_valueSet = false;
}


template<class T>
StructFlowTmpl<T>::~StructFlowTmpl ()
{
    if (m_Feature != NULL)
    {
        m_Feature->release();
        m_Feature = NULL;
    }
}

template <class T>
FeatureCollection& StructFlowTmpl<T>::Feature()
{
    return *m_Feature;
}

template <class T>
const FeatureCollection& StructFlowTmpl<T>::Feature() const
{
    return *m_Feature;
}



template <class T>
double StructFlowTmpl<T>::getLossIn() const
{
    return m_LossIn;
}

template <class T>
void StructFlowTmpl<T>::setLossIn(double value)
{
    m_LossIn = value;
    m_bLossIn_valueSet = true;
}

template <class T>
bool StructFlowTmpl<T>::hasValue_LossIn() const
{
    return m_bLossIn_valueSet;
}

template <class T>
void StructFlowTmpl<T>::resetValue_LossIn()
{
    m_bLossIn_valueSet = false;
}


template <class T>
double StructFlowTmpl<T>::getLossOut() const
{
    return m_LossOut;
}

template <class T>
void StructFlowTmpl<T>::setLossOut(double value)
{
    m_LossOut = value;
    m_bLossOut_valueSet = true;
}

template <class T>
bool StructFlowTmpl<T>::hasValue_LossOut() const
{
    return m_bLossOut_valueSet;
}

template <class T>
void StructFlowTmpl<T>::resetValue_LossOut()
{
    m_bLossOut_valueSet = false;
}


template <class T>
String StructFlowTmpl<T>::getDesc() const
{
    return m_Desc;
}

template <class T>
void StructFlowTmpl<T>::setDesc(String value)
{
    m_Desc = value;
    m_bDesc_valueSet = true;
}

template <class T>
bool StructFlowTmpl<T>::hasValue_Desc() const
{
    return m_bDesc_valueSet;
}

template <class T>
void StructFlowTmpl<T>::resetValue_Desc()
{
    m_bDesc_valueSet = false;
}


template <class T>
double StructFlowTmpl<T>::getHglIn() const
{
    return m_HglIn;
}

template <class T>
void StructFlowTmpl<T>::setHglIn(double value)
{
    m_HglIn = value;
    m_bHglIn_valueSet = true;
}

template <class T>
bool StructFlowTmpl<T>::hasValue_HglIn() const
{
    return m_bHglIn_valueSet;
}

template <class T>
void StructFlowTmpl<T>::resetValue_HglIn()
{
    m_bHglIn_valueSet = false;
}


template <class T>
double StructFlowTmpl<T>::getHglOut() const
{
    return m_HglOut;
}

template <class T>
void StructFlowTmpl<T>::setHglOut(double value)
{
    m_HglOut = value;
    m_bHglOut_valueSet = true;
}

template <class T>
bool StructFlowTmpl<T>::hasValue_HglOut() const
{
    return m_bHglOut_valueSet;
}

template <class T>
void StructFlowTmpl<T>::resetValue_HglOut()
{
    m_bHglOut_valueSet = false;
}


template <class T>
double StructFlowTmpl<T>::getLocalDepression() const
{
    return m_LocalDepression;
}

template <class T>
void StructFlowTmpl<T>::setLocalDepression(double value)
{
    m_LocalDepression = value;
    m_bLocalDepression_valueSet = true;
}

template <class T>
bool StructFlowTmpl<T>::hasValue_LocalDepression() const
{
    return m_bLocalDepression_valueSet;
}

template <class T>
void StructFlowTmpl<T>::resetValue_LocalDepression()
{
    m_bLocalDepression_valueSet = false;
}


template <class T>
double StructFlowTmpl<T>::getSlopeSurf() const
{
    return m_SlopeSurf;
}

template <class T>
void StructFlowTmpl<T>::setSlopeSurf(double value)
{
    m_SlopeSurf = value;
    m_bSlopeSurf_valueSet = true;
}

template <class T>
bool StructFlowTmpl<T>::hasValue_SlopeSurf() const
{
    return m_bSlopeSurf_valueSet;
}

template <class T>
void StructFlowTmpl<T>::resetValue_SlopeSurf()
{
    m_bSlopeSurf_valueSet = false;
}


template <class T>
double StructFlowTmpl<T>::getSlopeGutter() const
{
    return m_SlopeGutter;
}

template <class T>
void StructFlowTmpl<T>::setSlopeGutter(double value)
{
    m_SlopeGutter = value;
    m_bSlopeGutter_valueSet = true;
}

template <class T>
bool StructFlowTmpl<T>::hasValue_SlopeGutter() const
{
    return m_bSlopeGutter_valueSet;
}

template <class T>
void StructFlowTmpl<T>::resetValue_SlopeGutter()
{
    m_bSlopeGutter_valueSet = false;
}


template <class T>
double StructFlowTmpl<T>::getWidthGutter() const
{
    return m_WidthGutter;
}

template <class T>
void StructFlowTmpl<T>::setWidthGutter(double value)
{
    m_WidthGutter = value;
    m_bWidthGutter_valueSet = true;
}

template <class T>
bool StructFlowTmpl<T>::hasValue_WidthGutter() const
{
    return m_bWidthGutter_valueSet;
}

template <class T>
void StructFlowTmpl<T>::resetValue_WidthGutter()
{
    m_bWidthGutter_valueSet = false;
}



template <class T>
void StructFlowTmpl<T>::toXml (IStream& stream)
{
    static const wchar_t* kstrElementName = L"StructFlow";
    stream.write(L"<");
    stream.write(kstrElementName);
    if (m_bLossIn_valueSet)
    {
        stream.write(L" lossIn=\"");
        DoubleObjectImpl::streamOut(m_LossIn, stream);
        stream.write(L"\"");
    }
    if (m_bLossOut_valueSet)
    {
        stream.write(L" lossOut=\"");
        DoubleObjectImpl::streamOut(m_LossOut, stream);
        stream.write(L"\"");
    }
    if (m_bDesc_valueSet)
    {
        stream.write(L" desc=\"");
        StringObjectImpl::streamOut(m_Desc, stream);
        stream.write(L"\"");
    }
    if (m_bHglIn_valueSet)
    {
        stream.write(L" hglIn=\"");
        DoubleObjectImpl::streamOut(m_HglIn, stream);
        stream.write(L"\"");
    }
    if (m_bHglOut_valueSet)
    {
        stream.write(L" hglOut=\"");
        DoubleObjectImpl::streamOut(m_HglOut, stream);
        stream.write(L"\"");
    }
    if (m_bLocalDepression_valueSet)
    {
        stream.write(L" localDepression=\"");
        DoubleObjectImpl::streamOut(m_LocalDepression, stream);
        stream.write(L"\"");
    }
    if (m_bSlopeSurf_valueSet)
    {
        stream.write(L" slopeSurf=\"");
        DoubleObjectImpl::streamOut(m_SlopeSurf, stream);
        stream.write(L"\"");
    }
    if (m_bSlopeGutter_valueSet)
    {
        stream.write(L" slopeGutter=\"");
        DoubleObjectImpl::streamOut(m_SlopeGutter, stream);
        stream.write(L"\"");
    }
    if (m_bWidthGutter_valueSet)
    {
        stream.write(L" widthGutter=\"");
        DoubleObjectImpl::streamOut(m_WidthGutter, stream);
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
Object::ValidityEnum StructFlowTmpl<T>::validate (IValidationEventSink* pEventSink) const
{
    Object::ValidityEnum returnCode = Object::kValid;
    returnCode = this->ObjectTmpl<T>::validate(pEventSink);
    if (m_Feature)
    {
        if (m_Feature->validate(pEventSink) != Object::kValid)
            returnCode = Object::kValidWithInvalidChildren;
    }
    if (!m_bLossIn_valueSet)
    {
        pEventSink->onEvent(IValidationEventSink::EventCode::kRequiredValueNotSet, this, L"LossIn", L"Required value not set");
        returnCode = Object::kInvalid;
    }
    if (!m_bLossOut_valueSet)
    {
        pEventSink->onEvent(IValidationEventSink::EventCode::kRequiredValueNotSet, this, L"LossOut", L"Required value not set");
        returnCode = Object::kInvalid;
    }
    return returnCode;
}

}; // namespace : LX
