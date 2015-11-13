#include "stdafx.h"
#include "LXTypes.h"
#include "Outlet.h"
#include "LXTypesTmpl.h"
#include "OutletImpl.h"
#include "LXTypesTmpl.inl"
#include "PointType3dReqTmpl.inl"

namespace LX
{


template<class T>
OutletTmpl<T>::OutletTmpl<T> (DocumentImpl* pDoc)
    : PointType3dReqTmpl<T>(pDoc)
{
    m_RefWS = L"";
    m_bRefWS_valueSet = false;
}


template<class T>
OutletTmpl<T>::~OutletTmpl<T> ()
{
}


template <class T>
bool OutletTmpl<T>::getObjectId(const String*& pId) const
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
ValueObject* OutletTmpl<T>::id() const
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
String OutletTmpl<T>::getRefWS() const
{
    return m_RefWS;
}

template <class T>
void OutletTmpl<T>::setRefWS(String value)
{
    m_RefWS = value;
    m_bRefWS_valueSet = true;
}

template <class T>
bool OutletTmpl<T>::hasValue_RefWS() const
{
    return m_bRefWS_valueSet;
}

template <class T>
void OutletTmpl<T>::resetValue_RefWS()
{
    m_bRefWS_valueSet = false;
}



template <class T>
void OutletTmpl<T>::toXml (IStream& stream)
{
    static const wchar_t* kstrElementName = L"Outlet";
    stream.write(L"<");
    stream.write(kstrElementName);
    if (m_bRefWS_valueSet)
    {
        stream.write(L" refWS=\"");
        StringObjectImpl::streamOut(m_RefWS, stream);
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
Object::ValidityEnum OutletTmpl<T>::validate (IValidationEventSink* pEventSink) const
{
    Object::ValidityEnum returnCode = Object::kValid;
    returnCode = this->PointType3dReqTmpl<T>::validate(pEventSink);
    return returnCode;
}

}; // namespace : LX
