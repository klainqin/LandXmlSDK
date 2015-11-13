#if !defined(__GPSSETUPTMPL_H)
#define __GPSSETUPTMPL_H

#include "GPSSetup.h"
#include "LXTypesTmpl.h"

namespace LX
{

class GPSPosition;
class TargetSetupCollection;
class FieldNoteCollection;
class FeatureCollection;

// Class : GPSSetup
template<class T>
class GPSSetupTmpl : public ObjectTmpl<T>
{

public:
	virtual void toXml (IStream& stream);
public:
	// Constructors
    GPSSetupTmpl<T> (DocumentImpl* pDoc);

public:
	// Destructors
    virtual ~GPSSetupTmpl ();
public:
	// Collections
    virtual TargetSetupCollection& TargetSetup();
    virtual const TargetSetupCollection& TargetSetup() const;
    virtual FieldNoteCollection& FieldNote();
    virtual const FieldNoteCollection& FieldNote() const;
    virtual FeatureCollection& Feature();
    virtual const FeatureCollection& Feature() const;

public:
	// Properties
    virtual GPSPosition* getGPSPosition() const;
    virtual void setGPSPosition(GPSPosition* value);


    virtual String getId() const;
    virtual void setId(String value);
    virtual bool hasValue_Id() const;
    virtual void resetValue_Id();
    
    virtual double getAntennaHeight() const;
    virtual void setAntennaHeight(double value);
    virtual bool hasValue_AntennaHeight() const;
    virtual void resetValue_AntennaHeight();
    
    virtual String getStationName() const;
    virtual void setStationName(String value);
    virtual bool hasValue_StationName() const;
    virtual void resetValue_StationName();
    
    virtual String getGPSAntennaDetailsID() const;
    virtual void setGPSAntennaDetailsID(String value);
    virtual bool hasValue_GPSAntennaDetailsID() const;
    virtual void resetValue_GPSAntennaDetailsID();
    
    virtual String getGPSReceiverDetailsID() const;
    virtual void setGPSReceiverDetailsID(String value);
    virtual bool hasValue_GPSReceiverDetailsID() const;
    virtual void resetValue_GPSReceiverDetailsID();
    
    virtual String getObservationDataLink() const;
    virtual void setObservationDataLink(String value);
    virtual bool hasValue_ObservationDataLink() const;
    virtual void resetValue_ObservationDataLink();
    
    virtual String getStationDescription() const;
    virtual void setStationDescription(String value);
    virtual bool hasValue_StationDescription() const;
    virtual void resetValue_StationDescription();
    
    virtual double getStartTime() const;
    virtual void setStartTime(double value);
    virtual bool hasValue_StartTime() const;
    virtual void resetValue_StartTime();
    
    virtual double getStopTime() const;
    virtual void setStopTime(double value);
    virtual bool hasValue_StopTime() const;
    virtual void resetValue_StopTime();
    

    virtual Object::ValidityEnum validate(IValidationEventSink *pEventSink) const;

protected:
    GPSPosition *m_GPSPosition;
    TargetSetupCollection *m_TargetSetup;
    FieldNoteCollection *m_FieldNote;
    FeatureCollection *m_Feature;
    String m_Id;
    bool m_bId_valueSet;
    double m_AntennaHeight;
    bool m_bAntennaHeight_valueSet;
    String m_StationName;
    bool m_bStationName_valueSet;
    String m_GPSAntennaDetailsID;
    bool m_bGPSAntennaDetailsID_valueSet;
    String m_GPSReceiverDetailsID;
    bool m_bGPSReceiverDetailsID_valueSet;
    String m_ObservationDataLink;
    bool m_bObservationDataLink_valueSet;
    String m_StationDescription;
    bool m_bStationDescription_valueSet;
    double m_StartTime;
    bool m_bStartTime_valueSet;
    double m_StopTime;
    bool m_bStopTime_valueSet;
};
}; // namespace : LX
#endif
