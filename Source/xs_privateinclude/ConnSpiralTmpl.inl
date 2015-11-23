#include "stdafx.h"
#include "LXTypes.h"
#include "ConnSpiral.h"
#include "Spiral.h"
#include "LXTypesTmpl.h"
#include "ConnSpiralImpl.h"
#include "SpiralImpl.h"
#include "LXTypesTmpl.inl"

namespace LX
{


template<class T>
ConnSpiralTmpl<T>::ConnSpiralTmpl (DocumentImpl* pDoc)
    : ObjectTmpl<T>(pDoc)
{
    m_Spiral = NULL;
}


template<class T>
ConnSpiralTmpl<T>::~ConnSpiralTmpl ()
{
    if (m_Spiral != NULL)
    {
        m_Spiral->release();
        m_Spiral = NULL;
    }
}


template <class T>
Spiral* ConnSpiralTmpl<T>::getSpiral() const
{
    return m_Spiral;
}

template <class T>
void ConnSpiralTmpl<T>::setSpiral(Spiral* pValue)
{
    m_Spiral = pValue;
}



template <class T>
void ConnSpiralTmpl<T>::toXml (IStream& stream)
{
    static const wchar_t* kstrElementName = L"ConnSpiral";
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
Object::ValidityEnum ConnSpiralTmpl<T>::validate (IValidationEventSink* pEventSink) const
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
