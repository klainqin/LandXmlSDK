#include "stdafx.h"
#include "LXTypes.h"
#include "OffsetVals.h"
#include "LXTypesTmpl.h"
#include "OffsetValsImpl.h"
#include "LXTypesTmpl.inl"

namespace LX
{


template<class T>
OffsetValsTmpl<T>::OffsetValsTmpl<T> (DocumentImpl* pDoc)
    : ObjectTmpl<T>(pDoc)
{
    m_OffsetInOut = 0.0;
    m_bOffsetInOut_valueSet = false;
    m_OffsetLeftRight = 0.0;
    m_bOffsetLeftRight_valueSet = false;
    m_OffsetUpDown = 0.0;
    m_bOffsetUpDown_valueSet = false;
}


template<class T>
OffsetValsTmpl<T>::~OffsetValsTmpl<T> ()
{
}



template <class T>
double OffsetValsTmpl<T>::getOffsetInOut() const
{
    return m_OffsetInOut;
}

template <class T>
void OffsetValsTmpl<T>::setOffsetInOut(double value)
{
    m_OffsetInOut = value;
    m_bOffsetInOut_valueSet = true;
}

template <class T>
bool OffsetValsTmpl<T>::hasValue_OffsetInOut() const
{
    return m_bOffsetInOut_valueSet;
}

template <class T>
void OffsetValsTmpl<T>::resetValue_OffsetInOut()
{
    m_bOffsetInOut_valueSet = false;
}


template <class T>
double OffsetValsTmpl<T>::getOffsetLeftRight() const
{
    return m_OffsetLeftRight;
}

template <class T>
void OffsetValsTmpl<T>::setOffsetLeftRight(double value)
{
    m_OffsetLeftRight = value;
    m_bOffsetLeftRight_valueSet = true;
}

template <class T>
bool OffsetValsTmpl<T>::hasValue_OffsetLeftRight() const
{
    return m_bOffsetLeftRight_valueSet;
}

template <class T>
void OffsetValsTmpl<T>::resetValue_OffsetLeftRight()
{
    m_bOffsetLeftRight_valueSet = false;
}


template <class T>
double OffsetValsTmpl<T>::getOffsetUpDown() const
{
    return m_OffsetUpDown;
}

template <class T>
void OffsetValsTmpl<T>::setOffsetUpDown(double value)
{
    m_OffsetUpDown = value;
    m_bOffsetUpDown_valueSet = true;
}

template <class T>
bool OffsetValsTmpl<T>::hasValue_OffsetUpDown() const
{
    return m_bOffsetUpDown_valueSet;
}

template <class T>
void OffsetValsTmpl<T>::resetValue_OffsetUpDown()
{
    m_bOffsetUpDown_valueSet = false;
}



template <class T>
void OffsetValsTmpl<T>::toXml (IStream& stream)
{
    static const wchar_t* kstrElementName = L"OffsetVals";
    stream.write(L"<");
    stream.write(kstrElementName);
    if (m_bOffsetInOut_valueSet)
    {
        stream.write(L" offsetInOut=\"");
        DoubleObjectImpl::streamOut(m_OffsetInOut, stream);
        stream.write(L"\"");
    }
    if (m_bOffsetLeftRight_valueSet)
    {
        stream.write(L" offsetLeftRight=\"");
        DoubleObjectImpl::streamOut(m_OffsetLeftRight, stream);
        stream.write(L"\"");
    }
    if (m_bOffsetUpDown_valueSet)
    {
        stream.write(L" offsetUpDown=\"");
        DoubleObjectImpl::streamOut(m_OffsetUpDown, stream);
        stream.write(L"\"");
    }
    stream.write(L">");
    stream.write(L"</");
    stream.write(kstrElementName);
    stream.write(L">");
}

template <class T>
Object::ValidityEnum OffsetValsTmpl<T>::validate (IValidationEventSink* pEventSink) const
{
    Object::ValidityEnum returnCode = Object::kValid;
    returnCode = this->ObjectTmpl<T>::validate(pEventSink);
    return returnCode;
}

}; // namespace : LX
