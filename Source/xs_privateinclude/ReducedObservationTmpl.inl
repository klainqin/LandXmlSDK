#include "stdafx.h"
#include "LXTypes.h"
#include "ReducedObservation.h"
#include "TargetPoint.h"
#include "OffsetVals.h"
#include "FieldNoteCollection.h"
#include "FeatureCollection.h"
#include "LXTypesTmpl.h"
#include "ReducedObservationImpl.h"
#include "TargetPointImpl.h"
#include "OffsetValsImpl.h"
#include "FieldNoteCollectionImpl.h"
#include "FeatureCollectionImpl.h"
#include "LXTypesTmpl.inl"

namespace LX
{


template<class T>
ReducedObservationTmpl<T>::ReducedObservationTmpl<T> (DocumentImpl* pDoc)
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
    m_TargetSetup2ID = L"";
    m_bTargetSetup2ID_valueSet = false;
    m_SetID = L"";
    m_bSetID_valueSet = false;
    m_TargetHeight = 0.0;
    m_bTargetHeight_valueSet = false;
    m_Azimuth = 0.0;
    m_bAzimuth_valueSet = false;
    m_HorizDistance = 0.0;
    m_bHorizDistance_valueSet = false;
    m_VertDistance = 0.0;
    m_bVertDistance_valueSet = false;
    m_HorizAngle = 0.0;
    m_bHorizAngle_valueSet = false;
    m_SlopeDistance = 0.0;
    m_bSlopeDistance_valueSet = false;
    m_ZenithAngle = 0.0;
    m_bZenithAngle_valueSet = false;
    m_EquipmentUsed = L"";
    m_bEquipmentUsed_valueSet = false;
    m_AzimuthAccuracy = 0.0;
    m_bAzimuthAccuracy_valueSet = false;
    m_DistanceAccuracy = 0.0;
    m_bDistanceAccuracy_valueSet = false;
    m_AngleAccuracy = 0.0;
    m_bAngleAccuracy_valueSet = false;
    m_Date = L"";
    m_bDate_valueSet = false;
    m_DistanceType = L"";
    m_bDistanceType_valueSet = false;
    m_AzimuthType = L"";
    m_bAzimuthType_valueSet = false;
    m_AngleType = L"";
    m_bAngleType_valueSet = false;
    m_AdoptedAzimuthSurvey = L"";
    m_bAdoptedAzimuthSurvey_valueSet = false;
    m_AdoptedDistanceSurvey = L"";
    m_bAdoptedDistanceSurvey_valueSet = false;
    m_AdoptedAngleSurvey = L"";
    m_bAdoptedAngleSurvey_valueSet = false;
    m_DistanceAccClass = L"";
    m_bDistanceAccClass_valueSet = false;
    m_AzimuthAccClass = L"";
    m_bAzimuthAccClass_valueSet = false;
    m_AngleAccClass = L"";
    m_bAngleAccClass_valueSet = false;
    m_AzimuthAdoptionFactor = 0.0;
    m_bAzimuthAdoptionFactor_valueSet = false;
    m_DistanceAdoptionFactor = 0.0;
    m_bDistanceAdoptionFactor_valueSet = false;
    m_Name = L"";
    m_bName_valueSet = false;
    m_Desc = L"";
    m_bDesc_valueSet = false;
    m_State = EnumStateType::Values::k_null;
    m_bState_valueSet = false;
    m_OID = L"";
    m_bOID_valueSet = false;
    m_MSLDistance = L"";
    m_bMSLDistance_valueSet = false;
    m_SpherDistance = L"";
    m_bSpherDistance_valueSet = false;
    m_CoordGeomRefs = NULL;
    m_AlignRef = L"";
    m_bAlignRef_valueSet = false;
    m_AlignStationName = L"";
    m_bAlignStationName_valueSet = false;
    m_AlignOffset = 0.0;
    m_bAlignOffset_valueSet = false;
}


template<class T>
ReducedObservationTmpl<T>::~ReducedObservationTmpl<T> ()
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
bool ReducedObservationTmpl<T>::getObjectId(const String*& pId) const
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
ValueObject* ReducedObservationTmpl<T>::id() const
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
FieldNoteCollection& ReducedObservationTmpl<T>::FieldNote()
{
    return *m_FieldNote;
}

