#if !defined(__SURVEY_H)
#define __SURVEY_H

#include "Survey.h"
#include "LXTypes.h"

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
class Survey : public Object
{

public:
	virtual void toXml (IStream& stream) = 0;
public:
	// Collections
    virtual SurveyMonumentCollection& SurveyMonument() = 0;
    virtual const SurveyMonumentCollection& SurveyMonument() const = 0;
    virtual CgPointsCollection& CgPoints() = 0;
    virtual const CgPointsCollection& CgPoints() const = 0;
    virtual InstrumentSetupCollection& InstrumentSetup() = 0;
    virtual const InstrumentSetupCollection& InstrumentSetup() const = 0;
    virtual LaserSetupCollection& LaserSetup() = 0;
    virtual const LaserSetupCollection& LaserSetup() const = 0;
    virtual GPSSetupCollection& GPSSetup() = 0;
    virtual const GPSSetupCollection& GPSSetup() const = 0;
    virtual TargetSetupCollection& TargetSetup() = 0;
    virtual const TargetSetupCollection& TargetSetup() const = 0;
    virtual GPSVectorCollection& GPSVector() = 0;
    virtual const GPSVectorCollection& GPSVector() const = 0;
    virtual GPSPositionCollection& GPSPosition() = 0;
    virtual const GPSPositionCollection& GPSPosition() const = 0;
    virtual ObservationGroupCollection& ObservationGroup() = 0;
    virtual const ObservationGroupCollection& ObservationGroup() const = 0;
    virtual ControlChecksCollection& ControlChecks() = 0;
    virtual const ControlChecksCollection& ControlChecks() const = 0;
    virtual FieldNoteCollection& FieldNote() = 0;
    virtual const FieldNoteCollection& FieldNote() const = 0;
    virtual FeatureCollection& Feature() = 0;
    virtual const FeatureCollection& Feature() const = 0;

public:
	// Properties
    virtual SurveyHeader* getSurveyHeader() const = 0;
    virtual void setSurveyHeader(SurveyHeader* value) = 0;
    
    virtual Equipment* getEquipment() const = 0;
    virtual void setEquipment(Equipment* value) = 0;
    
    
    virtual String getDesc() const = 0;
    virtual void setDesc(String value) = 0;
    virtual bool hasValue_Desc() const = 0;
    virtual void resetValue_Desc() = 0;
    
    virtual String getDate() const = 0;
    virtual void setDate(String value) = 0;
    virtual bool hasValue_Date() const = 0;
    virtual void resetValue_Date() = 0;
    
    virtual String getStartTime() const = 0;
    virtual void setStartTime(String value) = 0;
    virtual bool hasValue_StartTime() const = 0;
    virtual void resetValue_StartTime() = 0;
    
    virtual String getEndTime() const = 0;
    virtual void setEndTime(String value) = 0;
    virtual bool hasValue_EndTime() const = 0;
    virtual void resetValue_EndTime() = 0;
    
    virtual EnumStateType::Values getState() const = 0;
    virtual void setState(EnumStateType::Values value) = 0;
    virtual bool hasValue_State() const = 0;
    virtual void resetValue_State() = 0;
    
    virtual String getHorizontalAccuracy() const = 0;
    virtual void setHorizontalAccuracy(String value) = 0;
    virtual bool hasValue_HorizontalAccuracy() const = 0;
    virtual void resetValue_HorizontalAccuracy() = 0;
    
    virtual String getVerticalAccuracy() const = 0;
    virtual void setVerticalAccuracy(String value) = 0;
    virtual bool hasValue_VerticalAccuracy() const = 0;
    virtual void resetValue_VerticalAccuracy() = 0;
    
    
protected:
};
}; // namespace : LX
#endif
