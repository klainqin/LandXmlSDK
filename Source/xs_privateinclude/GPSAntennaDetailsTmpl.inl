#include "stdafx.h"
#include "LXTypes.h"
#include "GPSAntennaDetails.h"
#include "LXTypesTmpl.h"
#include "GPSAntennaDetailsImpl.h"
#include "LXTypesTmpl.inl"

namespace LX
{


template<class T>
GPSAntennaDetailsTmpl<T>::GPSAntennaDetailsTmpl (DocumentImpl* pDoc)
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
    m_Latitude = 0.0;
    m_bLatitude_valueSet = false;
    m_Longitude = 0.0;
    m_bLongitude_valueSet = false;
    m_Altitude = 0.0;
    m_bAltitude_valueSet = false;
    m_EllipsiodalHeight = 0.0;
    m_bEllipsiodalHeight_valueSet = false;
    m_OrthometricHeight = 0.0;
    m_bOrthometricHeight_valueSet = false;
}


template<class T>
GPSAntennaDetailsTmpl<T>::~GPSAntennaDetailsTmpl ()
{
}



template <class T>
String GPSAntennaDetailsTmpl<T>::getId() const
{
    return m_Id;
}

template <class T>
void GPSAntennaDetailsTmpl<T>::setId(String value)
{
    m_Id = value;
    m_bId_valueSet = true;
}

template <class T>
bool GPSAntennaDetailsTmpl<T>::hasValue_Id() const
{
    return m_bId_valueSet;
}

template <class T>
void GPSAntennaDetailsTmpl<T>::resetValue_Id()
{
    m_bId_valueSet = false;
}


template <class T>
String GPSAntennaDetailsTmpl<T>::getManufacturer() const
{
    return m_Manufacturer;
}

template <class T>
void GPSAntennaDetailsTmpl<T>::setManufacturer(String value)
{
    m_Manufacturer = value;
    m_bManufacturer_valueSet = true;
}

template <class T>
bool GPSAntennaDetailsTmpl<T>::hasValue_Manufacturer() const
{
    return m_bManufacturer_valueSet;
}

template <class T>
void GPSAntennaDetailsTmpl<T>::resetValue_Manufacturer()
{
    m_bManufacturer_valueSet = false;
}


template <class T>
String GPSAntennaDetailsTmpl<T>::getModel() const
{
    return m_Model;
}

template <class T>
void GPSAntennaDetailsTmpl<T>::setModel(String value)
{
    m_Model = value;
    m_bModel_valueSet = true;
}

template <class T>
bool GPSAntennaDetailsTmpl<T>::hasValue_Model() const
{
    return m_bModel_valueSet;
}

template <class T>
void GPSAntennaDetailsTmpl<T>::resetValue_Model()
{
    m_bModel_valueSet = false;
}


template <class T>
String GPSAntennaDetailsTmpl<T>::getSerialNumber() const
{
    return m_SerialNumber;
}

template <class T>
void GPSAntennaDetailsTmpl<T>::setSerialNumber(String value)
{
    m_SerialNumber = value;
    m_bSerialNumber_valueSet = true;
}

template <class T>
bool GPSAntennaDetailsTmpl<T>::hasValue_SerialNumber() const
{
    return m_bSerialNumber_valueSet;
}

template <class T>
void GPSAntennaDetailsTmpl<T>::resetValue_SerialNumber()
{
    m_bSerialNumber_valueSet = false;
}


template <class T>
double GPSAntennaDetailsTmpl<T>::getLatitude() const
{
    return m_Latitude;
}

template <class T>
void GPSAntennaDetailsTmpl<T>::setLatitude(double value)
{
    m_Latitude = value;
    m_bLatitude_valueSet = true;
}

template <class T>
bool GPSAntennaDetailsTmpl<T>::hasValue_Latitude() const
{
    return m_bLatitude_valueSet;
}

template <class T>
void GPSAntennaDetailsTmpl<T>::resetValue_Latitude()
{
    m_bLatitude_valueSet = false;
}