template <class T>
const FieldNoteCollection& ReducedObservationTmpl<T>::FieldNote() const
{
    return *m_FieldNote;
}

template <class T>
FeatureCollection& ReducedObservationTmpl<T>::Feature()
{
    return *m_Feature;
}

template <class T>
const FeatureCollection& ReducedObservationTmpl<T>::Feature() const
{
    return *m_Feature;
}


template <class T>
TargetPoint* ReducedObservationTmpl<T>::getTargetPoint() const
{
    return m_TargetPoint;
}

template <class T>
void ReducedObservationTmpl<T>::setTargetPoint(TargetPoint* pValue)
{
    m_TargetPoint = pValue;
}

template <class T>
OffsetVals* ReducedObservationTmpl<T>::getOffsetVals() const
{
    return m_OffsetVals;
}

template <class T>
void ReducedObservationTmpl<T>::setOffsetVals(OffsetVals* pValue)
{
    m_OffsetVals = pValue;
}

template <class T>
StringCollection* ReducedObservationTmpl<T>::getCoordGeomRefs() const
{
    return m_CoordGeomRefs;
}

template <class T>
void ReducedObservationTmpl<T>::setCoordGeomRefs(StringCollection* pValue)
{
    m_CoordGeomRefs = pValue;
}


template <class T>
EnumPurposeType::Values ReducedObservationTmpl<T>::getPurpose() const
{
    return m_Purpose;
}

template <class T>
void ReducedObservationTmpl<T>::setPurpose(EnumPurposeType::Values value)
{
    m_Purpose = value;
    m_bPurpose_valueSet = true;
}

template <class T>
bool ReducedObservationTmpl<T>::hasValue_Purpose() const
{
    return m_bPurpose_valueSet;
}

template <class T>
void ReducedObservationTmpl<T>::resetValue_Purpose()
{
    m_bPurpose_valueSet = false;
}


template <class T>
String ReducedObservationTmpl<T>::getSetupID() const
{
    return m_SetupID;
}

template <class T>
void ReducedObservationTmpl<T>::setSetupID(String value)
{
    m_SetupID = value;
    m_bSetupID_valueSet = true;
}

template <class T>
bool ReducedObservationTmpl<T>::hasValue_SetupID() const
{
    return m_bSetupID_valueSet;
}

template <class T>
void ReducedObservationTmpl<T>::resetValue_SetupID()
{
    m_bSetupID_valueSet = false;
}


template <class T>
String ReducedObservationTmpl<T>::getTargetSetupID() const
{
    return m_TargetSetupID;
}

template <class T>
void ReducedObservationTmpl<T>::setTargetSetupID(String value)
{
    m_TargetSetupID = value;
    m_bTargetSetupID_valueSet = true;
}

template <class T>
bool ReducedObservationTmpl<T>::hasValue_TargetSetupID() const
{
    return m_bTargetSetupID_valueSet;
}

template <class T>
void ReducedObservationTmpl<T>::resetValue_TargetSetupID()
{
    m_bTargetSetupID_valueSet = false;
}


template <class T>
String ReducedObservationTmpl<T>::getTargetSetup2ID() const
{
    return m_TargetSetup2ID;
}

template <class T>
void ReducedObservationTmpl<T>::setTargetSetup2ID(String value)
{
    m_TargetSetup2ID = value;
    m_bTargetSetup2ID_valueSet = true;
}

template <class T>
bool ReducedObservationTmpl<T>::hasValue_TargetSetup2ID() const
{
    return m_bTargetSetup2ID_valueSet;
}

template <class T>
void ReducedObservationTmpl<T>::resetValue_TargetSetup2ID()
{
    m_bTargetSetup2ID_valueSet = false;
}


template <class T>
String ReducedObservationTmpl<T>::getSetID() const
{
    return m_SetID;
}

template <class T>
void ReducedObservationTmpl<T>::setSetID(String value)
{
    m_SetID = value;
    m_bSetID_valueSet = true;
}

template <class T>
bool ReducedObservationTmpl<T>::hasValue_SetID() const
{
    return m_bSetID_valueSet;
}

template <class T>
void ReducedObservationTmpl<T>::resetValue_SetID()
{
    m_bSetID_valueSet = false;
}


template <class T>
double ReducedObservationTmpl<T>::getTargetHeight() const
{
    return m_TargetHeight;
}

