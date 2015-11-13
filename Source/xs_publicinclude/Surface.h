#if !defined(__SURFACE_H)
#define __SURFACE_H

#include "Surface.h"
#include "LXTypes.h"

namespace LX
{

class SourceData;
class Definition;
class Watersheds;
class FeatureCollection;

// Class : Surface
class Surface : public Object
{

public:
	virtual void toXml (IStream& stream) = 0;
public:
	// Collections
    virtual FeatureCollection& Feature() = 0;
    virtual const FeatureCollection& Feature() const = 0;

public:
	// Properties
    virtual SourceData* getSourceData() const = 0;
    virtual void setSourceData(SourceData* value) = 0;
    
    virtual Definition* getDefinition() const = 0;
    virtual void setDefinition(Definition* value) = 0;
    
    virtual Watersheds* getWatersheds() const = 0;
    virtual void setWatersheds(Watersheds* value) = 0;
    
    
    virtual String getName() const = 0;
    virtual void setName(String value) = 0;
    virtual bool hasValue_Name() const = 0;
    virtual void resetValue_Name() = 0;
    
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
