#include "stdafx.h"
#include "LXTypes.h"
#include "GPSReceiverDetails.h"
#include "LXTypesTmpl.h"
#include "GPSReceiverDetailsImpl.h"
#include "LXTypesTmpl.inl"

namespace LX
{


template<class T>
GPSReceiverDetailsTmpl<T>::GPSReceiverDetailsTmpl (DocumentImpl* pDoc)
    : ObjectTmpl<T>(pDoc)
{
    m_Id = L"";
    m_bId_valueSet = false;
    m_Manufacturer = L"";
    m_bManufacturer_valueSet = false;
    m_Model = L"";
    m_bModel_valueSet = false;
    m_SerialNumber = L"";
    m_bSerialNumber_valueSet = false;
}


template<class T>
GPSReceiverDetailsTmpl<T>::~GPSReceiverDetailsTmpl ()
{
}



template <class T>
String GPSReceiverDetailsTmpl<T>::getId() const
{
    return m_Id;
}

template <class T>
void GPSReceiverDetailsTmpl<T>::setId(String value)
{
    m_Id = value;
    m_bId_valueSet = true;
}

template <class T>
bool GPSReceiverDetailsTmpl<T>::hasValue_Id() const
{
    return m_bId_valueSet;
}

template <class T>
void GPSReceiverDetailsTmpl<T>::resetValue_Id()
{
    m_bId_valueSet = false;
}


template <class T>
String GPSReceiverDetailsTmpl<T>::getManufacturer() const
{
    return m_Manufacturer;
}

template <class T>
void GPSReceiverDetailsTmpl<T>::setManufacturer(String value)
{
    m_Manufacturer = value;
    m_bManufacturer_valueSet = true;
}

template <class T>
bool GPSReceiverDetailsTmpl<T>::hasValue_Manufacturer() const
{
    return m_bManufacturer_valueSet;
}

template <class T>
void GPSReceiverDetailsTmpl<T>::resetValue_Manufacturer()
{
    m_bManufacturer_valueSet = false;
}


template <class T>
String GPSReceiverDetailsTmpl<T>::getModel() const
{
    return m_Model;
}

template <class T>
void GPSReceiverDetailsTmpl<T>::setModel(String value)
{
    m_Model = value;
    m_bModel_valueSet = true;
}

template <class T>
bool GPSReceiverDetailsTmpl<T>::hasValue_Model() const
{
    return m_bModel_valueSet;
}

template <class T>
void GPSReceiverDetailsTmpl<T>::resetValue_Model()
{
    m_bModel_valueSet = false;
}


template <class T>
String GPSReceiverDetailsTmpl<T>::getSerialNumber() const
{
    return m_SerialNumber;
}

template <class T>
void GPSReceiverDetailsTmpl<T>::setSerialNumber(String value)
{
    m_SerialNumber = value;
    m_bSerialNumber_valueSet = true;
}

template <class T>
bool GPSReceiverDetailsTmpl<T>::hasValue_SerialNumber() const
{
    return m_bSerialNumber_valueSet;
}

template <class T>
void GPSReceiverDetailsTmpl<T>::resetValue_SerialNumber()
{
    m_bSerialNumber_valueSet = false;
}



template <class T>
void GPSReceiverDetailsTmpl<T>::toXml (IStream& stream)
{
    static const wchar_t* kstrElementName = L"GPSReceiverDetails";
    stream.write(L"<");
    stream.write(kstrElementName);
    if (m_bId_valueSet)
    {
        stream.write(L" id=\"");
        StringObjectImpl::streamOut(m_Id, stream);
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
Object::ValidityEnum GPSReceiverDetailsTmpl<T>::validate (IValidationEventSink* pEventSink) const
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