template <class T>
void ReducedObservationTmpl<T>::setTargetHeight(double value)
{
    m_TargetHeight = value;
    m_bTargetHeight_valueSet = true;
}

template <class T>
bool ReducedObservationTmpl<T>::hasValue_TargetHeight() const
{
    return m_bTargetHeight_valueSet;
}

template <class T>
void ReducedObservationTmpl<T>::resetValue_TargetHeight()
{
    m_bTargetHeight_valueSet = false;
}


template <class T>
double ReducedObservationTmpl<T>::getAzimuth() const
{
    return m_Azimuth;
}

template <class T>
void ReducedObservationTmpl<T>::setAzimuth(double value)
{
    m_Azimuth = value;
    m_bAzimuth_valueSet = true;
}

template <class T>
bool ReducedObservationTmpl<T>::hasValue_Azimuth() const
{
    return m_bAzimuth_valueSet;
}

template <class T>
void ReducedObservationTmpl<T>::resetValue_Azimuth()
{
    m_bAzimuth_valueSet = false;
}


template <class T>
double ReducedObservationTmpl<T>::getHorizDistance() const
{
    return m_HorizDistance;
}

template <class T>
void ReducedObservationTmpl<T>::setHorizDistance(double value)
{
    m_HorizDistance = value;
    m_bHorizDistance_valueSet = true;
}

template <class T>
bool ReducedObservationTmpl<T>::hasValue_HorizDistance() const
{
    return m_bHorizDistance_valueSet;
}

template <class T>
void ReducedObservationTmpl<T>::resetValue_HorizDistance()
{
    m_bHorizDistance_valueSet = false;
}


template <class T>
double ReducedObservationTmpl<T>::getVertDistance() const
{
    return m_VertDistance;
}

template <class T>
void ReducedObservationTmpl<T>::setVertDistance(double value)
{
    m_VertDistance = value;
    m_bVertDistance_valueSet = true;
}

template <class T>
bool ReducedObservationTmpl<T>::hasValue_VertDistance() const
{
    return m_bVertDistance_valueSet;
}

template <class T>
void ReducedObservationTmpl<T>::resetValue_VertDistance()
{
    m_bVertDistance_valueSet = false;
}


template <class T>
double ReducedObservationTmpl<T>::getHorizAngle() const
{
    return m_HorizAngle;
}

template <class T>
void ReducedObservationTmpl<T>::setHorizAngle(double value)
{
    m_HorizAngle = value;
    m_bHorizAngle_valueSet = true;
}

template <class T>
bool ReducedObservationTmpl<T>::hasValue_HorizAngle() const
{
    return m_bHorizAngle_valueSet;
}

template <class T>
void ReducedObservationTmpl<T>::resetValue_HorizAngle()
{
    m_bHorizAngle_valueSet = false;
}


template <class T>
double ReducedObservationTmpl<T>::getSlopeDistance() const
{
    return m_SlopeDistance;
}

template <class T>
void ReducedObservationTmpl<T>::setSlopeDistance(double value)
{
    m_SlopeDistance = value;
    m_bSlopeDistance_valueSet = true;
}

template <class T>
bool ReducedObservationTmpl<T>::hasValue_SlopeDistance() const
{
    return m_bSlopeDistance_valueSet;
}

template <class T>
void ReducedObservationTmpl<T>::resetValue_SlopeDistance()
{
    m_bSlopeDistance_valueSet = false;
}


template <class T>
double ReducedObservationTmpl<T>::getZenithAngle() const
{
    return m_ZenithAngle;
}

template <class T>
void ReducedObservationTmpl<T>::setZenithAngle(double value)
{
    m_ZenithAngle = value;
    m_bZenithAngle_valueSet = true;
}

template <class T>
bool ReducedObservationTmpl<T>::hasValue_ZenithAngle() const
{
    return m_bZenithAngle_valueSet;
}

template <class T>
void ReducedObservationTmpl<T>::resetValue_ZenithAngle()
{
    m_bZenithAngle_valueSet = false;
}


template <class T>
String ReducedObservationTmpl<T>::getEquipmentUsed() const
{
    return m_EquipmentUsed;
}

template <class T>
void ReducedObservationTmpl<T>::setEquipmentUsed(String value)
{
    m_EquipmentUsed = value;
    m_bEquipmentUsed_valueSet = true;
}

