#if !defined(__POINTRESULTSTMPL_H)
#define __POINTRESULTSTMPL_H

#include "PointResults.h"
#include "LXTypesTmpl.h"

namespace LX
{

class TargetPoint;
class FieldNoteCollection;
class FeatureCollection;

// Class : PointResults
template<class T>
class PointResultsTmpl : public ObjectTmpl<T>
{

public:
	virtual void toXml (IStream& stream);
public:
	// Constructors
    PointResultsTmpl (DocumentImpl* pDoc);

public:
	// Destructors
    virtual ~PointResultsTmpl ();
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


    virtual String getSetupID() const;
    virtual void setSetupID(String value);
    virtual bool hasValue_SetupID() const;
    virtual void resetValue_SetupID();
    
    virtual String getTargetSetupID() const;
    virtual void setTargetSetupID(String value);
    virtual bool hasValue_TargetSetupID() const;
    virtual void resetValue_TargetSetupID();
    
    virtual double getMeanHorizAngle() const;
    virtual void setMeanHorizAngle(double value);
    virtual bool hasValue_MeanHorizAngle() const;
    virtual void resetValue_MeanHorizAngle();
    
    virtual double getHorizStdDeviation() const;
    virtual void setHorizStdDeviation(double value);
    virtual bool hasValue_HorizStdDeviation() const;
    virtual void resetValue_HorizStdDeviation();
    
    virtual double getMeanzenithAngle() const;
    virtual void setMeanzenithAngle(double value);
    virtual bool hasValue_MeanzenithAngle() const;
    virtual void resetValue_MeanzenithAngle();
    
    virtual double getVertStdDeviation() const;
    virtual void setVertStdDeviation(double value);
    virtual bool hasValue_VertStdDeviation() const;
    virtual void resetValue_VertStdDeviation();
    
    virtual double getMeanSlopeDistance() const;
    virtual void setMeanSlopeDistance(double value);
    virtual bool hasValue_MeanSlopeDistance() const;
    virtual void resetValue_MeanSlopeDistance();
    
    virtual double getSlopeDistanceStdDeviation() const;
    virtual void setSlopeDistanceStdDeviation(double value);
    virtual bool hasValue_SlopeDistanceStdDeviation() const;
    virtual void resetValue_SlopeDistanceStdDeviation();
    

    virtual Object::ValidityEnum validate(IValidationEventSink *pEventSink) const;

protected:
    TargetPoint *m_TargetPoint;
    FieldNoteCollection *m_FieldNote;
    FeatureCollection *m_Feature;
    String m_SetupID;
    bool m_bSetupID_valueSet;
    String m_TargetSetupID;
    bool m_bTargetSetupID_valueSet;
    double m_MeanHorizAngle;
    bool m_bMeanHorizAngle_valueSet;
    double m_HorizStdDeviation;
    bool m_bHorizStdDeviation_valueSet;
    double m_MeanzenithAngle;
    bool m_bMeanzenithAngle_valueSet;
    double m_VertStdDeviation;
    bool m_bVertStdDeviation_valueSet;
    double m_MeanSlopeDistance;
    bool m_bMeanSlopeDistance_valueSet;
    double m_SlopeDistanceStdDeviation;
    bool m_bSlopeDistanceStdDeviation_valueSet;
};
}; // namespace : LX
#endif
