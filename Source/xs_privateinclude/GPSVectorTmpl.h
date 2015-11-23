#if !defined(__GPSVECTORTMPL_H)
#define __GPSVECTORTMPL_H

#include "GPSVector.h"
#include "LXTypesTmpl.h"

namespace LX
{

class TargetPoint;
class GPSQCInfoLevel1;
class GPSQCInfoLevel2;
class FieldNoteCollection;
class FeatureCollection;

// Class : GPSVector
template<class T>
class GPSVectorTmpl : public ObjectTmpl<T>
{

public:
	virtual void toXml (IStream& stream);
public:
	// Constructors
    GPSVectorTmpl (DocumentImpl* pDoc);

public:
	// Destructors
    virtual ~GPSVectorTmpl ();
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

    virtual GPSQCInfoLevel1* getGPSQCInfoLevel1() const;
    virtual void setGPSQCInfoLevel1(GPSQCInfoLevel1* value);

    virtual GPSQCInfoLevel2* getGPSQCInfoLevel2() const;
    virtual void setGPSQCInfoLevel2(GPSQCInfoLevel2* value);

    virtual StringCollection* getCoordGeomRefs() const;
    virtual void setCoordGeomRefs(StringCollection* value);


    virtual double getDX() const;
    virtual void setDX(double value);
    virtual bool hasValue_DX() const;
    virtual void resetValue_DX();
    
    virtual double getDY() const;
    virtual void setDY(double value);
    virtual bool hasValue_DY() const;
    virtual void resetValue_DY();
    
    virtual double getDZ() const;
    virtual void setDZ(double value);
    virtual bool hasValue_DZ() const;
    virtual void resetValue_DZ();
    
    virtual String getSetupID_A() const;
    virtual void setSetupID_A(String value);
    virtual bool hasValue_SetupID_A() const;
    virtual void resetValue_SetupID_A();
    
    virtual String getSetupID_B() const;
    virtual void setSetupID_B(String value);
    virtual bool hasValue_SetupID_B() const;
    virtual void resetValue_SetupID_B();
    
    virtual String getStartTime() const;
    virtual void setStartTime(String value);
    virtual bool hasValue_StartTime() const;
    virtual void resetValue_StartTime();
    
    virtual String getEndTime() const;
    virtual void setEndTime(String value);
    virtual bool hasValue_EndTime() const;
    virtual void resetValue_EndTime();
    
    virtual double getHorizontalPrecision() const;
    virtual void setHorizontalPrecision(double value);
    virtual bool hasValue_HorizontalPrecision() const;
    virtual void resetValue_HorizontalPrecision();
    
    virtual double getVerticalPrecision() const;
    virtual void setVerticalPrecision(double value);
    virtual bool hasValue_VerticalPrecision() const;
    virtual void resetValue_VerticalPrecision();
    
    virtual EnumPurposeType::Values getPurpose() const;
    virtual void setPurpose(EnumPurposeType::Values value);
    virtual bool hasValue_Purpose() const;
    virtual void resetValue_Purpose();
    
    virtual String getSetID() const;
    virtual void setSetID(String value);
    virtual bool hasValue_SetID() const;
    virtual void resetValue_SetID();
    
    virtual String getSolutionDataLink() const;
    virtual void setSolutionDataLink(String value);
    virtual bool hasValue_SolutionDataLink() const;
    virtual void resetValue_SolutionDataLink();
    

    virtual Object::ValidityEnum validate(IValidationEventSink *pEventSink) const;

protected:
    TargetPoint *m_TargetPoint;
    GPSQCInfoLevel1 *m_GPSQCInfoLevel1;
    GPSQCInfoLevel2 *m_GPSQCInfoLevel2;
    FieldNoteCollection *m_FieldNote;
    FeatureCollection *m_Feature;
    double m_DX;
    bool m_bDX_valueSet;
    double m_DY;
    bool m_bDY_valueSet;
    double m_DZ;
    bool m_bDZ_valueSet;
    String m_SetupID_A;
    bool m_bSetupID_A_valueSet;
    String m_SetupID_B;
    bool m_bSetupID_B_valueSet;
    String m_StartTime;
    bool m_bStartTime_valueSet;
    String m_EndTime;
    bool m_bEndTime_valueSet;
    double m_HorizontalPrecision;
    bool m_bHorizontalPrecision_valueSet;
    double m_VerticalPrecision;
    bool m_bVerticalPrecision_valueSet;
    EnumPurposeType::Values m_Purpose;
    bool m_bPurpose_valueSet;
    String m_SetID;
    bool m_bSetID_valueSet;
    String m_SolutionDataLink;
    bool m_bSolutionDataLink_valueSet;
    StringCollection *m_CoordGeomRefs;
};
}; // namespace : LX
#endif
