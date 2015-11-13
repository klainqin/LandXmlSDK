#if !defined(__OUTLET_H)
#define __OUTLET_H

#include "Outlet.h"
#include "LXTypes.h"
#include "PointType3dReq.h"

namespace LX
{


// Class : Outlet
class Outlet : public PointType3dReq
{

public:
	virtual void toXml (IStream& stream) = 0;
public:
	// Collections

public:
	// Properties
    
    virtual String getRefWS() const = 0;
    virtual void setRefWS(String value) = 0;
    virtual bool hasValue_RefWS() const = 0;
    virtual void resetValue_RefWS() = 0;
    
    
protected:
};
}; // namespace : LX
#endif
