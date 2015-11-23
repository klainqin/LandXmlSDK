#include "stdafx.h"
#include "LXTypes.h"
#include "Curve1.h"
#include "Curve.h"
#include "LXTypesTmpl.h"
#include "Curve1Impl.h"
#include "CurveImpl.h"
#include "LXTypesTmpl.inl"

namespace LX
{


template<class T>
Curve1Tmpl<T>::Curve1Tmpl (DocumentImpl* pDoc)
    : ObjectTmpl<T>(pDoc)
{
    m_Curve = NULL;
}


template<class T>
Curve1Tmpl<T>::~Curve1Tmpl ()
{
    if (m_Curve != NULL)
    {
        m_Curve->release();
        m_Curve = NULL;
    }
}


template <class T>
Curve* Curve1Tmpl<T>::getCurve() const
{
    return m_Curve;
}

template <class T>
void Curve1Tmpl<T>::setCurve(Curve* pValue)
{
    m_Curve = pValue;
}



template <class T>
void Curve1Tmpl<T>::toXml (IStream& stream)
{
    static const wchar_t* kstrElementName = L"Curve1";
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
Object::ValidityEnum Curve1Tmpl<T>::validate (IValidationEventSink* pEventSink) const
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
