#if !defined(__SPIRALTMPL_H)
#define __SPIRALTMPL_H

#include "Spiral.h"
#include "LXTypesTmpl.h"

namespace LX
{

class Start;
class POI;
class End;
class FeatureCollection;

// Class : Spiral
template<class T>
class SpiralTmpl : public ObjectTmpl<T>, public IIdentifiable<String>
{

public:
	virtual void toXml (IStream& stream);
public:
	// Constructors
    SpiralTmpl<T> (DocumentImpl* pDoc);

public:
	// Destructors
    virtual ~SpiralTmpl ();
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

    virtual POI* getPI() const;
    virtual void setPI(POI* value);

    virtual End* getEnd() const;
    virtual void setEnd(End* value);


    virtual double getLength() const;
    virtual void setLength(double value);
    virtual bool hasValue_Length() const;
    virtual void resetValue_Length();
    
    virtual double getRadiusEnd() const;
    virtual void setRadiusEnd(double value);
    virtual bool hasValue_RadiusEnd() const;
    virtual void resetValue_RadiusEnd();
    
    virtual double getRadiusStart() const;
    virtual void setRadiusStart(double value);
    virtual bool hasValue_RadiusStart() const;
    virtual void resetValue_RadiusStart();
    
    virtual EnumClockwise::Values getRot() const;
    virtual void setRot(EnumClockwise::Values value);
    virtual bool hasValue_Rot() const;
    virtual void resetValue_Rot();
    
    virtual EnumSpiralType::Values getSpiType() const;
    virtual void setSpiType(EnumSpiralType::Values value);
    virtual bool hasValue_SpiType() const;
    virtual void resetValue_SpiType();
    
    virtual double getChord() const;
    virtual void setChord(double value);
    virtual bool hasValue_Chord() const;
    virtual void resetValue_Chord();
    
    virtual double getConstant() const;
    virtual void setConstant(double value);
    virtual bool hasValue_Constant() const;
    virtual void resetValue_Constant();
    
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
    
    virtual String getName() const;
    virtual void setName(String value);
    virtual bool hasValue_Name() const;
    virtual void resetValue_Name();
    
    virtual double getTheta() const;
    virtual void setTheta(double value);
    virtual bool hasValue_Theta() const;
    virtual void resetValue_Theta();
    
    virtual double getTotalY() const;
    virtual void setTotalY(double value);
    virtual bool hasValue_TotalY() const;
    virtual void resetValue_TotalY();
    
    virtual double getTotalX() const;
    virtual void setTotalX(double value);
    virtual bool hasValue_TotalX() const;
    virtual void resetValue_TotalX();
    
    virtual double getStaStart() const;
    virtual void setStaStart(double value);
    virtual bool hasValue_StaStart() const;
    virtual void resetValue_StaStart();
    
    virtual EnumStateType::Values getState() const;
    virtual void setState(EnumStateType::Values value);
    virtual bool hasValue_State() const;
    virtual void resetValue_State();
    
    virtual double getTanLong() const;
    virtual void setTanLong(double value);
    virtual bool hasValue_TanLong() const;
    virtual void resetValue_TanLong();
    
    virtual double getTanShort() const;
    virtual void setTanShort(double value);
    virtual bool hasValue_TanShort() const;
    virtual void resetValue_TanShort();
    
    virtual String getOID() const;
    virtual void setOID(String value);
    virtual bool hasValue_OID() const;
    virtual void resetValue_OID();
    

    virtual Object::ValidityEnum validate(IValidationEventSink *pEventSink) const;

protected:
    Start *m_Start;
    POI *m_PI;
    End *m_End;
    FeatureCollection *m_Feature;
    double m_Length;
    bool m_bLength_valueSet;
    double m_RadiusEnd;
    bool m_bRadiusEnd_valueSet;
    double m_RadiusStart;
    bool m_bRadiusStart_valueSet;
    EnumClockwise::Values m_Rot;
    bool m_bRot_valueSet;
    EnumSpiralType::Values m_SpiType;
    bool m_bSpiType_valueSet;
    double m_Chord;
    bool m_bChord_valueSet;
    double m_Constant;
    bool m_bConstant_valueSet;
    String m_Desc;
    bool m_bDesc_valueSet;
    double m_DirEnd;
    bool m_bDirEnd_valueSet;
    double m_DirStart;
    bool m_bDirStart_valueSet;
    String m_Name;
    bool m_bName_valueSet;
    double m_Theta;
    bool m_bTheta_valueSet;
    double m_TotalY;
    bool m_bTotalY_valueSet;
    double m_TotalX;
    bool m_bTotalX_valueSet;
    double m_StaStart;
    bool m_bStaStart_valueSet;
    EnumStateType::Values m_State;
    bool m_bState_valueSet;
    double m_TanLong;
    bool m_bTanLong_valueSet;
    double m_TanShort;
    bool m_bTanShort_valueSet;
    String m_OID;
    bool m_bOID_valueSet;
};
}; // namespace : LX
#endif
