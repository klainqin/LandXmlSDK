#if !defined(__REDUCEDOBSERVATIONTMPL_H)
#define __REDUCEDOBSERVATIONTMPL_H

#include "ReducedObservation.h"
#include "LXTypesTmpl.h"

namespace LX
{

class TargetPoint;
class OffsetVals;
class FieldNoteCollection;
class FeatureCollection;

// Class : ReducedObservation
template<class T>
class ReducedObservationTmpl : public ObjectTmpl<T>, public IIdentifiable<String>
{

public:
	virtual void toXml (IStream& stream);
public:
	// Constructors
    ReducedObservationTmpl (DocumentImpl* pDoc);

public:
	// Destructors
    virtual ~ReducedObservationTmpl ();
public:
	// Collections
    virtual FieldNoteCollection& FieldNote();
    virtual const FieldNoteCollection& FieldNote() const;
    virtual FeatureCollection& Feature();
    virtual const FeatureCollection& Feature() const;

    virtual bool getObjectId(const String*& pId) const;
    virtual ValueObject* id () const;
    
public:
	// Properties
    virtual TargetPoint* getTargetPoint() const;
    virtual void setTargetPoint(TargetPoint* value);

    virtual OffsetVals* getOffsetVals() const;
    virtual void setOffsetVals(OffsetVals* value);

    virtual StringCollection* getCoordGeomRefs() const;
    virtual void setCoordGeomRefs(StringCollection* value);


    virtual EnumPurposeType::Values getPurpose() const;
    virtual void setPurpose(EnumPurposeType::Values value);
    virtual bool hasValue_Purpose() const;
    virtual void resetValue_Purpose();
    
    virtual String getSetupID() const;
    virtual void setSetupID(String value);
    virtual bool hasValue_SetupID() const;
    virtual void resetValue_SetupID();
    
    virtual String getTargetSetupID() const;
    virtual void setTargetSetupID(String value);
    virtual bool hasValue_TargetSetupID() const;
    virtual void resetValue_TargetSetupID();
    
    virtual String getTargetSetup2ID() const;
    virtual void setTargetSetup2ID(String value);
    virtual bool hasValue_TargetSetup2ID() const;
    virtual void resetValue_TargetSetup2ID();
    
    virtual String getSetID() const;
    virtual void setSetID(String value);
    virtual bool hasValue_SetID() const;
    virtual void resetValue_SetID();
    
    virtual double getTargetHeight() const;
    virtual void setTargetHeight(double value);
    virtual bool hasValue_TargetHeight() const;
    virtual void resetValue_TargetHeight();
    
    virtual double getAzimuth() const;
    virtual void setAzimuth(double value);
    virtual bool hasValue_Azimuth() const;
    virtual void resetValue_Azimuth();
    
    virtual double getHorizDistance() const;
    virtual void setHorizDistance(double value);
    virtual bool hasValue_HorizDistance() const;
    virtual void resetValue_HorizDistance();
    
    virtual double getVertDistance() const;
    virtual void setVertDistance(double value);
    virtual bool hasValue_VertDistance() const;
    virtual void resetValue_VertDistance();
    
    virtual double getHorizAngle() const;
    virtual void setHorizAngle(double value);
    virtual bool hasValue_HorizAngle() const;
    virtual void resetValue_HorizAngle();
    
    virtual double getSlopeDistance() const;
    virtual void setSlopeDistance(double value);
    virtual bool hasValue_SlopeDistance() const;
    virtual void resetValue_SlopeDistance();
    
    virtual double getZenithAngle() const;
    virtual void setZenithAngle(double value);
    virtual bool hasValue_ZenithAngle() const;
    virtual void resetValue_ZenithAngle();
    
    virtual String getEquipmentUsed() const;
    virtual void setEquipmentUsed(String value);
    virtual bool hasValue_EquipmentUsed() const;
    virtual void resetValue_EquipmentUsed();
    
    virtual double getAzimuthAccuracy() const;
    virtual void setAzimuthAccuracy(double value);
    virtual bool hasValue_AzimuthAccuracy() const;
    virtual void resetValue_AzimuthAccuracy();
    
