#if !defined(__ALIGNMENT_H)
#define __ALIGNMENT_H

#include "Alignment.h"
#include "LXTypes.h"

namespace LX
{

class CoordGeom;
class Start;
class AlignPIs;
class Cant;
class CrossSectsCollection;
class StaEquationCollection;
class ProfileCollection;
class SuperelevationCollection;
class FeatureCollection;

// Class : Alignment
class Alignment : public Object
{

public:
	virtual void toXml (IStream& stream) = 0;
public:
	// Collections
    virtual CrossSectsCollection& CrossSects() = 0;
    virtual const CrossSectsCollection& CrossSects() const = 0;
    virtual StaEquationCollection& StaEquation() = 0;
    virtual const StaEquationCollection& StaEquation() const = 0;
    virtual ProfileCollection& Profile() = 0;
    virtual const ProfileCollection& Profile() const = 0;
    virtual SuperelevationCollection& Superelevation() = 0;
    virtual const SuperelevationCollection& Superelevation() const = 0;
    virtual FeatureCollection& Feature() = 0;
    virtual const FeatureCollection& Feature() const = 0;

public:
	// Properties
    virtual CoordGeom* getCoordGeom() const = 0;
    virtual void setCoordGeom(CoordGeom* value) = 0;
    
    virtual Start* getStart() const = 0;
    virtual void setStart(Start* value) = 0;
    
    virtual AlignPIs* getAlignPIs() const = 0;
    virtual void setAlignPIs(AlignPIs* value) = 0;
    
    virtual Cant* getCant() const = 0;
    virtual void setCant(Cant* value) = 0;
    
    
    virtual String getName() const = 0;
    virtual void setName(String value) = 0;
    virtual bool hasValue_Name() const = 0;
    virtual void resetValue_Name() = 0;
    
    virtual double getLength() const = 0;
    virtual void setLength(double value) = 0;
    virtual bool hasValue_Length() const = 0;
    virtual void resetValue_Length() = 0;
    
    virtual double getStaStart() const = 0;
    virtual void setStaStart(double value) = 0;
    virtual bool hasValue_StaStart() const = 0;
    virtual void resetValue_StaStart() = 0;
    
    virtual String getDesc() const = 0;
    virtual void setDesc(String value) = 0;
    virtual bool hasValue_Desc() const = 0;
    virtual void resetValue_Desc() = 0;
    
    virtual String getOID() const = 0;
    virtual void setOID(String value) = 0;
    virtual bool hasValue_OID() const = 0;
    virtual void resetValue_OID() = 0;
    
    virtual EnumStateType::Values getState() const = 0;
    virtual void setState(EnumStateType::Values value) = 0;
    virtual bool hasValue_State() const = 0;
    virtual void resetValue_State() = 0;
    
    
protected:
};
}; // namespace : LX
#endif
