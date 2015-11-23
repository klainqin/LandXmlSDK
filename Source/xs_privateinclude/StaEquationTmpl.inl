#include "stdafx.h"
#include "LXTypes.h"
#include "StaEquation.h"
#include "FeatureCollection.h"
#include "LXTypesTmpl.h"
#include "StaEquationImpl.h"
#include "FeatureCollectionImpl.h"
#include "LXTypesTmpl.inl"

namespace LX
{


template<class T>
StaEquationTmpl<T>::StaEquationTmpl (DocumentImpl* pDoc)
    : ObjectTmpl<T>(pDoc)
{
    m_Feature = createFeatureCollectionObject(pDoc);
    m_StaAhead = 0.0;
    m_bStaAhead_valueSet = false;
    m_StaBack = 0.0;
    m_bStaBack_valueSet = false;
    m_StaInternal = 0.0;
    m_bStaInternal_valueSet = false;
    m_StaIncrement = EnumStationIncrementDirectionType::Values::k_null;
    m_bStaIncrement_valueSet = false;
    m_Desc = L"";
    m_bDesc_valueSet = false;
}


template<class T>
StaEquationTmpl<T>::~StaEquationTmpl ()
{
    if (m_Feature != NULL)
    {
        m_Feature->release();
        m_Feature = NULL;
    }
}

template <class T>
FeatureCollection& StaEquationTmpl<T>::Feature()
{
    return *m_Feature;
}

template <class T>
const FeatureCollection& StaEquationTmpl<T>::Feature() const
{
    return *m_Feature;
}



template <class T>
double StaEquationTmpl<T>::getStaAhead() const
{
    return m_StaAhead;
}

template <class T>
void StaEquationTmpl<T>::setStaAhead(double value)
{
    m_StaAhead = value;
    m_bStaAhead_valueSet = true;
}

template <class T>
bool StaEquationTmpl<T>::hasValue_StaAhead() const
{
    return m_bStaAhead_valueSet;
}

template <class T>
void StaEquationTmpl<T>::resetValue_StaAhead()
{
    m_bStaAhead_valueSet = false;
}


template <class T>
double StaEquationTmpl<T>::getStaBack() const
{
    return m_StaBack;
}

template <class T>
void StaEquationTmpl<T>::setStaBack(double value)
{
    m_StaBack = value;
    m_bStaBack_valueSet = true;
}

template <class T>
bool StaEquationTmpl<T>::hasValue_StaBack() const
{
    return m_bStaBack_valueSet;
}

template <class T>
void StaEquationTmpl<T>::resetValue_StaBack()
{
    m_bStaBack_valueSet = false;
}


template <class T>
double StaEquationTmpl<T>::getStaInternal() const
{
    return m_StaInternal;
}

template <class T>
void StaEquationTmpl<T>::setStaInternal(double value)
{
    m_StaInternal = value;
    m_bStaInternal_valueSet = true;
}

template <class T>
bool StaEquationTmpl<T>::hasValue_StaInternal() const
{
    return m_bStaInternal_valueSet;
}

template <class T>
void StaEquationTmpl<T>::resetValue_StaInternal()
{
    m_bStaInternal_valueSet = false;
}


template <class T>
EnumStationIncrementDirectionType::Values StaEquationTmpl<T>::getStaIncrement() const
{
    return m_StaIncrement;
}

template <class T>
void StaEquationTmpl<T>::setStaIncrement(EnumStationIncrementDirectionType::Values value)
{
    m_StaIncrement = value;
    m_bStaIncrement_valueSet = true;
}

template <class T>
bool StaEquationTmpl<T>::hasValue_StaIncrement() const
{
    return m_bStaIncrement_valueSet;
}

template <class T>
void StaEquationTmpl<T>::resetValue_StaIncrement()
{
    m_bStaIncrement_valueSet = false;
}


template <class T>
String StaEquationTmpl<T>::getDesc() const
{
    return m_Desc;
}

template <class T>
void StaEquationTmpl<T>::setDesc(String value)
{
    m_Desc = value;
    m_bDesc_valueSet = true;
}

template <class T>
bool StaEquationTmpl<T>::hasValue_Desc() const
{
    return m_bDesc_valueSet;
}

template <class T>
void StaEquationTmpl<T>::resetValue_Desc()
{
    m_bDesc_valueSet = false;
}



template <class T>
void StaEquationTmpl<T>::toXml (IStream& stream)
{
    static const wchar_t* kstrElementName = L"StaEquation";
    stream.write(L"<");
    stream.write(kstrElementName);
    if (m_bStaAhead_valueSet)
    {
        stream.write(L" staAhead=\"");
        DoubleObjectImpl::streamOut(m_StaAhead, stream);
        stream.write(L"\"");
    }
    if (m_bStaBack_valueSet)
    {
        stream.write(L" staBack=\"");
        DoubleObjectImpl::streamOut(m_StaBack, stream);
        stream.write(L"\"");
    }
    if (m_bStaInternal_valueSet)
    {
        stream.write(L" staInternal=\"");
        DoubleObjectImpl::streamOut(m_StaInternal, stream);
        stream.write(L"\"");
    }
    if (m_bStaIncrement_valueSet)
    {
        stream.write(L" staIncrement=\"");
        EnumStationIncrementDirectionTypeImpl::streamOut(m_StaIncrement, stream);
        stream.write(L"\"");
    }
    if (m_bDesc_valueSet)
    {
        stream.write(L" desc=\"");
        StringObjectImpl::streamOut(m_Desc, stream);
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
Object::ValidityEnum StaEquationTmpl<T>::validate (IValidationEventSink* pEventSink) const
{
    Object::ValidityEnum returnCode = Object::kValid;
    returnCode = this->ObjectTmpl<T>::validate(pEventSink);
    if (m_Feature)
    {
        if (m_Feature->validate(pEventSink) != Object::kValid)
            returnCode = Object::kValidWithInvalidChildren;
    }
    if (!m_bStaAhead_valueSet)
    {
        pEventSink->onEvent(IValidationEventSink::EventCode::kRequiredValueNotSet, this, L"StaAhead", L"Required value not set");
        returnCode = Object::kInvalid;
    }
    if (!m_bStaInternal_valueSet)
    {
        pEventSink->onEvent(IValidationEventSink::EventCode::kRequiredValueNotSet, this, L"StaInternal", L"Required value not set");
        returnCode = Object::kInvalid;
    }
    return returnCode;
}

}; // namespace : LX
