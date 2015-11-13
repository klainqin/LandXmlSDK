#include "stdafx.h"
#include "LXTypes.h"
#include "SurveyMonument.h"
#include "FeatureCollection.h"
#include "LXTypesTmpl.h"
#include "SurveyMonumentImpl.h"
#include "FeatureCollectionImpl.h"
#include "LXTypesTmpl.inl"

namespace LX
{


template<class T>
SurveyMonumentTmpl<T>::SurveyMonumentTmpl<T> (DocumentImpl* pDoc)
    : ObjectTmpl<T>(pDoc)
{
    m_Feature = createFeatureCollectionObject(pDoc);
    m_MntRef = L"";
    m_bMntRef_valueSet = false;
    m_Purpose = L"";
    m_bPurpose_valueSet = false;
    m_State = L"";
    m_bState_valueSet = false;
    m_AdoptedSurvey = L"";
    m_bAdoptedSurvey_valueSet = false;
    m_DisturbedMonument = L"";
    m_bDisturbedMonument_valueSet = false;
    m_DisturbedDate = L"";
    m_bDisturbedDate_valueSet = false;
    m_DisturbedAnnotation = L"";
    m_bDisturbedAnnotation_valueSet = false;
    m_ReplacedMonument = L"";
    m_bReplacedMonument_valueSet = false;
    m_ReplacedDate = L"";
    m_bReplacedDate_valueSet = false;
    m_ReplacedAnnotation = L"";
    m_bReplacedAnnotation_valueSet = false;
}


template<class T>
SurveyMonumentTmpl<T>::~SurveyMonumentTmpl<T> ()
{
    if (m_Feature != NULL)
    {
        m_Feature->release();
        m_Feature = NULL;
    }
}

template <class T>
FeatureCollection& SurveyMonumentTmpl<T>::Feature()
{
    return *m_Feature;
}

template <class T>
const FeatureCollection& SurveyMonumentTmpl<T>::Feature() const
{
    return *m_Feature;
}



template <class T>
String SurveyMonumentTmpl<T>::getMntRef() const
{
    return m_MntRef;
}

template <class T>
void SurveyMonumentTmpl<T>::setMntRef(String value)
{
    m_MntRef = value;
    m_bMntRef_valueSet = true;
}

template <class T>
bool SurveyMonumentTmpl<T>::hasValue_MntRef() const
{
    return m_bMntRef_valueSet;
}

template <class T>
void SurveyMonumentTmpl<T>::resetValue_MntRef()
{
    m_bMntRef_valueSet = false;
}


template <class T>
String SurveyMonumentTmpl<T>::getPurpose() const
{
    return m_Purpose;
}

template <class T>
void SurveyMonumentTmpl<T>::setPurpose(String value)
{
    m_Purpose = value;
    m_bPurpose_valueSet = true;
}

template <class T>
bool SurveyMonumentTmpl<T>::hasValue_Purpose() const
{
    return m_bPurpose_valueSet;
}

template <class T>
void SurveyMonumentTmpl<T>::resetValue_Purpose()
{
    m_bPurpose_valueSet = false;
}


template <class T>
String SurveyMonumentTmpl<T>::getState() const
{
    return m_State;
}

template <class T>
void SurveyMonumentTmpl<T>::setState(String value)
{
    m_State = value;
    m_bState_valueSet = true;
}

template <class T>
bool SurveyMonumentTmpl<T>::hasValue_State() const
{
    return m_bState_valueSet;
}

template <class T>
void SurveyMonumentTmpl<T>::resetValue_State()
{
    m_bState_valueSet = false;
}


template <class T>
String SurveyMonumentTmpl<T>::getAdoptedSurvey() const
{
    return m_AdoptedSurvey;
}

template <class T>
void SurveyMonumentTmpl<T>::setAdoptedSurvey(String value)
{
    m_AdoptedSurvey = value;
    m_bAdoptedSurvey_valueSet = true;
}

template <class T>
bool SurveyMonumentTmpl<T>::hasValue_AdoptedSurvey() const
{
    return m_bAdoptedSurvey_valueSet;
}

template <class T>
void SurveyMonumentTmpl<T>::resetValue_AdoptedSurvey()
{
    m_bAdoptedSurvey_valueSet = false;
}


template <class T>
String SurveyMonumentTmpl<T>::getDisturbedMonument() const
{
    return m_DisturbedMonument;
}

template <class T>
void SurveyMonumentTmpl<T>::setDisturbedMonument(String value)
{
    m_DisturbedMonument = value;
    m_bDisturbedMonument_valueSet = true;
}

template <class T>
bool SurveyMonumentTmpl<T>::hasValue_DisturbedMonument() const
{
    return m_bDisturbedMonument_valueSet;
}

template <class T>
void SurveyMonumentTmpl<T>::resetValue_DisturbedMonument()
{
    m_bDisturbedMonument_valueSet = false;
}


template <class T>
String SurveyMonumentTmpl<T>::getDisturbedDate() const
{
    return m_DisturbedDate;
}

template <class T>
void SurveyMonumentTmpl<T>::setDisturbedDate(String value)
{
    m_DisturbedDate = value;
    m_bDisturbedDate_valueSet = true;
}

template <class T>
bool SurveyMonumentTmpl<T>::hasValue_DisturbedDate() const
{
    return m_bDisturbedDate_valueSet;
}

template <class T>
void SurveyMonumentTmpl<T>::resetValue_DisturbedDate()
{
    m_bDisturbedDate_valueSet = false;
}


template <class T>
String SurveyMonumentTmpl<T>::getDisturbedAnnotation() const
{
    return m_DisturbedAnnotation;
}

template <class T>
void SurveyMonumentTmpl<T>::setDisturbedAnnotation(String value)
{
    m_DisturbedAnnotation = value;
    m_bDisturbedAnnotation_valueSet = true;
}

template <class T>
bool SurveyMonumentTmpl<T>::hasValue_DisturbedAnnotation() const
{
    return m_bDisturbedAnnotation_valueSet;
}

template <class T>
void SurveyMonumentTmpl<T>::resetValue_DisturbedAnnotation()
{
    m_bDisturbedAnnotation_valueSet = false;
}


template <class T>
String SurveyMonumentTmpl<T>::getReplacedMonument() const
{
    return m_ReplacedMonument;
}

template <class T>
void SurveyMonumentTmpl<T>::setReplacedMonument(String value)
{
    m_ReplacedMonument = value;
    m_bReplacedMonument_valueSet = true;
}

template <class T>
bool SurveyMonumentTmpl<T>::hasValue_ReplacedMonument() const
{
    return m_bReplacedMonument_valueSet;
}

template <class T>
void SurveyMonumentTmpl<T>::resetValue_ReplacedMonument()
{
    m_bReplacedMonument_valueSet = false;
}


template <class T>
String SurveyMonumentTmpl<T>::getReplacedDate() const
{
    return m_ReplacedDate;
}

template <class T>
void SurveyMonumentTmpl<T>::setReplacedDate(String value)
{
    m_ReplacedDate = value;
    m_bReplacedDate_valueSet = true;
}

template <class T>
bool SurveyMonumentTmpl<T>::hasValue_ReplacedDate() const
{
    return m_bReplacedDate_valueSet;
}

template <class T>
void SurveyMonumentTmpl<T>::resetValue_ReplacedDate()
{
    m_bReplacedDate_valueSet = false;
}


template <class T>
String SurveyMonumentTmpl<T>::getReplacedAnnotation() const
{
    return m_ReplacedAnnotation;
}

template <class T>
void SurveyMonumentTmpl<T>::setReplacedAnnotation(String value)
{
    m_ReplacedAnnotation = value;
    m_bReplacedAnnotation_valueSet = true;
}

template <class T>
bool SurveyMonumentTmpl<T>::hasValue_ReplacedAnnotation() const
{
    return m_bReplacedAnnotation_valueSet;
}

template <class T>
void SurveyMonumentTmpl<T>::resetValue_ReplacedAnnotation()
{
    m_bReplacedAnnotation_valueSet = false;
}



template <class T>
void SurveyMonumentTmpl<T>::toXml (IStream& stream)
{
    static const wchar_t* kstrElementName = L"SurveyMonument";
    stream.write(L"<");
    stream.write(kstrElementName);
    if (m_bMntRef_valueSet)
    {
        stream.write(L" mntRef=\"");
        StringObjectImpl::streamOut(m_MntRef, stream);
        stream.write(L"\"");
    }
    if (m_bPurpose_valueSet)
    {
        stream.write(L" purpose=\"");
        StringObjectImpl::streamOut(m_Purpose, stream);
        stream.write(L"\"");
    }
    if (m_bState_valueSet)
    {
        stream.write(L" state=\"");
        StringObjectImpl::streamOut(m_State, stream);
        stream.write(L"\"");
    }
    if (m_bAdoptedSurvey_valueSet)
    {
        stream.write(L" adoptedSurvey=\"");
        StringObjectImpl::streamOut(m_AdoptedSurvey, stream);
        stream.write(L"\"");
    }
    if (m_bDisturbedMonument_valueSet)
    {
        stream.write(L" disturbedMonument=\"");
        StringObjectImpl::streamOut(m_DisturbedMonument, stream);
        stream.write(L"\"");
    }
    if (m_bDisturbedDate_valueSet)
    {
        stream.write(L" disturbedDate=\"");
        StringObjectImpl::streamOut(m_DisturbedDate, stream);
        stream.write(L"\"");
    }
    if (m_bDisturbedAnnotation_valueSet)
    {
        stream.write(L" disturbedAnnotation=\"");
        StringObjectImpl::streamOut(m_DisturbedAnnotation, stream);
        stream.write(L"\"");
    }
    if (m_bReplacedMonument_valueSet)
    {
        stream.write(L" replacedMonument=\"");
        StringObjectImpl::streamOut(m_ReplacedMonument, stream);
        stream.write(L"\"");
    }
    if (m_bReplacedDate_valueSet)
    {
        stream.write(L" replacedDate=\"");
        StringObjectImpl::streamOut(m_ReplacedDate, stream);
        stream.write(L"\"");
    }
    if (m_bReplacedAnnotation_valueSet)
    {
        stream.write(L" replacedAnnotation=\"");
        StringObjectImpl::streamOut(m_ReplacedAnnotation, stream);
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
Monument* SurveyMonumentTmpl<T>::resolveMntRef ()
{
    if (m_bMntRef_valueSet)
    {
        MonumentCollectionIterator* pIter = m_pDoc->getGlobalObjects().getMonumentCollection().find(m_MntRef);
        if (pIter)
        {
	         Monument* pObject = pIter->current();
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
Object::ValidityEnum SurveyMonumentTmpl<T>::validate (IValidationEventSink* pEventSink) const
{
    Object::ValidityEnum returnCode = Object::kValid;
    returnCode = this->ObjectTmpl<T>::validate(pEventSink);
    if (m_Feature)
    {
        if (m_Feature->validate(pEventSink) != Object::kValid)
            returnCode = Object::kValidWithInvalidChildren;
    }
    if (!m_bMntRef_valueSet)
    {
        pEventSink->onEvent(IValidationEventSink::EventCode::kRequiredValueNotSet, this, L"MntRef", L"Required value not set");
        returnCode = Object::kInvalid;
    }
    if (!m_bPurpose_valueSet)
    {
        pEventSink->onEvent(IValidationEventSink::EventCode::kRequiredValueNotSet, this, L"Purpose", L"Required value not set");
        returnCode = Object::kInvalid;
    }
    if (m_bMntRef_valueSet)
    {
        MonumentCollectionIterator* pIter = m_pDoc->getGlobalObjects().getMonumentCollection().find(m_MntRef);
        if (!pIter)
        {
            pEventSink->onEvent(IValidationEventSink::EventCode::kUnresolvableReference, this, L"MntRef", L"Reference not set");
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