template <class T>
bool ReducedObservationTmpl<T>::hasValue_EquipmentUsed() const
{
    return m_bEquipmentUsed_valueSet;
}

template <class T>
void ReducedObservationTmpl<T>::resetValue_EquipmentUsed()
{
    m_bEquipmentUsed_valueSet = false;
}


template <class T>
double ReducedObservationTmpl<T>::getAzimuthAccuracy() const
{
    return m_AzimuthAccuracy;
}

template <class T>
void ReducedObservationTmpl<T>::setAzimuthAccuracy(double value)
{
    m_AzimuthAccuracy = value;
    m_bAzimuthAccuracy_valueSet = true;
}

template <class T>
bool ReducedObservationTmpl<T>::hasValue_AzimuthAccuracy() const
{
    return m_bAzimuthAccuracy_valueSet;
}

template <class T>
void ReducedObservationTmpl<T>::resetValue_AzimuthAccuracy()
{
    m_bAzimuthAccuracy_valueSet = false;
}


template <class T>
double ReducedObservationTmpl<T>::getDistanceAccuracy() const
{
    return m_DistanceAccuracy;
}

template <class T>
void ReducedObservationTmpl<T>::setDistanceAccuracy(double value)
{
    m_DistanceAccuracy = value;
    m_bDistanceAccuracy_valueSet = true;
}

template <class T>
bool ReducedObservationTmpl<T>::hasValue_DistanceAccuracy() const
{
    return m_bDistanceAccuracy_valueSet;
}

template <class T>
void ReducedObservationTmpl<T>::resetValue_DistanceAccuracy()
{
    m_bDistanceAccuracy_valueSet = false;
}


template <class T>
double ReducedObservationTmpl<T>::getAngleAccuracy() const
{
    return m_AngleAccuracy;
}

template <class T>
void ReducedObservationTmpl<T>::setAngleAccuracy(double value)
{
    m_AngleAccuracy = value;
    m_bAngleAccuracy_valueSet = true;
}

template <class T>
bool ReducedObservationTmpl<T>::hasValue_AngleAccuracy() const
{
    return m_bAngleAccuracy_valueSet;
}

template <class T>
void ReducedObservationTmpl<T>::resetValue_AngleAccuracy()
{
    m_bAngleAccuracy_valueSet = false;
}


template <class T>
String ReducedObservationTmpl<T>::getDate() const
{
    return m_Date;
}

template <class T>
void ReducedObservationTmpl<T>::setDate(String value)
{
    m_Date = value;
    m_bDate_valueSet = true;
}

template <class T>
bool ReducedObservationTmpl<T>::hasValue_Date() const
{
    return m_bDate_valueSet;
}

template <class T>
void ReducedObservationTmpl<T>::resetValue_Date()
{
    m_bDate_valueSet = false;
}


template <class T>
String ReducedObservationTmpl<T>::getDistanceType() const
{
    return m_DistanceType;
}

template <class T>
void ReducedObservationTmpl<T>::setDistanceType(String value)
{
    m_DistanceType = value;
    m_bDistanceType_valueSet = true;
}

template <class T>
bool ReducedObservationTmpl<T>::hasValue_DistanceType() const
{
    return m_bDistanceType_valueSet;
}

template <class T>
void ReducedObservationTmpl<T>::resetValue_DistanceType()
{
    m_bDistanceType_valueSet = false;
}


template <class T>
String ReducedObservationTmpl<T>::getAzimuthType() const
{
    return m_AzimuthType;
}

template <class T>
void ReducedObservationTmpl<T>::setAzimuthType(String value)
{
    m_AzimuthType = value;
    m_bAzimuthType_valueSet = true;
}

template <class T>
bool ReducedObservationTmpl<T>::hasValue_AzimuthType() const
{
    return m_bAzimuthType_valueSet;
}

template <class T>
void ReducedObservationTmpl<T>::resetValue_AzimuthType()
{
    m_bAzimuthType_valueSet = false;
}


template <class T>
String ReducedObservationTmpl<T>::getAngleType() const
{
    return m_AngleType;
}

template <class T>
void ReducedObservationTmpl<T>::setAngleType(String value)
{
    m_AngleType = value;
    m_bAngleType_valueSet = true;
}

template <class T>
bool ReducedObservationTmpl<T>::hasValue_AngleType() const
{
    return m_bAngleType_valueSet;
}

