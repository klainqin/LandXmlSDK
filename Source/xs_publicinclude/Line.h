#if !defined(__LINE_H)
#define __LINE_H

#include "Line.h"
#include "LXTypes.h"

namespace LX
{

class Start;
class End;
class FeatureCollection;

// Class : Line
class Line : public Object
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
    
    virtual End* getEnd() const = 0;
    virtual void setEnd(End* value) = 0;
    
    
    virtual String getDesc() const = 0;
    virtual void setDesc(String value) = 0;
    virtual bool hasValue_Desc() const = 0;
    virtual void resetValue_Desc() = 0;
    
    virtual double getDir() const = 0;
    virtual void setDir(double value) = 0;
    virtual bool hasValue_Dir() const = 0;
    virtual void resetValue_Dir() = 0;
    
    virtual double getLength() const = 0;
    virtual void setLength(double value) = 0;
    virtual bool hasValue_Length() const = 0;
    virtual void resetValue_Length() = 0;
    
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
