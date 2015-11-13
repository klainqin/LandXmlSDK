#if !defined(__POINTRESULTS_H)
#define __POINTRESULTS_H

#include "PointResults.h"
#include "LXTypes.h"

namespace LX
{

class TargetPoint;
class FieldNoteCollection;
class FeatureCollection;

// Class : PointResults
class PointResults : public Object
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
    virtual TargetPoint* getTargetPoint() const = 0;
    virtual void setTargetPoint(TargetPoint* value) = 0;
    
    
    virtual String getSetupID() const = 0;
    virtual void setSetupID(String value) = 0;
    virtual bool hasValue_SetupID() const = 0;
    virtual void resetValue_SetupID() = 0;
    
    virtual String getTargetSetupID() const = 0;
    virtual void setTargetSetupID(String value) = 0;
    virtual bool hasValue_TargetSetupID() const = 0;
    virtual void resetValue_TargetSetupID() = 0;
    
    virtual double getMeanHorizAngle() const = 0;
    virtual void setMeanHorizAngle(double value) = 0;
    virtual bool hasValue_MeanHorizAngle() const = 0;
    virtual void resetValue_MeanHorizAngle() = 0;
    
    virtual double getHorizStdDeviation() const = 0;
    virtual void setHorizStdDeviation(double value) = 0;
    virtual bool hasValue_HorizStdDeviation() const = 0;
    virtual void resetValue_HorizStdDeviation() = 0;
    
    virtual double getMeanzenithAngle() const = 0;
    virtual void setMeanzenithAngle(double value) = 0;
    virtual bool hasValue_MeanzenithAngle() const = 0;
    virtual void resetValue_MeanzenithAngle() = 0;
    
    virtual double getVertStdDeviation() const = 0;
    virtual void setVertStdDeviation(double value) = 0;
    virtual bool hasValue_VertStdDeviation() const = 0;
    virtual void resetValue_VertStdDeviation() = 0;
    
    virtual double getMeanSlopeDistance() const = 0;
    virtual void setMeanSlopeDistance(double value) = 0;
    virtual bool hasValue_MeanSlopeDistance() const = 0;
    virtual void resetValue_MeanSlopeDistance() = 0;
    
    virtual double getSlopeDistanceStdDeviation() const = 0;
    virtual void setSlopeDistanceStdDeviation(double value) = 0;
    virtual bool hasValue_SlopeDistanceStdDeviation() const = 0;
    virtual void resetValue_SlopeDistanceStdDeviation() = 0;
    
    
protected:
};
}; // namespace : LX
#endif
