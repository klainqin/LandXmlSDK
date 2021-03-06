#include "stdafx.h"
#include "LXTypes.h"
#include "Invert.h"
#include "LXTypesTmpl.h"
#include "InvertImpl.h"
#include "LXTypesTmpl.inl"

namespace LX
{


template<class T>
InvertTmpl<T>::InvertTmpl (DocumentImpl* pDoc)
    : ObjectTmpl<T>(pDoc)
{
    this->m_Desc = L"";
    this->m_bDesc_valueSet = false;
    this->m_Elev = 0.0;
    this->m_bElev_valueSet = false;
    this->m_FlowDir = EnumInOut::Values::k_null;
    this->m_bFlowDir_valueSet = false;
    this->m_RefPipe = L"";
    this->m_bRefPipe_valueSet = false;
}


template<class T>
InvertTmpl<T>::~InvertTmpl ()
{
}



template <class T>
String InvertTmpl<T>::getDesc() const
{
    return this->m_Desc;
}

template <class T>
void InvertTmpl<T>::setDesc(String value)
{
    this->m_Desc = value;
    this->m_bDesc_valueSet = true;
}

template <class T>
bool InvertTmpl<T>::hasValue_Desc() const
{
    return this->m_bDesc_valueSet;
}

template <class T>
void InvertTmpl<T>::resetValue_Desc()
{
    this->m_bDesc_valueSet = false;
}


template <class T>
double InvertTmpl<T>::getElev() const
{
    return this->m_Elev;
}

template <class T>
void InvertTmpl<T>::setElev(double value)
{
    this->m_Elev = value;
    this->m_bElev_valueSet = true;
}

template <class T>
bool InvertTmpl<T>::hasValue_Elev() const
{
    return this->m_bElev_valueSet;
}

template <class T>
void InvertTmpl<T>::resetValue_Elev()
{
    this->m_bElev_valueSet = false;
}


template <class T>
EnumInOut::Values InvertTmpl<T>::getFlowDir() const
{
    return this->m_FlowDir;
}

template <class T>
void InvertTmpl<T>::setFlowDir(EnumInOut::Values value)
{
    this->m_FlowDir = value;
    this->m_bFlowDir_valueSet = true;
}

template <class T>
bool InvertTmpl<T>::hasValue_FlowDir() const
{
    return this->m_bFlowDir_valueSet;
}

template <class T>
void InvertTmpl<T>::resetValue_FlowDir()
{
    this->m_bFlowDir_valueSet = false;
}


template <class T>
String InvertTmpl<T>::getRefPipe() const
{
    return this->m_RefPipe;
}

template <class T>
void InvertTmpl<T>::setRefPipe(String value)
{
    this->m_RefPipe = value;
    this->m_bRefPipe_valueSet = true;
}

template <class T>
bool InvertTmpl<T>::hasValue_RefPipe() const
{
    return this->m_bRefPipe_valueSet;
}

template <class T>
void InvertTmpl<T>::resetValue_RefPipe()
{
    this->m_bRefPipe_valueSet = false;
}



template <class T>
void InvertTmpl<T>::toXml (IStream& stream)
{
    static const wchar_t* kstrElementName = L"Invert";
    stream.write(L"<");
    stream.write(kstrElementName);
    if (this->m_bDesc_valueSet)
    {
        stream.write(L" desc=\"");
        StringObjectImpl::streamOut(this->m_Desc, stream);
        stream.write(L"\"");
    }
    if (this->m_bElev_valueSet)
    {
        stream.write(L" elev=\"");
        DoubleObjectImpl::streamOut(this->m_Elev, stream);
        stream.write(L"\"");
    }
    if (this->m_bFlowDir_valueSet)
    {
        stream.write(L" flowDir=\"");
        EnumInOutImpl::streamOut(this->m_FlowDir, stream);
        stream.write(L"\"");
    }
    if (this->m_bRefPipe_valueSet)
    {
        stream.write(L" refPipe=\"");
        StringObjectImpl::streamOut(this->m_RefPipe, stream);
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
    if (this->m_bRefPipe_valueSet)
    {
        PipeCollectionIterator* pIter = this->m_pDoc->getGlobalObjects().getPipeCollection().find(this->m_RefPipe);
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
    if (!this->m_bElev_valueSet)
    {
        pEventSink->onEvent(IValidationEventSink::EventCode::kRequiredValueNotSet, this, L"Elev", L"Required value not set");
        returnCode = Object::kInvalid;
    }
    if (!this->m_bFlowDir_valueSet)
    {
        pEventSink->onEvent(IValidationEventSink::EventCode::kRequiredValueNotSet, this, L"FlowDir", L"Required value not set");
        returnCode = Object::kInvalid;
    }
    if (!this->m_bRefPipe_valueSet)
    {
        pEventSink->onEvent(IValidationEventSink::EventCode::kRequiredValueNotSet, this, L"RefPipe", L"Required value not set");
        returnCode = Object::kInvalid;
    }
    if (this->m_bRefPipe_valueSet)
    {
        PipeCollectionIterator* pIter = this->m_pDoc->getGlobalObjects().getPipeCollection().find(this->m_RefPipe);
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
