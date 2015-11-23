#include "stdafx.h"
#include "LXTypes.h"
#include "InSpiral.h"
#include "Spiral.h"
#include "LXTypesTmpl.h"
#include "InSpiralImpl.h"
#include "SpiralImpl.h"
#include "LXTypesTmpl.inl"

namespace LX
{


template<class T>
InSpiralTmpl<T>::InSpiralTmpl (DocumentImpl* pDoc)
    : ObjectTmpl<T>(pDoc)
{
    m_Spiral = NULL;
}


template<class T>
InSpiralTmpl<T>::~InSpiralTmpl ()
{
    if (m_Spiral != NULL)
    {
        m_Spiral->release();
        m_Spiral = NULL;
    }
}


template <class T>
Spiral* InSpiralTmpl<T>::getSpiral() const
{
    return m_Spiral;
}

template <class T>
void InSpiralTmpl<T>::setSpiral(Spiral* pValue)
{
    m_Spiral = pValue;
}



template <class T>
void InSpiralTmpl<T>::toXml (IStream& stream)
{
    static const wchar_t* kstrElementName = L"InSpiral";
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
Object::ValidityEnum InSpiralTmpl<T>::validate (IValidationEventSink* pEventSink) const
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
