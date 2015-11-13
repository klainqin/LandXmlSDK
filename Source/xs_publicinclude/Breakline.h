#if !defined(__BREAKLINE_H)
#define __BREAKLINE_H

#include "Breakline.h"
#include "LXTypes.h"

namespace LX
{

class FeatureCollection;

// Class : Breakline
class Breakline : public Object
{

public:
	// Classes

public:
	virtual void toXml (IStream& stream) = 0;
public:
	// Collections
    virtual FeatureCollection& Feature() = 0;
    virtual const FeatureCollection& Feature() const = 0;

public:
	// Properties
    virtual Object* getPntList() const = 0;
    virtual void setPntList(Object* value) = 0;
    
    
    virtual EnumBreakLineType::Values getBrkType() const = 0;
    virtual void setBrkType(EnumBreakLineType::Values value) = 0;
    virtual bool hasValue_BrkType() const = 0;
    virtual void resetValue_BrkType() = 0;
    
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
