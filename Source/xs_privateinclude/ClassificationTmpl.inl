#include "stdafx.h"
#include "LXTypes.h"
#include "Classification.h"
#include "FeatureCollection.h"
#include "LXTypesTmpl.h"
#include "ClassificationImpl.h"
#include "FeatureCollectionImpl.h"
#include "LXTypesTmpl.inl"

namespace LX
{


template<class T>
ClassificationTmpl<T>::ClassificationTmpl<T> (DocumentImpl* pDoc)
    : ObjectTmpl<T>(pDoc)
{
    m_Feature = createFeatureCollectionObject(pDoc);
    m_StaStart = 0.0;
    m_bStaStart_valueSet = false;
    m_StaEnd = 0.0;
    m_bStaEnd_valueSet = false;
    m_FunctionalClass = EnumFunctionalClassType::Values::k_null;
    m_bFunctionalClass_valueSet = false;
}


template<class T>
ClassificationTmpl<T>::~ClassificationTmpl<T> ()
{
    if (m_Feature != NULL)
    {
        m_Feature->release();
        m_Feature = NULL;
    }
}

template <class T>
FeatureCollection& ClassificationTmpl<T>::Feature()
{
    return *m_Feature;
}

template <class T>
const FeatureCollection& ClassificationTmpl<T>::Feature() const
{
    return *m_Feature;
}



template <class T>
double ClassificationTmpl<T>::getStaStart() const
{
    return m_StaStart;
}

template <class T>
void ClassificationTmpl<T>::setStaStart(double value)
{
    m_StaStart = value;
    m_bStaStart_valueSet = true;
}

template <class T>
bool ClassificationTmpl<T>::hasValue_StaStart() const
{
    return m_bStaStart_valueSet;
}

template <class T>
void ClassificationTmpl<T>::resetValue_StaStart()
{
    m_bStaStart_valueSet = false;
}


template <class T>
double ClassificationTmpl<T>::getStaEnd() const
{
    return m_StaEnd;
}

template <class T>
void ClassificationTmpl<T>::setStaEnd(double value)
{
    m_StaEnd = value;
    m_bStaEnd_valueSet = true;
}

template <class T>
bool ClassificationTmpl<T>::hasValue_StaEnd() const
{
    return m_bStaEnd_valueSet;
}

template <class T>
void ClassificationTmpl<T>::resetValue_StaEnd()
{
    m_bStaEnd_valueSet = false;
}


template <class T>
EnumFunctionalClassType::Values ClassificationTmpl<T>::getFunctionalClass() const
{
    return m_FunctionalClass;
}

template <class T>
void ClassificationTmpl<T>::setFunctionalClass(EnumFunctionalClassType::Values value)
{
    m_FunctionalClass = value;
    m_bFunctionalClass_valueSet = true;
}

template <class T>
bool ClassificationTmpl<T>::hasValue_FunctionalClass() const
{
    return m_bFunctionalClass_valueSet;
}

template <class T>
void ClassificationTmpl<T>::resetValue_FunctionalClass()
{
    m_bFunctionalClass_valueSet = false;
}



template <class T>
void ClassificationTmpl<T>::toXml (IStream& stream)
{
    static const wchar_t* kstrElementName = L"Classification";
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
    if (m_bFunctionalClass_valueSet)
    {
        stream.write(L" functionalClass=\"");
        EnumFunctionalClassTypeImpl::streamOut(m_FunctionalClass, stream);
        stream.write(L"\"");
    }
    stream.write(L">");
    if (m_Feature)
    {
    	m_Feature->toXml(stream);
    }
    stream.write(L"</");
    stream.write(kstrElementName);
    stream.write(L">");
}

template <class T>
Object::ValidityEnum ClassificationTmpl<T>::validate (IValidationEventSink* pEventSink) const
{
    Object::ValidityEnum returnCode = Object::kValid;
    returnCode = this->ObjectTmpl<T>::validate(pEventSink);
    if (m_Feature)
    {
        if (m_Feature->validate(pEventSink) != Object::kValid)
            returnCode = Object::kValidWithInvalidChildren;
    }
    return returnCode;
}

}; // namespace : LX
