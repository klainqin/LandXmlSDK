#include "stdafx.h"
#include "LXTypes.h"
#include "RoadName.h"
#include "LXTypesTmpl.h"
#include "RoadNameImpl.h"
#include "LXTypesTmpl.inl"

namespace LX
{


template<class T>
RoadNameTmpl<T>::RoadNameTmpl (DocumentImpl* pDoc)
    : ObjectTmpl<T>(pDoc)
{
    m_RoadNameType = L"";
    m_bRoadNameType_valueSet = false;
    m_RoadName = L"";
    m_bRoadName_valueSet = false;
    m_RoadNameSuffix = L"";
    m_bRoadNameSuffix_valueSet = false;
    m_RoadType = L"";
    m_bRoadType_valueSet = false;
    m_PclRef = NULL;
}


template<class T>
RoadNameTmpl<T>::~RoadNameTmpl ()
{
    if (m_PclRef != NULL)
    {
        m_PclRef->release();
        m_PclRef = NULL;
    }
}


template <class T>
StringCollection* RoadNameTmpl<T>::getPclRef() const
{
    return m_PclRef;
}

template <class T>
void RoadNameTmpl<T>::setPclRef(StringCollection* pValue)
{
    m_PclRef = pValue;
}


template <class T>
String RoadNameTmpl<T>::getRoadNameType() const
{
    return m_RoadNameType;
}

template <class T>
void RoadNameTmpl<T>::setRoadNameType(String value)
{
    m_RoadNameType = value;
    m_bRoadNameType_valueSet = true;
}

template <class T>
bool RoadNameTmpl<T>::hasValue_RoadNameType() const
{
    return m_bRoadNameType_valueSet;
}

template <class T>
void RoadNameTmpl<T>::resetValue_RoadNameType()
{
    m_bRoadNameType_valueSet = false;
}


template <class T>
String RoadNameTmpl<T>::getRoadName() const
{
    return m_RoadName;
}

template <class T>
void RoadNameTmpl<T>::setRoadName(String value)
{
    m_RoadName = value;
    m_bRoadName_valueSet = true;
}

template <class T>
bool RoadNameTmpl<T>::hasValue_RoadName() const
{
    return m_bRoadName_valueSet;
}

template <class T>
void RoadNameTmpl<T>::resetValue_RoadName()
{
    m_bRoadName_valueSet = false;
}


template <class T>
String RoadNameTmpl<T>::getRoadNameSuffix() const
{
    return m_RoadNameSuffix;
}

template <class T>
void RoadNameTmpl<T>::setRoadNameSuffix(String value)
{
    m_RoadNameSuffix = value;
    m_bRoadNameSuffix_valueSet = true;
}

template <class T>
bool RoadNameTmpl<T>::hasValue_RoadNameSuffix() const
{
    return m_bRoadNameSuffix_valueSet;
}

template <class T>
void RoadNameTmpl<T>::resetValue_RoadNameSuffix()
{
    m_bRoadNameSuffix_valueSet = false;
}


template <class T>
String RoadNameTmpl<T>::getRoadType() const
{
    return m_RoadType;
}

template <class T>
void RoadNameTmpl<T>::setRoadType(String value)
{
    m_RoadType = value;
    m_bRoadType_valueSet = true;
}

template <class T>
bool RoadNameTmpl<T>::hasValue_RoadType() const
{
    return m_bRoadType_valueSet;
}

template <class T>
void RoadNameTmpl<T>::resetValue_RoadType()
{
    m_bRoadType_valueSet = false;
}



template <class T>
void RoadNameTmpl<T>::toXml (IStream& stream)
{
    static const wchar_t* kstrElementName = L"RoadName";
    stream.write(L"<");
    stream.write(kstrElementName);
    if (m_bRoadNameType_valueSet)
    {
        stream.write(L" roadNameType=\"");
        StringObjectImpl::streamOut(m_RoadNameType, stream);
        stream.write(L"\"");
    }
    if (m_bRoadName_valueSet)
    {
        stream.write(L" roadName=\"");
        StringObjectImpl::streamOut(m_RoadName, stream);
        stream.write(L"\"");
    }
    if (m_bRoadNameSuffix_valueSet)
    {
        stream.write(L" roadNameSuffix=\"");
        StringObjectImpl::streamOut(m_RoadNameSuffix, stream);
        stream.write(L"\"");
    }
    if (m_bRoadType_valueSet)
    {
        stream.write(L" roadType=\"");
        StringObjectImpl::streamOut(m_RoadType, stream);
        stream.write(L"\"");
    }
    if (m_PclRef)
    {
        stream.write(L" pclRef=\"");
        StringCollectionImpl::streamOut(m_PclRef, stream);
        stream.write(L"\"");
    }
    stream.write(L">");
    stream.write(L"</");
    stream.write(kstrElementName);
    stream.write(L">");
}

template <class T>
Object::ValidityEnum RoadNameTmpl<T>::validate (IValidationEventSink* pEventSink) const
{
    Object::ValidityEnum returnCode = Object::kValid;
    returnCode = this->ObjectTmpl<T>::validate(pEventSink);
    return returnCode;
}

}; // namespace : LX