template <class T>
void ReducedObservationTmpl<T>::resetValue_AngleType()
{
    m_bAngleType_valueSet = false;
}


template <class T>
String ReducedObservationTmpl<T>::getAdoptedAzimuthSurvey() const
{
    return m_AdoptedAzimuthSurvey;
}

template <class T>
void ReducedObservationTmpl<T>::setAdoptedAzimuthSurvey(String value)
{
    m_AdoptedAzimuthSurvey = value;
    m_bAdoptedAzimuthSurvey_valueSet = true;
}

template <class T>
bool ReducedObservationTmpl<T>::hasValue_AdoptedAzimuthSurvey() const
{
    return m_bAdoptedAzimuthSurvey_valueSet;
}

template <class T>
void ReducedObservationTmpl<T>::resetValue_AdoptedAzimuthSurvey()
{
    m_bAdoptedAzimuthSurvey_valueSet = false;
}


template <class T>
String ReducedObservationTmpl<T>::getAdoptedDistanceSurvey() const
{
    return m_AdoptedDistanceSurvey;
}

template <class T>
void ReducedObservationTmpl<T>::setAdoptedDistanceSurvey(String value)
{
    m_AdoptedDistanceSurvey = value;
    m_bAdoptedDistanceSurvey_valueSet = true;
}

template <class T>
bool ReducedObservationTmpl<T>::hasValue_AdoptedDistanceSurvey() const
{
    return m_bAdoptedDistanceSurvey_valueSet;
}

template <class T>
void ReducedObservationTmpl<T>::resetValue_AdoptedDistanceSurvey()
{
    m_bAdoptedDistanceSurvey_valueSet = false;
}


template <class T>
String ReducedObservationTmpl<T>::getAdoptedAngleSurvey() const
{
    return m_AdoptedAngleSurvey;
}

template <class T>
void ReducedObservationTmpl<T>::setAdoptedAngleSurvey(String value)
{
    m_AdoptedAngleSurvey = value;
    m_bAdoptedAngleSurvey_valueSet = true;
}

template <class T>
bool ReducedObservationTmpl<T>::hasValue_AdoptedAngleSurvey() const
{
    return m_bAdoptedAngleSurvey_valueSet;
}

template <class T>
void ReducedObservationTmpl<T>::resetValue_AdoptedAngleSurvey()
{
    m_bAdoptedAngleSurvey_valueSet = false;
}


template <class T>
String ReducedObservationTmpl<T>::getDistanceAccClass() const
{
    return m_DistanceAccClass;
}

template <class T>
void ReducedObservationTmpl<T>::setDistanceAccClass(String value)
{
    m_DistanceAccClass = value;
    m_bDistanceAccClass_valueSet = true;
}

template <class T>
bool ReducedObservationTmpl<T>::hasValue_DistanceAccClass() const
{
    return m_bDistanceAccClass_valueSet;
}

template <class T>
void ReducedObservationTmpl<T>::resetValue_DistanceAccClass()
{
    m_bDistanceAccClass_valueSet = false;
}


template <class T>
String ReducedObservationTmpl<T>::getAzimuthAccClass() const
{
    return m_AzimuthAccClass;
}

template <class T>
void ReducedObservationTmpl<T>::setAzimuthAccClass(String value)
{
    m_AzimuthAccClass = value;
    m_bAzimuthAccClass_valueSet = true;
}

template <class T>
bool ReducedObservationTmpl<T>::hasValue_AzimuthAccClass() const
{
    return m_bAzimuthAccClass_valueSet;
}

template <class T>
void ReducedObservationTmpl<T>::resetValue_AzimuthAccClass()
{
    m_bAzimuthAccClass_valueSet = false;
}


template <class T>
String ReducedObservationTmpl<T>::getAngleAccClass() const
{
    return m_AngleAccClass;
}

template <class T>
void ReducedObservationTmpl<T>::setAngleAccClass(String value)
{
    m_AngleAccClass = value;
    m_bAngleAccClass_valueSet = true;
}

template <class T>
bool ReducedObservationTmpl<T>::hasValue_AngleAccClass() const
{
    return m_bAngleAccClass_valueSet;
}

template <class T>
void ReducedObservationTmpl<T>::resetValue_AngleAccClass()
{
    m_bAngleAccClass_valueSet = false;
}


