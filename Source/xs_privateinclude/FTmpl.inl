#include "stdafx.h"
#include "LXTypes.h"
#include "F.h"
#include "LXTypesTmpl.h"
#include "FImpl.h"
#include "LXTypesTmpl.inl"

namespace LX
{


template<class T>
FTmpl<T>::FTmpl (DocumentImpl* pDoc)
    : IntegerCollectionTmpl<T>(pDoc)
{
    m_I = 0;
    m_bI_valueSet = false;
    m_N = NULL;
    m_B = 0;
    m_bB_valueSet = false;
}


template<class T>
FTmpl<T>::~FTmpl ()
{
    if (m_N != NULL)
    {
        m_N->release();
        m_N = NULL;
    }
}


template <class T>
IntegerCollection* FTmpl<T>::getN() const
{
    return m_N;
}

template <class T>
void FTmpl<T>::setN(IntegerCollection* pValue)
{
    m_N = pValue;
}


template <class T>
int FTmpl<T>::getI() const
{
    return m_I;
}

template <class T>
void FTmpl<T>::setI(int value)
{
    m_I = value;
    m_bI_valueSet = true;
}

template <class T>
bool FTmpl<T>::hasValue_I() const
{
    return m_bI_valueSet;
}

template <class T>
void FTmpl<T>::resetValue_I()
{
    m_bI_valueSet = false;
}


template <class T>
unsigned int FTmpl<T>::getB() const
{
    return m_B;
}

template <class T>
void FTmpl<T>::setB(unsigned int value)
{
    m_B = value;
    m_bB_valueSet = true;
}

template <class T>
bool FTmpl<T>::hasValue_B() const
{
    return m_bB_valueSet;
}

template <class T>
void FTmpl<T>::resetValue_B()
{
    m_bB_valueSet = false;
}



template <class T>
void FTmpl<T>::toXml (IStream& stream)
{
    static const wchar_t* kstrElementName = L"F";
    stream.write(L"<");
    stream.write(kstrElementName);
    if (m_bI_valueSet)
    {
        stream.write(L" i=\"");
        IntegerObjectImpl::streamOut(m_I, stream);
        stream.write(L"\"");
    }
    if (m_N)
    {
        stream.write(L" n=\"");
        IntegerCollectionImpl::streamOut(m_N, stream);
        stream.write(L"\"");
    }
    if (m_bB_valueSet)
    {
        stream.write(L" b=\"");
        UIntegerObjectImpl::streamOut(m_B, stream);
        stream.write(L"\"");
    }
    stream.write(L">");
    this->toStream(stream);
    stream.write(L"</");
    stream.write(kstrElementName);
    stream.write(L">");
}

template <class T>
Object::ValidityEnum FTmpl<T>::validate (IValidationEventSink* pEventSink) const
{
    Object::ValidityEnum returnCode = Object::kValid;
    returnCode = this->ObjectTmpl<T>::validate(pEventSink);
    return returnCode;
}

}; // namespace : LX
