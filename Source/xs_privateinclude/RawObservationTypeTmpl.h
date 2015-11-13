#if !defined(__RAWOBSERVATIONTYPETMPL_H)
#define __RAWOBSERVATIONTYPETMPL_H

#include "RawObservationType.h"
#include "LXTypesTmpl.h"

namespace LX
{

class TargetPoint;
class OffsetVals;
class FieldNoteCollection;
class FeatureCollection;

// Class : RawObservationType
template<class T>
class RawObservationTypeTmpl : public ObjectTmpl<T>
{

public:
	virtual void toXml (IStream& stream);
public:
	// Constructors
    RawObservationTypeTmpl<T> (DocumentImpl* pDoc);

public:
	// Destructors
    virtual ~RawObservationTypeTmpl ();
public:
	// Collections
    virtual FieldNoteCollection& FieldNote();
    virtual const FieldNoteCollection& FieldNote() const;
    virtual FeatureCollection& Feature();
    virtual const FeatureCollection& Feature() const;

public:
	// Properties
    virtual TargetPoint* getTargetPoint() const;
    virtual void setTargetPoint(TargetPoint* value);

    virtual OffsetVals* getOffsetVals() const;
    virtual void setOffsetVals(OffsetVals* value);

    virtual StringCollection* getCoordGeomRefs() const;
    virtual void setCoordGeomRefs(StringCollection* value);


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
    
    virtual EnumPurposeType::Values getPurpose() const;
    virtual void setPurpose(EnumPurposeType::Values value);
    virtual bool hasValue_Purpose() const;
    virtual void resetValue_Purpose();
    
    virtual double getTargetHeight() const;
    virtual void setTargetHeight(double value);
    virtual bool hasValue_TargetHeight() const;
    virtual void resetValue_TargetHeight();
    
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
    
    virtual double getHorizDistance() const;
    virtual void setHorizDistance(double value);
    virtual bool hasValue_HorizDistance() const;
    virtual void resetValue_HorizDistance();
    
    virtual double getVertDistance() const;
    virtual void setVertDistance(double value);
    virtual bool hasValue_VertDistance() const;
    virtual void resetValue_VertDistance();
    
    virtual double getAzimuth() const;
    virtual void setAzimuth(double value);
    virtual bool hasValue_Azimuth() const;
    virtual void resetValue_Azimuth();
    
    virtual bool getUnused() const;
    virtual void setUnused(bool value);
    virtual bool hasValue_Unused() const;
    virtual void resetValue_Unused();
    
    virtual bool getDirectFace() const;
    virtual void setDirectFace(bool value);
    virtual bool hasValue_DirectFace() const;
    virtual void resetValue_DirectFace();
    
    virtual String getTimeStamp() const;
    virtual void setTimeStamp(String value);
    virtual bool hasValue_TimeStamp() const;
    virtual void resetValue_TimeStamp();
    
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
    
    virtual double getUpperStadia() const;
    virtual void setUpperStadia(double value);
    virtual bool hasValue_UpperStadia() const;
    virtual void resetValue_UpperStadia();
    
    virtual double getRod() const;
    virtual void setRod(double value);
    virtual bool hasValue_Rod() const;
    virtual void resetValue_Rod();
    
    virtual double getLowerStadia() const;
    virtual void setLowerStadia(double value);
    virtual bool hasValue_LowerStadia() const;
    virtual void resetValue_LowerStadia();
    
    virtual double getCirclePositionSet() const;
    virtual void setCirclePositionSet(double value);
    virtual bool hasValue_CirclePositionSet() const;
    virtual void resetValue_CirclePositionSet();
    
    virtual EnumObservationStatusType::Values getStatus() const;
    virtual void setStatus(EnumObservationStatusType::Values value);
    virtual bool hasValue_Status() const;
    virtual void resetValue_Status();
    

    virtual Object::ValidityEnum validate(IValidationEventSink *pEventSink) const;

protected:
    TargetPoint *m_TargetPoint;
    OffsetVals *m_OffsetVals;
    FieldNoteCollection *m_FieldNote;
    FeatureCollection *m_Feature;
    String m_SetupID;
    bool m_bSetupID_valueSet;
    String m_TargetSetupID;
    bool m_bTargetSetupID_valueSet;
    String m_SetID;
    bool m_bSetID_valueSet;
    EnumPurposeType::Values m_Purpose;
    bool m_bPurpose_valueSet;
    double m_TargetHeight;
    bool m_bTargetHeight_valueSet;
    double m_HorizAngle;
    bool m_bHorizAngle_valueSet;
    double m_SlopeDistance;
    bool m_bSlopeDistance_valueSet;
    double m_ZenithAngle;
    bool m_bZenithAngle_valueSet;
    double m_HorizDistance;
    bool m_bHorizDistance_valueSet;
    double m_VertDistance;
    bool m_bVertDistance_valueSet;
    double m_Azimuth;
    bool m_bAzimuth_valueSet;
    bool m_Unused;
    bool m_bUnused_valueSet;
    bool m_DirectFace;
    bool m_bDirectFace_valueSet;
    StringCollection *m_CoordGeomRefs;
    String m_TimeStamp;
    bool m_bTimeStamp_valueSet;
    String m_AlignRef;
    bool m_bAlignRef_valueSet;
    String m_AlignStationName;
    bool m_bAlignStationName_valueSet;
    double m_AlignOffset;
    bool m_bAlignOffset_valueSet;
    double m_UpperStadia;
    bool m_bUpperStadia_valueSet;
    double m_Rod;
    bool m_bRod_valueSet;
    double m_LowerStadia;
    bool m_bLowerStadia_valueSet;
    double m_CirclePositionSet;
    bool m_bCirclePositionSet_valueSet;
    EnumObservationStatusType::Values m_Status;
    bool m_bStatus_valueSet;
};
}; // namespace : LX
#endif