template <class T>
double ReducedObservationTmpl<T>::getAzimuthAdoptionFactor() const
{
    return m_AzimuthAdoptionFactor;
}

template <class T>
void ReducedObservationTmpl<T>::setAzimuthAdoptionFactor(double value)
{
    m_AzimuthAdoptionFactor = value;
    m_bAzimuthAdoptionFactor_valueSet = true;
}

template <class T>
bool ReducedObservationTmpl<T>::hasValue_AzimuthAdoptionFactor() const
{
    return m_bAzimuthAdoptionFactor_valueSet;
}

template <class T>
void ReducedObservationTmpl<T>::resetValue_AzimuthAdoptionFactor()
{
    m_bAzimuthAdoptionFactor_valueSet = false;
}


template <class T>
double ReducedObservationTmpl<T>::getDistanceAdoptionFactor() const
{
    return m_DistanceAdoptionFactor;
}

template <class T>
void ReducedObservationTmpl<T>::setDistanceAdoptionFactor(double value)
{
    m_DistanceAdoptionFactor = value;
    m_bDistanceAdoptionFactor_valueSet = true;
}

template <class T>
bool ReducedObservationTmpl<T>::hasValue_DistanceAdoptionFactor() const
{
    return m_bDistanceAdoptionFactor_valueSet;
}

template <class T>
void ReducedObservationTmpl<T>::resetValue_DistanceAdoptionFactor()
{
    m_bDistanceAdoptionFactor_valueSet = false;
}


template <class T>
String ReducedObservationTmpl<T>::getName() const
{
    return m_Name;
}

