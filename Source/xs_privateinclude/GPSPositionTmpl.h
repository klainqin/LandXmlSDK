#if !defined(__GPSPOSITIONTMPL_H)
#define __GPSPOSITIONTMPL_H

#include "GPSPosition.h"
#include "LXTypesTmpl.h"

namespace LX
{

class TargetPoint;
class GPSQCInfoLevel1;
class GPSQCInfoLevel2;
class FieldNoteCollection;
class FeatureCollection;

// Class : GPSPosition
template<class T>
class GPSPositionTmpl : public ObjectTmpl<T>
{

public:
	virtual void toXml (IStream& stream);
public:
	// Constructors
    GPSPositionTmpl (DocumentImpl* pDoc);

public:
	// Destructors
    virtual ~GPSPositionTmpl ();
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


    virtual String getSetupID() const;
    virtual void setSetupID(String value);
    virtual bool hasValue_SetupID() const;
    virtual void resetValue_SetupID();
    
    virtual String getSetID() const;
    virtual void setSetID(String value);
    virtual bool hasValue_SetID() const;
    virtual void resetValue_SetID();
    
    virtual double getWgsHeight() const;
    virtual void setWgsHeight(double value);
    virtual bool hasValue_WgsHeight() const;
    virtual void resetValue_WgsHeight();
    
    virtual double getWgsLatitude() const;
    virtual void setWgsLatitude(double value);
    virtual bool hasValue_WgsLatitude() const;
    virtual void resetValue_WgsLatitude();
    
    virtual double getWgsLongitude() const;
    virtual void setWgsLongitude(double value);
    virtual bool hasValue_WgsLongitude() const;
    virtual void resetValue_WgsLongitude();
    
    virtual String getPurpose() const;
    virtual void setPurpose(String value);
    virtual bool hasValue_Purpose() const;
    virtual void resetValue_Purpose();
    
    virtual String getPntRef() const;
    virtual void setPntRef(String value);
    virtual bool hasValue_PntRef() const;
    virtual void resetValue_PntRef();
    

    virtual Object::ValidityEnum validate(IValidationEventSink *pEventSink) const;

protected:
    TargetPoint *m_TargetPoint;
    GPSQCInfoLevel1 *m_GPSQCInfoLevel1;
    GPSQCInfoLevel2 *m_GPSQCInfoLevel2;
    FieldNoteCollection *m_FieldNote;
    FeatureCollection *m_Feature;
    String m_SetupID;
    bool m_bSetupID_valueSet;
    String m_SetID;
    bool m_bSetID_valueSet;
    double m_WgsHeight;
    bool m_bWgsHeight_valueSet;
    double m_WgsLatitude;
    bool m_bWgsLatitude_valueSet;
    double m_WgsLongitude;
    bool m_bWgsLongitude_valueSet;
    String m_Purpose;
    bool m_bPurpose_valueSet;
    StringCollection *m_CoordGeomRefs;
    String m_PntRef;
    bool m_bPntRef_valueSet;
};
}; // namespace : LX
#endif
