#if !defined(__OBSERVATIONGROUPTMPL_H)
#define __OBSERVATIONGROUPTMPL_H

#include "ObservationGroup.h"
#include "LXTypesTmpl.h"

namespace LX
{

class Backsight;
class ReducedObservation;
class RawObservationCollection;
class TargetPoint;
class RedHorizontalPosition;
class ReducedArcObservation;
class RedVerticalObservation;
class FieldNoteCollection;
class FeatureCollection;

// Class : ObservationGroup
template<class T>
class ObservationGroupTmpl : public ObjectTmpl<T>
{

public:
	virtual void toXml (IStream& stream);
public:
	// Constructors
    ObservationGroupTmpl<T> (DocumentImpl* pDoc);

public:
	// Destructors
    virtual ~ObservationGroupTmpl ();
public:
	// Collections
    virtual RawObservationCollection& RawObservation();
    virtual const RawObservationCollection& RawObservation() const;
    virtual FieldNoteCollection& FieldNote();
    virtual const FieldNoteCollection& FieldNote() const;
    virtual FeatureCollection& Feature();
    virtual const FeatureCollection& Feature() const;

public:
	// Properties
    virtual Backsight* getBacksight() const;
    virtual void setBacksight(Backsight* value);

    virtual ReducedObservation* getReducedObservation() const;
    virtual void setReducedObservation(ReducedObservation* value);

    virtual TargetPoint* getTargetPoint() const;
    virtual void setTargetPoint(TargetPoint* value);

    virtual RedHorizontalPosition* getRedHorizontalPosition() const;
    virtual void setRedHorizontalPosition(RedHorizontalPosition* value);

    virtual ReducedArcObservation* getReducedArcObservation() const;
    virtual void setReducedArcObservation(ReducedArcObservation* value);

    virtual RedVerticalObservation* getRedVerticalObservation() const;
    virtual void setRedVerticalObservation(RedVerticalObservation* value);

    virtual StringCollection* getCoordGeomRefs() const;
    virtual void setCoordGeomRefs(StringCollection* value);


    virtual String getId() const;
    virtual void setId(String value);
    virtual bool hasValue_Id() const;
    virtual void resetValue_Id();
    
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
    Backsight *m_Backsight;
    ReducedObservation *m_ReducedObservation;
    RawObservationCollection *m_RawObservation;
    TargetPoint *m_TargetPoint;
    RedHorizontalPosition *m_RedHorizontalPosition;
    ReducedArcObservation *m_ReducedArcObservation;
    RedVerticalObservation *m_RedVerticalObservation;
    FieldNoteCollection *m_FieldNote;
    FeatureCollection *m_Feature;
    String m_Id;
    bool m_bId_valueSet;
    EnumPurposeType::Values m_Purpose;
    bool m_bPurpose_valueSet;
    String m_SetupID;
    bool m_bSetupID_valueSet;
    String m_TargetSetupID;
    bool m_bTargetSetupID_valueSet;
    String m_SetID;
    bool m_bSetID_valueSet;
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