template <class T>
double GPSAntennaDetailsTmpl<T>::getLongitude() const
{
    return m_Longitude;
}

template <class T>
void GPSAntennaDetailsTmpl<T>::setLongitude(double value)
{
    m_Longitude = value;
    m_bLongitude_valueSet = true;
}

template <class T>
bool GPSAntennaDetailsTmpl<T>::hasValue_Longitude() const
{
    return m_bLongitude_valueSet;
}

template <class T>
void GPSAntennaDetailsTmpl<T>::resetValue_Longitude()
{
    m_bLongitude_valueSet = false;
}


template <class T>
double GPSAntennaDetailsTmpl<T>::getAltitude() const
{
    return m_Altitude;
}

template <class T>
void GPSAntennaDetailsTmpl<T>::setAltitude(double value)
{
    m_Altitude = value;
    m_bAltitude_valueSet = true;
}

template <class T>
bool GPSAntennaDetailsTmpl<T>::hasValue_Altitude() const
{
    return m_bAltitude_valueSet;
}

template <class T>
void GPSAntennaDetailsTmpl<T>::resetValue_Altitude()
{
    m_bAltitude_valueSet = false;
}


template <class T>
double GPSAntennaDetailsTmpl<T>::getEllipsiodalHeight() const
{
    return m_EllipsiodalHeight;
}

template <class T>
void GPSAntennaDetailsTmpl<T>::setEllipsiodalHeight(double value)
{
    m_EllipsiodalHeight = value;
    m_bEllipsiodalHeight_valueSet = true;
}

template <class T>
bool GPSAntennaDetailsTmpl<T>::hasValue_EllipsiodalHeight() const
{
    return m_bEllipsiodalHeight_valueSet;
}

template <class T>
void GPSAntennaDetailsTmpl<T>::resetValue_EllipsiodalHeight()
{
    m_bEllipsiodalHeight_valueSet = false;
}


template <class T>
double GPSAntennaDetailsTmpl<T>::getOrthometricHeight() const
{
    return m_OrthometricHeight;
}

template <class T>
void GPSAntennaDetailsTmpl<T>::setOrthometricHeight(double value)
{
    m_OrthometricHeight = value;
    m_bOrthometricHeight_valueSet = true;
}

template <class T>
bool GPSAntennaDetailsTmpl<T>::hasValue_OrthometricHeight() const
{
    return m_bOrthometricHeight_valueSet;
}

template <class T>
void GPSAntennaDetailsTmpl<T>::resetValue_OrthometricHeight()
{
    m_bOrthometricHeight_valueSet = false;
}



template <class T>
void GPSAntennaDetailsTmpl<T>::toXml (IStream& stream)
{
    static const wchar_t* kstrElementName = L"GPSAntennaDetails";
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
    if (m_bLatitude_valueSet)
    {
        stream.write(L" latitude=\"");
        DoubleObjectImpl::streamOut(m_Latitude, stream);
        stream.write(L"\"");
    }
    if (m_bLongitude_valueSet)
    {
        stream.write(L" longitude=\"");
        DoubleObjectImpl::streamOut(m_Longitude, stream);
        stream.write(L"\"");
    }
    if (m_bAltitude_valueSet)
    {
        stream.write(L" altitude=\"");
        DoubleObjectImpl::streamOut(m_Altitude, stream);
        stream.write(L"\"");
    }
    if (m_bEllipsiodalHeight_valueSet)
    {
        stream.write(L" ellipsiodalHeight=\"");
        DoubleObjectImpl::streamOut(m_EllipsiodalHeight, stream);
        stream.write(L"\"");
    }
    if (m_bOrthometricHeight_valueSet)
    {
        stream.write(L" orthometricHeight=\"");
        DoubleObjectImpl::streamOut(m_OrthometricHeight, stream);
        stream.write(L"\"");
    }
    stream.write(L">");
    stream.write(L"</");
    stream.write(kstrElementName);
    stream.write(L">");
}

template <class T>
Object::ValidityEnum GPSAntennaDetailsTmpl<T>::validate (IValidationEventSink* pEventSink) const
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
