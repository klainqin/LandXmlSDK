#include "stdafx.h"
#include "LXTypes.h"
#include "Equipment.h"
#include "LXTypesTmpl.h"
#include "EquipmentImpl.h"
#include "LXTypesTmpl.inl"

namespace LX
{



template<class T>
EquipmentTmpl<T>::EquipmentTmpl (DocumentImpl* pDoc)
    : ObjectTmpl<T>(pDoc)
{
    m_EquipmentDetails = NULL;
}


template<class T>
EquipmentTmpl<T>::~EquipmentTmpl ()
{
    if (m_EquipmentDetails != NULL)
    {
        m_EquipmentDetails->release();
        m_EquipmentDetails = NULL;
    }
}


template <class T>
Object* EquipmentTmpl<T>::getEquipmentDetails() const
{
    return m_EquipmentDetails;
}

template <class T>
void EquipmentTmpl<T>::setEquipmentDetails(Object* pValue)
{
    m_EquipmentDetails = pValue;
}



template <class T>
void EquipmentTmpl<T>::toXml (IStream& stream)
{
    static const wchar_t* kstrElementName = L"Equipment";
    stream.write(L"<");
    stream.write(kstrElementName);
    stream.write(L">");
    if (m_EquipmentDetails)
    {
    	m_EquipmentDetails->toXml(stream);
    }
    stream.write(L"</");
    stream.write(kstrElementName);
    stream.write(L">");
}

template <class T>
Object::ValidityEnum EquipmentTmpl<T>::validate (IValidationEventSink* pEventSink) const
{
    Object::ValidityEnum returnCode = Object::kValid;
    returnCode = this->ObjectTmpl<T>::validate(pEventSink);
    if (m_EquipmentDetails)
    {
        if (m_EquipmentDetails->validate(pEventSink) != Object::kValid)
            returnCode = Object::kValidWithInvalidChildren;
    }
    return returnCode;
}

}; // namespace : LX
