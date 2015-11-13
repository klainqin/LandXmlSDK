#include "stdafx.h"
#include "LXTypes.h"
#include "HazardRating.h"
#include "LXTypesTmpl.h"
#include "HazardRatingImpl.h"
#include "LXTypesTmpl.inl"

namespace LX
{


template<class T>
HazardRatingTmpl<T>::HazardRatingTmpl<T> (DocumentImpl* pDoc)
    : ObjectTmpl<T>(pDoc)
{
    m_StaStart = 0.0;
    m_bStaStart_valueSet = false;
    m_StaEnd = 0.0;
    m_bStaEnd_valueSet = false;
    m_Rating = 0;
    m_bRating_valueSet = false;
}


template<class T>
HazardRatingTmpl<T>::~HazardRatingTmpl<T> ()
{
}



template <class T>
double HazardRatingTmpl<T>::getStaStart() const
{
    return m_StaStart;
}

template <class T>
void HazardRatingTmpl<T>::setStaStart(double value)
{
    m_StaStart = value;
    m_bStaStart_valueSet = true;
}

template <class T>
bool HazardRatingTmpl<T>::hasValue_StaStart() const
{
    return m_bStaStart_valueSet;
}

template <class T>
void HazardRatingTmpl<T>::resetValue_StaStart()
{
    m_bStaStart_valueSet = false;
}


template <class T>
double HazardRatingTmpl<T>::getStaEnd() const
{
    return m_StaEnd;
}

template <class T>
void HazardRatingTmpl<T>::setStaEnd(double value)
{
    m_StaEnd = value;
    m_bStaEnd_valueSet = true;
}

template <class T>
bool HazardRatingTmpl<T>::hasValue_StaEnd() const
{
    return m_bStaEnd_valueSet;
}

template <class T>
void HazardRatingTmpl<T>::resetValue_StaEnd()
{
    m_bStaEnd_valueSet = false;
}


template <class T>
int HazardRatingTmpl<T>::getRating() const
{
    return m_Rating;
}

template <class T>
void HazardRatingTmpl<T>::setRating(int value)
{
    m_Rating = value;
    m_bRating_valueSet = true;
}

template <class T>
bool HazardRatingTmpl<T>::hasValue_Rating() const
{
    return m_bRating_valueSet;
}

template <class T>
void HazardRatingTmpl<T>::resetValue_Rating()
{
    m_bRating_valueSet = false;
}



template <class T>
void HazardRatingTmpl<T>::toXml (IStream& stream)
{
    static const wchar_t* kstrElementName = L"HazardRating";
    stream.write(L"<");
    stream.write(kstrElementName);
    if (m_bStaStart_valueSet)
    {
        stream.write(L" staStart=\"");
        DoubleObjectImpl::streamOut(m_StaStart, stream);
        stream.write(L"\"");
    }
    if (m_bStaEnd_valueSet)
    {
        stream.write(L" staEnd=\"");
        DoubleObjectImpl::streamOut(m_StaEnd, stream);
        stream.write(L"\"");
    }
    if (m_bRating_valueSet)
    {
        stream.write(L" rating=\"");
        IntegerObjectImpl::streamOut(m_Rating, stream);
        stream.write(L"\"");
    }
    stream.write(L">");
    stream.write(L"</");
    stream.write(kstrElementName);
    stream.write(L">");
}

template <class T>
Object::ValidityEnum HazardRatingTmpl<T>::validate (IValidationEventSink* pEventSink) const
{
    Object::ValidityEnum returnCode = Object::kValid;
    returnCode = this->ObjectTmpl<T>::validate(pEventSink);
    return returnCode;
}

}; // namespace : LX
