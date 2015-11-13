#include "stdafx.h"
#include "LXTypes.h"
#include "OutSpiral.h"
#include "Spiral.h"
#include "LXTypesTmpl.h"
#include "OutSpiralImpl.h"
#include "SpiralImpl.h"
#include "LXTypesTmpl.inl"

namespace LX
{


template<class T>
OutSpiralTmpl<T>::OutSpiralTmpl<T> (DocumentImpl* pDoc)
    : ObjectTmpl<T>(pDoc)
{
    m_Spiral = NULL;
}


template<class T>
OutSpiralTmpl<T>::~OutSpiralTmpl<T> ()
{
    if (m_Spiral != NULL)
    {
        m_Spiral->release();
        m_Spiral = NULL;
    }
}


template <class T>
Spiral* OutSpiralTmpl<T>::getSpiral() const
{
    return m_Spiral;
}

template <class T>
void OutSpiralTmpl<T>::setSpiral(Spiral* pValue)
{
    m_Spiral = pValue;
}



template <class T>
void OutSpiralTmpl<T>::toXml (IStream& stream)
{
    static const wchar_t* kstrElementName = L"OutSpiral";
    stream.write(L"<");
    stream.write(kstrElementName);
    stream.write(L">");
    if (m_Spiral)
    {
    	m_Spiral->toXml(stream);
    }
    stream.write(L"</");
    stream.write(kstrElementName);
    stream.write(L">");
}

template <class T>
Object::ValidityEnum OutSpiralTmpl<T>::validate (IValidationEventSink* pEventSink) const
{
    Object::ValidityEnum returnCode = Object::kValid;
    returnCode = this->ObjectTmpl<T>::validate(pEventSink);
    if (m_Spiral)
    {
        if (m_Spiral->validate(pEventSink) != Object::kValid)
            returnCode = Object::kValidWithInvalidChildren;
    }
    return returnCode;
}

}; // namespace : LX
