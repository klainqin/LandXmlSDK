#if !defined(__OBSERVATIONGROUP_H)
#define __OBSERVATIONGROUP_H

#include "ObservationGroup.h"
#include "LXTypes.h"

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
class ObservationGroup : public Object
{

public:
	virtual void toXml (IStream& stream) = 0;
public:
	// Collections
    virtual RawObservationCollection& RawObservation() = 0;
    virtual const RawObservationCollection& RawObservation() const = 0;
    virtual FieldNoteCollection& FieldNote() = 0;
    virtual const FieldNoteCollection& FieldNote() const = 0;
    virtual FeatureCollection& Feature() = 0;
    virtual const FeatureCollection& Feature() const = 0;

public:
	// Properties
    virtual Backsight* getBacksight() const = 0;
    virtual void setBacksight(Backsight* value) = 0;
    
    virtual ReducedObservation* getReducedObservation() const = 0;
    virtual void setReducedObservation(ReducedObservation* value) = 0;
    
    virtual TargetPoint* getTargetPoint() const = 0;
    virtual void setTargetPoint(TargetPoint* value) = 0;
    
    virtual RedHorizontalPosition* getRedHorizontalPosition() const = 0;
    virtual void setRedHorizontalPosition(RedHorizontalPosition* value) = 0;
    
    virtual ReducedArcObservation* getReducedArcObservation() const = 0;
    virtual void setReducedArcObservation(ReducedArcObservation* value) = 0;
    
    virtual RedVerticalObservation* getRedVerticalObservation() const = 0;
    virtual void setRedVerticalObservation(RedVerticalObservation* value) = 0;
    
    virtual StringCollection* getCoordGeomRefs() const = 0;
    virtual void setCoordGeomRefs(StringCollection* value) = 0;
    
    
    virtual String getId() const = 0;
    virtual void setId(String value) = 0;
    virtual bool hasValue_Id() const = 0;
    virtual void resetValue_Id() = 0;
    
    virtual EnumPurposeType::Values getPurpose() const = 0;
    virtual void setPurpose(EnumPurposeType::Values value) = 0;
    virtual bool hasValue_Purpose() const = 0;
    virtual void resetValue_Purpose() = 0;
    
    virtual String getSetupID() const = 0;
    virtual void setSetupID(String value) = 0;
    virtual bool hasValue_SetupID() const = 0;
    virtual void resetValue_SetupID() = 0;
    
    virtual String getTargetSetupID() const = 0;
    virtual void setTargetSetupID(String value) = 0;
    virtual bool hasValue_TargetSetupID() const = 0;
    virtual void resetValue_TargetSetupID() = 0;
    
    virtual String getSetID() const = 0;
    virtual void setSetID(String value) = 0;
    virtual bool hasValue_SetID() const = 0;
    virtual void resetValue_SetID() = 0;
    
    virtual String getAlignRef() const = 0;
    virtual void setAlignRef(String value) = 0;
    virtual bool hasValue_AlignRef() const = 0;
    virtual void resetValue_AlignRef() = 0;
    
    virtual String getAlignStationName() const = 0;
    virtual void setAlignStationName(String value) = 0;
    virtual bool hasValue_AlignStationName() const = 0;
    virtual void resetValue_AlignStationName() = 0;
    
    virtual double getAlignOffset() const = 0;
    virtual void setAlignOffset(double value) = 0;
    virtual bool hasValue_AlignOffset() const = 0;
    virtual void resetValue_AlignOffset() = 0;
    
    
protected:
};
}; // namespace : LX
#endif
