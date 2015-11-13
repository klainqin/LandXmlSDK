#include "stdafx.h"
#include "LXTypes.h"
#include "Imperial.h"
#include "LXTypesTmpl.h"
#include "ImperialImpl.h"
#include "LXTypesTmpl.inl"

namespace LX
{


template<class T>
ImperialTmpl<T>::ImperialTmpl<T> (DocumentImpl* pDoc)
    : ObjectTmpl<T>(pDoc)
{
    m_AreaUnit = EnumImpArea::Values::k_null;
    m_bAreaUnit_valueSet = false;
    m_LinearUnit = EnumImpLinear::Values::k_null;
    m_bLinearUnit_valueSet = false;
    m_VolumeUnit = EnumImpVolume::Values::k_null;
    m_bVolumeUnit_valueSet = false;
    m_TemperatureUnit = EnumImpTemperature::Values::k_null;
    m_bTemperatureUnit_valueSet = false;
    m_PressureUnit = EnumImpPressure::Values::k_null;
    m_bPressureUnit_valueSet = false;
    m_DiameterUnit = EnumImpDiameter::Values::k_null;
    m_bDiameterUnit_valueSet = false;
    m_WidthUnit = EnumImpWidth::Values::k_null;
    m_bWidthUnit_valueSet = false;
    m_HeightUnit = EnumImpHeight::Values::k_null;
    m_bHeightUnit_valueSet = false;
    m_VelocityUnit = EnumImpVelocity::Values::k_null;
    m_bVelocityUnit_valueSet = false;
    m_FlowUnit = EnumImpFlow::Values::k_null;
    m_bFlowUnit_valueSet = false;
    m_AngularUnit = EnumAngularType::Values::k_null;
    m_bAngularUnit_valueSet = false;
    m_DirectionUnit = EnumAngularType::Values::k_null;
    m_bDirectionUnit_valueSet = false;
    m_LatLongAngularUnit = EnumLatLongAngularType::Values::k_null;
    m_bLatLongAngularUnit_valueSet = false;
    m_ElevationUnit = EnumElevationType::Values::k_null;
    m_bElevationUnit_valueSet = false;
}


template<class T>
ImperialTmpl<T>::~ImperialTmpl<T> ()
{
}



template <class T>
EnumImpArea::Values ImperialTmpl<T>::getAreaUnit() const
{
    return m_AreaUnit;
}

template <class T>
void ImperialTmpl<T>::setAreaUnit(EnumImpArea::Values value)
{
    m_AreaUnit = value;
    m_bAreaUnit_valueSet = true;
}

template <class T>
bool ImperialTmpl<T>::hasValue_AreaUnit() const
{
    return m_bAreaUnit_valueSet;
}

template <class T>
void ImperialTmpl<T>::resetValue_AreaUnit()
{
    m_bAreaUnit_valueSet = false;
}


template <class T>
EnumImpLinear::Values ImperialTmpl<T>::getLinearUnit() const
{
    return m_LinearUnit;
}

template <class T>
void ImperialTmpl<T>::setLinearUnit(EnumImpLinear::Values value)
{
    m_LinearUnit = value;
    m_bLinearUnit_valueSet = true;
}

template <class T>
bool ImperialTmpl<T>::hasValue_LinearUnit() const
{
    return m_bLinearUnit_valueSet;
}

template <class T>
void ImperialTmpl<T>::resetValue_LinearUnit()
{
    m_bLinearUnit_valueSet = false;
}


template <class T>
EnumImpVolume::Values ImperialTmpl<T>::getVolumeUnit() const
{
    return m_VolumeUnit;
}

template <class T>
void ImperialTmpl<T>::setVolumeUnit(EnumImpVolume::Values value)
{
    m_VolumeUnit = value;
    m_bVolumeUnit_valueSet = true;
}

template <class T>
bool ImperialTmpl<T>::hasValue_VolumeUnit() const
{
    return m_bVolumeUnit_valueSet;
}

template <class T>
void ImperialTmpl<T>::resetValue_VolumeUnit()
{
    m_bVolumeUnit_valueSet = false;
}


template <class T>
EnumImpTemperature::Values ImperialTmpl<T>::getTemperatureUnit() const
{
    return m_TemperatureUnit;
}

template <class T>
void ImperialTmpl<T>::setTemperatureUnit(EnumImpTemperature::Values value)
{
    m_TemperatureUnit = value;
    m_bTemperatureUnit_valueSet = true;
}

template <class T>
bool ImperialTmpl<T>::hasValue_TemperatureUnit() const
{
    return m_bTemperatureUnit_valueSet;
}

template <class T>
void ImperialTmpl<T>::resetValue_TemperatureUnit()
{
    m_bTemperatureUnit_valueSet = false;
}


template <class T>
EnumImpPressure::Values ImperialTmpl<T>::getPressureUnit() const
{
    return m_PressureUnit;
}

template <class T>
void ImperialTmpl<T>::setPressureUnit(EnumImpPressure::Values value)
{
    m_PressureUnit = value;
    m_bPressureUnit_valueSet = true;
}

template <class T>
bool ImperialTmpl<T>::hasValue_PressureUnit() const
{
    return m_bPressureUnit_valueSet;
}

template <class T>
void ImperialTmpl<T>::resetValue_PressureUnit()
{
    m_bPressureUnit_valueSet = false;
}


template <class T>
EnumImpDiameter::Values ImperialTmpl<T>::getDiameterUnit() const
{
    return m_DiameterUnit;
}

template <class T>
void ImperialTmpl<T>::setDiameterUnit(EnumImpDiameter::Values value)
{
    m_DiameterUnit = value;
    m_bDiameterUnit_valueSet = true;
}

template <class T>
bool ImperialTmpl<T>::hasValue_DiameterUnit() const
{
    return m_bDiameterUnit_valueSet;
}

template <class T>
void ImperialTmpl<T>::resetValue_DiameterUnit()
{
    m_bDiameterUnit_valueSet = false;
}


template <class T>
EnumImpWidth::Values ImperialTmpl<T>::getWidthUnit() const
{
    return m_WidthUnit;
}

template <class T>
void ImperialTmpl<T>::setWidthUnit(EnumImpWidth::Values value)
{
    m_WidthUnit = value;
    m_bWidthUnit_valueSet = true;
}

template <class T>
bool ImperialTmpl<T>::hasValue_WidthUnit() const
{
    return m_bWidthUnit_valueSet;
}

template <class T>
void ImperialTmpl<T>::resetValue_WidthUnit()
{
    m_bWidthUnit_valueSet = false;
}


template <class T>
EnumImpHeight::Values ImperialTmpl<T>::getHeightUnit() const
{
    return m_HeightUnit;
}

template <class T>
void ImperialTmpl<T>::setHeightUnit(EnumImpHeight::Values value)
{
    m_HeightUnit = value;
    m_bHeightUnit_valueSet = true;
}

template <class T>
bool ImperialTmpl<T>::hasValue_HeightUnit() const
{
    return m_bHeightUnit_valueSet;
}

template <class T>
void ImperialTmpl<T>::resetValue_HeightUnit()
{
    m_bHeightUnit_valueSet = false;
}


template <class T>
EnumImpVelocity::Values ImperialTmpl<T>::getVelocityUnit() const
{
    return m_VelocityUnit;
}

template <class T>
void ImperialTmpl<T>::setVelocityUnit(EnumImpVelocity::Values value)
{
    m_VelocityUnit = value;
    m_bVelocityUnit_valueSet = true;
}

template <class T>
bool ImperialTmpl<T>::hasValue_VelocityUnit() const
{
    return m_bVelocityUnit_valueSet;
}

template <class T>
void ImperialTmpl<T>::resetValue_VelocityUnit()
{
    m_bVelocityUnit_valueSet = false;
}


template <class T>
EnumImpFlow::Values ImperialTmpl<T>::getFlowUnit() const
{
    return m_FlowUnit;
}

template <class T>
void ImperialTmpl<T>::setFlowUnit(EnumImpFlow::Values value)
{
    m_FlowUnit = value;
    m_bFlowUnit_valueSet = true;
}

template <class T>
bool ImperialTmpl<T>::hasValue_FlowUnit() const
{
    return m_bFlowUnit_valueSet;
}

template <class T>
void ImperialTmpl<T>::resetValue_FlowUnit()
{
    m_bFlowUnit_valueSet = false;
}


template <class T>
EnumAngularType::Values ImperialTmpl<T>::getAngularUnit() const
{
    return m_AngularUnit;
}

template <class T>
void ImperialTmpl<T>::setAngularUnit(EnumAngularType::Values value)
{
    m_AngularUnit = value;
    m_bAngularUnit_valueSet = true;
}

template <class T>
bool ImperialTmpl<T>::hasValue_AngularUnit() const
{
    return m_bAngularUnit_valueSet;
}

template <class T>
void ImperialTmpl<T>::resetValue_AngularUnit()
{
    m_bAngularUnit_valueSet = false;
}


template <class T>
EnumAngularType::Values ImperialTmpl<T>::getDirectionUnit() const
{
    return m_DirectionUnit;
}

template <class T>
void ImperialTmpl<T>::setDirectionUnit(EnumAngularType::Values value)
{
    m_DirectionUnit = value;
    m_bDirectionUnit_valueSet = true;
}

template <class T>
bool ImperialTmpl<T>::hasValue_DirectionUnit() const
{
    return m_bDirectionUnit_valueSet;
}

template <class T>
void ImperialTmpl<T>::resetValue_DirectionUnit()
{
    m_bDirectionUnit_valueSet = false;
}


template <class T>
EnumLatLongAngularType::Values ImperialTmpl<T>::getLatLongAngularUnit() const
{
    return m_LatLongAngularUnit;
}

template <class T>
void ImperialTmpl<T>::setLatLongAngularUnit(EnumLatLongAngularType::Values value)
{
    m_LatLongAngularUnit = value;
    m_bLatLongAngularUnit_valueSet = true;
}

template <class T>
bool ImperialTmpl<T>::hasValue_LatLongAngularUnit() const
{
    return m_bLatLongAngularUnit_valueSet;
}

template <class T>
void ImperialTmpl<T>::resetValue_LatLongAngularUnit()
{
    m_bLatLongAngularUnit_valueSet = false;
}


template <class T>
EnumElevationType::Values ImperialTmpl<T>::getElevationUnit() const
{
    return m_ElevationUnit;
}

template <class T>
void ImperialTmpl<T>::setElevationUnit(EnumElevationType::Values value)
{
    m_ElevationUnit = value;
    m_bElevationUnit_valueSet = true;
}

template <class T>
bool ImperialTmpl<T>::hasValue_ElevationUnit() const
{
    return m_bElevationUnit_valueSet;
}

template <class T>
void ImperialTmpl<T>::resetValue_ElevationUnit()
{
    m_bElevationUnit_valueSet = false;
}



template <class T>
void ImperialTmpl<T>::toXml (IStream& stream)
{
    static const wchar_t* kstrElementName = L"Imperial";
    stream.write(L"<");
    stream.write(kstrElementName);
    if (m_bAreaUnit_valueSet)
    {
        stream.write(L" areaUnit=\"");
        EnumImpAreaImpl::streamOut(m_AreaUnit, stream);
        stream.write(L"\"");
    }
    if (m_bLinearUnit_valueSet)
    {
        stream.write(L" linearUnit=\"");
        EnumImpLinearImpl::streamOut(m_LinearUnit, stream);
        stream.write(L"\"");
    }
    if (m_bVolumeUnit_valueSet)
    {
        stream.write(L" volumeUnit=\"");
        EnumImpVolumeImpl::streamOut(m_VolumeUnit, stream);
        stream.write(L"\"");
    }
    if (m_bTemperatureUnit_valueSet)
    {
        stream.write(L" temperatureUnit=\"");
        EnumImpTemperatureImpl::streamOut(m_TemperatureUnit, stream);
        stream.write(L"\"");
    }
    if (m_bPressureUnit_valueSet)
    {
        stream.write(L" pressureUnit=\"");
        EnumImpPressureImpl::streamOut(m_PressureUnit, stream);
        stream.write(L"\"");
    }
    if (m_bDiameterUnit_valueSet)
    {
        stream.write(L" diameterUnit=\"");
        EnumImpDiameterImpl::streamOut(m_DiameterUnit, stream);
        stream.write(L"\"");
    }
    if (m_bWidthUnit_valueSet)
    {
        stream.write(L" widthUnit=\"");
        EnumImpWidthImpl::streamOut(m_WidthUnit, stream);
        stream.write(L"\"");
    }
    if (m_bHeightUnit_valueSet)
    {
        stream.write(L" heightUnit=\"");
        EnumImpHeightImpl::streamOut(m_HeightUnit, stream);
        stream.write(L"\"");
    }
    if (m_bVelocityUnit_valueSet)
    {
        stream.write(L" velocityUnit=\"");
        EnumImpVelocityImpl::streamOut(m_VelocityUnit, stream);
        stream.write(L"\"");
    }
    if (m_bFlowUnit_valueSet)
    {
        stream.write(L" flowUnit=\"");
        EnumImpFlowImpl::streamOut(m_FlowUnit, stream);
        stream.write(L"\"");
    }
    if (m_bAngularUnit_valueSet)
    {
        stream.write(L" angularUnit=\"");
        EnumAngularTypeImpl::streamOut(m_AngularUnit, stream);
        stream.write(L"\"");
    }
    if (m_bDirectionUnit_valueSet)
    {
        stream.write(L" directionUnit=\"");
        EnumAngularTypeImpl::streamOut(m_DirectionUnit, stream);
        stream.write(L"\"");
    }
    if (m_bLatLongAngularUnit_valueSet)
    {
        stream.write(L" latLongAngularUnit=\"");
        EnumLatLongAngularTypeImpl::streamOut(m_LatLongAngularUnit, stream);
        stream.write(L"\"");
    }
    if (m_bElevationUnit_valueSet)
    {
        stream.write(L" elevationUnit=\"");
        EnumElevationTypeImpl::streamOut(m_ElevationUnit, stream);
        stream.write(L"\"");
    }
    stream.write(L">");
    stream.write(L"</");
    stream.write(kstrElementName);
    stream.write(L">");
}

template <class T>
Object::ValidityEnum ImperialTmpl<T>::validate (IValidationEventSink* pEventSink) const
{
    Object::ValidityEnum returnCode = Object::kValid;
    returnCode = this->ObjectTmpl<T>::validate(pEventSink);
    if (!m_bAreaUnit_valueSet)
    {
        pEventSink->onEvent(IValidationEventSink::EventCode::kRequiredValueNotSet, this, L"AreaUnit", L"Required value not set");
        returnCode = Object::kInvalid;
    }
    if (!m_bLinearUnit_valueSet)
    {
        pEventSink->onEvent(IValidationEventSink::EventCode::kRequiredValueNotSet, this, L"LinearUnit", L"Required value not set");
        returnCode = Object::kInvalid;
    }
    if (!m_bVolumeUnit_valueSet)
    {
        pEventSink->onEvent(IValidationEventSink::EventCode::kRequiredValueNotSet, this, L"VolumeUnit", L"Required value not set");
        returnCode = Object::kInvalid;
    }
    if (!m_bTemperatureUnit_valueSet)
    {
        pEventSink->onEvent(IValidationEventSink::EventCode::kRequiredValueNotSet, this, L"TemperatureUnit", L"Required value not set");
        returnCode = Object::kInvalid;
    }
    if (!m_bPressureUnit_valueSet)
    {
        pEventSink->onEvent(IValidationEventSink::EventCode::kRequiredValueNotSet, this, L"PressureUnit", L"Required value not set");
        returnCode = Object::kInvalid;
    }
    return returnCode;
}

}; // namespace : LX
