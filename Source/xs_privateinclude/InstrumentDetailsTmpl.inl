#include "stdafx.h"
#include "LXTypes.h"
#include "InstrumentDetails.h"
#include "Corrections.h"
#include "LXTypesTmpl.h"
#include "InstrumentDetailsImpl.h"
#include "CorrectionsImpl.h"
#include "LXTypesTmpl.inl"

namespace LX
{


template<class T>
InstrumentDetailsTmpl<T>::InstrumentDetailsTmpl (DocumentImpl* pDoc)
    : ObjectTmpl<T>(pDoc)
{
    m_Corrections = NULL;
    m_Id = L"";
    m_bId_valueSet = false;
    m_EdmAccuracyConstant = 0.0;
    m_bEdmAccuracyConstant_valueSet = false;
    m_EdmAccuracyppm = 0.0;
    m_bEdmAccuracyppm_valueSet = false;
    m_EdmVertOffset = 0.0;
    m_bEdmVertOffset_valueSet = false;
    m_HorizAnglePrecision = 0.0;
    m_bHorizAnglePrecision_valueSet = false;
    m_Manufacturer = L"";
    m_bManufacturer_valueSet = false;
    m_Model = L"";
    m_bModel_valueSet = false;
    m_SerialNumber = L"";
    m_bSerialNumber_valueSet = false;
    m_ZenithAnglePrecision = 0.0;
    m_bZenithAnglePrecision_valueSet = false;
    m_CarrierWavelength = 0.0;
    m_bCarrierWavelength_valueSet = false;
    m_RefractiveIndex = 0.0;
    m_bRefractiveIndex_valueSet = false;
    m_HorizCollimation = 0.0;
    m_bHorizCollimation_valueSet = false;
    m_VertCollimation = 0.0;
    m_bVertCollimation_valueSet = false;
    m_StadiaFactor = 0.0;
    m_bStadiaFactor_valueSet = false;
}


template<class T>
InstrumentDetailsTmpl<T>::~InstrumentDetailsTmpl ()
{
    if (m_Corrections != NULL)
    {
        m_Corrections->release();
        m_Corrections = NULL;
    }
}


template <class T>
Corrections* InstrumentDetailsTmpl<T>::getCorrections() const
{
    return m_Corrections;
}

template <class T>
void InstrumentDetailsTmpl<T>::setCorrections(Corrections* pValue)
{
    m_Corrections = pValue;
}


template <class T>
String InstrumentDetailsTmpl<T>::getId() const
{
    return m_Id;
}

template <class T>
void InstrumentDetailsTmpl<T>::setId(String value)
{
    m_Id = value;
    m_bId_valueSet = true;
}

template <class T>
bool InstrumentDetailsTmpl<T>::hasValue_Id() const
{
    return m_bId_valueSet;
}

template <class T>
void InstrumentDetailsTmpl<T>::resetValue_Id()
{
    m_bId_valueSet = false;
}


template <class T>
double InstrumentDetailsTmpl<T>::getEdmAccuracyConstant() const
{
    return m_EdmAccuracyConstant;
}

template <class T>
void InstrumentDetailsTmpl<T>::setEdmAccuracyConstant(double value)
{
    m_EdmAccuracyConstant = value;
    m_bEdmAccuracyConstant_valueSet = true;
}

template <class T>
bool InstrumentDetailsTmpl<T>::hasValue_EdmAccuracyConstant() const
{
    return m_bEdmAccuracyConstant_valueSet;
}

template <class T>
void InstrumentDetailsTmpl<T>::resetValue_EdmAccuracyConstant()
{
    m_bEdmAccuracyConstant_valueSet = false;
}


template <class T>
double InstrumentDetailsTmpl<T>::getEdmAccuracyppm() const
{
    return m_EdmAccuracyppm;
}

template <class T>
void InstrumentDetailsTmpl<T>::setEdmAccuracyppm(double value)
{
    m_EdmAccuracyppm = value;
    m_bEdmAccuracyppm_valueSet = true;
}

template <class T>
bool InstrumentDetailsTmpl<T>::hasValue_EdmAccuracyppm() const
{
    return m_bEdmAccuracyppm_valueSet;
}

template <class T>
void InstrumentDetailsTmpl<T>::resetValue_EdmAccuracyppm()
{
    m_bEdmAccuracyppm_valueSet = false;
}


template <class T>
double InstrumentDetailsTmpl<T>::getEdmVertOffset() const
{
    return m_EdmVertOffset;
}

template <class T>
void InstrumentDetailsTmpl<T>::setEdmVertOffset(double value)
{
    m_EdmVertOffset = value;
    m_bEdmVertOffset_valueSet = true;
}

template <class T>
bool InstrumentDetailsTmpl<T>::hasValue_EdmVertOffset() const
{
    return m_bEdmVertOffset_valueSet;
}

template <class T>
void InstrumentDetailsTmpl<T>::resetValue_EdmVertOffset()
{
    m_bEdmVertOffset_valueSet = false;
}


template <class T>
double InstrumentDetailsTmpl<T>::getHorizAnglePrecision() const
{
    return m_HorizAnglePrecision;
}

template <class T>
void InstrumentDetailsTmpl<T>::setHorizAnglePrecision(double value)
{
    m_HorizAnglePrecision = value;
    m_bHorizAnglePrecision_valueSet = true;
}

template <class T>
bool InstrumentDetailsTmpl<T>::hasValue_HorizAnglePrecision() const
{
    return m_bHorizAnglePrecision_valueSet;
}

template <class T>
void InstrumentDetailsTmpl<T>::resetValue_HorizAnglePrecision()
{
    m_bHorizAnglePrecision_valueSet = false;
}


template <class T>
String InstrumentDetailsTmpl<T>::getManufacturer() const
{
    return m_Manufacturer;
}

template <class T>
void InstrumentDetailsTmpl<T>::setManufacturer(String value)
{
    m_Manufacturer = value;
    m_bManufacturer_valueSet = true;
}

template <class T>
bool InstrumentDetailsTmpl<T>::hasValue_Manufacturer() const
{
    return m_bManufacturer_valueSet;
}

template <class T>
void InstrumentDetailsTmpl<T>::resetValue_Manufacturer()
{
    m_bManufacturer_valueSet = false;
}


template <class T>
String InstrumentDetailsTmpl<T>::getModel() const
{
    return m_Model;
}

template <class T>
void InstrumentDetailsTmpl<T>::setModel(String value)
{
    m_Model = value;
    m_bModel_valueSet = true;
}

template <class T>
bool InstrumentDetailsTmpl<T>::hasValue_Model() const
{
    return m_bModel_valueSet;
}

template <class T>
void InstrumentDetailsTmpl<T>::resetValue_Model()
{
    m_bModel_valueSet = false;
}


template <class T>
String InstrumentDetailsTmpl<T>::getSerialNumber() const
{
    return m_SerialNumber;
}

template <class T>
void InstrumentDetailsTmpl<T>::setSerialNumber(String value)
{
    m_SerialNumber = value;
    m_bSerialNumber_valueSet = true;
}

template <class T>
bool InstrumentDetailsTmpl<T>::hasValue_SerialNumber() const
{
    return m_bSerialNumber_valueSet;
}

template <class T>
void InstrumentDetailsTmpl<T>::resetValue_SerialNumber()
{
    m_bSerialNumber_valueSet = false;
}


template <class T>
double InstrumentDetailsTmpl<T>::getZenithAnglePrecision() const
{
    return m_ZenithAnglePrecision;
}

template <class T>
void InstrumentDetailsTmpl<T>::setZenithAnglePrecision(double value)
{
    m_ZenithAnglePrecision = value;
    m_bZenithAnglePrecision_valueSet = true;
}

template <class T>
bool InstrumentDetailsTmpl<T>::hasValue_ZenithAnglePrecision() const
{
    return m_bZenithAnglePrecision_valueSet;
}

template <class T>
void InstrumentDetailsTmpl<T>::resetValue_ZenithAnglePrecision()
{
    m_bZenithAnglePrecision_valueSet = false;
}


template <class T>
double InstrumentDetailsTmpl<T>::getCarrierWavelength() const
{
    return m_CarrierWavelength;
}

template <class T>
void InstrumentDetailsTmpl<T>::setCarrierWavelength(double value)
{
    m_CarrierWavelength = value;
    m_bCarrierWavelength_valueSet = true;
}

template <class T>
bool InstrumentDetailsTmpl<T>::hasValue_CarrierWavelength() const
{
    return m_bCarrierWavelength_valueSet;
}

template <class T>
void InstrumentDetailsTmpl<T>::resetValue_CarrierWavelength()
{
    m_bCarrierWavelength_valueSet = false;
}


template <class T>
double InstrumentDetailsTmpl<T>::getRefractiveIndex() const
{
    return m_RefractiveIndex;
}

template <class T>
void InstrumentDetailsTmpl<T>::setRefractiveIndex(double value)
{
    m_RefractiveIndex = value;
    m_bRefractiveIndex_valueSet = true;
}

template <class T>
bool InstrumentDetailsTmpl<T>::hasValue_RefractiveIndex() const
{
    return m_bRefractiveIndex_valueSet;
}

template <class T>
void InstrumentDetailsTmpl<T>::resetValue_RefractiveIndex()
{
    m_bRefractiveIndex_valueSet = false;
}


template <class T>
double InstrumentDetailsTmpl<T>::getHorizCollimation() const
{
    return m_HorizCollimation;
}

template <class T>
void InstrumentDetailsTmpl<T>::setHorizCollimation(double value)
{
    m_HorizCollimation = value;
    m_bHorizCollimation_valueSet = true;
}

template <class T>
bool InstrumentDetailsTmpl<T>::hasValue_HorizCollimation() const
{
    return m_bHorizCollimation_valueSet;
}

template <class T>
void InstrumentDetailsTmpl<T>::resetValue_HorizCollimation()
{
    m_bHorizCollimation_valueSet = false;
}


template <class T>
double InstrumentDetailsTmpl<T>::getVertCollimation() const
{
    return m_VertCollimation;
}

template <class T>
void InstrumentDetailsTmpl<T>::setVertCollimation(double value)
{
    m_VertCollimation = value;
    m_bVertCollimation_valueSet = true;
}

template <class T>
bool InstrumentDetailsTmpl<T>::hasValue_VertCollimation() const
{
    return m_bVertCollimation_valueSet;
}

template <class T>
void InstrumentDetailsTmpl<T>::resetValue_VertCollimation()
{
    m_bVertCollimation_valueSet = false;
}


template <class T>
double InstrumentDetailsTmpl<T>::getStadiaFactor() const
{
    return m_StadiaFactor;
}

template <class T>
void InstrumentDetailsTmpl<T>::setStadiaFactor(double value)
{
    m_StadiaFactor = value;
    m_bStadiaFactor_valueSet = true;
}

template <class T>
bool InstrumentDetailsTmpl<T>::hasValue_StadiaFactor() const
{
    return m_bStadiaFactor_valueSet;
}

template <class T>
void InstrumentDetailsTmpl<T>::resetValue_StadiaFactor()
{
    m_bStadiaFactor_valueSet = false;
}



template <class T>
void InstrumentDetailsTmpl<T>::toXml (IStream& stream)
{
    static const wchar_t* kstrElementName = L"InstrumentDetails";
    stream.write(L"<");
    stream.write(kstrElementName);
    if (m_bId_valueSet)
    {
        stream.write(L" id=\"");
        StringObjectImpl::streamOut(m_Id, stream);
        stream.write(L"\"");
    }
    if (m_bEdmAccuracyConstant_valueSet)
    {
        stream.write(L" edmAccuracyConstant=\"");
        DoubleObjectImpl::streamOut(m_EdmAccuracyConstant, stream);
        stream.write(L"\"");
    }
    if (m_bEdmAccuracyppm_valueSet)
    {
        stream.write(L" edmAccuracyppm=\"");
        DoubleObjectImpl::streamOut(m_EdmAccuracyppm, stream);
        stream.write(L"\"");
    }
    if (m_bEdmVertOffset_valueSet)
    {
        stream.write(L" edmVertOffset=\"");
        DoubleObjectImpl::streamOut(m_EdmVertOffset, stream);
        stream.write(L"\"");
    }
    if (m_bHorizAnglePrecision_valueSet)
    {
        stream.write(L" horizAnglePrecision=\"");
        DoubleObjectImpl::streamOut(m_HorizAnglePrecision, stream);
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
    if (m_bZenithAnglePrecision_valueSet)
    {
        stream.write(L" zenithAnglePrecision=\"");
        DoubleObjectImpl::streamOut(m_ZenithAnglePrecision, stream);
        stream.write(L"\"");
    }
    if (m_bCarrierWavelength_valueSet)
    {
        stream.write(L" carrierWavelength=\"");
        DoubleObjectImpl::streamOut(m_CarrierWavelength, stream);
        stream.write(L"\"");
    }
    if (m_bRefractiveIndex_valueSet)
    {
        stream.write(L" refractiveIndex=\"");
        DoubleObjectImpl::streamOut(m_RefractiveIndex, stream);
        stream.write(L"\"");
    }
    if (m_bHorizCollimation_valueSet)
    {
        stream.write(L" horizCollimation=\"");
        DoubleObjectImpl::streamOut(m_HorizCollimation, stream);
        stream.write(L"\"");
    }
    if (m_bVertCollimation_valueSet)
    {
        stream.write(L" vertCollimation=\"");
        DoubleObjectImpl::streamOut(m_VertCollimation, stream);
        stream.write(L"\"");
    }
    if (m_bStadiaFactor_valueSet)
    {
        stream.write(L" stadiaFactor=\"");
        DoubleObjectImpl::streamOut(m_StadiaFactor, stream);
        stream.write(L"\"");
    }
    stream.write(L">");
    if (m_Corrections)
    {
    	m_Corrections->toXml(stream);
    }
    stream.write(L"</");
    stream.write(kstrElementName);
    stream.write(L">");
}

template <class T>
Object::ValidityEnum InstrumentDetailsTmpl<T>::validate (IValidationEventSink* pEventSink) const
{
    Object::ValidityEnum returnCode = Object::kValid;
    returnCode = this->ObjectTmpl<T>::validate(pEventSink);
    if (m_Corrections)
    {
        if (m_Corrections->validate(pEventSink) != Object::kValid)
            returnCode = Object::kValidWithInvalidChildren;
    }
    if (!m_bId_valueSet)
    {
        pEventSink->onEvent(IValidationEventSink::EventCode::kRequiredValueNotSet, this, L"Id", L"Required value not set");
        returnCode = Object::kInvalid;
    }
    return returnCode;
}

}; // namespace : LX
