#include "stdafx.h"
#include "LXTypes.h"
#include "ReducedArcObservation.h"
#include "TargetPoint.h"
#include "OffsetVals.h"
#include "FieldNoteCollection.h"
#include "FeatureCollection.h"
#include "LXTypesTmpl.h"
#include "ReducedArcObservationImpl.h"
#include "TargetPointImpl.h"
#include "OffsetValsImpl.h"
#include "FieldNoteCollectionImpl.h"
#include "FeatureCollectionImpl.h"
#include "LXTypesTmpl.inl"

namespace LX
{


template<class T>
ReducedArcObservationTmpl<T>::ReducedArcObservationTmpl (DocumentImpl* pDoc)
    : ObjectTmpl<T>(pDoc)
{
    m_TargetPoint = NULL;
    m_OffsetVals = NULL;
    m_FieldNote = createFieldNoteCollectionObject(pDoc);
    m_Feature = createFeatureCollectionObject(pDoc);
    m_Purpose = EnumPurposeType::Values::k_null;
    m_bPurpose_valueSet = false;
    m_SetupID = L"";
    m_bSetupID_valueSet = false;
    m_TargetSetupID = L"";
    m_bTargetSetupID_valueSet = false;
    m_SetID = L"";
    m_bSetID_valueSet = false;
    m_ChordAzimuth = 0.0;
    m_bChordAzimuth_valueSet = false;
    m_Radius = 0.0;
    m_bRadius_valueSet = false;
    m_Length = 0.0;
    m_bLength_valueSet = false;
    m_Rot = EnumClockwise::Values::k_null;
    m_bRot_valueSet = false;
    m_EquipmentUsed = L"";
    m_bEquipmentUsed_valueSet = false;
    m_ArcAzimuthAccuracy = 0.0;
    m_bArcAzimuthAccuracy_valueSet = false;
    m_ArcLengthAccuracy = 0.0;
    m_bArcLengthAccuracy_valueSet = false;
    m_Date = L"";
    m_bDate_valueSet = false;
    m_ArcType = L"";
    m_bArcType_valueSet = false;
    m_AdoptedSurvey = L"";
    m_bAdoptedSurvey_valueSet = false;
    m_LengthAccClass = L"";
    m_bLengthAccClass_valueSet = false;
    m_AzimuthAccClass = L"";
    m_bAzimuthAccClass_valueSet = false;
    m_AzimuthAdoptionFactor = 0.0;
    m_bAzimuthAdoptionFactor_valueSet = false;
    m_LengthAdoptionFactor = 0.0;
    m_bLengthAdoptionFactor_valueSet = false;
    m_Name = L"";
    m_bName_valueSet = false;
    m_Desc = L"";
    m_bDesc_valueSet = false;
    m_State = EnumStateType::Values::k_null;
    m_bState_valueSet = false;
    m_OID = L"";
    m_bOID_valueSet = false;
    m_CoordGeomRefs = NULL;
    m_AlignRef = L"";
    m_bAlignRef_valueSet = false;
    m_AlignStationName = L"";
    m_bAlignStationName_valueSet = false;
    m_AlignOffset = 0.0;
    m_bAlignOffset_valueSet = false;
}


template<class T>
ReducedArcObservationTmpl<T>::~ReducedArcObservationTmpl ()
{
    if (m_TargetPoint != NULL)
    {
        m_TargetPoint->release();
        m_TargetPoint = NULL;
    }
    if (m_OffsetVals != NULL)
    {
        m_OffsetVals->release();
        m_OffsetVals = NULL;
    }
    if (m_FieldNote != NULL)
    {
        m_FieldNote->release();
        m_FieldNote = NULL;
    }
    if (m_Feature != NULL)
    {
        m_Feature->release();
        m_Feature = NULL;
    }
    if (m_CoordGeomRefs != NULL)
    {
        m_CoordGeomRefs->release();
        m_CoordGeomRefs = NULL;
    }
}


template <class T>
bool ReducedArcObservationTmpl<T>::getObjectId(const String*& pId) const
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
ValueObject* ReducedArcObservationTmpl<T>::id() const
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
FieldNoteCollection& ReducedArcObservationTmpl<T>::FieldNote()
{
    return *m_FieldNote;
}

template <class T>
const FieldNoteCollection& ReducedArcObservationTmpl<T>::FieldNote() const
{
    return *m_FieldNote;
}

template <class T>
FeatureCollection& ReducedArcObservationTmpl<T>::Feature()
{
    return *m_Feature;
}

template <class T>
const FeatureCollection& ReducedArcObservationTmpl<T>::Feature() const
{
    return *m_Feature;
}


template <class T>
TargetPoint* ReducedArcObservationTmpl<T>::getTargetPoint() const
{
    return m_TargetPoint;
}

template <class T>
void ReducedArcObservationTmpl<T>::setTargetPoint(TargetPoint* pValue)
{
    m_TargetPoint = pValue;
}

template <class T>
OffsetVals* ReducedArcObservationTmpl<T>::getOffsetVals() const
{
    return m_OffsetVals;
}

template <class T>
void ReducedArcObservationTmpl<T>::setOffsetVals(OffsetVals* pValue)
{
    m_OffsetVals = pValue;
}

template <class T>
StringCollection* ReducedArcObservationTmpl<T>::getCoordGeomRefs() const
{
    return m_CoordGeomRefs;
}

template <class T>
void ReducedArcObservationTmpl<T>::setCoordGeomRefs(StringCollection* pValue)
{
    m_CoordGeomRefs = pValue;
}


template <class T>
EnumPurposeType::Values ReducedArcObservationTmpl<T>::getPurpose() const
{
    return m_Purpose;
}

template <class T>
void ReducedArcObservationTmpl<T>::setPurpose(EnumPurposeType::Values value)
{
    m_Purpose = value;
    m_bPurpose_valueSet = true;
}

template <class T>
bool ReducedArcObservationTmpl<T>::hasValue_Purpose() const
{
    return m_bPurpose_valueSet;
}

template <class T>
void ReducedArcObservationTmpl<T>::resetValue_Purpose()
{
    m_bPurpose_valueSet = false;
}


template <class T>
String ReducedArcObservationTmpl<T>::getSetupID() const
{
    return m_SetupID;
}

template <class T>
void ReducedArcObservationTmpl<T>::setSetupID(String value)
{
    m_SetupID = value;
    m_bSetupID_valueSet = true;
}

template <class T>
bool ReducedArcObservationTmpl<T>::hasValue_SetupID() const
{
    return m_bSetupID_valueSet;
}

template <class T>
void ReducedArcObservationTmpl<T>::resetValue_SetupID()
{
    m_bSetupID_valueSet = false;
}


template <class T>
String ReducedArcObservationTmpl<T>::getTargetSetupID() const
{
    return m_TargetSetupID;
}

template <class T>
void ReducedArcObservationTmpl<T>::setTargetSetupID(String value)
{
    m_TargetSetupID = value;
    m_bTargetSetupID_valueSet = true;
}

template <class T>
bool ReducedArcObservationTmpl<T>::hasValue_TargetSetupID() const
{
    return m_bTargetSetupID_valueSet;
}

template <class T>
void ReducedArcObservationTmpl<T>::resetValue_TargetSetupID()
{
    m_bTargetSetupID_valueSet = false;
}


template <class T>
String ReducedArcObservationTmpl<T>::getSetID() const
{
    return m_SetID;
}

template <class T>
void ReducedArcObservationTmpl<T>::setSetID(String value)
{
    m_SetID = value;
    m_bSetID_valueSet = true;
}

template <class T>
bool ReducedArcObservationTmpl<T>::hasValue_SetID() const
{
    return m_bSetID_valueSet;
}

template <class T>
void ReducedArcObservationTmpl<T>::resetValue_SetID()
{
    m_bSetID_valueSet = false;
}


template <class T>
double ReducedArcObservationTmpl<T>::getChordAzimuth() const
{
    return m_ChordAzimuth;
}

template <class T>
void ReducedArcObservationTmpl<T>::setChordAzimuth(double value)
{
    m_ChordAzimuth = value;
    m_bChordAzimuth_valueSet = true;
}

template <class T>
bool ReducedArcObservationTmpl<T>::hasValue_ChordAzimuth() const
{
    return m_bChordAzimuth_valueSet;
}

template <class T>
void ReducedArcObservationTmpl<T>::resetValue_ChordAzimuth()
{
    m_bChordAzimuth_valueSet = false;
}


template <class T>
double ReducedArcObservationTmpl<T>::getRadius() const
{
    return m_Radius;
}

template <class T>
void ReducedArcObservationTmpl<T>::setRadius(double value)
{
    m_Radius = value;
    m_bRadius_valueSet = true;
}

template <class T>
bool ReducedArcObservationTmpl<T>::hasValue_Radius() const
{
    return m_bRadius_valueSet;
}

template <class T>
void ReducedArcObservationTmpl<T>::resetValue_Radius()
{
    m_bRadius_valueSet = false;
}


template <class T>
double ReducedArcObservationTmpl<T>::getLength() const
{
    return m_Length;
}

template <class T>
void ReducedArcObservationTmpl<T>::setLength(double value)
{
    m_Length = value;
    m_bLength_valueSet = true;
}

template <class T>
bool ReducedArcObservationTmpl<T>::hasValue_Length() const
{
    return m_bLength_valueSet;
}

template <class T>
void ReducedArcObservationTmpl<T>::resetValue_Length()
{
    m_bLength_valueSet = false;
}


template <class T>
EnumClockwise::Values ReducedArcObservationTmpl<T>::getRot() const
{
    return m_Rot;
}

template <class T>
void ReducedArcObservationTmpl<T>::setRot(EnumClockwise::Values value)
{
    m_Rot = value;
    m_bRot_valueSet = true;
}

template <class T>
bool ReducedArcObservationTmpl<T>::hasValue_Rot() const
{
    return m_bRot_valueSet;
}

template <class T>
void ReducedArcObservationTmpl<T>::resetValue_Rot()
{
    m_bRot_valueSet = false;
}


template <class T>
String ReducedArcObservationTmpl<T>::getEquipmentUsed() const
{
    return m_EquipmentUsed;
}

template <class T>
void ReducedArcObservationTmpl<T>::setEquipmentUsed(String value)
{
    m_EquipmentUsed = value;
    m_bEquipmentUsed_valueSet = true;
}

template <class T>
bool ReducedArcObservationTmpl<T>::hasValue_EquipmentUsed() const
{
    return m_bEquipmentUsed_valueSet;
}

template <class T>
void ReducedArcObservationTmpl<T>::resetValue_EquipmentUsed()
{
    m_bEquipmentUsed_valueSet = false;
}


template <class T>
double ReducedArcObservationTmpl<T>::getArcAzimuthAccuracy() const
{
    return m_ArcAzimuthAccuracy;
}

template <class T>
void ReducedArcObservationTmpl<T>::setArcAzimuthAccuracy(double value)
{
    m_ArcAzimuthAccuracy = value;
    m_bArcAzimuthAccuracy_valueSet = true;
}

template <class T>
bool ReducedArcObservationTmpl<T>::hasValue_ArcAzimuthAccuracy() const
{
    return m_bArcAzimuthAccuracy_valueSet;
}

template <class T>
void ReducedArcObservationTmpl<T>::resetValue_ArcAzimuthAccuracy()
{
    m_bArcAzimuthAccuracy_valueSet = false;
}


template <class T>
double ReducedArcObservationTmpl<T>::getArcLengthAccuracy() const
{
    return m_ArcLengthAccuracy;
}

template <class T>
void ReducedArcObservationTmpl<T>::setArcLengthAccuracy(double value)
{
    m_ArcLengthAccuracy = value;
    m_bArcLengthAccuracy_valueSet = true;
}

template <class T>
bool ReducedArcObservationTmpl<T>::hasValue_ArcLengthAccuracy() const
{
    return m_bArcLengthAccuracy_valueSet;
}

template <class T>
void ReducedArcObservationTmpl<T>::resetValue_ArcLengthAccuracy()
{
    m_bArcLengthAccuracy_valueSet = false;
}


template <class T>
String ReducedArcObservationTmpl<T>::getDate() const
{
    return m_Date;
}

template <class T>
void ReducedArcObservationTmpl<T>::setDate(String value)
{
    m_Date = value;
    m_bDate_valueSet = true;
}

template <class T>
bool ReducedArcObservationTmpl<T>::hasValue_Date() const
{
    return m_bDate_valueSet;
}

template <class T>
void ReducedArcObservationTmpl<T>::resetValue_Date()
{
    m_bDate_valueSet = false;
}


template <class T>
String ReducedArcObservationTmpl<T>::getArcType() const
{
    return m_ArcType;
}

template <class T>
void ReducedArcObservationTmpl<T>::setArcType(String value)
{
    m_ArcType = value;
    m_bArcType_valueSet = true;
}

template <class T>
bool ReducedArcObservationTmpl<T>::hasValue_ArcType() const
{
    return m_bArcType_valueSet;
}

template <class T>
void ReducedArcObservationTmpl<T>::resetValue_ArcType()
{
    m_bArcType_valueSet = false;
}


template <class T>
String ReducedArcObservationTmpl<T>::getAdoptedSurvey() const
{
    return m_AdoptedSurvey;
}

template <class T>
void ReducedArcObservationTmpl<T>::setAdoptedSurvey(String value)
{
    m_AdoptedSurvey = value;
    m_bAdoptedSurvey_valueSet = true;
}

template <class T>
bool ReducedArcObservationTmpl<T>::hasValue_AdoptedSurvey() const
{
    return m_bAdoptedSurvey_valueSet;
}

template <class T>
void ReducedArcObservationTmpl<T>::resetValue_AdoptedSurvey()
{
    m_bAdoptedSurvey_valueSet = false;
}


template <class T>
String ReducedArcObservationTmpl<T>::getLengthAccClass() const
{
    return m_LengthAccClass;
}

template <class T>
void ReducedArcObservationTmpl<T>::setLengthAccClass(String value)
{
    m_LengthAccClass = value;
    m_bLengthAccClass_valueSet = true;
}

template <class T>
bool ReducedArcObservationTmpl<T>::hasValue_LengthAccClass() const
{
    return m_bLengthAccClass_valueSet;
}

template <class T>
void ReducedArcObservationTmpl<T>::resetValue_LengthAccClass()
{
    m_bLengthAccClass_valueSet = false;
}


template <class T>
String ReducedArcObservationTmpl<T>::getAzimuthAccClass() const
{
    return m_AzimuthAccClass;
}

template <class T>
void ReducedArcObservationTmpl<T>::setAzimuthAccClass(String value)
{
    m_AzimuthAccClass = value;
    m_bAzimuthAccClass_valueSet = true;
}

template <class T>
bool ReducedArcObservationTmpl<T>::hasValue_AzimuthAccClass() const
{
    return m_bAzimuthAccClass_valueSet;
}

template <class T>
void ReducedArcObservationTmpl<T>::resetValue_AzimuthAccClass()
{
    m_bAzimuthAccClass_valueSet = false;
}


template <class T>
double ReducedArcObservationTmpl<T>::getAzimuthAdoptionFactor() const
{
    return m_AzimuthAdoptionFactor;
}

template <class T>
void ReducedArcObservationTmpl<T>::setAzimuthAdoptionFactor(double value)
{
    m_AzimuthAdoptionFactor = value;
    m_bAzimuthAdoptionFactor_valueSet = true;
}

template <class T>
bool ReducedArcObservationTmpl<T>::hasValue_AzimuthAdoptionFactor() const
{
    return m_bAzimuthAdoptionFactor_valueSet;
}

template <class T>
void ReducedArcObservationTmpl<T>::resetValue_AzimuthAdoptionFactor()
{
    m_bAzimuthAdoptionFactor_valueSet = false;
}


template <class T>
double ReducedArcObservationTmpl<T>::getLengthAdoptionFactor() const
{
    return m_LengthAdoptionFactor;
}

template <class T>
void ReducedArcObservationTmpl<T>::setLengthAdoptionFactor(double value)
{
    m_LengthAdoptionFactor = value;
    m_bLengthAdoptionFactor_valueSet = true;
}

template <class T>
bool ReducedArcObservationTmpl<T>::hasValue_LengthAdoptionFactor() const
{
    return m_bLengthAdoptionFactor_valueSet;
}

template <class T>
void ReducedArcObservationTmpl<T>::resetValue_LengthAdoptionFactor()
{
    m_bLengthAdoptionFactor_valueSet = false;
}


template <class T>
String ReducedArcObservationTmpl<T>::getName() const
{
    return m_Name;
}

template <class T>
void ReducedArcObservationTmpl<T>::setName(String value)
{
    String oldValue = m_Name;
    m_Name = value;
    if (this->m_pCollectionLocation)
    {
        // We are in a collection. Now check to make sure we are in a named collection.
        NamedCollectionLocation* pNamedCollLoc = dynamic_cast<NamedCollectionLocation*>(this->m_pCollectionLocation);
        if (pNamedCollLoc)
        {
            try
            {
                // First check the name.
                if (!pNamedCollLoc->objectCheckNewName())
	                 throw Exception(Exception::kObjectIdCollectionConflict, L"Unable to change identifying member, because collection name conflict.");
                // We are in a named collection. Now tell the collection the object has been renamed.
                if (!pNamedCollLoc->objectRenamed())
                    // Object could not be renamed within the collection.
	                 throw Exception(Exception::kObjectRenamedFailed, L"Could not rename object within collection.");
            }
            catch (Exception e)
            {
                m_Name = oldValue;
                throw;
            }
        }
    }
    m_bName_valueSet = true;
}

template <class T>
bool ReducedArcObservationTmpl<T>::hasValue_Name() const
{
    return m_bName_valueSet;
}

template <class T>
void ReducedArcObservationTmpl<T>::resetValue_Name()
{
    m_bName_valueSet = false;
}


template <class T>
String ReducedArcObservationTmpl<T>::getDesc() const
{
    return m_Desc;
}

template <class T>
void ReducedArcObservationTmpl<T>::setDesc(String value)
{
    m_Desc = value;
    m_bDesc_valueSet = true;
}

template <class T>
bool ReducedArcObservationTmpl<T>::hasValue_Desc() const
{
    return m_bDesc_valueSet;
}

template <class T>
void ReducedArcObservationTmpl<T>::resetValue_Desc()
{
    m_bDesc_valueSet = false;
}


template <class T>
EnumStateType::Values ReducedArcObservationTmpl<T>::getState() const
{
    return m_State;
}

template <class T>
void ReducedArcObservationTmpl<T>::setState(EnumStateType::Values value)
{
    m_State = value;
    m_bState_valueSet = true;
}

template <class T>
bool ReducedArcObservationTmpl<T>::hasValue_State() const
{
    return m_bState_valueSet;
}

template <class T>
void ReducedArcObservationTmpl<T>::resetValue_State()
{
    m_bState_valueSet = false;
}


template <class T>
String ReducedArcObservationTmpl<T>::getOID() const
{
    return m_OID;
}

template <class T>
void ReducedArcObservationTmpl<T>::setOID(String value)
{
    m_OID = value;
    m_bOID_valueSet = true;
}

template <class T>
bool ReducedArcObservationTmpl<T>::hasValue_OID() const
{
    return m_bOID_valueSet;
}

template <class T>
void ReducedArcObservationTmpl<T>::resetValue_OID()
{
    m_bOID_valueSet = false;
}


template <class T>
String ReducedArcObservationTmpl<T>::getAlignRef() const
{
    return m_AlignRef;
}

template <class T>
void ReducedArcObservationTmpl<T>::setAlignRef(String value)
{
    m_AlignRef = value;
    m_bAlignRef_valueSet = true;
}

template <class T>
bool ReducedArcObservationTmpl<T>::hasValue_AlignRef() const
{
    return m_bAlignRef_valueSet;
}

template <class T>
void ReducedArcObservationTmpl<T>::resetValue_AlignRef()
{
    m_bAlignRef_valueSet = false;
}


template <class T>
String ReducedArcObservationTmpl<T>::getAlignStationName() const
{
    return m_AlignStationName;
}

template <class T>
void ReducedArcObservationTmpl<T>::setAlignStationName(String value)
{
    m_AlignStationName = value;
    m_bAlignStationName_valueSet = true;
}

template <class T>
bool ReducedArcObservationTmpl<T>::hasValue_AlignStationName() const
{
    return m_bAlignStationName_valueSet;
}

template <class T>
void ReducedArcObservationTmpl<T>::resetValue_AlignStationName()
{
    m_bAlignStationName_valueSet = false;
}


template <class T>
double ReducedArcObservationTmpl<T>::getAlignOffset() const
{
    return m_AlignOffset;
}

template <class T>
void ReducedArcObservationTmpl<T>::setAlignOffset(double value)
{
    m_AlignOffset = value;
    m_bAlignOffset_valueSet = true;
}

template <class T>
bool ReducedArcObservationTmpl<T>::hasValue_AlignOffset() const
{
    return m_bAlignOffset_valueSet;
}

template <class T>
void ReducedArcObservationTmpl<T>::resetValue_AlignOffset()
{
    m_bAlignOffset_valueSet = false;
}



template <class T>
void ReducedArcObservationTmpl<T>::toXml (IStream& stream)
{
    static const wchar_t* kstrElementName = L"ReducedArcObservation";
    stream.write(L"<");
    stream.write(kstrElementName);
    if (m_bPurpose_valueSet)
    {
        stream.write(L" purpose=\"");
        EnumPurposeTypeImpl::streamOut(m_Purpose, stream);
        stream.write(L"\"");
    }
    if (m_bSetupID_valueSet)
    {
        stream.write(L" setupID=\"");
        StringObjectImpl::streamOut(m_SetupID, stream);
        stream.write(L"\"");
    }
    if (m_bTargetSetupID_valueSet)
    {
        stream.write(L" targetSetupID=\"");
        StringObjectImpl::streamOut(m_TargetSetupID, stream);
        stream.write(L"\"");
    }
    if (m_bSetID_valueSet)
    {
        stream.write(L" setID=\"");
        StringObjectImpl::streamOut(m_SetID, stream);
        stream.write(L"\"");
    }
    if (m_bChordAzimuth_valueSet)
    {
        stream.write(L" chordAzimuth=\"");
        DoubleObjectImpl::streamOut(m_ChordAzimuth, stream);
        stream.write(L"\"");
    }
    if (m_bRadius_valueSet)
    {
        stream.write(L" radius=\"");
        DoubleObjectImpl::streamOut(m_Radius, stream);
        stream.write(L"\"");
    }
    if (m_bLength_valueSet)
    {
        stream.write(L" length=\"");
        DoubleObjectImpl::streamOut(m_Length, stream);
        stream.write(L"\"");
    }
    if (m_bRot_valueSet)
    {
        stream.write(L" rot=\"");
        EnumClockwiseImpl::streamOut(m_Rot, stream);
        stream.write(L"\"");
    }
    if (m_bEquipmentUsed_valueSet)
    {
        stream.write(L" equipmentUsed=\"");
        StringObjectImpl::streamOut(m_EquipmentUsed, stream);
        stream.write(L"\"");
    }
    if (m_bArcAzimuthAccuracy_valueSet)
    {
        stream.write(L" arcAzimuthAccuracy=\"");
        DoubleObjectImpl::streamOut(m_ArcAzimuthAccuracy, stream);
        stream.write(L"\"");
    }
    if (m_bArcLengthAccuracy_valueSet)
    {
        stream.write(L" arcLengthAccuracy=\"");
        DoubleObjectImpl::streamOut(m_ArcLengthAccuracy, stream);
        stream.write(L"\"");
    }
    if (m_bDate_valueSet)
    {
        stream.write(L" date=\"");
        StringObjectImpl::streamOut(m_Date, stream);
        stream.write(L"\"");
    }
    if (m_bArcType_valueSet)
    {
        stream.write(L" arcType=\"");
        StringObjectImpl::streamOut(m_ArcType, stream);
        stream.write(L"\"");
    }
    if (m_bAdoptedSurvey_valueSet)
    {
        stream.write(L" adoptedSurvey=\"");
        StringObjectImpl::streamOut(m_AdoptedSurvey, stream);
        stream.write(L"\"");
    }
    if (m_bLengthAccClass_valueSet)
    {
        stream.write(L" lengthAccClass=\"");
        StringObjectImpl::streamOut(m_LengthAccClass, stream);
        stream.write(L"\"");
    }
    if (m_bAzimuthAccClass_valueSet)
    {
        stream.write(L" azimuthAccClass=\"");
        StringObjectImpl::streamOut(m_AzimuthAccClass, stream);
        stream.write(L"\"");
    }
    if (m_bAzimuthAdoptionFactor_valueSet)
    {
        stream.write(L" azimuthAdoptionFactor=\"");
        DoubleObjectImpl::streamOut(m_AzimuthAdoptionFactor, stream);
        stream.write(L"\"");
    }
    if (m_bLengthAdoptionFactor_valueSet)
    {
        stream.write(L" lengthAdoptionFactor=\"");
        DoubleObjectImpl::streamOut(m_LengthAdoptionFactor, stream);
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
    if (m_bState_valueSet)
    {
        stream.write(L" state=\"");
        EnumStateTypeImpl::streamOut(m_State, stream);
        stream.write(L"\"");
    }
    if (m_bOID_valueSet)
    {
        stream.write(L" oID=\"");
        StringObjectImpl::streamOut(m_OID, stream);
        stream.write(L"\"");
    }
    if (m_CoordGeomRefs)
    {
        stream.write(L" coordGeomRefs=\"");
        StringCollectionImpl::streamOut(m_CoordGeomRefs, stream);
        stream.write(L"\"");
    }
    if (m_bAlignRef_valueSet)
    {
        stream.write(L" alignRef=\"");
        StringObjectImpl::streamOut(m_AlignRef, stream);
        stream.write(L"\"");
    }
    if (m_bAlignStationName_valueSet)
    {
        stream.write(L" alignStationName=\"");
        StringObjectImpl::streamOut(m_AlignStationName, stream);
        stream.write(L"\"");
    }
    if (m_bAlignOffset_valueSet)
    {
        stream.write(L" alignOffset=\"");
        DoubleObjectImpl::streamOut(m_AlignOffset, stream);
        stream.write(L"\"");
    }
    stream.write(L">");
    if (m_TargetPoint)
    {
    	m_TargetPoint->toXml(stream);
    }
    if (m_OffsetVals)
    {
    	m_OffsetVals->toXml(stream);
    }
    if (m_FieldNote)
    {
    	m_FieldNote->toXml(stream);
    }
    if (m_Feature)
    {
    	m_Feature->toXml(stream);
    }
    stream.write(L"</");
    stream.write(kstrElementName);
    stream.write(L">");
}

template <class T>
Object::ValidityEnum ReducedArcObservationTmpl<T>::validate (IValidationEventSink* pEventSink) const
{
    Object::ValidityEnum returnCode = Object::kValid;
    returnCode = this->ObjectTmpl<T>::validate(pEventSink);
    if (m_TargetPoint)
    {
        if (m_TargetPoint->validate(pEventSink) != Object::kValid)
            returnCode = Object::kValidWithInvalidChildren;
    }
    if (m_OffsetVals)
    {
        if (m_OffsetVals->validate(pEventSink) != Object::kValid)
            returnCode = Object::kValidWithInvalidChildren;
    }
    if (m_FieldNote)
    {
        if (m_FieldNote->validate(pEventSink) != Object::kValid)
            returnCode = Object::kValidWithInvalidChildren;
    }
    if (m_Feature)
    {
        if (m_Feature->validate(pEventSink) != Object::kValid)
            returnCode = Object::kValidWithInvalidChildren;
    }
    if (!m_bChordAzimuth_valueSet)
    {
        pEventSink->onEvent(IValidationEventSink::EventCode::kRequiredValueNotSet, this, L"ChordAzimuth", L"Required value not set");
        returnCode = Object::kInvalid;
    }
    if (!m_bRadius_valueSet)
    {
        pEventSink->onEvent(IValidationEventSink::EventCode::kRequiredValueNotSet, this, L"Radius", L"Required value not set");
        returnCode = Object::kInvalid;
    }
    if (!m_bLength_valueSet)
    {
        pEventSink->onEvent(IValidationEventSink::EventCode::kRequiredValueNotSet, this, L"Length", L"Required value not set");
        returnCode = Object::kInvalid;
    }
    if (!m_bRot_valueSet)
    {
        pEventSink->onEvent(IValidationEventSink::EventCode::kRequiredValueNotSet, this, L"Rot", L"Required value not set");
        returnCode = Object::kInvalid;
    }
    return returnCode;
}

}; // namespace : LX
