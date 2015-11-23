#include "stdafx.h"
#include "LXTypes.h"
#include "Structs.h"
#include "Units.h"
#include "StructCollection.h"
#include "FeatureCollection.h"
#include "LXTypesTmpl.h"
#include "StructsImpl.h"
#include "UnitsImpl.h"
#include "StructCollectionImpl.h"
#include "FeatureCollectionImpl.h"
#include "LXTypesTmpl.inl"

namespace LX
{


template<class T>
StructsTmpl<T>::StructsTmpl (DocumentImpl* pDoc)
    : ObjectTmpl<T>(pDoc)
{
    m_Units = NULL;
    m_Struct = createStructCollectionObject(pDoc);
    m_Feature = createFeatureCollectionObject(pDoc);
}


template<class T>
StructsTmpl<T>::~StructsTmpl ()
{
    if (m_Units != NULL)
    {
        m_Units->release();
        m_Units = NULL;
    }
    if (m_Struct != NULL)
    {
        m_Struct->release();
        m_Struct = NULL;
    }
    if (m_Feature != NULL)
    {
        m_Feature->release();
        m_Feature = NULL;
    }
}

template <class T>
StructCollection& StructsTmpl<T>::Struct()
{
    return *m_Struct;
}

template <class T>
const StructCollection& StructsTmpl<T>::Struct() const
{
    return *m_Struct;
}

template <class T>
FeatureCollection& StructsTmpl<T>::Feature()
{
    return *m_Feature;
}

template <class T>
const FeatureCollection& StructsTmpl<T>::Feature() const
{
    return *m_Feature;
}


template <class T>
Units* StructsTmpl<T>::getUnits() const
{
    return m_Units;
}

template <class T>
void StructsTmpl<T>::setUnits(Units* pValue)
{
    m_Units = pValue;
}



template <class T>
void StructsTmpl<T>::toXml (IStream& stream)
{
    static const wchar_t* kstrElementName = L"Structs";
    stream.write(L"<");
    stream.write(kstrElementName);
    stream.write(L">");
    if (m_Units)
    {
    	m_Units->toXml(stream);
    }
    if (m_Struct)
    {
    	m_Struct->toXml(stream);
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
Object::ValidityEnum StructsTmpl<T>::validate (IValidationEventSink* pEventSink) const
{
    Object::ValidityEnum returnCode = Object::kValid;
    returnCode = this->ObjectTmpl<T>::validate(pEventSink);
    if (m_Units)
    {
        if (m_Units->validate(pEventSink) != Object::kValid)
            returnCode = Object::kValidWithInvalidChildren;
    }
    if (m_Struct)
    {
        if (m_Struct->validate(pEventSink) != Object::kValid)
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
