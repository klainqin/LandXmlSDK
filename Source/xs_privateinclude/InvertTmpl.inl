#include "stdafx.h"
#include "LXTypes.h"
#include "Invert.h"
#include "LXTypesTmpl.h"
#include "InvertImpl.h"
#include "LXTypesTmpl.inl"

namespace LX
{


template<class T>
InvertTmpl<T>::InvertTmpl<T> (DocumentImpl* pDoc)
    : ObjectTmpl<T>(pDoc)
{
    m_Desc = L"";
    m_bDesc_valueSet = false;
    m_Elev = 0.0;
    m_bElev_valueSet = false;
    m_FlowDir = EnumInOut::Values::k_null;
    m_bFlowDir_valueSet = false;
    m_RefPipe = L"";
    m_bRefPipe_valueSet = false;
}


template<class T>
InvertTmpl<T>::~InvertTmpl<T> ()
{
}



template <class T>
String InvertTmpl<T>::getDesc() const
{
    return m_Desc;
}

template <class T>
void InvertTmpl<T>::setDesc(String value)
{
    m_Desc = value;
    m_bDesc_valueSet = true;
}

template <class T>
bool InvertTmpl<T>::hasValue_Desc() const
{
    return m_bDesc_valueSet;
}

template <class T>
void InvertTmpl<T>::resetValue_Desc()
{
    m_bDesc_valueSet = false;
}


template <class T>
double InvertTmpl<T>::getElev() const
{
    return m_Elev;
}

template <class T>
void InvertTmpl<T>::setElev(double value)
{
    m_Elev = value;
    m_bElev_valueSet = true;
}

template <class T>
bool InvertTmpl<T>::hasValue_Elev() const
{
    return m_bElev_valueSet;
}

template <class T>
void InvertTmpl<T>::resetValue_Elev()
{
    m_bElev_valueSet = false;
}


template <class T>
EnumInOut::Values InvertTmpl<T>::getFlowDir() const
{
    return m_FlowDir;
}

template <class T>
void InvertTmpl<T>::setFlowDir(EnumInOut::Values value)
{
    m_FlowDir = value;
    m_bFlowDir_valueSet = true;
}

template <class T>
bool InvertTmpl<T>::hasValue_FlowDir() const
{
    return m_bFlowDir_valueSet;
}

template <class T>
void InvertTmpl<T>::resetValue_FlowDir()
{
    m_bFlowDir_valueSet = false;
}


template <class T>
String InvertTmpl<T>::getRefPipe() const
{
    return m_RefPipe;
}

template <class T>
void InvertTmpl<T>::setRefPipe(String value)
{
    m_RefPipe = value;
    m_bRefPipe_valueSet = true;
}

template <class T>
bool InvertTmpl<T>::hasValue_RefPipe() const
{
    return m_bRefPipe_valueSet;
}

template <class T>
void InvertTmpl<T>::resetValue_RefPipe()
{
    m_bRefPipe_valueSet = false;
}



template <class T>
void InvertTmpl<T>::toXml (IStream& stream)
{
    static const wchar_t* kstrElementName = L"Invert";
    stream.write(L"<");
    stream.write(kstrElementName);
    if (m_bDesc_valueSet)
    {
        stream.write(L" desc=\"");
        StringObjectImpl::streamOut(m_Desc, stream);
        stream.write(L"\"");
    }
    if (m_bElev_valueSet)
    {
        stream.write(L" elev=\"");
        DoubleObjectImpl::streamOut(m_Elev, stream);
        stream.write(L"\"");
    }
    if (m_bFlowDir_valueSet)
    {
        stream.write(L" flowDir=\"");
        EnumInOutImpl::streamOut(m_FlowDir, stream);
        stream.write(L"\"");
    }
    if (m_bRefPipe_valueSet)
    {
        stream.write(L" refPipe=\"");
        StringObjectImpl::streamOut(m_RefPipe, stream);
        stream.write(L"\"");
    }
    stream.write(L">");
    stream.write(L"</");
    stream.write(kstrElementName);
    stream.write(L">");
}

template <class T>
Pipe* InvertTmpl<T>::resolveRefPipe ()
{
    if (m_bRefPipe_valueSet)
    {
        PipeCollectionIterator* pIter = m_pDoc->getGlobalObjects().getPipeCollection().find(m_RefPipe);
        if (pIter)
        {
	         Pipe* pObject = pIter->current();
            pIter->release();
            return pObject;
        }
        else
        {
            return NULL;
        }
    }
    return NULL;
}

template <class T>
Object::ValidityEnum InvertTmpl<T>::validate (IValidationEventSink* pEventSink) const
{
    Object::ValidityEnum returnCode = Object::kValid;
    returnCode = this->ObjectTmpl<T>::validate(pEventSink);
    if (!m_bElev_valueSet)
    {
        pEventSink->onEvent(IValidationEventSink::EventCode::kRequiredValueNotSet, this, L"Elev", L"Required value not set");
        returnCode = Object::kInvalid;
    }
    if (!m_bFlowDir_valueSet)
    {
        pEventSink->onEvent(IValidationEventSink::EventCode::kRequiredValueNotSet, this, L"FlowDir", L"Required value not set");
        returnCode = Object::kInvalid;
    }
    if (!m_bRefPipe_valueSet)
    {
        pEventSink->onEvent(IValidationEventSink::EventCode::kRequiredValueNotSet, this, L"RefPipe", L"Required value not set");
        returnCode = Object::kInvalid;
    }
    if (m_bRefPipe_valueSet)
    {
        PipeCollectionIterator* pIter = m_pDoc->getGlobalObjects().getPipeCollection().find(m_RefPipe);
        if (!pIter)
        {
            pEventSink->onEvent(IValidationEventSink::EventCode::kUnresolvableReference, this, L"RefPipe", L"Reference not set");
            returnCode = Object::kInvalid;
        }
        else
        {
            pIter->release();
        }
    }
    return returnCode;
}

}; // namespace : LX
