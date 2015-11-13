#if !defined(__LASERSETUPTMPL_H)
#define __LASERSETUPTMPL_H

#include "LaserSetup.h"
#include "LXTypesTmpl.h"

namespace LX
{

class InstrumentPoint;
class Backsight;
class TargetSetupCollection;
class RawObservation;
class FieldNoteCollection;
class FeatureCollection;

// Class : LaserSetup
template<class T>
class LaserSetupTmpl : public ObjectTmpl<T>
{

public:
	virtual void toXml (IStream& stream);
public:
	// Constructors
    LaserSetupTmpl<T> (DocumentImpl* pDoc);

public:
	// Destructors
    virtual ~LaserSetupTmpl ();
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
    virtual InstrumentPoint* getInstrumentPoint() const;
    virtual void setInstrumentPoint(InstrumentPoint* value);

    virtual Backsight* getBacksight() const;
    virtual void setBacksight(Backsight* value);

    virtual RawObservation* getRawObservation() const;
    virtual void setRawObservation(RawObservation* value);


    virtual String getId() const;
    virtual void setId(String value);
    virtual bool hasValue_Id() const;
    virtual void resetValue_Id();
    
    virtual String getStationName() const;
    virtual void setStationName(String value);
    virtual bool hasValue_StationName() const;
    virtual void resetValue_StationName();
    
    virtual double getInstrumentHeight() const;
    virtual void setInstrumentHeight(double value);
    virtual bool hasValue_InstrumentHeight() const;
    virtual void resetValue_InstrumentHeight();
    
    virtual String getLaserDetailsID() const;
    virtual void setLaserDetailsID(String value);
    virtual bool hasValue_LaserDetailsID() const;
    virtual void resetValue_LaserDetailsID();
    
    virtual double getMagDeclination() const;
    virtual void setMagDeclination(double value);
    virtual bool hasValue_MagDeclination() const;
    virtual void resetValue_MagDeclination();
    

    virtual Object::ValidityEnum validate(IValidationEventSink *pEventSink) const;

protected:
    InstrumentPoint *m_InstrumentPoint;
    Backsight *m_Backsight;
    TargetSetupCollection *m_TargetSetup;
    RawObservation *m_RawObservation;
    FieldNoteCollection *m_FieldNote;
    FeatureCollection *m_Feature;
    String m_Id;
    bool m_bId_valueSet;
    String m_StationName;
    bool m_bStationName_valueSet;
    double m_InstrumentHeight;
    bool m_bInstrumentHeight_valueSet;
    String m_LaserDetailsID;
    bool m_bLaserDetailsID_valueSet;
    double m_MagDeclination;
    bool m_bMagDeclination_valueSet;
};
}; // namespace : LX
#endif
