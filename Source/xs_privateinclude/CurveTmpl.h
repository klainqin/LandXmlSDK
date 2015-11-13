#if !defined(__CURVETMPL_H)
#define __CURVETMPL_H

#include "Curve.h"
#include "LXTypesTmpl.h"

namespace LX
{

class Start;
class Center;
class End;
class POI;
class FeatureCollection;

// Class : Curve
template<class T>
class CurveTmpl : public ObjectTmpl<T>, public IIdentifiable<String>
{

public:
	virtual void toXml (IStream& stream);
public:
	// Constructors
    CurveTmpl<T> (DocumentImpl* pDoc);

public:
	// Destructors
    virtual ~CurveTmpl ();
public:
	// Collections
    virtual FeatureCollection& Feature();
    virtual const FeatureCollection& Feature() const;

    virtual bool getObjectId(const String*& pId) const;
    virtual ValueObject* id () const;
    
public:
	// Properties
    virtual Start* getStart() const;
    virtual void setStart(Start* value);

    virtual Center* getCenter() const;
    virtual void setCenter(Center* value);

    virtual End* getEnd() const;
    virtual void setEnd(End* value);

    virtual POI* getPI() const;
    virtual void setPI(POI* value);


    virtual EnumClockwise::Values getRot() const;
    virtual void setRot(EnumClockwise::Values value);
    virtual bool hasValue_Rot() const;
    virtual void resetValue_Rot();
    
    virtual double getChord() const;
    virtual void setChord(double value);
    virtual bool hasValue_Chord() const;
    virtual void resetValue_Chord();
    
    virtual EnumCurveType::Values getCrvType() const;
    virtual void setCrvType(EnumCurveType::Values value);
    virtual bool hasValue_CrvType() const;
    virtual void resetValue_CrvType();
    
    virtual double getDelta() const;
    virtual void setDelta(double value);
    virtual bool hasValue_Delta() const;
    virtual void resetValue_Delta();
    
    virtual String getDesc() const;
    virtual void setDesc(String value);
    virtual bool hasValue_Desc() const;
    virtual void resetValue_Desc();
    
    virtual double getDirEnd() const;
    virtual void setDirEnd(double value);
    virtual bool hasValue_DirEnd() const;
    virtual void resetValue_DirEnd();
    
    virtual double getDirStart() const;
    virtual void setDirStart(double value);
    virtual bool hasValue_DirStart() const;
    virtual void resetValue_DirStart();
    
    virtual double getExternal() const;
    virtual void setExternal(double value);
    virtual bool hasValue_External() const;
    virtual void resetValue_External();
    
    virtual double getLength() const;
    virtual void setLength(double value);
    virtual bool hasValue_Length() const;
    virtual void resetValue_Length();
    
    virtual double getMidOrd() const;
    virtual void setMidOrd(double value);
    virtual bool hasValue_MidOrd() const;
    virtual void resetValue_MidOrd();
    
    virtual String getName() const;
    virtual void setName(String value);
    virtual bool hasValue_Name() const;
    virtual void resetValue_Name();
    
    virtual double getRadius() const;
    virtual void setRadius(double value);
    virtual bool hasValue_Radius() const;
    virtual void resetValue_Radius();
    
    virtual double getStaStart() const;
    virtual void setStaStart(double value);
    virtual bool hasValue_StaStart() const;
    virtual void resetValue_StaStart();
    
    virtual EnumStateType::Values getState() const;
    virtual void setState(EnumStateType::Values value);
    virtual bool hasValue_State() const;
    virtual void resetValue_State();
    
    virtual double getTangent() const;
    virtual void setTangent(double value);
    virtual bool hasValue_Tangent() const;
    virtual void resetValue_Tangent();
    
    virtual String getOID() const;
    virtual void setOID(String value);
    virtual bool hasValue_OID() const;
    virtual void resetValue_OID();
    
    virtual String getNote() const;
    virtual void setNote(String value);
    virtual bool hasValue_Note() const;
    virtual void resetValue_Note();
    

    virtual Object::ValidityEnum validate(IValidationEventSink *pEventSink) const;

protected:
    Start *m_Start;
    Center *m_Center;
    End *m_End;
    POI *m_PI;
    FeatureCollection *m_Feature;
    EnumClockwise::Values m_Rot;
    bool m_bRot_valueSet;
    double m_Chord;
    bool m_bChord_valueSet;
    EnumCurveType::Values m_CrvType;
    bool m_bCrvType_valueSet;
    double m_Delta;
    bool m_bDelta_valueSet;
    String m_Desc;
    bool m_bDesc_valueSet;
    double m_DirEnd;
    bool m_bDirEnd_valueSet;
    double m_DirStart;
    bool m_bDirStart_valueSet;
    double m_External;
    bool m_bExternal_valueSet;
    double m_Length;
    bool m_bLength_valueSet;
    double m_MidOrd;
    bool m_bMidOrd_valueSet;
    String m_Name;
    bool m_bName_valueSet;
    double m_Radius;
    bool m_bRadius_valueSet;
    double m_StaStart;
    bool m_bStaStart_valueSet;
    EnumStateType::Values m_State;
    bool m_bState_valueSet;
    double m_Tangent;
    bool m_bTangent_valueSet;
    String m_OID;
    bool m_bOID_valueSet;
    String m_Note;
    bool m_bNote_valueSet;
};
}; // namespace : LX
#endif
