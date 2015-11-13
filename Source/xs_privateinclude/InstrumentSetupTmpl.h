#if !defined(__INSTRUMENTSETUPTMPL_H)
#define __INSTRUMENTSETUPTMPL_H

#include "InstrumentSetup.h"
#include "LXTypesTmpl.h"

namespace LX
{

class InstrumentPoint;
class BacksightCollection;
class TargetSetupCollection;
class RawObservationCollection;
class ObservationGroupCollection;
class ControlChecksCollection;
class FieldNoteCollection;
class FeatureCollection;

// Class : InstrumentSetup
template<class T>
class InstrumentSetupTmpl : public ObjectTmpl<T>
{

public:
	virtual void toXml (IStream& stream);
public:
	// Constructors
    InstrumentSetupTmpl<T> (DocumentImpl* pDoc);

public:
	// Destructors
    virtual ~InstrumentSetupTmpl ();
public:
	// Collections
    virtual BacksightCollection& Backsight();
    virtual const BacksightCollection& Backsight() const;
    virtual TargetSetupCollection& TargetSetup();
    virtual const TargetSetupCollection& TargetSetup() const;
    virtual RawObservationCollection& RawObservation();
    virtual const RawObservationCollection& RawObservation() const;
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
    virtual InstrumentPoint* getInstrumentPoint() const;
    virtual void setInstrumentPoint(InstrumentPoint* value);


    virtual String getId() const;
    virtual void setId(String value);
    virtual bool hasValue_Id() const;
    virtual void resetValue_Id();
    
    virtual String getInstrumentDetailsID() const;
    virtual void setInstrumentDetailsID(String value);
    virtual bool hasValue_InstrumentDetailsID() const;
    virtual void resetValue_InstrumentDetailsID();
    
    virtual String getStationName() const;
    virtual void setStationName(String value);
    virtual bool hasValue_StationName() const;
    virtual void resetValue_StationName();
    
    virtual double getInstrumentHeight() const;
    virtual void setInstrumentHeight(double value);
    virtual bool hasValue_InstrumentHeight() const;
    virtual void resetValue_InstrumentHeight();
    
    virtual double getOrientationAzimuth() const;
    virtual void setOrientationAzimuth(double value);
    virtual bool hasValue_OrientationAzimuth() const;
    virtual void resetValue_OrientationAzimuth();
    
    virtual double getCircleAzimuth() const;
    virtual void setCircleAzimuth(double value);
    virtual bool hasValue_CircleAzimuth() const;
    virtual void resetValue_CircleAzimuth();
    
    virtual EnumObservationStatusType::Values getStatus() const;
    virtual void setStatus(EnumObservationStatusType::Values value);
    virtual bool hasValue_Status() const;
    virtual void resetValue_Status();
    

    virtual Object::ValidityEnum validate(IValidationEventSink *pEventSink) const;

protected:
    InstrumentPoint *m_InstrumentPoint;
    BacksightCollection *m_Backsight;
    TargetSetupCollection *m_TargetSetup;
    RawObservationCollection *m_RawObservation;
    ObservationGroupCollection *m_ObservationGroup;
    ControlChecksCollection *m_ControlChecks;
    FieldNoteCollection *m_FieldNote;
    FeatureCollection *m_Feature;
    String m_Id;
    bool m_bId_valueSet;
    String m_InstrumentDetailsID;
    bool m_bInstrumentDetailsID_valueSet;
    String m_StationName;
    bool m_bStationName_valueSet;
    double m_InstrumentHeight;
    bool m_bInstrumentHeight_valueSet;
    double m_OrientationAzimuth;
    bool m_bOrientationAzimuth_valueSet;
    double m_CircleAzimuth;
    bool m_bCircleAzimuth_valueSet;
    EnumObservationStatusType::Values m_Status;
    bool m_bStatus_valueSet;
};
}; // namespace : LX
#endif
