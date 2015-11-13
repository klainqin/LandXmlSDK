#include "stdafx.h"
#include "LXTypes.h"
#include "LocationAddress.h"
#include "ComplexNameCollection.h"
#include "RoadNameCollection.h"
#include "AdministrativeAreaCollection.h"
#include "AddressPointCollection.h"
#include "LXTypesTmpl.h"
#include "LocationAddressImpl.h"
#include "ComplexNameCollectionImpl.h"
#include "RoadNameCollectionImpl.h"
#include "AdministrativeAreaCollectionImpl.h"
#include "AddressPointCollectionImpl.h"
#include "LXTypesTmpl.inl"

namespace LX
{


template<class T>
LocationAddressTmpl<T>::LocationAddressTmpl<T> (DocumentImpl* pDoc)
    : ObjectTmpl<T>(pDoc)
{
    m_ComplexName = createComplexNameCollectionObject(pDoc);
    m_RoadName = createRoadNameCollectionObject(pDoc);
    m_AdministrativeArea = createAdministrativeAreaCollectionObject(pDoc);
    m_AddressPoint = createAddressPointCollectionObject(pDoc);
    m_AddressType = L"";
    m_bAddressType_valueSet = false;
    m_FlatType = L"";
    m_bFlatType_valueSet = false;
    m_FlatNumber = L"";
    m_bFlatNumber_valueSet = false;
    m_FloorLevelType = L"";
    m_bFloorLevelType_valueSet = false;
    m_FloorLevelNumber = L"";
    m_bFloorLevelNumber_valueSet = false;
    m_NumberFirst = 0;
    m_bNumberFirst_valueSet = false;
    m_NumberSuffixFirst = L"";
    m_bNumberSuffixFirst_valueSet = false;
    m_NumberLast = 0;
    m_bNumberLast_valueSet = false;
    m_NumberSuffixLast = L"";
    m_bNumberSuffixLast_valueSet = false;
}


template<class T>
LocationAddressTmpl<T>::~LocationAddressTmpl<T> ()
{
    if (m_ComplexName != NULL)
    {
        m_ComplexName->release();
        m_ComplexName = NULL;
    }
    if (m_RoadName != NULL)
    {
        m_RoadName->release();
        m_RoadName = NULL;
    }
    if (m_AdministrativeArea != NULL)
    {
        m_AdministrativeArea->release();
        m_AdministrativeArea = NULL;
    }
    if (m_AddressPoint != NULL)
    {
        m_AddressPoint->release();
        m_AddressPoint = NULL;
    }
}

template <class T>
ComplexNameCollection& LocationAddressTmpl<T>::ComplexName()
{
    return *m_ComplexName;
}

template <class T>
const ComplexNameCollection& LocationAddressTmpl<T>::ComplexName() const
{
    return *m_ComplexName;
}

template <class T>
RoadNameCollection& LocationAddressTmpl<T>::RoadName()
{
    return *m_RoadName;
}

template <class T>
const RoadNameCollection& LocationAddressTmpl<T>::RoadName() const
{
    return *m_RoadName;
}

template <class T>
AdministrativeAreaCollection& LocationAddressTmpl<T>::AdministrativeArea()
{
    return *m_AdministrativeArea;
}

template <class T>
const AdministrativeAreaCollection& LocationAddressTmpl<T>::AdministrativeArea() const
{
    return *m_AdministrativeArea;
}

template <class T>
AddressPointCollection& LocationAddressTmpl<T>::AddressPoint()
{
    return *m_AddressPoint;
}

template <class T>
const AddressPointCollection& LocationAddressTmpl<T>::AddressPoint() const
{
    return *m_AddressPoint;
}



template <class T>
String LocationAddressTmpl<T>::getAddressType() const
{
    return m_AddressType;
}

template <class T>
void LocationAddressTmpl<T>::setAddressType(String value)
{
    m_AddressType = value;
    m_bAddressType_valueSet = true;
}

template <class T>
bool LocationAddressTmpl<T>::hasValue_AddressType() const
{
    return m_bAddressType_valueSet;
}

template <class T>
void LocationAddressTmpl<T>::resetValue_AddressType()
{
    m_bAddressType_valueSet = false;
}


template <class T>
String LocationAddressTmpl<T>::getFlatType() const
{
    return m_FlatType;
}

template <class T>
void LocationAddressTmpl<T>::setFlatType(String value)
{
    m_FlatType = value;
    m_bFlatType_valueSet = true;
}

template <class T>
bool LocationAddressTmpl<T>::hasValue_FlatType() const
{
    return m_bFlatType_valueSet;
}

template <class T>
void LocationAddressTmpl<T>::resetValue_FlatType()
{
    m_bFlatType_valueSet = false;
}


template <class T>
String LocationAddressTmpl<T>::getFlatNumber() const
{
    return m_FlatNumber;
}

template <class T>
void LocationAddressTmpl<T>::setFlatNumber(String value)
{
    m_FlatNumber = value;
    m_bFlatNumber_valueSet = true;
}

template <class T>
bool LocationAddressTmpl<T>::hasValue_FlatNumber() const
{
    return m_bFlatNumber_valueSet;
}

template <class T>
void LocationAddressTmpl<T>::resetValue_FlatNumber()
{
    m_bFlatNumber_valueSet = false;
}


template <class T>
String LocationAddressTmpl<T>::getFloorLevelType() const
{
    return m_FloorLevelType;
}

template <class T>
void LocationAddressTmpl<T>::setFloorLevelType(String value)
{
    m_FloorLevelType = value;
    m_bFloorLevelType_valueSet = true;
}

template <class T>
bool LocationAddressTmpl<T>::hasValue_FloorLevelType() const
{
    return m_bFloorLevelType_valueSet;
}

template <class T>
void LocationAddressTmpl<T>::resetValue_FloorLevelType()
{
    m_bFloorLevelType_valueSet = false;
}


template <class T>
String LocationAddressTmpl<T>::getFloorLevelNumber() const
{
    return m_FloorLevelNumber;
}

template <class T>
void LocationAddressTmpl<T>::setFloorLevelNumber(String value)
{
    m_FloorLevelNumber = value;
    m_bFloorLevelNumber_valueSet = true;
}

template <class T>
bool LocationAddressTmpl<T>::hasValue_FloorLevelNumber() const
{
    return m_bFloorLevelNumber_valueSet;
}

template <class T>
void LocationAddressTmpl<T>::resetValue_FloorLevelNumber()
{
    m_bFloorLevelNumber_valueSet = false;
}


template <class T>
int LocationAddressTmpl<T>::getNumberFirst() const
{
    return m_NumberFirst;
}

template <class T>
void LocationAddressTmpl<T>::setNumberFirst(int value)
{
    m_NumberFirst = value;
    m_bNumberFirst_valueSet = true;
}

template <class T>
bool LocationAddressTmpl<T>::hasValue_NumberFirst() const
{
    return m_bNumberFirst_valueSet;
}

template <class T>
void LocationAddressTmpl<T>::resetValue_NumberFirst()
{
    m_bNumberFirst_valueSet = false;
}


template <class T>
String LocationAddressTmpl<T>::getNumberSuffixFirst() const
{
    return m_NumberSuffixFirst;
}

template <class T>
void LocationAddressTmpl<T>::setNumberSuffixFirst(String value)
{
    m_NumberSuffixFirst = value;
    m_bNumberSuffixFirst_valueSet = true;
}

template <class T>
bool LocationAddressTmpl<T>::hasValue_NumberSuffixFirst() const
{
    return m_bNumberSuffixFirst_valueSet;
}

template <class T>
void LocationAddressTmpl<T>::resetValue_NumberSuffixFirst()
{
    m_bNumberSuffixFirst_valueSet = false;
}


template <class T>
int LocationAddressTmpl<T>::getNumberLast() const
{
    return m_NumberLast;
}

template <class T>
void LocationAddressTmpl<T>::setNumberLast(int value)
{
    m_NumberLast = value;
    m_bNumberLast_valueSet = true;
}

template <class T>
bool LocationAddressTmpl<T>::hasValue_NumberLast() const
{
    return m_bNumberLast_valueSet;
}

template <class T>
void LocationAddressTmpl<T>::resetValue_NumberLast()
{
    m_bNumberLast_valueSet = false;
}


template <class T>
String LocationAddressTmpl<T>::getNumberSuffixLast() const
{
    return m_NumberSuffixLast;
}

template <class T>
void LocationAddressTmpl<T>::setNumberSuffixLast(String value)
{
    m_NumberSuffixLast = value;
    m_bNumberSuffixLast_valueSet = true;
}

template <class T>
bool LocationAddressTmpl<T>::hasValue_NumberSuffixLast() const
{
    return m_bNumberSuffixLast_valueSet;
}

template <class T>
void LocationAddressTmpl<T>::resetValue_NumberSuffixLast()
{
    m_bNumberSuffixLast_valueSet = false;
}



template <class T>
void LocationAddressTmpl<T>::toXml (IStream& stream)
{
    static const wchar_t* kstrElementName = L"LocationAddress";
    stream.write(L"<");
    stream.write(kstrElementName);
    if (m_bAddressType_valueSet)
    {
        stream.write(L" addressType=\"");
        StringObjectImpl::streamOut(m_AddressType, stream);
        stream.write(L"\"");
    }
    if (m_bFlatType_valueSet)
    {
        stream.write(L" flatType=\"");
        StringObjectImpl::streamOut(m_FlatType, stream);
        stream.write(L"\"");
    }
    if (m_bFlatNumber_valueSet)
    {
        stream.write(L" flatNumber=\"");
        StringObjectImpl::streamOut(m_FlatNumber, stream);
        stream.write(L"\"");
    }
    if (m_bFloorLevelType_valueSet)
    {
        stream.write(L" floorLevelType=\"");
        StringObjectImpl::streamOut(m_FloorLevelType, stream);
        stream.write(L"\"");
    }
    if (m_bFloorLevelNumber_valueSet)
    {
        stream.write(L" floorLevelNumber=\"");
        StringObjectImpl::streamOut(m_FloorLevelNumber, stream);
        stream.write(L"\"");
    }
    if (m_bNumberFirst_valueSet)
    {
        stream.write(L" numberFirst=\"");
        IntegerObjectImpl::streamOut(m_NumberFirst, stream);
        stream.write(L"\"");
    }
    if (m_bNumberSuffixFirst_valueSet)
    {
        stream.write(L" numberSuffixFirst=\"");
        StringObjectImpl::streamOut(m_NumberSuffixFirst, stream);
        stream.write(L"\"");
    }
    if (m_bNumberLast_valueSet)
    {
        stream.write(L" numberLast=\"");
        IntegerObjectImpl::streamOut(m_NumberLast, stream);
        stream.write(L"\"");
    }
    if (m_bNumberSuffixLast_valueSet)
    {
        stream.write(L" numberSuffixLast=\"");
        StringObjectImpl::streamOut(m_NumberSuffixLast, stream);
        stream.write(L"\"");
    }
    stream.write(L">");
    if (m_ComplexName)
    {
    	m_ComplexName->toXml(stream);
    }
    if (m_RoadName)
    {
    	m_RoadName->toXml(stream);
    }
    if (m_AdministrativeArea)
    {
    	m_AdministrativeArea->toXml(stream);
    }
    if (m_AddressPoint)
    {
    	m_AddressPoint->toXml(stream);
    }
    stream.write(L"</");
    stream.write(kstrElementName);
    stream.write(L">");
}

template <class T>
Object::ValidityEnum LocationAddressTmpl<T>::validate (IValidationEventSink* pEventSink) const
{
    Object::ValidityEnum returnCode = Object::kValid;
    returnCode = this->ObjectTmpl<T>::validate(pEventSink);
    if (m_ComplexName)
    {
        if (m_ComplexName->validate(pEventSink) != Object::kValid)
            returnCode = Object::kValidWithInvalidChildren;
    }
    if (m_RoadName)
    {
        if (m_RoadName->validate(pEventSink) != Object::kValid)
            returnCode = Object::kValidWithInvalidChildren;
    }
    if (m_AdministrativeArea)
    {
        if (m_AdministrativeArea->validate(pEventSink) != Object::kValid)
            returnCode = Object::kValidWithInvalidChildren;
    }
    if (m_AddressPoint)
    {
        if (m_AddressPoint->validate(pEventSink) != Object::kValid)
            returnCode = Object::kValidWithInvalidChildren;
    }
    return returnCode;
}

}; // namespace : LX
