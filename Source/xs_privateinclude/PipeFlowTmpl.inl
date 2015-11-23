#include "stdafx.h"
#include "LXTypes.h"
#include "PipeFlow.h"
#include "FeatureCollection.h"
#include "LXTypesTmpl.h"
#include "PipeFlowImpl.h"
#include "FeatureCollectionImpl.h"
#include "LXTypesTmpl.inl"

namespace LX
{


template<class T>
PipeFlowTmpl<T>::PipeFlowTmpl (DocumentImpl* pDoc)
    : ObjectTmpl<T>(pDoc)
{
    m_Feature = createFeatureCollectionObject(pDoc);
    m_FlowIn = 0.0;
    m_bFlowIn_valueSet = false;
    m_AreaCatchment = 0.0;
    m_bAreaCatchment_valueSet = false;
    m_Desc = L"";
    m_bDesc_valueSet = false;
    m_DepthCritical = 0.0;
    m_bDepthCritical_valueSet = false;
    m_HglDown = 0.0;
    m_bHglDown_valueSet = false;
    m_HglUp = 0.0;
    m_bHglUp_valueSet = false;
    m_Intensity = 0.0;
    m_bIntensity_valueSet = false;
    m_RunoffCoeff = 0.0;
    m_bRunoffCoeff_valueSet = false;
    m_SlopeCritical = 0.0;
    m_bSlopeCritical_valueSet = false;
    m_TimeInlet = 0.0;
    m_bTimeInlet_valueSet = false;
    m_VelocityCritical = 0.0;
    m_bVelocityCritical_valueSet = false;
}


template<class T>
PipeFlowTmpl<T>::~PipeFlowTmpl ()
{
    if (m_Feature != NULL)
    {
        m_Feature->release();
        m_Feature = NULL;
    }
}

template <class T>
FeatureCollection& PipeFlowTmpl<T>::Feature()
{
    return *m_Feature;
}

template <class T>
const FeatureCollection& PipeFlowTmpl<T>::Feature() const
{
    return *m_Feature;
}



template <class T>
double PipeFlowTmpl<T>::getFlowIn() const
{
    return m_FlowIn;
}

template <class T>
void PipeFlowTmpl<T>::setFlowIn(double value)
{
    m_FlowIn = value;
    m_bFlowIn_valueSet = true;
}

template <class T>
bool PipeFlowTmpl<T>::hasValue_FlowIn() const
{
    return m_bFlowIn_valueSet;
}

template <class T>
void PipeFlowTmpl<T>::resetValue_FlowIn()
{
    m_bFlowIn_valueSet = false;
}


template <class T>
double PipeFlowTmpl<T>::getAreaCatchment() const
{
    return m_AreaCatchment;
}

template <class T>
void PipeFlowTmpl<T>::setAreaCatchment(double value)
{
    m_AreaCatchment = value;
    m_bAreaCatchment_valueSet = true;
}

template <class T>
bool PipeFlowTmpl<T>::hasValue_AreaCatchment() const
{
    return m_bAreaCatchment_valueSet;
}

template <class T>
void PipeFlowTmpl<T>::resetValue_AreaCatchment()
{
    m_bAreaCatchment_valueSet = false;
}


template <class T>
String PipeFlowTmpl<T>::getDesc() const
{
    return m_Desc;
}

template <class T>
void PipeFlowTmpl<T>::setDesc(String value)
{
    m_Desc = value;
    m_bDesc_valueSet = true;
}

template <class T>
bool PipeFlowTmpl<T>::hasValue_Desc() const
{
    return m_bDesc_valueSet;
}

template <class T>
void PipeFlowTmpl<T>::resetValue_Desc()
{
    m_bDesc_valueSet = false;
}


template <class T>
double PipeFlowTmpl<T>::getDepthCritical() const
{
    return m_DepthCritical;
}

template <class T>
void PipeFlowTmpl<T>::setDepthCritical(double value)
{
    m_DepthCritical = value;
    m_bDepthCritical_valueSet = true;
}

template <class T>
bool PipeFlowTmpl<T>::hasValue_DepthCritical() const
{
    return m_bDepthCritical_valueSet;
}

template <class T>
void PipeFlowTmpl<T>::resetValue_DepthCritical()
{
    m_bDepthCritical_valueSet = false;
}


template <class T>
double PipeFlowTmpl<T>::getHglDown() const
{
    return m_HglDown;
}

template <class T>
void PipeFlowTmpl<T>::setHglDown(double value)
{
    m_HglDown = value;
    m_bHglDown_valueSet = true;
}

template <class T>
bool PipeFlowTmpl<T>::hasValue_HglDown() const
{
    return m_bHglDown_valueSet;
}

template <class T>
void PipeFlowTmpl<T>::resetValue_HglDown()
{
    m_bHglDown_valueSet = false;
}


template <class T>
double PipeFlowTmpl<T>::getHglUp() const
{
    return m_HglUp;
}

template <class T>
void PipeFlowTmpl<T>::setHglUp(double value)
{
    m_HglUp = value;
    m_bHglUp_valueSet = true;
}

template <class T>
bool PipeFlowTmpl<T>::hasValue_HglUp() const
{
    return m_bHglUp_valueSet;
}

template <class T>
void PipeFlowTmpl<T>::resetValue_HglUp()
{
    m_bHglUp_valueSet = false;
}


template <class T>
double PipeFlowTmpl<T>::getIntensity() const
{
    return m_Intensity;
}

template <class T>
void PipeFlowTmpl<T>::setIntensity(double value)
{
    m_Intensity = value;
    m_bIntensity_valueSet = true;
}

template <class T>
bool PipeFlowTmpl<T>::hasValue_Intensity() const
{
    return m_bIntensity_valueSet;
}

template <class T>
void PipeFlowTmpl<T>::resetValue_Intensity()
{
    m_bIntensity_valueSet = false;
}


template <class T>
double PipeFlowTmpl<T>::getRunoffCoeff() const
{
    return m_RunoffCoeff;
}

template <class T>
void PipeFlowTmpl<T>::setRunoffCoeff(double value)
{
    m_RunoffCoeff = value;
    m_bRunoffCoeff_valueSet = true;
}

template <class T>
bool PipeFlowTmpl<T>::hasValue_RunoffCoeff() const
{
    return m_bRunoffCoeff_valueSet;
}

template <class T>
void PipeFlowTmpl<T>::resetValue_RunoffCoeff()
{
    m_bRunoffCoeff_valueSet = false;
}


template <class T>
double PipeFlowTmpl<T>::getSlopeCritical() const
{
    return m_SlopeCritical;
}

template <class T>
void PipeFlowTmpl<T>::setSlopeCritical(double value)
{
    m_SlopeCritical = value;
    m_bSlopeCritical_valueSet = true;
}

template <class T>
bool PipeFlowTmpl<T>::hasValue_SlopeCritical() const
{
    return m_bSlopeCritical_valueSet;
}

template <class T>
void PipeFlowTmpl<T>::resetValue_SlopeCritical()
{
    m_bSlopeCritical_valueSet = false;
}


template <class T>
double PipeFlowTmpl<T>::getTimeInlet() const
{
    return m_TimeInlet;
}

template <class T>
void PipeFlowTmpl<T>::setTimeInlet(double value)
{
    m_TimeInlet = value;
    m_bTimeInlet_valueSet = true;
}

template <class T>
bool PipeFlowTmpl<T>::hasValue_TimeInlet() const
{
    return m_bTimeInlet_valueSet;
}

template <class T>
void PipeFlowTmpl<T>::resetValue_TimeInlet()
{
    m_bTimeInlet_valueSet = false;
}


template <class T>
double PipeFlowTmpl<T>::getVelocityCritical() const
{
    return m_VelocityCritical;
}

template <class T>
void PipeFlowTmpl<T>::setVelocityCritical(double value)
{
    m_VelocityCritical = value;
    m_bVelocityCritical_valueSet = true;
}

template <class T>
bool PipeFlowTmpl<T>::hasValue_VelocityCritical() const
{
    return m_bVelocityCritical_valueSet;
}

template <class T>
void PipeFlowTmpl<T>::resetValue_VelocityCritical()
{
    m_bVelocityCritical_valueSet = false;
}



template <class T>
void PipeFlowTmpl<T>::toXml (IStream& stream)
{
    static const wchar_t* kstrElementName = L"PipeFlow";
    stream.write(L"<");
    stream.write(kstrElementName);
    if (m_bFlowIn_valueSet)
    {
        stream.write(L" flowIn=\"");
        DoubleObjectImpl::streamOut(m_FlowIn, stream);
        stream.write(L"\"");
    }
    if (m_bAreaCatchment_valueSet)
    {
        stream.write(L" areaCatchment=\"");
        DoubleObjectImpl::streamOut(m_AreaCatchment, stream);
        stream.write(L"\"");
    }
    if (m_bDesc_valueSet)
    {
        stream.write(L" desc=\"");
        StringObjectImpl::streamOut(m_Desc, stream);
        stream.write(L"\"");
    }
    if (m_bDepthCritical_valueSet)
    {
        stream.write(L" depthCritical=\"");
        DoubleObjectImpl::streamOut(m_DepthCritical, stream);
        stream.write(L"\"");
    }
    if (m_bHglDown_valueSet)
    {
        stream.write(L" hglDown=\"");
        DoubleObjectImpl::streamOut(m_HglDown, stream);
        stream.write(L"\"");
    }
    if (m_bHglUp_valueSet)
    {
        stream.write(L" hglUp=\"");
        DoubleObjectImpl::streamOut(m_HglUp, stream);
        stream.write(L"\"");
    }
    if (m_bIntensity_valueSet)
    {
        stream.write(L" intensity=\"");
        DoubleObjectImpl::streamOut(m_Intensity, stream);
        stream.write(L"\"");
    }
    if (m_bRunoffCoeff_valueSet)
    {
        stream.write(L" runoffCoeff=\"");
        DoubleObjectImpl::streamOut(m_RunoffCoeff, stream);
        stream.write(L"\"");
    }
    if (m_bSlopeCritical_valueSet)
    {
        stream.write(L" slopeCritical=\"");
        DoubleObjectImpl::streamOut(m_SlopeCritical, stream);
        stream.write(L"\"");
    }
    if (m_bTimeInlet_valueSet)
    {
        stream.write(L" timeInlet=\"");
        DoubleObjectImpl::streamOut(m_TimeInlet, stream);
        stream.write(L"\"");
    }
    if (m_bVelocityCritical_valueSet)
    {
        stream.write(L" velocityCritical=\"");
        DoubleObjectImpl::streamOut(m_VelocityCritical, stream);
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
Object::ValidityEnum PipeFlowTmpl<T>::validate (IValidationEventSink* pEventSink) const
{
    Object::ValidityEnum returnCode = Object::kValid;
    returnCode = this->ObjectTmpl<T>::validate(pEventSink);
    if (m_Feature)
    {
        if (m_Feature->validate(pEventSink) != Object::kValid)
            returnCode = Object::kValidWithInvalidChildren;
    }
    if (!m_bFlowIn_valueSet)
    {
        pEventSink->onEvent(IValidationEventSink::EventCode::kRequiredValueNotSet, this, L"FlowIn", L"Required value not set");
        returnCode = Object::kInvalid;
    }
    return returnCode;
}

}; // namespace : LX
