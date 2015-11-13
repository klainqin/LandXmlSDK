#if !defined(__PROFSURF_H)
#define __PROFSURF_H

#include "ProfSurf.h"
#include "LXTypes.h"

namespace LX
{

class PntList2DCollection;
class FeatureCollection;

// Class : ProfSurf
class ProfSurf : public Object
{

public:
	virtual void toXml (IStream& stream) = 0;
public:
	// Collections
    virtual PntList2DCollection& PntList2D() = 0;
    virtual const PntList2DCollection& PntList2D() const = 0;
    virtual FeatureCollection& Feature() = 0;
    virtual const FeatureCollection& Feature() const = 0;

public:
	// Properties
    
    virtual String getName() const = 0;
    virtual void setName(String value) = 0;
    virtual bool hasValue_Name() const = 0;
    virtual void resetValue_Name() = 0;
    
    virtual String getDesc() const = 0;
    virtual void setDesc(String value) = 0;
    virtual bool hasValue_Desc() const = 0;
    virtual void resetValue_Desc() = 0;
    
    virtual EnumStateType::Values getState() const = 0;
    virtual void setState(EnumStateType::Values value) = 0;
    virtual bool hasValue_State() const = 0;
    virtual void resetValue_State() = 0;
    
    
protected:
};
}; // namespace : LX
#endif
