#if !defined(__SPIRAL_H)
#define __SPIRAL_H

#include "Spiral.h"
#include "LXTypes.h"

namespace LX
{

class Start;
class POI;
class End;
class FeatureCollection;

// Class : Spiral
class Spiral : public Object
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
    
    virtual POI* getPI() const = 0;
    virtual void setPI(POI* value) = 0;
    
    virtual End* getEnd() const = 0;
    virtual void setEnd(End* value) = 0;
    
    
    virtual double getLength() const = 0;
    virtual void setLength(double value) = 0;
    virtual bool hasValue_Length() const = 0;
    virtual void resetValue_Length() = 0;
    
    virtual double getRadiusEnd() const = 0;
    virtual void setRadiusEnd(double value) = 0;
    virtual bool hasValue_RadiusEnd() const = 0;
    virtual void resetValue_RadiusEnd() = 0;
    
    virtual double getRadiusStart() const = 0;
    virtual void setRadiusStart(double value) = 0;
    virtual bool hasValue_RadiusStart() const = 0;
    virtual void resetValue_RadiusStart() = 0;
    
    virtual EnumClockwise::Values getRot() const = 0;
    virtual void setRot(EnumClockwise::Values value) = 0;
    virtual bool hasValue_Rot() const = 0;
    virtual void resetValue_Rot() = 0;
    
    virtual EnumSpiralType::Values getSpiType() const = 0;
    virtual void setSpiType(EnumSpiralType::Values value) = 0;
    virtual bool hasValue_SpiType() const = 0;
    virtual void resetValue_SpiType() = 0;
    
    virtual double getChord() const = 0;
    virtual void setChord(double value) = 0;
    virtual bool hasValue_Chord() const = 0;
    virtual void resetValue_Chord() = 0;
    
    virtual double getConstant() const = 0;
    virtual void setConstant(double value) = 0;
    virtual bool hasValue_Constant() const = 0;
    virtual void resetValue_Constant() = 0;
    
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
    
    virtual String getName() const = 0;
    virtual void setName(String value) = 0;
    virtual bool hasValue_Name() const = 0;
    virtual void resetValue_Name() = 0;
    
    virtual double getTheta() const = 0;
    virtual void setTheta(double value) = 0;
    virtual bool hasValue_Theta() const = 0;
    virtual void resetValue_Theta() = 0;
    
    virtual double getTotalY() const = 0;
    virtual void setTotalY(double value) = 0;
    virtual bool hasValue_TotalY() const = 0;
    virtual void resetValue_TotalY() = 0;
    
    virtual double getTotalX() const = 0;
    virtual void setTotalX(double value) = 0;
    virtual bool hasValue_TotalX() const = 0;
    virtual void resetValue_TotalX() = 0;
    
    virtual double getStaStart() const = 0;
    virtual void setStaStart(double value) = 0;
    virtual bool hasValue_StaStart() const = 0;
    virtual void resetValue_StaStart() = 0;
    
    virtual EnumStateType::Values getState() const = 0;
    virtual void setState(EnumStateType::Values value) = 0;
    virtual bool hasValue_State() const = 0;
    virtual void resetValue_State() = 0;
    
    virtual double getTanLong() const = 0;
    virtual void setTanLong(double value) = 0;
    virtual bool hasValue_TanLong() const = 0;
    virtual void resetValue_TanLong() = 0;
    
    virtual double getTanShort() const = 0;
    virtual void setTanShort(double value) = 0;
    virtual bool hasValue_TanShort() const = 0;
    virtual void resetValue_TanShort() = 0;
    
    virtual String getOID() const = 0;
    virtual void setOID(String value) = 0;
    virtual bool hasValue_OID() const = 0;
    virtual void resetValue_OID() = 0;
    
    
protected:
};
}; // namespace : LX
#endif
