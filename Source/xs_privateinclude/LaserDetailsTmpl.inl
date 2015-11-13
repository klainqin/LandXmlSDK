#include "stdafx.h"
#include "LXTypes.h"
#include "LaserDetails.h"
#include "LXTypesTmpl.h"
#include "LaserDetailsImpl.h"
#include "LXTypesTmpl.inl"

namespace LX
{


template<class T>
LaserDetailsTmpl<T>::LaserDetailsTmpl<T> (DocumentImpl* pDoc)
    : ObjectTmpl<T>(pDoc)
{
    m_Id = L"";
    m_bId_valueSet = false;
    m_LaserVertOffset = 0.0;
    m_bLaserVertOffset_valueSet = false;
    m_Manufacturer = L"";
    m_bManufacturer_valueSet = false;
    m_Model = L"";
    m_bModel_valueSet = false;
    m_SerialNumber = L"";
    m_bSerialNumber_valueSet = false;
}


template<class T>
LaserDetailsTmpl<T>::~LaserDetailsTmpl<T> ()
{
}



template <class T>
String LaserDetailsTmpl<T>::getId() const
{
    return m_Id;
}

template <class T>
void LaserDetailsTmpl<T>::setId(String value)
{
    m_Id = value;
    m_bId_valueSet = true;
}

template <class T>
bool LaserDetailsTmpl<T>::hasValue_Id() const
{
    return m_bId_valueSet;
}

template <class T>
void LaserDetailsTmpl<T>::resetValue_Id()
{
    m_bId_valueSet = false;
}


template <class T>
double LaserDetailsTmpl<T>::getLaserVertOffset() const
{
    return m_LaserVertOffset;
}

template <class T>
void LaserDetailsTmpl<T>::setLaserVertOffset(double value)
{
    m_LaserVertOffset = value;
    m_bLaserVertOffset_valueSet = true;
}

template <class T>
bool LaserDetailsTmpl<T>::hasValue_LaserVertOffset() const
{
    return m_bLaserVertOffset_valueSet;
}

template <class T>
void LaserDetailsTmpl<T>::resetValue_LaserVertOffset()
{
    m_bLaserVertOffset_valueSet = false;
}


template <class T>
String LaserDetailsTmpl<T>::getManufacturer() const
{
    return m_Manufacturer;
}

template <class T>
void LaserDetailsTmpl<T>::setManufacturer(String value)
{
    m_Manufacturer = value;
    m_bManufacturer_valueSet = true;
}

template <class T>
bool LaserDetailsTmpl<T>::hasValue_Manufacturer() const
{
    return m_bManufacturer_valueSet;
}

template <class T>
void LaserDetailsTmpl<T>::resetValue_Manufacturer()
{
    m_bManufacturer_valueSet = false;
}


template <class T>
String LaserDetailsTmpl<T>::getModel() const
{
    return m_Model;
}

template <class T>
void LaserDetailsTmpl<T>::setModel(String value)
{
    m_Model = value;
    m_bModel_valueSet = true;
}

template <class T>
bool LaserDetailsTmpl<T>::hasValue_Model() const
{
    return m_bModel_valueSet;
}

template <class T>
void LaserDetailsTmpl<T>::resetValue_Model()
{
    m_bModel_valueSet = false;
}


template <class T>
String LaserDetailsTmpl<T>::getSerialNumber() const
{
    return m_SerialNumber;
}

template <class T>
void LaserDetailsTmpl<T>::setSerialNumber(String value)
{
    m_SerialNumber = value;
    m_bSerialNumber_valueSet = true;
}

template <class T>
bool LaserDetailsTmpl<T>::hasValue_SerialNumber() const
{
    return m_bSerialNumber_valueSet;
}

template <class T>
void LaserDetailsTmpl<T>::resetValue_SerialNumber()
{
    m_bSerialNumber_valueSet = false;
}



template <class T>
void LaserDetailsTmpl<T>::toXml (IStream& stream)
{
    static const wchar_t* kstrElementName = L"LaserDetails";
    stream.write(L"<");
    stream.write(kstrElementName);
    if (m_bId_valueSet)
    {
        stream.write(L" id=\"");
        StringObjectImpl::streamOut(m_Id, stream);
        stream.write(L"\"");
    }
    if (m_bLaserVertOffset_valueSet)
    {
        stream.write(L" laserVertOffset=\"");
        DoubleObjectImpl::streamOut(m_LaserVertOffset, stream);
        stream.write(L"\"");
    }
    if (m_bManufacturer_valueSet)
    {
        stream.write(L" manufacturer=\"");
        StringObjectImpl::streamOut(m_Manufacturer, stream);
        stream.write(L"\"");
    }
    if (m_bModel_valueSet)
    {
        stream.write(L" model=\"");
        StringObjectImpl::streamOut(m_Model, stream);
        stream.write(L"\"");
    }
    if (m_bSerialNumber_valueSet)
    {
        stream.write(L" serialNumber=\"");
        StringObjectImpl::streamOut(m_SerialNumber, stream);
        stream.write(L"\"");
    }
    stream.write(L">");
    stream.write(L"</");
    stream.write(kstrElementName);
    stream.write(L">");
}

template <class T>
Object::ValidityEnum LaserDetailsTmpl<T>::validate (IValidationEventSink* pEventSink) const
{
    Object::ValidityEnum returnCode = Object::kValid;
    returnCode = this->ObjectTmpl<T>::validate(pEventSink);
    if (!m_bId_valueSet)
    {
        pEventSink->onEvent(IValidationEventSink::EventCode::kRequiredValueNotSet, this, L"Id", L"Required value not set");
        returnCode = Object::kInvalid;
    }
    return returnCode;
}

}; // namespace : LX
