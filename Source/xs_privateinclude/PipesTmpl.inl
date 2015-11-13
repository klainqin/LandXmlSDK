#include "stdafx.h"
#include "LXTypes.h"
#include "Pipes.h"
#include "Units.h"
#include "PipeCollection.h"
#include "FeatureCollection.h"
#include "LXTypesTmpl.h"
#include "PipesImpl.h"
#include "UnitsImpl.h"
#include "PipeCollectionImpl.h"
#include "FeatureCollectionImpl.h"
#include "LXTypesTmpl.inl"

namespace LX
{


template<class T>
PipesTmpl<T>::PipesTmpl<T> (DocumentImpl* pDoc)
    : ObjectTmpl<T>(pDoc)
{
    m_Units = NULL;
    m_Pipe = createPipeCollectionObject(pDoc);
    m_Feature = createFeatureCollectionObject(pDoc);
}


template<class T>
PipesTmpl<T>::~PipesTmpl<T> ()
{
    if (m_Units != NULL)
    {
        m_Units->release();
        m_Units = NULL;
    }
    if (m_Pipe != NULL)
    {
        m_Pipe->release();
        m_Pipe = NULL;
    }
    if (m_Feature != NULL)
    {
        m_Feature->release();
        m_Feature = NULL;
    }
}

template <class T>
PipeCollection& PipesTmpl<T>::Pipe()
{
    return *m_Pipe;
}

template <class T>
const PipeCollection& PipesTmpl<T>::Pipe() const
{
    return *m_Pipe;
}

template <class T>
FeatureCollection& PipesTmpl<T>::Feature()
{
    return *m_Feature;
}

template <class T>
const FeatureCollection& PipesTmpl<T>::Feature() const
{
    return *m_Feature;
}


template <class T>
Units* PipesTmpl<T>::getUnits() const
{
    return m_Units;
}

template <class T>
void PipesTmpl<T>::setUnits(Units* pValue)
{
    m_Units = pValue;
}



template <class T>
void PipesTmpl<T>::toXml (IStream& stream)
{
    static const wchar_t* kstrElementName = L"Pipes";
    stream.write(L"<");
    stream.write(kstrElementName);
    stream.write(L">");
    if (m_Units)
    {
    	m_Units->toXml(stream);
    }
    if (m_Pipe)
    {
    	m_Pipe->toXml(stream);
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
Object::ValidityEnum PipesTmpl<T>::validate (IValidationEventSink* pEventSink) const
{
    Object::ValidityEnum returnCode = Object::kValid;
    returnCode = this->ObjectTmpl<T>::validate(pEventSink);
    if (m_Units)
    {
        if (m_Units->validate(pEventSink) != Object::kValid)
            returnCode = Object::kValidWithInvalidChildren;
    }
    if (m_Pipe)
    {
        if (m_Pipe->validate(pEventSink) != Object::kValid)
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
