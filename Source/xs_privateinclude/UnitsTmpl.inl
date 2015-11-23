#include "stdafx.h"
#include "LXTypes.h"
#include "Units.h"
#include "LXTypesTmpl.h"
#include "UnitsImpl.h"
#include "LXTypesTmpl.inl"

namespace LX
{



template<class T>
UnitsTmpl<T>::UnitsTmpl (DocumentImpl* pDoc)
    : ObjectTmpl<T>(pDoc)
{
    m_SelectedUnits = NULL;
}


template<class T>
UnitsTmpl<T>::~UnitsTmpl ()
{
    if (m_SelectedUnits != NULL)
    {
        m_SelectedUnits->release();
        m_SelectedUnits = NULL;
    }
}


template <class T>
Object* UnitsTmpl<T>::getSelectedUnits() const
{
    return m_SelectedUnits;
}

template <class T>
void UnitsTmpl<T>::setSelectedUnits(Object* pValue)
{
    m_SelectedUnits = pValue;
}



template <class T>
void UnitsTmpl<T>::toXml (IStream& stream)
{
    static const wchar_t* kstrElementName = L"Units";
    stream.write(L"<");
    stream.write(kstrElementName);
    stream.write(L">");
    if (m_SelectedUnits)
    {
    	m_SelectedUnits->toXml(stream);
    }
    stream.write(L"</");
    stream.write(kstrElementName);
    stream.write(L">");
}

template <class T>
Object::ValidityEnum UnitsTmpl<T>::validate (IValidationEventSink* pEventSink) const
{
    Object::ValidityEnum returnCode = Object::kValid;
    returnCode = this->ObjectTmpl<T>::validate(pEventSink);
    if (m_SelectedUnits)
    {
        if (m_SelectedUnits->validate(pEventSink) != Object::kValid)
            returnCode = Object::kValidWithInvalidChildren;
    }
    return returnCode;
}

}; // namespace : LX
