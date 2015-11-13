#if !defined(__PIPENETWORK_H)
#define __PIPENETWORK_H

#include "PipeNetwork.h"
#include "LXTypes.h"

namespace LX
{

class Structs;
class Pipes;
class FeatureCollection;

// Class : PipeNetwork
class PipeNetwork : public Object
{

public:
	virtual void toXml (IStream& stream) = 0;
public:
	// Collections
    virtual FeatureCollection& Feature() = 0;
    virtual const FeatureCollection& Feature() const = 0;

public:
	// Properties
    virtual Structs* getStructs() const = 0;
    virtual void setStructs(Structs* value) = 0;
    
    virtual Pipes* getPipes() const = 0;
    virtual void setPipes(Pipes* value) = 0;
    
    
    virtual String getName() const = 0;
    virtual void setName(String value) = 0;
    virtual bool hasValue_Name() const = 0;
    virtual void resetValue_Name() = 0;
    
    virtual EnumPipeNetworkType::Values getPipeNetType() const = 0;
    virtual void setPipeNetType(EnumPipeNetworkType::Values value) = 0;
    virtual bool hasValue_PipeNetType() const = 0;
    virtual void resetValue_PipeNetType() = 0;
    
    virtual String getAlignmentRef() const = 0;
    virtual void setAlignmentRef(String value) = 0;
    virtual bool hasValue_AlignmentRef() const = 0;
    virtual void resetValue_AlignmentRef() = 0;
    
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
