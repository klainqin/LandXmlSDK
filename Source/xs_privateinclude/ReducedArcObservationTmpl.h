#if !defined(__REDUCEDARCOBSERVATIONTMPL_H)
#define __REDUCEDARCOBSERVATIONTMPL_H

#include "ReducedArcObservation.h"
#include "LXTypesTmpl.h"

namespace LX
{

class TargetPoint;
class OffsetVals;
class FieldNoteCollection;
class FeatureCollection;

// Class : ReducedArcObservation
template<class T>
class ReducedArcObservationTmpl : public ObjectTmpl<T>, public IIdentifiable<String>
{

public:
	virtual void toXml (IStream& stream);
public:
	// Constructors
    ReducedArcObservationTmpl (DocumentImpl* pDoc);

public:
	// Destructors
    virtual ~ReducedArcObservationTmpl ();
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
    
    virtual String getSetID() const;
    virtual void setSetID(String value);
    virtual bool hasValue_SetID() const;
    virtual void resetValue_SetID();
    
    virtual double getChordAzimuth() const;
    virtual void setChordAzimuth(double value);
    virtual bool hasValue_ChordAzimuth() const;
    virtual void resetValue_ChordAzimuth();
    
    virtual double getRadius() const;
    virtual void setRadius(double value);
    virtual bool hasValue_Radius() const;
    virtual void resetValue_Radius();
    
    virtual double getLength() const;
    virtual void setLength(double value);
    virtual bool hasValue_Length() const;
    virtual void resetValue_Length();
    
    virtual EnumClockwise::Values getRot() const;
    virtual void setRot(EnumClockwise::Values value);
    virtual bool hasValue_Rot() const;
    virtual void resetValue_Rot();
    
    virtual String getEquipmentUsed() const;
    virtual void setEquipmentUsed(String value);
    virtual bool hasValue_EquipmentUsed() const;
    virtual void resetValue_EquipmentUsed();
    
    virtual double getArcAzimuthAccuracy() const;
    virtual void setArcAzimuthAccuracy(double value);
    virtual bool hasValue_ArcAzimuthAccuracy() const;
    virtual void resetValue_ArcAzimuthAccuracy();
    
    virtual double getArcLengthAccuracy() const;
    virtual void setArcLengthAccuracy(double value);
    virtual bool hasValue_ArcLengthAccuracy() const;
    virtual void resetValue_ArcLengthAccuracy();
    
    virtual String getDate() const;
    virtual void setDate(String value);
    virtual bool hasValue_Date() const;
    virtual void resetValue_Date();
    
    virtual String getArcType() const;
    virtual void setArcType(String value);
    virtual bool hasValue_ArcType() const;
    virtual void resetValue_ArcType();
    
    virtual String getAdoptedSurvey() const;
    virtual void setAdoptedSurvey(String value);
    virtual bool hasValue_AdoptedSurvey() const;
    virtual void resetValue_AdoptedSurvey();
    
    virtual String getLengthAccClass() const;
    virtual void setLengthAccClass(String value);
    virtual bool hasValue_LengthAccClass() const;
    virtual void resetValue_LengthAccClass();
    
    virtual String getAzimuthAccClass() const;
    virtual void setAzimuthAccClass(String value);
    virtual bool hasValue_AzimuthAccClass() const;
    virtual void resetValue_AzimuthAccClass();
    
    virtual double getAzimuthAdoptionFactor() const;
    virtual void setAzimuthAdoptionFactor(double value);
    virtual bool hasValue_AzimuthAdoptionFactor() const;
    virtual void resetValue_AzimuthAdoptionFactor();
    
    virtual double getLengthAdoptionFactor() const;
    virtual void setLengthAdoptionFactor(double value);
    virtual bool hasValue_LengthAdoptionFactor() const;
    virtual void resetValue_LengthAdoptionFactor();
    
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
    String m_SetID;
    bool m_bSetID_valueSet;
    double m_ChordAzimuth;
    bool m_bChordAzimuth_valueSet;
    double m_Radius;
    bool m_bRadius_valueSet;
    double m_Length;
    bool m_bLength_valueSet;
    EnumClockwise::Values m_Rot;
    bool m_bRot_valueSet;
    String m_EquipmentUsed;
    bool m_bEquipmentUsed_valueSet;
    double m_ArcAzimuthAccuracy;
    bool m_bArcAzimuthAccuracy_valueSet;
    double m_ArcLengthAccuracy;
    bool m_bArcLengthAccuracy_valueSet;
    String m_Date;
    bool m_bDate_valueSet;
    String m_ArcType;
    bool m_bArcType_valueSet;
    String m_AdoptedSurvey;
    bool m_bAdoptedSurvey_valueSet;
    String m_LengthAccClass;
    bool m_bLengthAccClass_valueSet;
    String m_AzimuthAccClass;
    bool m_bAzimuthAccClass_valueSet;
    double m_AzimuthAdoptionFactor;
    bool m_bAzimuthAdoptionFactor_valueSet;
    double m_LengthAdoptionFactor;
    bool m_bLengthAdoptionFactor_valueSet;
    String m_Name;
    bool m_bName_valueSet;
    String m_Desc;
    bool m_bDesc_valueSet;
    EnumStateType::Values m_State;
    bool m_bState_valueSet;
    String m_OID;
    bool m_bOID_valueSet;
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
