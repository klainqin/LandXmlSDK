#if !defined(__BACKSIGHT_H)
#define __BACKSIGHT_H

#include "Backsight.h"
#include "LXTypes.h"

namespace LX
{

class BacksightPoint;
class FieldNoteCollection;
class FeatureCollection;

// Class : Backsight
class Backsight : public Object
{

public:
	virtual void toXml (IStream& stream) = 0;
public:
	// Collections
    virtual FieldNoteCollection& FieldNote() = 0;
    virtual const FieldNoteCollection& FieldNote() const = 0;
    virtual FeatureCollection& Feature() = 0;
    virtual const FeatureCollection& Feature() const = 0;

public:
	// Properties
    virtual BacksightPoint* getBacksightPoint() const = 0;
    virtual void setBacksightPoint(BacksightPoint* value) = 0;
    
    
    virtual String getId() const = 0;
    virtual void setId(String value) = 0;
    virtual bool hasValue_Id() const = 0;
    virtual void resetValue_Id() = 0;
    
    virtual double getAzimuth() const = 0;
    virtual void setAzimuth(double value) = 0;
    virtual bool hasValue_Azimuth() const = 0;
    virtual void resetValue_Azimuth() = 0;
    
    virtual double getTargetHeight() const = 0;
    virtual void setTargetHeight(double value) = 0;
    virtual bool hasValue_TargetHeight() const = 0;
    virtual void resetValue_TargetHeight() = 0;
    
    virtual double getCircle() const = 0;
    virtual void setCircle(double value) = 0;
    virtual bool hasValue_Circle() const = 0;
    virtual void resetValue_Circle() = 0;
    
    virtual String getSetupID() const = 0;
    virtual void setSetupID(String value) = 0;
    virtual bool hasValue_SetupID() const = 0;
    virtual void resetValue_SetupID() = 0;
    
    
protected:
};
}; // namespace : LX
#endif
