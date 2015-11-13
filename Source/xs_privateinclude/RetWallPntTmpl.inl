#include "stdafx.h"
#include "LXTypes.h"
#include "RetWallPnt.h"
#include "LXTypesTmpl.h"
#include "RetWallPntImpl.h"
#include "LXTypesTmpl.inl"
#include "PointType3dReqTmpl.inl"

namespace LX
{


template<class T>
RetWallPntTmpl<T>::RetWallPntTmpl<T> (DocumentImpl* pDoc)
    : PointType3dReqTmpl<T>(pDoc)
{
    m_Height = 0.0;
    m_bHeight_valueSet = false;
    m_Offset = 0.0;
    m_bOffset_valueSet = false;
}


template<class T>
RetWallPntTmpl<T>::~RetWallPntTmpl<T> ()
{
}


template <class T>
bool RetWallPntTmpl<T>::getObjectId(const String*& pId) const
{
    if (m_bName_valueSet)
    {
        pId = &m_Name;
        return true;
    }
    else
    {
        pId = NULL;
        return false;
    }
}

template <class T>
ValueObject* RetWallPntTmpl<T>::id() const
{
    if (m_bName_valueSet)
    {
        ValueObject* pValue = new StringObjectTmpl<StringObject>(m_Name);
        if (!pValue)
	         throw Exception(Exception::kUnableToAllocateMemory, L"Out of Memory.");
        return pValue;
    }
    else
        return NULL;
}



template <class T>
double RetWallPntTmpl<T>::getHeight() const
{
    return m_Height;
}

template <class T>
void RetWallPntTmpl<T>::setHeight(double value)
{
    m_Height = value;
    m_bHeight_valueSet = true;
}

template <class T>
bool RetWallPntTmpl<T>::hasValue_Height() const
{
    return m_bHeight_valueSet;
}

template <class T>
void RetWallPntTmpl<T>::resetValue_Height()
{
    m_bHeight_valueSet = false;
}


template <class T>
double RetWallPntTmpl<T>::getOffset() const
{
    return m_Offset;
}

template <class T>
void RetWallPntTmpl<T>::setOffset(double value)
{
    m_Offset = value;
    m_bOffset_valueSet = true;
}

template <class T>
bool RetWallPntTmpl<T>::hasValue_Offset() const
{
    return m_bOffset_valueSet;
}

template <class T>
void RetWallPntTmpl<T>::resetValue_Offset()
{
    m_bOffset_valueSet = false;
}



template <class T>
void RetWallPntTmpl<T>::toXml (IStream& stream)
{
    static const wchar_t* kstrElementName = L"RetWallPnt";
    stream.write(L"<");
    stream.write(kstrElementName);
    if (m_bHeight_valueSet)
    {
        stream.write(L" height=\"");
        DoubleObjectImpl::streamOut(m_Height, stream);
        stream.write(L"\"");
    }
    if (m_bOffset_valueSet)
    {
        stream.write(L" offset=\"");
        DoubleObjectImpl::streamOut(m_Offset, stream);
        stream.write(L"\"");
    }
    if (m_bName_valueSet)
    {
        stream.write(L" name=\"");
        StringObjectImpl::streamOut(m_Name, stream);
        stream.write(L"\"");
    }
    if (m_bDesc_valueSet)
    {
        stream.write(L" desc=\"");
        StringObjectImpl::streamOut(m_Desc, stream);
        stream.write(L"\"");
    }
    if (m_bCode_valueSet)
    {
        stream.write(L" code=\"");
        StringObjectImpl::streamOut(m_Code, stream);
        stream.write(L"\"");
    }
    if (m_bState_valueSet)
    {
        stream.write(L" state=\"");
        EnumStateTypeImpl::streamOut(m_State, stream);
        stream.write(L"\"");
    }
    if (m_bPntRef_valueSet)
    {
        stream.write(L" pntRef=\"");
        StringObjectImpl::streamOut(m_PntRef, stream);
        stream.write(L"\"");
    }
    if (m_bFeatureRef_valueSet)
    {
        stream.write(L" featureRef=\"");
        StringObjectImpl::streamOut(m_FeatureRef, stream);
        stream.write(L"\"");
    }
    if (m_bPointGeometry_valueSet)
    {
        stream.write(L" pointGeometry=\"");
        EnumPointGeometryTypeImpl::streamOut(m_PointGeometry, stream);
        stream.write(L"\"");
    }
    if (m_bDTMAttribute_valueSet)
    {
        stream.write(L" DTMAttribute=\"");
        EnumDTMAttributeTypeImpl::streamOut(m_DTMAttribute, stream);
        stream.write(L"\"");
    }
    if (m_bTimeStamp_valueSet)
    {
        stream.write(L" timeStamp=\"");
        StringObjectImpl::streamOut(m_TimeStamp, stream);
        stream.write(L"\"");
    }
    if (m_bRole_valueSet)
    {
        stream.write(L" role=\"");
        EnumSurveyRoleTypeImpl::streamOut(m_Role, stream);
        stream.write(L"\"");
    }
    stream.write(L">");
    toStream(stream);
    stream.write(L"</");
    stream.write(kstrElementName);
    stream.write(L">");
}

template <class T>
Object::ValidityEnum RetWallPntTmpl<T>::validate (IValidationEventSink* pEventSink) const
{
    Object::ValidityEnum returnCode = Object::kValid;
    returnCode = this->PointType3dReqTmpl<T>::validate(pEventSink);
    if (!m_bHeight_valueSet)
    {
        pEventSink->onEvent(IValidationEventSink::EventCode::kRequiredValueNotSet, this, L"Height", L"Required value not set");
        returnCode = Object::kInvalid;
    }
    if (!m_bOffset_valueSet)
    {
        pEventSink->onEvent(IValidationEventSink::EventCode::kRequiredValueNotSet, this, L"Offset", L"Required value not set");
        returnCode = Object::kInvalid;
    }
    return returnCode;
}

}; // namespace : LX
