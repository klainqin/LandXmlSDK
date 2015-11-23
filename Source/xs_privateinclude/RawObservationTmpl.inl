#include "stdafx.h"
#include "LXTypes.h"
#include "RawObservation.h"
#include "LXTypesTmpl.h"
#include "RawObservationImpl.h"
#include "LXTypesTmpl.inl"
#include "RawObservationTypeTmpl.inl"

namespace LX
{


template<class T>
RawObservationTmpl<T>::RawObservationTmpl (DocumentImpl* pDoc)
    : RawObservationTypeTmpl<T>(pDoc)
{
}


template<class T>
RawObservationTmpl<T>::~RawObservationTmpl ()
{
}




template <class T>
void RawObservationTmpl<T>::toXml (IStream& stream)
{
    static const wchar_t* kstrElementName = L"RawObservation";
    stream.write(L"<");
    stream.write(kstrElementName);
    if (this->m_bSetupID_valueSet)
    {
        stream.write(L" setupID=\"");
        StringObjectImpl::streamOut(this->m_SetupID, stream);
        stream.write(L"\"");
    }
    if (this->m_bTargetSetupID_valueSet)
    {
        stream.write(L" targetSetupID=\"");
        StringObjectImpl::streamOut(this->m_TargetSetupID, stream);
        stream.write(L"\"");
    }
    if (this->m_bSetID_valueSet)
    {
        stream.write(L" setID=\"");
        StringObjectImpl::streamOut(this->m_SetID, stream);
        stream.write(L"\"");
    }
    if (this->m_bPurpose_valueSet)
    {
        stream.write(L" purpose=\"");
        EnumPurposeTypeImpl::streamOut(this->m_Purpose, stream);
        stream.write(L"\"");
    }
    if (this->m_bTargetHeight_valueSet)
    {
        stream.write(L" targetHeight=\"");
        DoubleObjectImpl::streamOut(this->m_TargetHeight, stream);
        stream.write(L"\"");
    }
    if (this->m_bHorizAngle_valueSet)
    {
        stream.write(L" horizAngle=\"");
        DoubleObjectImpl::streamOut(this->m_HorizAngle, stream);
        stream.write(L"\"");
    }
    if (this->m_bSlopeDistance_valueSet)
    {
        stream.write(L" slopeDistance=\"");
        DoubleObjectImpl::streamOut(this->m_SlopeDistance, stream);
        stream.write(L"\"");
    }
    if (this->m_bZenithAngle_valueSet)
    {
        stream.write(L" zenithAngle=\"");
        DoubleObjectImpl::streamOut(this->m_ZenithAngle, stream);
        stream.write(L"\"");
    }
    if (this->m_bHorizDistance_valueSet)
    {
        stream.write(L" horizDistance=\"");
        DoubleObjectImpl::streamOut(this->m_HorizDistance, stream);
        stream.write(L"\"");
    }
    if (this->m_bVertDistance_valueSet)
    {
        stream.write(L" vertDistance=\"");
        DoubleObjectImpl::streamOut(this->m_VertDistance, stream);
        stream.write(L"\"");
    }
    if (this->m_bAzimuth_valueSet)
    {
        stream.write(L" azimuth=\"");
        DoubleObjectImpl::streamOut(this->m_Azimuth, stream);
        stream.write(L"\"");
    }
    if (this->m_bUnused_valueSet)
    {
        stream.write(L" unused=\"");
        BooleanObjectImpl::streamOut(this->m_Unused, stream);
        stream.write(L"\"");
    }
    if (this->m_bDirectFace_valueSet)
    {
        stream.write(L" directFace=\"");
        BooleanObjectImpl::streamOut(this->m_DirectFace, stream);
        stream.write(L"\"");
    }
    if (this->m_CoordGeomRefs)
    {
        stream.write(L" coordGeomRefs=\"");
        StringCollectionImpl::streamOut(this->m_CoordGeomRefs, stream);
        stream.write(L"\"");
    }
    if (this->m_bTimeStamp_valueSet)
    {
        stream.write(L" timeStamp=\"");
        StringObjectImpl::streamOut(this->m_TimeStamp, stream);
        stream.write(L"\"");
    }
    if (this->m_bAlignRef_valueSet)
    {
        stream.write(L" alignRef=\"");
        StringObjectImpl::streamOut(this->m_AlignRef, stream);
        stream.write(L"\"");
    }
    if (this->m_bAlignStationName_valueSet)
    {
        stream.write(L" alignStationName=\"");
        StringObjectImpl::streamOut(this->m_AlignStationName, stream);
        stream.write(L"\"");
    }
    if (this->m_bAlignOffset_valueSet)
    {
        stream.write(L" alignOffset=\"");
        DoubleObjectImpl::streamOut(this->m_AlignOffset, stream);
        stream.write(L"\"");
    }
    if (this->m_bUpperStadia_valueSet)
    {
        stream.write(L" upperStadia=\"");
        DoubleObjectImpl::streamOut(this->m_UpperStadia, stream);
        stream.write(L"\"");
    }
    if (this->m_bRod_valueSet)
    {
        stream.write(L" rod=\"");
        DoubleObjectImpl::streamOut(this->m_Rod, stream);
        stream.write(L"\"");
    }
    if (this->m_bLowerStadia_valueSet)
    {
        stream.write(L" lowerStadia=\"");
        DoubleObjectImpl::streamOut(this->m_LowerStadia, stream);
        stream.write(L"\"");
    }
    if (this->m_bCirclePositionSet_valueSet)
    {
        stream.write(L" circlePositionSet=\"");
        DoubleObjectImpl::streamOut(this->m_CirclePositionSet, stream);
        stream.write(L"\"");
    }
    if (this->m_bStatus_valueSet)
    {
        stream.write(L" status=\"");
        EnumObservationStatusTypeImpl::streamOut(this->m_Status, stream);
        stream.write(L"\"");
    }
    stream.write(L">");
    if (this->m_TargetPoint)
    {
    	this->m_TargetPoint->toXml(stream);
    }
    if (this->m_OffsetVals)
    {
    	this->m_OffsetVals->toXml(stream);
    }
    if (this->m_FieldNote)
    {
    	this->m_FieldNote->toXml(stream);
    }
    if (this->m_Feature)
    {
    	this->m_Feature->toXml(stream);
    }
    stream.write(L"</");
    stream.write(kstrElementName);
    stream.write(L">");
}

template <class T>
Object::ValidityEnum RawObservationTmpl<T>::validate (IValidationEventSink* pEventSink) const
{
    Object::ValidityEnum returnCode = Object::kValid;
    returnCode = this->RawObservationTypeTmpl<T>::validate(pEventSink);
    return returnCode;
}

}; // namespace : LX