    virtual double getDistanceAccuracy() const;
    virtual void setDistanceAccuracy(double value);
    virtual bool hasValue_DistanceAccuracy() const;
    virtual void resetValue_DistanceAccuracy();
    
    virtual double getAngleAccuracy() const;
    virtual void setAngleAccuracy(double value);
    virtual bool hasValue_AngleAccuracy() const;
    virtual void resetValue_AngleAccuracy();
    
    virtual String getDate() const;
    virtual void setDate(String value);
    virtual bool hasValue_Date() const;
    virtual void resetValue_Date();
    
    virtual String getDistanceType() const;
    virtual void setDistanceType(String value);
    virtual bool hasValue_DistanceType() const;
    virtual void resetValue_DistanceType();
    
    virtual String getAzimuthType() const;
    virtual void setAzimuthType(String value);
    virtual bool hasValue_AzimuthType() const;
    virtual void resetValue_AzimuthType();
    
    virtual String getAngleType() const;
    virtual void setAngleType(String value);
    virtual bool hasValue_AngleType() const;
    virtual void resetValue_AngleType();
    
    virtual String getAdoptedAzimuthSurvey() const;
    virtual void setAdoptedAzimuthSurvey(String value);
    virtual bool hasValue_AdoptedAzimuthSurvey() const;
    virtual void resetValue_AdoptedAzimuthSurvey();
    
    virtual String getAdoptedDistanceSurvey() const;
    virtual void setAdoptedDistanceSurvey(String value);
    virtual bool hasValue_AdoptedDistanceSurvey() const;
    virtual void resetValue_AdoptedDistanceSurvey();
    
    virtual String getAdoptedAngleSurvey() const;
    virtual void setAdoptedAngleSurvey(String value);
    virtual bool hasValue_AdoptedAngleSurvey() const;
    virtual void resetValue_AdoptedAngleSurvey();
    
    virtual String getDistanceAccClass() const;
    virtual void setDistanceAccClass(String value);
    virtual bool hasValue_DistanceAccClass() const;
    virtual void resetValue_DistanceAccClass();
    
    virtual String getAzimuthAccClass() const;
    virtual void setAzimuthAccClass(String value);
    virtual bool hasValue_AzimuthAccClass() const;
    virtual void resetValue_AzimuthAccClass();
    
    virtual String getAngleAccClass() const;
    virtual void setAngleAccClass(String value);
    virtual bool hasValue_AngleAccClass() const;
    virtual void resetValue_AngleAccClass();
    
    virtual double getAzimuthAdoptionFactor() const;
    virtual void setAzimuthAdoptionFactor(double value);
    virtual bool hasValue_AzimuthAdoptionFactor() const;
    virtual void resetValue_AzimuthAdoptionFactor();
    
    virtual double getDistanceAdoptionFactor() const;
    virtual void setDistanceAdoptionFactor(double value);
    virtual bool hasValue_DistanceAdoptionFactor() const;
    virtual void resetValue_DistanceAdoptionFactor();
    
    virtual String getName() const;
    virtual void setName(String value);
    virtual bool hasValue_Name() const;
    virtual void resetValue_Name();
    
    virtual String getDesc() const;
    virtual void setDesc(String value);
    virtual bool hasValue_Desc() const;
    virtual void resetValue_Desc();
    
    virtual EnumStateType::Values getState() const;
    virtual void setState(EnumStateType::Values value);
    virtual bool hasValue_State() const;
    virtual void resetValue_State();
    
    virtual String getOID() const;
    virtual void setOID(String value);
    virtual bool hasValue_OID() const;
    virtual void resetValue_OID();
    
    virtual String getMSLDistance() const;
    virtual void setMSLDistance(String value);
    virtual bool hasValue_MSLDistance() const;
    virtual void resetValue_MSLDistance();
    
    virtual String getSpherDistance() const;
    virtual void setSpherDistance(String value);
    virtual bool hasValue_SpherDistance() const;
    virtual void resetValue_SpherDistance();
    
