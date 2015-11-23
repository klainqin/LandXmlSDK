#include "stdafx.h"
#include "LXTypes.h"
#include "Curve2.h"
#include "Curve.h"
#include "LXTypesTmpl.h"
#include "Curve2Impl.h"
#include "CurveImpl.h"
#include "LXTypesTmpl.inl"

namespace LX
{


template<class T>
Curve2Tmpl<T>::Curve2Tmpl (DocumentImpl* pDoc)
    : ObjectTmpl<T>(pDoc)
{
    m_Curve = NULL;
}


template<class T>
Curve2Tmpl<T>::~Curve2Tmpl ()
{
    if (m_Curve != NULL)
    {
        m_Curve->release();
        m_Curve = NULL;
    }
}


template <class T>
Curve* Curve2Tmpl<T>::getCurve() const
{
    return m_Curve;
}

template <class T>
void Curve2Tmpl<T>::setCurve(Curve* pValue)
{
    m_Curve = pValue;
}



template <class T>
void Curve2Tmpl<T>::toXml (IStream& stream)
{
    static const wchar_t* kstrElementName = L"Curve2";
    stream.write(L"<");
    stream.write(kstrElementName);
    stream.write(L">");
    if (m_Curve)
    {
    	m_Curve->toXml(stream);
    }
    stream.write(L"</");
    stream.write(kstrElementName);
    stream.write(L">");
}

template <class T>
Object::ValidityEnum Curve2Tmpl<T>::validate (IValidationEventSink* pEventSink) const
{
    Object::ValidityEnum returnCode = Object::kValid;
    returnCode = this->ObjectTmpl<T>::validate(pEventSink);
    if (m_Curve)
    {
        if (m_Curve->validate(pEventSink) != Object::kValid)
            returnCode = Object::kValidWithInvalidChildren;
    }
    return returnCode;
}

}; // namespace : LX
