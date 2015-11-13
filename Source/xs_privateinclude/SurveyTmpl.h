#if !defined(__SURVEYTMPL_H)
#define __SURVEYTMPL_H

#include "Survey.h"
#include "LXTypesTmpl.h"

namespace LX
{

class SurveyHeader;
class Equipment;
class SurveyMonumentCollection;
class CgPointsCollection;
class InstrumentSetupCollection;
class LaserSetupCollection;
class GPSSetupCollection;
class TargetSetupCollection;
class GPSVectorCollection;
class GPSPositionCollection;
class ObservationGroupCollection;
class ControlChecksCollection;
class FieldNoteCollection;
class FeatureCollection;

// Class : Survey
template<class T>
class SurveyTmpl : public ObjectTmpl<T>
{

public:
	virtual void toXml (IStream& stream);
public:
	// Constructors
    SurveyTmpl<T> (DocumentImpl* pDoc);

public:
	// Destructors
    virtual ~SurveyTmpl ();
public:
	// Collections
    virtual SurveyMonumentCollection& SurveyMonument();
    virtual const SurveyMonumentCollection& SurveyMonument() const;
    virtual CgPointsCollection& CgPoints();
    virtual const CgPointsCollection& CgPoints() const;
    virtual InstrumentSetupCollection& InstrumentSetup();
    virtual const InstrumentSetupCollection& InstrumentSetup() const;
    virtual LaserSetupCollection& LaserSetup();
    virtual const LaserSetupCollection& LaserSetup() const;
    virtual GPSSetupCollection& GPSSetup();
    virtual const GPSSetupCollection& GPSSetup() const;
    virtual TargetSetupCollection& TargetSetup();
    virtual const TargetSetupCollection& TargetSetup() const;
    virtual GPSVectorCollection& GPSVector();
    virtual const GPSVectorCollection& GPSVector() const;
    virtual GPSPositionCollection& GPSPosition();
    virtual const GPSPositionCollection& GPSPosition() const;
    virtual ObservationGroupCollection& ObservationGroup();
    virtual const ObservationGroupCollection& ObservationGroup() const;
    virtual ControlChecksCollection& ControlChecks();
    virtual const ControlChecksCollection& ControlChecks() const;
    virtual FieldNoteCollection& FieldNote();
    virtual const FieldNoteCollection& FieldNote() const;
    virtual FeatureCollection& Feature();
    virtual const FeatureCollection& Feature() const;

public:
	// Properties
    virtual SurveyHeader* getSurveyHeader() const;
    virtual void setSurveyHeader(SurveyHeader* value);

    virtual Equipment* getEquipment() const;
    virtual void setEquipment(Equipment* value);


    virtual String getDesc() const;
    virtual void setDesc(String value);
    virtual bool hasValue_Desc() const;
    virtual void resetValue_Desc();
    
    virtual String getDate() const;
    virtual void setDate(String value);
    virtual bool hasValue_Date() const;
    virtual void resetValue_Date();
    
    virtual String getStartTime() const;
    virtual void setStartTime(String value);
    virtual bool hasValue_StartTime() const;
    virtual void resetValue_StartTime();
    
    virtual String getEndTime() const;
    virtual void setEndTime(String value);
    virtual bool hasValue_EndTime() const;
    virtual void resetValue_EndTime();
    
    virtual EnumStateType::Values getState() const;
    virtual void setState(EnumStateType::Values value);
    virtual bool hasValue_State() const;
    virtual void resetValue_State();
    
    virtual String getHorizontalAccuracy() const;
    virtual void setHorizontalAccuracy(String value);
    virtual bool hasValue_HorizontalAccuracy() const;
    virtual void resetValue_HorizontalAccuracy();
    
    virtual String getVerticalAccuracy() const;
    virtual void setVerticalAccuracy(String value);
    virtual bool hasValue_VerticalAccuracy() const;
    virtual void resetValue_VerticalAccuracy();
    

    virtual Object::ValidityEnum validate(IValidationEventSink *pEventSink) const;

protected:
    SurveyHeader *m_SurveyHeader;
    Equipment *m_Equipment;
    SurveyMonumentCollection *m_SurveyMonument;
    CgPointsCollection *m_CgPoints;
    InstrumentSetupCollection *m_InstrumentSetup;
    LaserSetupCollection *m_LaserSetup;
    GPSSetupCollection *m_GPSSetup;
    TargetSetupCollection *m_TargetSetup;
    GPSVectorCollection *m_GPSVector;
    GPSPositionCollection *m_GPSPosition;
    ObservationGroupCollection *m_ObservationGroup;
    ControlChecksCollection *m_ControlChecks;
    FieldNoteCollection *m_FieldNote;
    FeatureCollection *m_Feature;
    String m_Desc;
    bool m_bDesc_valueSet;
    String m_Date;
    bool m_bDate_valueSet;
    String m_StartTime;
    bool m_bStartTime_valueSet;
    String m_EndTime;
    bool m_bEndTime_valueSet;
    EnumStateType::Values m_State;
    bool m_bState_valueSet;
    String m_HorizontalAccuracy;
    bool m_bHorizontalAccuracy_valueSet;
    String m_VerticalAccuracy;
    bool m_bVerticalAccuracy_valueSet;
};
}; // namespace : LX
#endif
