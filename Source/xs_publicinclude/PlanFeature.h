#if !defined(__PLANFEATURE_H)
#define __PLANFEATURE_H

#include "PlanFeature.h"
#include "LXTypes.h"

namespace LX
{

class CoordGeom;
class LocationCollection;
class FieldNoteCollection;
class FeatureCollection;

// Class : PlanFeature
class PlanFeature : public Object
{

public:
	virtual void toXml (IStream& stream) = 0;
public:
	// Collections
    virtual LocationCollection& Location() = 0;
    virtual const LocationCollection& Location() const = 0;
    virtual FieldNoteCollection& FieldNote() = 0;
    virtual const FieldNoteCollection& FieldNote() const = 0;
    virtual FeatureCollection& Feature() = 0;
    virtual const FeatureCollection& Feature() const = 0;

public:
	// Properties
    virtual CoordGeom* getCoordGeom() const = 0;
    virtual void setCoordGeom(CoordGeom* value) = 0;
    
    
    virtual String getDesc() const = 0;
    virtual void setDesc(String value) = 0;
    virtual bool hasValue_Desc() const = 0;
    virtual void resetValue_Desc() = 0;
    
    virtual String getName() const = 0;
    virtual void setName(String value) = 0;
    virtual bool hasValue_Name() const = 0;
    virtual void resetValue_Name() = 0;
    
    virtual EnumStateType::Values getState() const = 0;
    virtual void setState(EnumStateType::Values value) = 0;
    virtual bool hasValue_State() const = 0;
    virtual void resetValue_State() = 0;
    
    
protected:
};
}; // namespace : LX
#endif
