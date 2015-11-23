#include "stdafx.h"
#include "LXTypes.h"
#include "ComplexName.h"
#include "LXTypesTmpl.h"
#include "ComplexNameImpl.h"
#include "LXTypesTmpl.inl"

namespace LX
{


template<class T>
ComplexNameTmpl<T>::ComplexNameTmpl (DocumentImpl* pDoc)
    : ObjectTmpl<T>(pDoc)
{
    m_Desc = L"";
    m_bDesc_valueSet = false;
    m_Priority = 0;
    m_bPriority_valueSet = false;
}


template<class T>
ComplexNameTmpl<T>::~ComplexNameTmpl ()
{
}



template <class T>
String ComplexNameTmpl<T>::getDesc() const
{
    return m_Desc;
}

template <class T>
void ComplexNameTmpl<T>::setDesc(String value)
{
    m_Desc = value;
    m_bDesc_valueSet = true;
}

template <class T>
bool ComplexNameTmpl<T>::hasValue_Desc() const
{
    return m_bDesc_valueSet;
}

template <class T>
void ComplexNameTmpl<T>::resetValue_Desc()
{
    m_bDesc_valueSet = false;
}


template <class T>
int ComplexNameTmpl<T>::getPriority() const
{
    return m_Priority;
}

template <class T>
void ComplexNameTmpl<T>::setPriority(int value)
{
    m_Priority = value;
    m_bPriority_valueSet = true;
}

template <class T>
bool ComplexNameTmpl<T>::hasValue_Priority() const
{
    return m_bPriority_valueSet;
}

template <class T>
void ComplexNameTmpl<T>::resetValue_Priority()
{
    m_bPriority_valueSet = false;
}



template <class T>
void ComplexNameTmpl<T>::toXml (IStream& stream)
{
    static const wchar_t* kstrElementName = L"ComplexName";
    stream.write(L"<");
    stream.write(kstrElementName);
    if (m_bDesc_valueSet)
    {
        stream.write(L" desc=\"");
        StringObjectImpl::streamOut(m_Desc, stream);
        stream.write(L"\"");
    }
    if (m_bPriority_valueSet)
    {
        stream.write(L" priority=\"");
        IntegerObjectImpl::streamOut(m_Priority, stream);
        stream.write(L"\"");
    }
    stream.write(L">");
    stream.write(L"</");
    stream.write(kstrElementName);
    stream.write(L">");
}

template <class T>
Object::ValidityEnum ComplexNameTmpl<T>::validate (IValidationEventSink* pEventSink) const
{
    Object::ValidityEnum returnCode = Object::kValid;
    returnCode = this->ObjectTmpl<T>::validate(pEventSink);
    return returnCode;
}

}; // namespace : LX
