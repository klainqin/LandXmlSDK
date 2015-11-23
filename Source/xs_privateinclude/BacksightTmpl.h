#if !defined(__BACKSIGHTTMPL_H)
#define __BACKSIGHTTMPL_H

#include "Backsight.h"
#include "LXTypesTmpl.h"

namespace LX
{

class BacksightPoint;
class FieldNoteCollection;
class FeatureCollection;

// Class : Backsight
template<class T>
class BacksightTmpl : public ObjectTmpl<T>
{

public:
	virtual void toXml (IStream& stream);
public:
	// Constructors
    BacksightTmpl (DocumentImpl* pDoc);

public:
	// Destructors
    virtual ~BacksightTmpl ();
public:
	// Collections
    virtual FieldNoteCollection& FieldNote();
    virtual const FieldNoteCollection& FieldNote() const;
    virtual FeatureCollection& Feature();
    virtual const FeatureCollection& Feature() const;

public:
	// Properties
    virtual BacksightPoint* getBacksightPoint() const;
    virtual void setBacksightPoint(BacksightPoint* value);


    virtual String getId() const;
    virtual void setId(String value);
    virtual bool hasValue_Id() const;
    virtual void resetValue_Id();
    
    virtual double getAzimuth() const;
    virtual void setAzimuth(double value);
    virtual bool hasValue_Azimuth() const;
    virtual void resetValue_Azimuth();
    
    virtual double getTargetHeight() const;
    virtual void setTargetHeight(double value);
    virtual bool hasValue_TargetHeight() const;
    virtual void resetValue_TargetHeight();
    
    virtual double getCircle() const;
    virtual void setCircle(double value);
    virtual bool hasValue_Circle() const;
    virtual void resetValue_Circle();
    
    virtual String getSetupID() const;
    virtual void setSetupID(String value);
    virtual bool hasValue_SetupID() const;
    virtual void resetValue_SetupID();
    

    virtual Object::ValidityEnum validate(IValidationEventSink *pEventSink) const;

protected:
    BacksightPoint *m_BacksightPoint;
    FieldNoteCollection *m_FieldNote;
    FeatureCollection *m_Feature;
    String m_Id;
    bool m_bId_valueSet;
    double m_Azimuth;
    bool m_bAzimuth_valueSet;
    double m_TargetHeight;
    bool m_bTargetHeight_valueSet;
    double m_Circle;
    bool m_bCircle_valueSet;
    String m_SetupID;
    bool m_bSetupID_valueSet;
};
}; // namespace : LX
#endif
