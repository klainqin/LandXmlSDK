#if !defined(__CURVE_H)
#define __CURVE_H

#include "Curve.h"
#include "LXTypes.h"

namespace LX
{

class Start;
class Center;
class End;
class POI;
class FeatureCollection;

// Class : Curve
class Curve : public Object
{

public:
	virtual void toXml (IStream& stream) = 0;
public:
	// Collections
    virtual FeatureCollection& Feature() = 0;
    virtual const FeatureCollection& Feature() const = 0;

public:
	// Properties
    virtual Start* getStart() const = 0;
    virtual void setStart(Start* value) = 0;
    
    virtual Center* getCenter() const = 0;
    virtual void setCenter(Center* value) = 0;
    
    virtual End* getEnd() const = 0;
    virtual void setEnd(End* value) = 0;
    
    virtual POI* getPI() const = 0;
    virtual void setPI(POI* value) = 0;
    
    
    virtual EnumClockwise::Values getRot() const = 0;
    virtual void setRot(EnumClockwise::Values value) = 0;
    virtual bool hasValue_Rot() const = 0;
    virtual void resetValue_Rot() = 0;
    
    virtual double getChord() const = 0;
    virtual void setChord(double value) = 0;
    virtual bool hasValue_Chord() const = 0;
    virtual void resetValue_Chord() = 0;
    
    virtual EnumCurveType::Values getCrvType() const = 0;
    virtual void setCrvType(EnumCurveType::Values value) = 0;
    virtual bool hasValue_CrvType() const = 0;
    virtual void resetValue_CrvType() = 0;
    
    virtual double getDelta() const = 0;
    virtual void setDelta(double value) = 0;
    virtual bool hasValue_Delta() const = 0;
    virtual void resetValue_Delta() = 0;
    
    virtual String getDesc() const = 0;
    virtual void setDesc(String value) = 0;
    virtual bool hasValue_Desc() const = 0;
    virtual void resetValue_Desc() = 0;
    
    virtual double getDirEnd() const = 0;
    virtual void setDirEnd(double value) = 0;
    virtual bool hasValue_DirEnd() const = 0;
    virtual void resetValue_DirEnd() = 0;
    
    virtual double getDirStart() const = 0;
    virtual void setDirStart(double value) = 0;
    virtual bool hasValue_DirStart() const = 0;
    virtual void resetValue_DirStart() = 0;
    
    virtual double getExternal() const = 0;
    virtual void setExternal(double value) = 0;
    virtual bool hasValue_External() const = 0;
    virtual void resetValue_External() = 0;
    
    virtual double getLength() const = 0;
    virtual void setLength(double value) = 0;
    virtual bool hasValue_Length() const = 0;
    virtual void resetValue_Length() = 0;
    
    virtual double getMidOrd() const = 0;
    virtual void setMidOrd(double value) = 0;
    virtual bool hasValue_MidOrd() const = 0;
    virtual void resetValue_MidOrd() = 0;
    
    virtual String getName() const = 0;
    virtual void setName(String value) = 0;
    virtual bool hasValue_Name() const = 0;
    virtual void resetValue_Name() = 0;
    
    virtual double getRadius() const = 0;
    virtual void setRadius(double value) = 0;
    virtual bool hasValue_Radius() const = 0;
    virtual void resetValue_Radius() = 0;
    
    virtual double getStaStart() const = 0;
    virtual void setStaStart(double value) = 0;
    virtual bool hasValue_StaStart() const = 0;
    virtual void resetValue_StaStart() = 0;
    
    virtual EnumStateType::Values getState() const = 0;
    virtual void setState(EnumStateType::Values value) = 0;
    virtual bool hasValue_State() const = 0;
    virtual void resetValue_State() = 0;
    
    virtual double getTangent() const = 0;
    virtual void setTangent(double value) = 0;
    virtual bool hasValue_Tangent() const = 0;
    virtual void resetValue_Tangent() = 0;
    
    virtual String getOID() const = 0;
    virtual void setOID(String value) = 0;
    virtual bool hasValue_OID() const = 0;
    virtual void resetValue_OID() = 0;
    
    virtual String getNote() const = 0;
    virtual void setNote(String value) = 0;
    virtual bool hasValue_Note() const = 0;
    virtual void resetValue_Note() = 0;
    
    
protected:
};
}; // namespace : LX
#endif