    virtual String getAlignRef() const;
    virtual void setAlignRef(String value);
    virtual bool hasValue_AlignRef() const;
    virtual void resetValue_AlignRef();
    
    virtual String getAlignStationName() const;
    virtual void setAlignStationName(String value);
    virtual bool hasValue_AlignStationName() const;
    virtual void resetValue_AlignStationName();
    
    virtual double getAlignOffset() const;
    virtual void setAlignOffset(double value);
    virtual bool hasValue_AlignOffset() const;
    virtual void resetValue_AlignOffset();
    

    virtual Object::ValidityEnum validate(IValidationEventSink *pEventSink) const;

protected:
    TargetPoint *m_TargetPoint;
    OffsetVals *m_OffsetVals;
    FieldNoteCollection *m_FieldNote;
    FeatureCollection *m_Feature;
    EnumPurposeType::Values m_Purpose;
    bool m_bPurpose_valueSet;
    String m_SetupID;
    bool m_bSetupID_valueSet;
    String m_TargetSetupID;
    bool m_bTargetSetupID_valueSet;
    String m_TargetSetup2ID;
    bool m_bTargetSetup2ID_valueSet;
    String m_SetID;
    bool m_bSetID_valueSet;
    double m_TargetHeight;
    bool m_bTargetHeight_valueSet;
    double m_Azimuth;
    bool m_bAzimuth_valueSet;
    double m_HorizDistance;
    bool m_bHorizDistance_valueSet;
    double m_VertDistance;
    bool m_bVertDistance_valueSet;
    double m_HorizAngle;
    bool m_bHorizAngle_valueSet;
    double m_SlopeDistance;
    bool m_bSlopeDistance_valueSet;
    double m_ZenithAngle;
    bool m_bZenithAngle_valueSet;
    String m_EquipmentUsed;
    bool m_bEquipmentUsed_valueSet;
    double m_AzimuthAccuracy;
    bool m_bAzimuthAccuracy_valueSet;
    double m_DistanceAccuracy;
    bool m_bDistanceAccuracy_valueSet;
    double m_AngleAccuracy;
    bool m_bAngleAccuracy_valueSet;
    String m_Date;
    bool m_bDate_valueSet;
    String m_DistanceType;
    bool m_bDistanceType_valueSet;
    String m_AzimuthType;
    bool m_bAzimuthType_valueSet;
    String m_AngleType;
    bool m_bAngleType_valueSet;
    String m_AdoptedAzimuthSurvey;
    bool m_bAdoptedAzimuthSurvey_valueSet;
    String m_AdoptedDistanceSurvey;
    bool m_bAdoptedDistanceSurvey_valueSet;
    String m_AdoptedAngleSurvey;
    bool m_bAdoptedAngleSurvey_valueSet;
    String m_DistanceAccClass;
    bool m_bDistanceAccClass_valueSet;
    String m_AzimuthAccClass;
    bool m_bAzimuthAccClass_valueSet;
    String m_AngleAccClass;
    bool m_bAngleAccClass_valueSet;
    double m_AzimuthAdoptionFactor;
    bool m_bAzimuthAdoptionFactor_valueSet;
    double m_DistanceAdoptionFactor;
    bool m_bDistanceAdoptionFactor_valueSet;
    String m_Name;
    bool m_bName_valueSet;
    String m_Desc;
    bool m_bDesc_valueSet;
    EnumStateType::Values m_State;
    bool m_bState_valueSet;
    String m_OID;
    bool m_bOID_valueSet;
    String m_MSLDistance;
    bool m_bMSLDistance_valueSet;
    String m_SpherDistance;
    bool m_bSpherDistance_valueSet;
    StringCollection *m_CoordGeomRefs;
    String m_AlignRef;
    bool m_bAlignRef_valueSet;
    String m_AlignStationName;
    bool m_bAlignStationName_valueSet;
    double m_AlignOffset;
    bool m_bAlignOffset_valueSet;
};
}; // namespace : LX
#endif
