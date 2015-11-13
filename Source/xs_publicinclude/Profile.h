#if !defined(__PROFILE_H)
#define __PROFILE_H

#include "Profile.h"
#include "LXTypes.h"

namespace LX
{

class ProfSurfCollection;
class ProfAlignCollection;
class FeatureCollection;

// Class : Profile
class Profile : public Object
{

public:
	virtual void toXml (IStream& stream) = 0;
public:
	// Collections
    virtual ProfSurfCollection& ProfSurf() = 0;
    virtual const ProfSurfCollection& ProfSurf() const = 0;
    virtual ProfAlignCollection& ProfAlign() = 0;
    virtual const ProfAlignCollection& ProfAlign() const = 0;
    virtual FeatureCollection& Feature() = 0;
    virtual const FeatureCollection& Feature() const = 0;

public:
	// Properties
    
    virtual String getDesc() const = 0;
    virtual void setDesc(String value) = 0;
    virtual bool hasValue_Desc() const = 0;
    virtual void resetValue_Desc() = 0;
    
    virtual String getName() const = 0;
    virtual void setName(String value) = 0;
    virtual bool hasValue_Name() const = 0;
    virtual void resetValue_Name() = 0;
    
    virtual double getStaStart() const = 0;
    virtual void setStaStart(double value) = 0;
    virtual bool hasValue_StaStart() const = 0;
    virtual void resetValue_StaStart() = 0;
    
    virtual EnumStateType::Values getState() const = 0;
    virtual void setState(EnumStateType::Values value) = 0;
    virtual bool hasValue_State() const = 0;
    virtual void resetValue_State() = 0;
    
    
protected:
};
}; // namespace : LX
#endif
