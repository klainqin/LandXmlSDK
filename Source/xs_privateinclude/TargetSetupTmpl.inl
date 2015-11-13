#include "stdafx.h"
#include "LXTypes.h"
#include "TargetSetup.h"
#include "FieldNoteCollection.h"
#include "FeatureCollection.h"
#include "LXTypesTmpl.h"
#include "TargetSetupImpl.h"
#include "FieldNoteCollectionImpl.h"
#include "FeatureCollectionImpl.h"
#include "LXTypesTmpl.inl"

namespace LX
{


template<class T>
TargetSetupTmpl<T>::TargetSetupTmpl<T> (DocumentImpl* pDoc)
    : ObjectTmpl<T>(pDoc)
{
    m_FieldNote = createFieldNoteCollectionObject(pDoc);
    m_Feature = createFeatureCollectionObject(pDoc);
    m_Id = L"";
    m_bId_valueSet = false;
    m_TargetHeight = 0.0;
    m_bTargetHeight_valueSet = false;
    m_EdmTargetVertOffset = 0.0;
    m_bEdmTargetVertOffset_valueSet = false;
    m_PrismConstant = 0.0;
    m_bPrismConstant_valueSet = false;
}


template<class T>
TargetSetupTmpl<T>::~TargetSetupTmpl<T> ()
{
    if (m_FieldNote != NULL)
    {
        m_FieldNote->release();
        m_FieldNote = NULL;
    }
    if (m_Feature != NULL)
    {
        m_Feature->release();
        m_Feature = NULL;
    }
}

template <class T>
FieldNoteCollection& TargetSetupTmpl<T>::FieldNote()
{
    return *m_FieldNote;
}

template <class T>
const FieldNoteCollection& TargetSetupTmpl<T>::FieldNote() const
{
    return *m_FieldNote;
}

template <class T>
FeatureCollection& TargetSetupTmpl<T>::Feature()
{
    return *m_Feature;
}

template <class T>
const FeatureCollection& TargetSetupTmpl<T>::Feature() const
{
    return *m_Feature;
}



template <class T>
String TargetSetupTmpl<T>::getId() const
{
    return m_Id;
}

template <class T>
void TargetSetupTmpl<T>::setId(String value)
{
    m_Id = value;
    m_bId_valueSet = true;
}

template <class T>
bool TargetSetupTmpl<T>::hasValue_Id() const
{
    return m_bId_valueSet;
}

template <class T>
void TargetSetupTmpl<T>::resetValue_Id()
{
    m_bId_valueSet = false;
}


template <class T>
double TargetSetupTmpl<T>::getTargetHeight() const
{
    return m_TargetHeight;
}

template <class T>
void TargetSetupTmpl<T>::setTargetHeight(double value)
{
    m_TargetHeight = value;
    m_bTargetHeight_valueSet = true;
}

template <class T>
bool TargetSetupTmpl<T>::hasValue_TargetHeight() const
{
    return m_bTargetHeight_valueSet;
}

template <class T>
void TargetSetupTmpl<T>::resetValue_TargetHeight()
{
    m_bTargetHeight_valueSet = false;
}


template <class T>
double TargetSetupTmpl<T>::getEdmTargetVertOffset() const
{
    return m_EdmTargetVertOffset;
}

template <class T>
void TargetSetupTmpl<T>::setEdmTargetVertOffset(double value)
{
    m_EdmTargetVertOffset = value;
    m_bEdmTargetVertOffset_valueSet = true;
}

template <class T>
bool TargetSetupTmpl<T>::hasValue_EdmTargetVertOffset() const
{
    return m_bEdmTargetVertOffset_valueSet;
}

template <class T>
void TargetSetupTmpl<T>::resetValue_EdmTargetVertOffset()
{
    m_bEdmTargetVertOffset_valueSet = false;
}


template <class T>
double TargetSetupTmpl<T>::getPrismConstant() const
{
    return m_PrismConstant;
}

template <class T>
void TargetSetupTmpl<T>::setPrismConstant(double value)
{
    m_PrismConstant = value;
    m_bPrismConstant_valueSet = true;
}

template <class T>
bool TargetSetupTmpl<T>::hasValue_PrismConstant() const
{
    return m_bPrismConstant_valueSet;
}

template <class T>
void TargetSetupTmpl<T>::resetValue_PrismConstant()
{
    m_bPrismConstant_valueSet = false;
}



template <class T>
void TargetSetupTmpl<T>::toXml (IStream& stream)
{
    static const wchar_t* kstrElementName = L"TargetSetup";
    stream.write(L"<");
    stream.write(kstrElementName);
    if (m_bId_valueSet)
    {
        stream.write(L" id=\"");
        StringObjectImpl::streamOut(m_Id, stream);
        stream.write(L"\"");
    }
    if (m_bTargetHeight_valueSet)
    {
        stream.write(L" targetHeight=\"");
        DoubleObjectImpl::streamOut(m_TargetHeight, stream);
        stream.write(L"\"");
    }
    if (m_bEdmTargetVertOffset_valueSet)
    {
        stream.write(L" edmTargetVertOffset=\"");
        DoubleObjectImpl::streamOut(m_EdmTargetVertOffset, stream);
        stream.write(L"\"");
    }
    if (m_bPrismConstant_valueSet)
    {
        stream.write(L" prismConstant=\"");
        DoubleObjectImpl::streamOut(m_PrismConstant, stream);
        stream.write(L"\"");
    }
    stream.write(L">");
    if (m_FieldNote)
    {
    	m_FieldNote->toXml(stream);
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
Object::ValidityEnum TargetSetupTmpl<T>::validate (IValidationEventSink* pEventSink) const
{
    Object::ValidityEnum returnCode = Object::kValid;
    returnCode = this->ObjectTmpl<T>::validate(pEventSink);
    if (m_FieldNote)
    {
        if (m_FieldNote->validate(pEventSink) != Object::kValid)
            returnCode = Object::kValidWithInvalidChildren;
    }
    if (m_Feature)
    {
        if (m_Feature->validate(pEventSink) != Object::kValid)
            returnCode = Object::kValidWithInvalidChildren;
    }
    return returnCode;
}

}; // namespace : LX