template <class T>
void ReducedObservationTmpl<T>::setName(String value)
{
    String oldValue = m_Name;
    m_Name = value;
    if (m_pCollectionLocation)
    {
        // We are in a collection. Now check to make sure we are in a named collection.
        NamedCollectionLocation* pNamedCollLoc = dynamic_cast<NamedCollectionLocation*>(m_pCollectionLocation);
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
bool ReducedObservationTmpl<T>::hasValue_Name() const
{
    return m_bName_valueSet;
}

template <class T>
void ReducedObservationTmpl<T>::resetValue_Name()
{
    m_bName_valueSet = false;
}


template <class T>
String ReducedObservationTmpl<T>::getDesc() const
{
    return m_Desc;
}

template <class T>
void ReducedObservationTmpl<T>::setDesc(String value)
{
    m_Desc = value;
    m_bDesc_valueSet = true;
}

template <class T>
bool ReducedObservationTmpl<T>::hasValue_Desc() const
{
    return m_bDesc_valueSet;
}

template <class T>
void ReducedObservationTmpl<T>::resetValue_Desc()
{
    m_bDesc_valueSet = false;
}


template <class T>
EnumStateType::Values ReducedObservationTmpl<T>::getState() const
{
    return m_State;
}

template <class T>
void ReducedObservationTmpl<T>::setState(EnumStateType::Values value)
{
    m_State = value;
    m_bState_valueSet = true;
}

template <class T>
bool ReducedObservationTmpl<T>::hasValue_State() const
{
    return m_bState_valueSet;
}

template <class T>
void ReducedObservationTmpl<T>::resetValue_State()
{
    m_bState_valueSet = false;
}


template <class T>
String ReducedObservationTmpl<T>::getOID() const
{
    return m_OID;
}

template <class T>
void ReducedObservationTmpl<T>::setOID(String value)
{
    m_OID = value;
    m_bOID_valueSet = true;
}

template <class T>
bool ReducedObservationTmpl<T>::hasValue_OID() const
{
    return m_bOID_valueSet;
}

template <class T>
void ReducedObservationTmpl<T>::resetValue_OID()
{
    m_bOID_valueSet = false;
}


template <class T>
String ReducedObservationTmpl<T>::getMSLDistance() const
{
    return m_MSLDistance;
}

template <class T>
void ReducedObservationTmpl<T>::setMSLDistance(String value)
{
    m_MSLDistance = value;
    m_bMSLDistance_valueSet = true;
}

template <class T>
bool ReducedObservationTmpl<T>::hasValue_MSLDistance() const
{
    return m_bMSLDistance_valueSet;
}

template <class T>
void ReducedObservationTmpl<T>::resetValue_MSLDistance()
{
    m_bMSLDistance_valueSet = false;
}


template <class T>
String ReducedObservationTmpl<T>::getSpherDistance() const
{
    return m_SpherDistance;
}

template <class T>
void ReducedObservationTmpl<T>::setSpherDistance(String value)
{
    m_SpherDistance = value;
    m_bSpherDistance_valueSet = true;
}

template <class T>
bool ReducedObservationTmpl<T>::hasValue_SpherDistance() const
{
    return m_bSpherDistance_valueSet;
}

template <class T>
void ReducedObservationTmpl<T>::resetValue_SpherDistance()
{
    m_bSpherDistance_valueSet = false;
}


template <class T>
String ReducedObservationTmpl<T>::getAlignRef() const
{
    return m_AlignRef;
}

template <class T>
void ReducedObservationTmpl<T>::setAlignRef(String value)
{
    m_AlignRef = value;
    m_bAlignRef_valueSet = true;
}

template <class T>
bool ReducedObservationTmpl<T>::hasValue_AlignRef() const
{
    return m_bAlignRef_valueSet;
}

template <class T>
void ReducedObservationTmpl<T>::resetValue_AlignRef()
{
    m_bAlignRef_valueSet = false;
}


template <class T>
String ReducedObservationTmpl<T>::getAlignStationName() const
{
    return m_AlignStationName;
}

template <class T>
void ReducedObservationTmpl<T>::setAlignStationName(String value)
{
    m_AlignStationName = value;
    m_bAlignStationName_valueSet = true;
}

template <class T>
bool ReducedObservationTmpl<T>::hasValue_AlignStationName() const
{
    return m_bAlignStationName_valueSet;
}

template <class T>
void ReducedObservationTmpl<T>::resetValue_AlignStationName()
{
    m_bAlignStationName_valueSet = false;
}


template <class T>
double ReducedObservationTmpl<T>::getAlignOffset() const
{
    return m_AlignOffset;
}

template <class T>
void ReducedObservationTmpl<T>::setAlignOffset(double value)
{
    m_AlignOffset = value;
    m_bAlignOffset_valueSet = true;
}

template <class T>
bool ReducedObservationTmpl<T>::hasValue_AlignOffset() const
{
    return m_bAlignOffset_valueSet;
}

template <class T>
void ReducedObservationTmpl<T>::resetValue_AlignOffset()
{
    m_bAlignOffset_valueSet = false;
}



template <class T>
void ReducedObservationTmpl<T>::toXml (IStream& stream)
{
    static const wchar_t* kstrElementName = L"ReducedObservation";
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
    if (m_bTargetSetup2ID_valueSet)
    {
        stream.write(L" targetSetup2ID=\"");
        StringObjectImpl::streamOut(m_TargetSetup2ID, stream);
        stream.write(L"\"");
    }
    if (m_bSetID_valueSet)
    {
        stream.write(L" setID=\"");
        StringObjectImpl::streamOut(m_SetID, stream);
        stream.write(L"\"");
    }
    if (m_bTargetHeight_valueSet)
    {
        stream.write(L" targetHeight=\"");
        DoubleObjectImpl::streamOut(m_TargetHeight, stream);
        stream.write(L"\"");
    }
    if (m_bAzimuth_valueSet)
    {
        stream.write(L" azimuth=\"");
        DoubleObjectImpl::streamOut(m_Azimuth, stream);
        stream.write(L"\"");
    }
    if (m_bHorizDistance_valueSet)
    {
        stream.write(L" horizDistance=\"");
        DoubleObjectImpl::streamOut(m_HorizDistance, stream);
        stream.write(L"\"");
    }
    if (m_bVertDistance_valueSet)
    {
        stream.write(L" vertDistance=\"");
        DoubleObjectImpl::streamOut(m_VertDistance, stream);
        stream.write(L"\"");
    }
    if (m_bHorizAngle_valueSet)
    {
        stream.write(L" horizAngle=\"");
        DoubleObjectImpl::streamOut(m_HorizAngle, stream);
        stream.write(L"\"");
    }
    if (m_bSlopeDistance_valueSet)
    {
        stream.write(L" slopeDistance=\"");
        DoubleObjectImpl::streamOut(m_SlopeDistance, stream);
        stream.write(L"\"");
    }
    if (m_bZenithAngle_valueSet)
    {
        stream.write(L" zenithAngle=\"");
        DoubleObjectImpl::streamOut(m_ZenithAngle, stream);
        stream.write(L"\"");
    }
    if (m_bEquipmentUsed_valueSet)
    {
        stream.write(L" equipmentUsed=\"");
        StringObjectImpl::streamOut(m_EquipmentUsed, stream);
        stream.write(L"\"");
    }
    if (m_bAzimuthAccuracy_valueSet)
    {
        stream.write(L" azimuthAccuracy=\"");
        DoubleObjectImpl::streamOut(m_AzimuthAccuracy, stream);
        stream.write(L"\"");
    }
    if (m_bDistanceAccuracy_valueSet)
    {
        stream.write(L" distanceAccuracy=\"");
        DoubleObjectImpl::streamOut(m_DistanceAccuracy, stream);
        stream.write(L"\"");
    }
    if (m_bAngleAccuracy_valueSet)
    {
        stream.write(L" angleAccuracy=\"");
        DoubleObjectImpl::streamOut(m_AngleAccuracy, stream);
        stream.write(L"\"");
    }
    if (m_bDate_valueSet)
    {
        stream.write(L" date=\"");
        StringObjectImpl::streamOut(m_Date, stream);
        stream.write(L"\"");
    }
    if (m_bDistanceType_valueSet)
    {
        stream.write(L" distanceType=\"");
        StringObjectImpl::streamOut(m_DistanceType, stream);
        stream.write(L"\"");
    }
    if (m_bAzimuthType_valueSet)
    {
        stream.write(L" azimuthType=\"");
        StringObjectImpl::streamOut(m_AzimuthType, stream);
        stream.write(L"\"");
    }
    if (m_bAngleType_valueSet)
    {
        stream.write(L" angleType=\"");
        StringObjectImpl::streamOut(m_AngleType, stream);
        stream.write(L"\"");
    }
    if (m_bAdoptedAzimuthSurvey_valueSet)
    {
        stream.write(L" adoptedAzimuthSurvey=\"");
        StringObjectImpl::streamOut(m_AdoptedAzimuthSurvey, stream);
        stream.write(L"\"");
    }
    if (m_bAdoptedDistanceSurvey_valueSet)
    {
        stream.write(L" adoptedDistanceSurvey=\"");
        StringObjectImpl::streamOut(m_AdoptedDistanceSurvey, stream);
        stream.write(L"\"");
    }
    if (m_bAdoptedAngleSurvey_valueSet)
    {
        stream.write(L" adoptedAngleSurvey=\"");
        StringObjectImpl::streamOut(m_AdoptedAngleSurvey, stream);
        stream.write(L"\"");
    }
    if (m_bDistanceAccClass_valueSet)
    {
        stream.write(L" distanceAccClass=\"");
        StringObjectImpl::streamOut(m_DistanceAccClass, stream);
        stream.write(L"\"");
    }
    if (m_bAzimuthAccClass_valueSet)
    {
        stream.write(L" azimuthAccClass=\"");
        StringObjectImpl::streamOut(m_AzimuthAccClass, stream);
        stream.write(L"\"");
    }
    if (m_bAngleAccClass_valueSet)
    {
        stream.write(L" angleAccClass=\"");
        StringObjectImpl::streamOut(m_AngleAccClass, stream);
        stream.write(L"\"");
    }
    if (m_bAzimuthAdoptionFactor_valueSet)
    {
        stream.write(L" azimuthAdoptionFactor=\"");
        DoubleObjectImpl::streamOut(m_AzimuthAdoptionFactor, stream);
        stream.write(L"\"");
    }
    if (m_bDistanceAdoptionFactor_valueSet)
    {
        stream.write(L" distanceAdoptionFactor=\"");
        DoubleObjectImpl::streamOut(m_DistanceAdoptionFactor, stream);
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
    if (m_bMSLDistance_valueSet)
    {
        stream.write(L" MSLDistance=\"");
        StringObjectImpl::streamOut(m_MSLDistance, stream);
        stream.write(L"\"");
    }
    if (m_bSpherDistance_valueSet)
    {
        stream.write(L" spherDistance=\"");
        StringObjectImpl::streamOut(m_SpherDistance, stream);
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
Object::ValidityEnum ReducedObservationTmpl<T>::validate (IValidationEventSink* pEventSink) const
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
    return returnCode;
}

}; // namespace : LX
